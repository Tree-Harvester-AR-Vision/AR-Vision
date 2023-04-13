﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.Byte>
struct UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Unity.Networking.Transport.INetworkInterface
struct INetworkInterface_tF8AD6FEF3DE45849521F3435AE8E07CCFDCFFBB1;
// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData
struct UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.TLS.LowLevel.Binding/unitytls_client
struct unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80;
// Unity.TLS.LowLevel.Binding/unitytls_client_config
struct unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F;
// Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback
struct unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637;
// Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback
struct unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D;
// Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate
struct ComputePacketOverheadDelegate_tFF6AB7CC7E33391F1CF729C3FC4C5DF1D47CA9C7;
// Unity.Networking.Transport.NetworkProtocol/ConnectDelegate
struct ConnectDelegate_tF0F993B09F4013E6F8765D173E20519526B78613;
// Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate
struct DisconnectDelegate_tEF9FFFB31023D3A29E0A1FA73D4F830B0E799A14;
// Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate
struct ProcessReceiveDelegate_tC13DF5985CEFE17FBFF48B30FECDD7C4470A83C4;
// Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate
struct ProcessSendConnectionAcceptDelegate_t69D4C0B8BE8F81AFC1A4A2F0A4EF5540B3003CAF;
// Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate
struct ProcessSendDelegate_t13BEFEE10F53345833169A7C7AF11F3B3EB2DA11;
// Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate
struct ProcessSendPingDelegate_t152699432B5574DC4245F79AD09F4AAC5038FD2B;
// Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate
struct ProcessSendPongDelegate_t10EC1FA49739F7F923218C56A0FCBB3A2E99CE49;
// Unity.Networking.Transport.NetworkProtocol/UpdateDelegate
struct UpdateDelegate_t848AE3DE157F214CEF33820CF17818729BACFFCD;
// Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate
struct AbortSendMessageDelegate_t6FBF6C859A8E442AC6D2CC1FEF00CD4D9815FB0D;
// Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate
struct BeginSendMessageDelegate_t55D0469152EC11CCF544924363F1C12F13CF2FE1;
// Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate
struct EndSendMessageDelegate_tCA4D3D136AE26FE2B671C22F4765E9B2C28025ED;

IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComputePacketOverheadDelegate_tFF6AB7CC7E33391F1CF729C3FC4C5DF1D47CA9C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectDelegate_tF0F993B09F4013E6F8765D173E20519526B78613_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisconnectDelegate_tEF9FFFB31023D3A29E0A1FA73D4F830B0E799A14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INetworkInterface_tF8AD6FEF3DE45849521F3435AE8E07CCFDCFFBB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProcessReceiveDelegate_tC13DF5985CEFE17FBFF48B30FECDD7C4470A83C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProcessSendConnectionAcceptDelegate_t69D4C0B8BE8F81AFC1A4A2F0A4EF5540B3003CAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProcessSendDelegate_t13BEFEE10F53345833169A7C7AF11F3B3EB2DA11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProcessSendPingDelegate_t152699432B5574DC4245F79AD09F4AAC5038FD2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProcessSendPongDelegate_t10EC1FA49739F7F923218C56A0FCBB3A2E99CE49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UpdateDelegate_t848AE3DE157F214CEF33820CF17818729BACFFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00AA18F32EB3BC84C0946FC58668DDCA73648A1C;
IL2CPP_EXTERN_C String_t* _stringLiteral09E6FDC5E9C59731315331FD0C8E854012398FC5;
IL2CPP_EXTERN_C String_t* _stringLiteral0B78DCE9FC648FDDEA9A82099B338C563041CBD5;
IL2CPP_EXTERN_C String_t* _stringLiteral0F5D2FDC76F491140BD2B8AB6F57479EC23D81DF;
IL2CPP_EXTERN_C String_t* _stringLiteral10E84E98D744C26133C132C937EADCB43F4FB398;
IL2CPP_EXTERN_C String_t* _stringLiteral12869590008F9E98F38220AEFA20CD0DD2FDD039;
IL2CPP_EXTERN_C String_t* _stringLiteral12BB8CCEC19A0197A665CCAC382500079592FA23;
IL2CPP_EXTERN_C String_t* _stringLiteral15731A1E06B7C86499C0009DA7A8F67F97266BAE;
IL2CPP_EXTERN_C String_t* _stringLiteral24A0CACB21015FAA463E07EB78B7EDCDFC64A265;
IL2CPP_EXTERN_C String_t* _stringLiteral2B94E8C31FB4C1691D0A4BACF5EC9BA99D534BA5;
IL2CPP_EXTERN_C String_t* _stringLiteral306123149FDB6460DB923B080E134FA6CDCF748B;
IL2CPP_EXTERN_C String_t* _stringLiteral32637BB6E33DC700394FE380D62321C6F5ABF26F;
IL2CPP_EXTERN_C String_t* _stringLiteral3923B197E2543D7500C40D6B136438D9FFF7410A;
IL2CPP_EXTERN_C String_t* _stringLiteral3A35BA86ED5D68F83A947957F374F21F4B7BABFD;
IL2CPP_EXTERN_C String_t* _stringLiteral4B84F153196C1C9680F8F28196651975E192D9C5;
IL2CPP_EXTERN_C String_t* _stringLiteral627166C3984891FD79CBB5C99BB57C0976E415DB;
IL2CPP_EXTERN_C String_t* _stringLiteral6846726A783CA92C155937A094A4A92AF1B1F1D4;
IL2CPP_EXTERN_C String_t* _stringLiteral6B4BAA2C7AF6BFDCEF47AC8CCA3B374281428B0C;
IL2CPP_EXTERN_C String_t* _stringLiteral72078CA379BFF112FEA07E0A4B6B0DA1E9202CB2;
IL2CPP_EXTERN_C String_t* _stringLiteral7409A26ED449DE17C3414DC894FDD7C65BE6756F;
IL2CPP_EXTERN_C String_t* _stringLiteral7AC013E5710738AB162F5E4C7AFC454C21DDEF2F;
IL2CPP_EXTERN_C String_t* _stringLiteral7D5111D0655228607DFF1C4E449A4247662E2413;
IL2CPP_EXTERN_C String_t* _stringLiteral7DF2E672D96F651796627469CCE881D10B63F11E;
IL2CPP_EXTERN_C String_t* _stringLiteral841CC2C16CF6FF25C799C414002A52BD5E0E4A21;
IL2CPP_EXTERN_C String_t* _stringLiteral848CFA7A063E623491A0FA427C59208BA699C520;
IL2CPP_EXTERN_C String_t* _stringLiteral878C6FEE1AB936EED78BB4E259E7F67B4D8D9E38;
IL2CPP_EXTERN_C String_t* _stringLiteral87C590EDF60CC15EA7DCF5E869D4A9F2B9E06870;
IL2CPP_EXTERN_C String_t* _stringLiteral90B3881B9F20E8C67A696C54DDC45E0822E68FFB;
IL2CPP_EXTERN_C String_t* _stringLiteral946EBBEF39FE8ACA7A5A3B7C38586A606D325445;
IL2CPP_EXTERN_C String_t* _stringLiteral9470A01E1BA5F357A491D9D6EE453A71DCB6880F;
IL2CPP_EXTERN_C String_t* _stringLiteral9B3B46549FFE995F026B25C55B1EF47FD0363794;
IL2CPP_EXTERN_C String_t* _stringLiteral9DC6B64F9D0A542576B62FC5F44BEA41A5B44C55;
IL2CPP_EXTERN_C String_t* _stringLiteralA5AD2CAF646824673D1C32E4BF28A1CE3DCC0B6B;
IL2CPP_EXTERN_C String_t* _stringLiteralA8E686843F0158137A6BFD075088F9131ECF5115;
IL2CPP_EXTERN_C String_t* _stringLiteralA9F5008AA90307FD7521614307E34133396662CA;
IL2CPP_EXTERN_C String_t* _stringLiteralC14A356642F38B11AD09FBB96703606569A97ECB;
IL2CPP_EXTERN_C String_t* _stringLiteralCAB4A74374277C4E346DF3DF02B2A80F8A9EFD21;
IL2CPP_EXTERN_C String_t* _stringLiteralD46F14184980FD768C72EDABAD9D15C6D34B1045;
IL2CPP_EXTERN_C String_t* _stringLiteralDDF0D21E4FC23BF065102DA0D2D2B80F0258F71B;
IL2CPP_EXTERN_C String_t* _stringLiteralF1298C5028F2B72FF3A9903D9F47C44DDE92AF98;
IL2CPP_EXTERN_C const RuntimeMethod* FunctionPointer_1__ctor_m2C14C57FBCC0E5F421D2075EF65CAC85951F0E84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FunctionPointer_1__ctor_m5CC710D14C71364457A98C2B92699248FE30D51B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FunctionPointer_1_get_Invoke_mB99A6DFFF953B5843576414230D5153BAD08925B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FunctionPointer_1_get_Invoke_mFEE8AD2F13BFB25522EFCA2233290EF5A4BBCE32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FunctionPointer_1_get_Value_m5016AF7AD65D91AA6D0456BEB6ED3A9D3AD8B9A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FunctionPointer_1_get_Value_mD9253C9B8BD4ED226D78C76033424F14A1BFC366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ManagedSecureFunctions_SecureDataReceiveCallback_mEFC143BA88C57BBAD38EB40927FEB51F850D447B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ManagedSecureFunctions_SecureDataSendCallback_m9194B5EB17E62D9763907E987D0A384802C89722_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetFunctionPointerForDelegate_Tisunitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637_mA2BE3117B02AF1D3E4BB983A8D37AD4231457CD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetFunctionPointerForDelegate_Tisunitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D_mA730202CAC3AA87076B60876B5D250C8D711A231_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mDDF671931CE60775804BC5073A9296DD06BD335F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkSettings_TryGet_TisParameters_t59B022551E59FBC1EA11D32A22CF7C3457682BAE_mC5258ABE8D7C61CFE499332D7AEBE17451C38BA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkSettings_TryGet_TisParameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0_m25BF9D875AB182834BBE5DD10FB021D046288E5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkSettings_TryGet_TisParameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5_m1265A0047017C7EE05689AA051CCD6EC15B4A67F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkSettings_TryGet_TisRelayNetworkParameter_tE48AD3A6F0F2548B9929FE896969232D10FBC4B8_m2915D2DF811C81800CA3F27275A5D1F1C6FB371C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkSettings_TryGet_TisSecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97_mB2F1591010C6E88F9124C708EFF49FE9FF190D45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RelayNetworkProtocol_ComputePacketOverhead_m4E78C92092C1484F2CB95DD10DE9AA4E2911B5F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RelayNetworkProtocol_Connect_mF79B494839F2860E97A8001403E8E7B2F2D0BFFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RelayNetworkProtocol_Disconnect_m2B817AF28256EEE336098E3654EE115825D9C766_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RelayNetworkProtocol_ProcessReceive_m31C9840BD1234A5598DAF1D57D750A6A79849765_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RelayNetworkProtocol_ProcessSendConnectionAccept_mB019F49554DCD5FB156369B699D405AD567FA9AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RelayNetworkProtocol_ProcessSendPing_m7CE90FC0007C848A69176703204B0EA13B7BE9ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RelayNetworkProtocol_ProcessSendPong_m0F98CD0FC19258C75C3DDA67D78E324C032AF6DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RelayNetworkProtocol_ProcessSend_m7575ABC041AB3CEF12A17815D0870773958B412C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RelayNetworkProtocol_Update_m7A9E599807DE1BFFB74A44187363C8C6FA39B443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RelayParameterExtensions_GetRelayParameters_m311AF739522A233FEEEED2CD79ECFEA9C4FA36D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReliableUtility_AlignedSizeOf_TisContext_t99C75CF38B33BF89D1AF089C3466321489BEA99A_m7B68590F46CFFDE67D46991BA2B5EBB1C0AACF14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReliableUtility_AlignedSizeOf_TisPacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2_mD6EDD07DCBAB2FCA68CA5BB60625D06BD7D7F19E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReliableUtility_AlignedSizeOf_TisPacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4_m9785E521127021B2207B6EF5E4B37CA3B3C2C617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReliableUtility_AlignedSizeOf_TisSharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0_mD98E333F02D354D9F0A02FA0C35C05AEE9B87739_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SecureNetworkProtocol_ComputePacketOverhead_m23FF3AD571738B5BBBC31F0DC7A1BADFB3C4B12A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SecureNetworkProtocol_Connect_mAE3ED3A9FBA3023E1E50467AD4BF826ED89ADFFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SecureNetworkProtocol_Disconnect_m73A4699BBAFB93E2FEF31C3F4F6F406E19C66B53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SecureNetworkProtocol_ProcessReceive_m31DC346544D8BEACDEF4858B7B7E8051DC870067_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SecureNetworkProtocol_ProcessSendConnectionAccept_m6E2E06B210D208CE575A32F53B49199A9ED0EEB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SecureNetworkProtocol_ProcessSendPing_m2CD7DA3B44CD99AB7E16C101FB83912649196F18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SecureNetworkProtocol_ProcessSendPong_m8D7736A3DAE23BE23205ECA0E5EFFFB2BA3B1AB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SecureNetworkProtocol_ProcessSend_m953E726B286E1FF9FB1836FB4897A8357A558987_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SecureNetworkProtocol_Update_m40062B33F2208A000DB3ACE25B599336414CE9A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SecureParameterExtensions_GetSecureParameters_mDA8792BF305FD4821DAFF2E9A01582078B58B7EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SharedStatic_1_GetOrCreate_TisFunctionPointer_1_tA2FC39F25D07D293D943EDC747A8E0E7A70BDFC6_TisManagedSecureFunctionsKey_t773373200D4DB2198DD729D87E4AC96A78F446FC_m5E0058FDCCE914CC7CE32A61B6FC4A3A49357B8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SharedStatic_1_GetOrCreate_TisFunctionPointer_1_tF917A6CBC8E241E4F555974CCF4507F08B71041A_TisManagedSecureFunctionsKey_t773373200D4DB2198DD729D87E4AC96A78F446FC_m4092AADF42DD27A470A1E23E08BE285D5633866B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SharedStatic_1_get_Data_m0E24869D29188E83B6F4BF368F46108CFB1B6FB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SharedStatic_1_get_Data_m42E67BC10BCF19DA2EF4E13CEFBA6D7E4228F91C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransportFunctionPointer_1__ctor_m0CF0EB42CBD6B29DBC6A68F45E303B0996D7D22D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransportFunctionPointer_1__ctor_m39D9CD4BCB4ED59BD85E320FF4EE2208AC5B7882_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransportFunctionPointer_1__ctor_m3E02B7E6A2635CD893E5D1C86CC9176D982BC3D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransportFunctionPointer_1__ctor_m5D145E90EC40CE16611DF7593398529E85263C56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransportFunctionPointer_1__ctor_m6C20ABFA8FDDFF6594D8ED81DD9E8A1ADD5A105C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransportFunctionPointer_1__ctor_m857908203463C9FB5C58EA05FE3415FCA9309886_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransportFunctionPointer_1__ctor_m99B3F3334311C659D1A30A1A1DD501A278504B62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransportFunctionPointer_1__ctor_mB4B753786975770CB3F5DDC734BB2DBAE1781673_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransportFunctionPointer_1__ctor_mBCE476BB901D7124332E857E414D21674E44764D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeHashMap_2_GetKeyArray_m5F34C4DF59F343A77EBFAD1EF1667A43A38781C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeHashMap_2_Remove_m94BE3198B3A3508CB109FAC4EE568ED86407F71B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeHashMap_2_TryAdd_mB425A45433A55B799577F14EFBE7C7379D37CF2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeHashMap_2__ctor_m31E886D42092D529AC55246DA8F9E37C4A485613_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeHashMap_2_set_Item_mA9D2E832C60A25C9C7F70B3F329AC7BF45D01288_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_AlignOf_TisRelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_m1F90C43667A7F4543B0FF1CD95DBA6C1F92E94EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_AlignOf_TisSecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582_m2A0723994580C2ECBB82DAF6262E34EB6EA66581_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_AlignOf_TisSecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B_m42E37113A90B5272BE314C380722580DEF3E96F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_AlignOf_Tisunitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F_m59D5E5DE33D7D644DA555FA3F7A1D8623361D326_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_SizeOf_TisDelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81_m74D2F275F08D06BCB3E55494D0BCA36ED3D06BF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_SizeOf_TisRelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_m3FFD617F4FF50F0299817A643B51550473E1A5F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_SizeOf_TisReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01_mE682CCE1084DECD3C3F1EF2FFA2AB8BC799E35E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_SizeOf_TisSecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582_mD87AFEA55A4560FB415A7925E1F0285462A8EFD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_SizeOf_TisSecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B_m93E4445737BC86FE087B87E97CD00064A2CD9114_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_SizeOf_Tisunitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F_mB5C3FE2DC1AACE0DDBD3777316FBF67D9DED09BD_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Networking.Transport.Relay.ConnectionAddressExtensions
struct ConnectionAddressExtensions_t0489A584EA0FC5512E512E63152950A8D83644D8  : public RuntimeObject
{
};

// Unity.Networking.Transport.Utilities.FixedStringHexExt
struct FixedStringHexExt_t667CCA2A6050B213032D9D49F80CD7F35B066DC2  : public RuntimeObject
{
};

// Unity.Networking.Transport.Utilities.FragmentationStageParameterExtensions
struct FragmentationStageParameterExtensions_tBC2DF43965768DC277ECAA983E325EBCBA57451F  : public RuntimeObject
{
};

// Unity.Networking.Transport.Utilities.NativeListExt
struct NativeListExt_t09746DA988A2D8D76F8749A6E91480B8C04E534E  : public RuntimeObject
{
};

// Unity.Networking.Transport.Relay.RelayMessageBind
struct RelayMessageBind_tD085E8B749E136EA3D5EC01F83B0F26E805942AB  : public RuntimeObject
{
};

// Unity.Networking.Transport.Relay.RelayParameterExtensions
struct RelayParameterExtensions_t513D94F9DF78691C54311FE24CA85CDB9DB9E27F  : public RuntimeObject
{
};

// Unity.Networking.Transport.Utilities.ReliableStageParameterExtensions
struct ReliableStageParameterExtensions_tE9C8D968C19BCF7E4337CACA82987A112208BBB0  : public RuntimeObject
{
};

// Unity.Networking.Transport.TLS.SecureParameterExtensions
struct SecureParameterExtensions_tF706DE86CE94B3AB70AA8CC38D039B598CAF047F  : public RuntimeObject
{
};

// Unity.Networking.Transport.Utilities.SequenceHelpers
struct SequenceHelpers_tB7764083D32822E69FAA67664A14C71607CCC34A  : public RuntimeObject
{
};

// Unity.Networking.Transport.Utilities.SimulatorStageParameterExtensions
struct SimulatorStageParameterExtensions_t45F8900908105709A23DE754A9D94D8D6C09EC3F  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.Networking.Transport.NetworkInterfaceEndPoint>
struct NativeArray_1_tDF8469CB50B586533F70B614C38965EEBD6145B2 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Burst.SharedStatic`1<Unity.Burst.FunctionPointer`1<System.Object>>
struct SharedStatic_1_tE6D7548D21D8ED69C6AC8ECAD846CDB43304B444 
{
	// System.Void* Unity.Burst.SharedStatic`1::_buffer
	void* ____buffer_0;
};

// Unity.Burst.SharedStatic`1<Unity.Burst.FunctionPointer`1<Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback>>
struct SharedStatic_1_tB8E12BEEFE90AF4450BDCB3502FC8A0745B05C87 
{
	// System.Void* Unity.Burst.SharedStatic`1::_buffer
	void* ____buffer_0;
};

// Unity.Burst.SharedStatic`1<Unity.Burst.FunctionPointer`1<Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback>>
struct SharedStatic_1_t47339D7DCF45ED555300835940E9AFFB859D37B1 
{
	// System.Void* Unity.Burst.SharedStatic`1::_buffer
	void* ____buffer_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// Unity.Collections.FixedBytes16
struct FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Byte Unity.Collections.FixedBytes16::byte0000
					uint8_t ___byte0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t ___byte0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0001_1_OffsetPadding[1];
					// System.Byte Unity.Collections.FixedBytes16::byte0001
					uint8_t ___byte0001_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0001_1_OffsetPadding_forAlignmentOnly[1];
					uint8_t ___byte0001_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0002_2_OffsetPadding[2];
					// System.Byte Unity.Collections.FixedBytes16::byte0002
					uint8_t ___byte0002_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0002_2_OffsetPadding_forAlignmentOnly[2];
					uint8_t ___byte0002_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0003_3_OffsetPadding[3];
					// System.Byte Unity.Collections.FixedBytes16::byte0003
					uint8_t ___byte0003_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0003_3_OffsetPadding_forAlignmentOnly[3];
					uint8_t ___byte0003_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0004_4_OffsetPadding[4];
					// System.Byte Unity.Collections.FixedBytes16::byte0004
					uint8_t ___byte0004_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0004_4_OffsetPadding_forAlignmentOnly[4];
					uint8_t ___byte0004_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0005_5_OffsetPadding[5];
					// System.Byte Unity.Collections.FixedBytes16::byte0005
					uint8_t ___byte0005_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0005_5_OffsetPadding_forAlignmentOnly[5];
					uint8_t ___byte0005_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0006_6_OffsetPadding[6];
					// System.Byte Unity.Collections.FixedBytes16::byte0006
					uint8_t ___byte0006_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0006_6_OffsetPadding_forAlignmentOnly[6];
					uint8_t ___byte0006_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0007_7_OffsetPadding[7];
					// System.Byte Unity.Collections.FixedBytes16::byte0007
					uint8_t ___byte0007_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0007_7_OffsetPadding_forAlignmentOnly[7];
					uint8_t ___byte0007_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_8_OffsetPadding[8];
					// System.Byte Unity.Collections.FixedBytes16::byte0008
					uint8_t ___byte0008_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_8_OffsetPadding_forAlignmentOnly[8];
					uint8_t ___byte0008_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0009_9_OffsetPadding[9];
					// System.Byte Unity.Collections.FixedBytes16::byte0009
					uint8_t ___byte0009_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0009_9_OffsetPadding_forAlignmentOnly[9];
					uint8_t ___byte0009_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0010_10_OffsetPadding[10];
					// System.Byte Unity.Collections.FixedBytes16::byte0010
					uint8_t ___byte0010_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0010_10_OffsetPadding_forAlignmentOnly[10];
					uint8_t ___byte0010_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0011_11_OffsetPadding[11];
					// System.Byte Unity.Collections.FixedBytes16::byte0011
					uint8_t ___byte0011_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0011_11_OffsetPadding_forAlignmentOnly[11];
					uint8_t ___byte0011_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0012_12_OffsetPadding[12];
					// System.Byte Unity.Collections.FixedBytes16::byte0012
					uint8_t ___byte0012_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0012_12_OffsetPadding_forAlignmentOnly[12];
					uint8_t ___byte0012_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0013_13_OffsetPadding[13];
					// System.Byte Unity.Collections.FixedBytes16::byte0013
					uint8_t ___byte0013_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0013_13_OffsetPadding_forAlignmentOnly[13];
					uint8_t ___byte0013_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0014_14_OffsetPadding[14];
					// System.Byte Unity.Collections.FixedBytes16::byte0014
					uint8_t ___byte0014_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0014_14_OffsetPadding_forAlignmentOnly[14];
					uint8_t ___byte0014_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0015_15_OffsetPadding[15];
					// System.Byte Unity.Collections.FixedBytes16::byte0015
					uint8_t ___byte0015_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0015_15_OffsetPadding_forAlignmentOnly[15];
					uint8_t ___byte0015_15_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0__padding[16];
	};
};

// Unity.Networking.Transport.Utilities.FragmentationUtility
struct FragmentationUtility_t82E42C6D49944D7975704A30FFA8FA8CD6CDCC4F 
{
	union
	{
		struct
		{
		};
		uint8_t FragmentationUtility_t82E42C6D49944D7975704A30FFA8FA8CD6CDCC4F__padding[1];
	};
};

// Unity.Networking.Transport.InboundRecvBuffer
struct InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB 
{
	// System.Byte* Unity.Networking.Transport.InboundRecvBuffer::buffer
	uint8_t* ___buffer_0;
	// System.Int32 Unity.Networking.Transport.InboundRecvBuffer::bufferLength
	int32_t ___bufferLength_1;
};

// Unity.Networking.Transport.InboundSendBuffer
struct InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2 
{
	// System.Byte* Unity.Networking.Transport.InboundSendBuffer::buffer
	uint8_t* ___buffer_0;
	// System.Byte* Unity.Networking.Transport.InboundSendBuffer::bufferWithHeaders
	uint8_t* ___bufferWithHeaders_1;
	// System.Int32 Unity.Networking.Transport.InboundSendBuffer::bufferLength
	int32_t ___bufferLength_2;
	// System.Int32 Unity.Networking.Transport.InboundSendBuffer::bufferWithHeadersLength
	int32_t ___bufferWithHeadersLength_3;
	// System.Int32 Unity.Networking.Transport.InboundSendBuffer::headerPadding
	int32_t ___headerPadding_4;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// Unity.Networking.Transport.NetworkConfigParameter
struct NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D 
{
	// System.Int32 Unity.Networking.Transport.NetworkConfigParameter::connectTimeoutMS
	int32_t ___connectTimeoutMS_0;
	// System.Int32 Unity.Networking.Transport.NetworkConfigParameter::maxConnectAttempts
	int32_t ___maxConnectAttempts_1;
	// System.Int32 Unity.Networking.Transport.NetworkConfigParameter::disconnectTimeoutMS
	int32_t ___disconnectTimeoutMS_2;
	// System.Int32 Unity.Networking.Transport.NetworkConfigParameter::heartbeatTimeoutMS
	int32_t ___heartbeatTimeoutMS_3;
	// System.Int32 Unity.Networking.Transport.NetworkConfigParameter::maxFrameTimeMS
	int32_t ___maxFrameTimeMS_4;
	// System.Int32 Unity.Networking.Transport.NetworkConfigParameter::fixedFrameTimeMS
	int32_t ___fixedFrameTimeMS_5;
};

// Unity.Mathematics.Random
struct Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37 
{
	// System.UInt32 Unity.Mathematics.Random::state
	uint32_t ___state_0;
};

// Unity.Networking.Transport.Relay.RelayMessageHeader
struct RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72 
{
	// System.UInt16 Unity.Networking.Transport.Relay.RelayMessageHeader::Signature
	uint16_t ___Signature_0;
	// System.Byte Unity.Networking.Transport.Relay.RelayMessageHeader::Version
	uint8_t ___Version_1;
	// Unity.Networking.Transport.Relay.RelayMessageType Unity.Networking.Transport.Relay.RelayMessageHeader::Type
	uint8_t ___Type_2;
};

// Unity.Networking.Transport.Utilities.ReliableUtility
struct ReliableUtility_tEE469BB6C548BAEDA0CFE4FD8B9E299477E043FC 
{
	union
	{
		struct
		{
		};
		uint8_t ReliableUtility_tEE469BB6C548BAEDA0CFE4FD8B9E299477E043FC__padding[1];
	};
};

// Unity.Networking.Transport.Utilities.SequenceBufferContext
struct SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599 
{
	// System.Int32 Unity.Networking.Transport.Utilities.SequenceBufferContext::Sequence
	int32_t ___Sequence_0;
	// System.Int32 Unity.Networking.Transport.Utilities.SequenceBufferContext::Acked
	int32_t ___Acked_1;
	// System.UInt64 Unity.Networking.Transport.Utilities.SequenceBufferContext::AckedMask
	uint64_t ___AckedMask_2;
	// System.UInt64 Unity.Networking.Transport.Utilities.SequenceBufferContext::LastAckedMask
	uint64_t ___LastAckedMask_3;
	// System.UInt32 Unity.Networking.Transport.Utilities.SequenceBufferContext::AckMask
	uint32_t ___AckMask_4;
	// System.UInt32 Unity.Networking.Transport.Utilities.SequenceBufferContext::LastAckMask
	uint32_t ___LastAckMask_5;
};

// Unity.Networking.Transport.Utilities.SimulatorUtility
struct SimulatorUtility_t6B9B7C22FA101BDB50654F105BA143BFCD297F06 
{
	// System.Int32 Unity.Networking.Transport.Utilities.SimulatorUtility::m_PacketCount
	int32_t ___m_PacketCount_0;
	// System.Int32 Unity.Networking.Transport.Utilities.SimulatorUtility::m_MaxPacketSize
	int32_t ___m_MaxPacketSize_1;
	// System.Int32 Unity.Networking.Transport.Utilities.SimulatorUtility::m_PacketDelayMs
	int32_t ___m_PacketDelayMs_2;
	// System.Int32 Unity.Networking.Transport.Utilities.SimulatorUtility::m_PacketJitterMs
	int32_t ___m_PacketJitterMs_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
};

// Unity.Networking.Transport.Utilities.LowLevel.Unsafe.UnsafeAtomicFreeList
struct UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04 
{
	// System.Int32* Unity.Networking.Transport.Utilities.LowLevel.Unsafe.UnsafeAtomicFreeList::m_Buffer
	int32_t* ___m_Buffer_0;
	// System.Int32 Unity.Networking.Transport.Utilities.LowLevel.Unsafe.UnsafeAtomicFreeList::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Networking.Transport.Utilities.LowLevel.Unsafe.UnsafeAtomicFreeList::m_Allocator
	int32_t ___m_Allocator_2;
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

// Unity.Collections.AllocatorManager/AllocatorHandle
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	// System.UInt16 Unity.Collections.AllocatorManager/AllocatorHandle::Index
	uint16_t ___Index_0;
	// System.UInt16 Unity.Collections.AllocatorManager/AllocatorHandle::Version
	uint16_t ___Version_1;
};

// Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress
struct Baselib_NetworkAddress_t2F4AF92B4EEFE31182BADF512CA004AFF48128E0 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data0
			uint8_t ___data0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___data0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data1_1_OffsetPadding[1];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data1
			uint8_t ___data1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___data1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data2_2_OffsetPadding[2];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data2
			uint8_t ___data2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___data2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data3_3_OffsetPadding[3];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data3
			uint8_t ___data3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___data3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data4_4_OffsetPadding[4];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data4
			uint8_t ___data4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___data4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data5_5_OffsetPadding[5];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data5
			uint8_t ___data5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___data5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data6_6_OffsetPadding[6];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data6
			uint8_t ___data6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___data6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data7_7_OffsetPadding[7];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data7
			uint8_t ___data7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___data7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data8_8_OffsetPadding[8];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data8
			uint8_t ___data8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___data8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data9_9_OffsetPadding[9];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data9
			uint8_t ___data9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___data9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data10_10_OffsetPadding[10];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data10
			uint8_t ___data10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___data10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data11_11_OffsetPadding[11];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data11
			uint8_t ___data11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___data11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data12_12_OffsetPadding[12];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data12
			uint8_t ___data12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___data12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data13_13_OffsetPadding[13];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data13
			uint8_t ___data13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___data13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data14_14_OffsetPadding[14];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data14
			uint8_t ___data14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___data14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data15_15_OffsetPadding[15];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data15
			uint8_t ___data15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___data15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_0
			uint8_t ___ipv6_0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___ipv6_0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_1_17_OffsetPadding[1];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_1
			uint8_t ___ipv6_1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_1_17_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___ipv6_1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_2_18_OffsetPadding[2];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_2
			uint8_t ___ipv6_2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_2_18_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___ipv6_2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_3_19_OffsetPadding[3];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_3
			uint8_t ___ipv6_3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_3_19_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___ipv6_3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_4_20_OffsetPadding[4];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_4
			uint8_t ___ipv6_4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_4_20_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___ipv6_4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_5_21_OffsetPadding[5];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_5
			uint8_t ___ipv6_5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_5_21_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___ipv6_5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_6_22_OffsetPadding[6];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_6
			uint8_t ___ipv6_6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_6_22_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___ipv6_6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_7_23_OffsetPadding[7];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_7
			uint8_t ___ipv6_7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_7_23_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___ipv6_7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_8_24_OffsetPadding[8];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_8
			uint8_t ___ipv6_8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_8_24_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___ipv6_8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_9_25_OffsetPadding[9];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_9
			uint8_t ___ipv6_9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_9_25_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___ipv6_9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_10_26_OffsetPadding[10];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_10
			uint8_t ___ipv6_10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_10_26_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___ipv6_10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_11_27_OffsetPadding[11];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_11
			uint8_t ___ipv6_11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_11_27_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___ipv6_11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_12_28_OffsetPadding[12];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_12
			uint8_t ___ipv6_12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_12_28_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___ipv6_12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_13_29_OffsetPadding[13];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_13
			uint8_t ___ipv6_13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_13_29_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___ipv6_13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_14_30_OffsetPadding[14];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_14
			uint8_t ___ipv6_14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_14_30_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___ipv6_14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_15_31_OffsetPadding[15];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_15
			uint8_t ___ipv6_15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_15_31_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___ipv6_15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv4_0
			uint8_t ___ipv4_0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___ipv4_0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv4_1_33_OffsetPadding[1];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv4_1
			uint8_t ___ipv4_1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv4_1_33_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___ipv4_1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv4_2_34_OffsetPadding[2];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv4_2
			uint8_t ___ipv4_2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv4_2_34_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___ipv4_2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv4_3_35_OffsetPadding[3];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv4_3
			uint8_t ___ipv4_3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv4_3_35_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___ipv4_3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___port0_36_OffsetPadding[16];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::port0
			uint8_t ___port0_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___port0_36_OffsetPadding_forAlignmentOnly[16];
			uint8_t ___port0_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___port1_37_OffsetPadding[17];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::port1
			uint8_t ___port1_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___port1_37_OffsetPadding_forAlignmentOnly[17];
			uint8_t ___port1_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___family_38_OffsetPadding[18];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::family
			uint8_t ___family_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___family_38_OffsetPadding_forAlignmentOnly[18];
			uint8_t ___family_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____padding_39_OffsetPadding[19];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::_padding
			uint8_t ____padding_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____padding_39_OffsetPadding_forAlignmentOnly[19];
			uint8_t ____padding_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_scope_id_40_OffsetPadding[20];
			// System.UInt32 Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_scope_id
			uint32_t ___ipv6_scope_id_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_scope_id_40_OffsetPadding_forAlignmentOnly[20];
			uint32_t ___ipv6_scope_id_40_forAlignmentOnly;
		};
	};
};

// Unity.Networking.Transport.DataStreamWriter/StreamData
struct StreamData_tF9752A5347148C4C2FD2C07D204FABE9539D1E94 
{
	// System.Byte* Unity.Networking.Transport.DataStreamWriter/StreamData::buffer
	uint8_t* ___buffer_0;
	// System.Int32 Unity.Networking.Transport.DataStreamWriter/StreamData::length
	int32_t ___length_1;
	// System.Int32 Unity.Networking.Transport.DataStreamWriter/StreamData::capacity
	int32_t ___capacity_2;
	// System.UInt64 Unity.Networking.Transport.DataStreamWriter/StreamData::bitBuffer
	uint64_t ___bitBuffer_3;
	// System.Int32 Unity.Networking.Transport.DataStreamWriter/StreamData::bitIndex
	int32_t ___bitIndex_4;
	// System.Int32 Unity.Networking.Transport.DataStreamWriter/StreamData::failedWrites
	int32_t ___failedWrites_5;
};

// Unity.Networking.Transport.Utilities.FragmentationUtility/Parameters
struct Parameters_t59B022551E59FBC1EA11D32A22CF7C3457682BAE 
{
	// System.Int32 Unity.Networking.Transport.Utilities.FragmentationUtility/Parameters::PayloadCapacity
	int32_t ___PayloadCapacity_0;
};

// Unity.Networking.Transport.TLS.ManagedSecureFunctions/ManagedSecureFunctionsKey
struct ManagedSecureFunctionsKey_t773373200D4DB2198DD729D87E4AC96A78F446FC 
{
	union
	{
		struct
		{
		};
		uint8_t ManagedSecureFunctionsKey_t773373200D4DB2198DD729D87E4AC96A78F446FC__padding[1];
	};
};

// Unity.Networking.Transport.NetworkInterfaceEndPoint/<data>e__FixedBuffer
struct U3CdataU3Ee__FixedBuffer_tA444E672C5AB32F413A3235C5075E48F04008AA0 
{
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.NetworkInterfaceEndPoint/<data>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CdataU3Ee__FixedBuffer_tA444E672C5AB32F413A3235C5075E48F04008AA0__padding[56];
	};
};

// Unity.Networking.Transport.Relay.RelayAllocationId/<Value>e__FixedBuffer
struct U3CValueU3Ee__FixedBuffer_t0E279F5AD765D68C7D3ADB57B98FD471710955C8 
{
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.Relay.RelayAllocationId/<Value>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CValueU3Ee__FixedBuffer_t0E279F5AD765D68C7D3ADB57B98FD471710955C8__padding[16];
	};
};

// Unity.Networking.Transport.Relay.RelayConnectionData/<Value>e__FixedBuffer
struct U3CValueU3Ee__FixedBuffer_t2EBBD6566B9DD8EF0CBC9EF9A9340955B5792054 
{
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.Relay.RelayConnectionData/<Value>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CValueU3Ee__FixedBuffer_t2EBBD6566B9DD8EF0CBC9EF9A9340955B5792054__padding[255];
	};
};

// Unity.Networking.Transport.Relay.RelayHMACKey/<Value>e__FixedBuffer
struct U3CValueU3Ee__FixedBuffer_t3C8B36A587C8DE2573C0B7FD1CBD94E571B38A67 
{
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.Relay.RelayHMACKey/<Value>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CValueU3Ee__FixedBuffer_t3C8B36A587C8DE2573C0B7FD1CBD94E571B38A67__padding[64];
	};
};

// Unity.Networking.Transport.Relay.RelayServerData/<HMAC>e__FixedBuffer
struct U3CHMACU3Ee__FixedBuffer_tEBE6EB5356C21D7CDAA77E2AB69381855EAD9816 
{
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.Relay.RelayServerData/<HMAC>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CHMACU3Ee__FixedBuffer_tEBE6EB5356C21D7CDAA77E2AB69381855EAD9816__padding[32];
	};
};

// Unity.Networking.Transport.Utilities.ReliableUtility/Context
struct Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A 
{
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Context::Capacity
	int32_t ___Capacity_0;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Context::Resume
	int32_t ___Resume_1;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Context::Delivered
	int32_t ___Delivered_2;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Context::IndexStride
	int32_t ___IndexStride_3;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Context::IndexPtrOffset
	int32_t ___IndexPtrOffset_4;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Context::DataStride
	int32_t ___DataStride_5;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Context::DataPtrOffset
	int32_t ___DataPtrOffset_6;
	// System.Int64 Unity.Networking.Transport.Utilities.ReliableUtility/Context::LastSentTime
	int64_t ___LastSentTime_7;
	// System.Int64 Unity.Networking.Transport.Utilities.ReliableUtility/Context::PreviousTimestamp
	int64_t ___PreviousTimestamp_8;
};

// Unity.Networking.Transport.Utilities.ReliableUtility/PacketInformation
struct PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2 
{
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/PacketInformation::SequenceId
	int32_t ___SequenceId_0;
	// System.UInt16 Unity.Networking.Transport.Utilities.ReliableUtility/PacketInformation::Size
	uint16_t ___Size_1;
	// System.UInt16 Unity.Networking.Transport.Utilities.ReliableUtility/PacketInformation::HeaderPadding
	uint16_t ___HeaderPadding_2;
	// System.Int64 Unity.Networking.Transport.Utilities.ReliableUtility/PacketInformation::SendTime
	int64_t ___SendTime_3;
};

// Unity.Networking.Transport.Utilities.ReliableUtility/PacketTimers
struct PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4 
{
	// System.UInt16 Unity.Networking.Transport.Utilities.ReliableUtility/PacketTimers::ProcessingTime
	uint16_t ___ProcessingTime_0;
	// System.UInt16 Unity.Networking.Transport.Utilities.ReliableUtility/PacketTimers::Padding
	uint16_t ___Padding_1;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/PacketTimers::SequenceId
	int32_t ___SequenceId_2;
	// System.Int64 Unity.Networking.Transport.Utilities.ReliableUtility/PacketTimers::SentTime
	int64_t ___SentTime_3;
	// System.Int64 Unity.Networking.Transport.Utilities.ReliableUtility/PacketTimers::ReceiveTime
	int64_t ___ReceiveTime_4;
};

// Unity.Networking.Transport.Utilities.ReliableUtility/Parameters
struct Parameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5 
{
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Parameters::WindowSize
	int32_t ___WindowSize_0;
};

// Unity.Networking.Transport.Utilities.ReliableUtility/RTTInfo
struct RTTInfo_tAF1A100DBA67BD0367A9ABA6928B4E574CBE5518 
{
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/RTTInfo::LastRtt
	int32_t ___LastRtt_0;
	// System.Single Unity.Networking.Transport.Utilities.ReliableUtility/RTTInfo::SmoothedRtt
	float ___SmoothedRtt_1;
	// System.Single Unity.Networking.Transport.Utilities.ReliableUtility/RTTInfo::SmoothedVariance
	float ___SmoothedVariance_2;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/RTTInfo::ResendTimeout
	int32_t ___ResendTimeout_3;
};

// Unity.Networking.Transport.Utilities.ReliableUtility/ReliableHeader
struct ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 
{
	// System.UInt16 Unity.Networking.Transport.Utilities.ReliableUtility/ReliableHeader::Type
	uint16_t ___Type_0;
	// System.UInt16 Unity.Networking.Transport.Utilities.ReliableUtility/ReliableHeader::ProcessingTime
	uint16_t ___ProcessingTime_1;
	// System.UInt16 Unity.Networking.Transport.Utilities.ReliableUtility/ReliableHeader::SequenceId
	uint16_t ___SequenceId_2;
	// System.UInt16 Unity.Networking.Transport.Utilities.ReliableUtility/ReliableHeader::AckedSequenceId
	uint16_t ___AckedSequenceId_3;
	// System.UInt64 Unity.Networking.Transport.Utilities.ReliableUtility/ReliableHeader::AckedMask
	uint64_t ___AckedMask_4;
};

// Unity.Networking.Transport.Utilities.ReliableUtility/Statistics
struct Statistics_t11CF93D4C83ABFDDFD0BBAD848B752181939A2E5 
{
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Statistics::PacketsReceived
	int32_t ___PacketsReceived_0;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Statistics::PacketsSent
	int32_t ___PacketsSent_1;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Statistics::PacketsDropped
	int32_t ___PacketsDropped_2;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Statistics::PacketsOutOfOrder
	int32_t ___PacketsOutOfOrder_3;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Statistics::PacketsDuplicated
	int32_t ___PacketsDuplicated_4;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Statistics::PacketsStale
	int32_t ___PacketsStale_5;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Statistics::PacketsResent
	int32_t ___PacketsResent_6;
};

// Unity.Networking.Transport.SessionIdToken/<Value>e__FixedBuffer
struct U3CValueU3Ee__FixedBuffer_t4CE95A1DC9ED09372188CEDA707F9A09B897742D 
{
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.SessionIdToken/<Value>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CValueU3Ee__FixedBuffer_t4CE95A1DC9ED09372188CEDA707F9A09B897742D__padding[8];
	};
};

// Unity.Networking.Transport.Utilities.SimulatorUtility/DelayedPacket
struct DelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81 
{
	// System.Int32 Unity.Networking.Transport.Utilities.SimulatorUtility/DelayedPacket::processBufferOffset
	int32_t ___processBufferOffset_0;
	// System.UInt16 Unity.Networking.Transport.Utilities.SimulatorUtility/DelayedPacket::packetSize
	uint16_t ___packetSize_1;
	// System.UInt16 Unity.Networking.Transport.Utilities.SimulatorUtility/DelayedPacket::packetHeaderPadding
	uint16_t ___packetHeaderPadding_2;
	// System.Int64 Unity.Networking.Transport.Utilities.SimulatorUtility/DelayedPacket::delayUntil
	int64_t ___delayUntil_3;
};

// Unity.Networking.Transport.Utilities.SimulatorUtility/Parameters
struct Parameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0 
{
	// System.Int32 Unity.Networking.Transport.Utilities.SimulatorUtility/Parameters::MaxPacketCount
	int32_t ___MaxPacketCount_0;
	// System.Int32 Unity.Networking.Transport.Utilities.SimulatorUtility/Parameters::MaxPacketSize
	int32_t ___MaxPacketSize_1;
	// System.Int32 Unity.Networking.Transport.Utilities.SimulatorUtility/Parameters::PacketDelayMs
	int32_t ___PacketDelayMs_2;
	// System.Int32 Unity.Networking.Transport.Utilities.SimulatorUtility/Parameters::PacketJitterMs
	int32_t ___PacketJitterMs_3;
	// System.Int32 Unity.Networking.Transport.Utilities.SimulatorUtility/Parameters::PacketDropInterval
	int32_t ___PacketDropInterval_4;
	// System.Int32 Unity.Networking.Transport.Utilities.SimulatorUtility/Parameters::PacketDropPercentage
	int32_t ___PacketDropPercentage_5;
	// System.Int32 Unity.Networking.Transport.Utilities.SimulatorUtility/Parameters::FuzzFactor
	int32_t ___FuzzFactor_6;
	// System.Int32 Unity.Networking.Transport.Utilities.SimulatorUtility/Parameters::FuzzOffset
	int32_t ___FuzzOffset_7;
	// System.UInt32 Unity.Networking.Transport.Utilities.SimulatorUtility/Parameters::RandomSeed
	uint32_t ___RandomSeed_8;
};

// Unity.Mathematics.math/IntFloatUnion
struct IntFloatUnion_t549256A9DD754252DD18383D9CE7EA55EBBD6D96 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Mathematics.math/IntFloatUnion::intValue
			int32_t ___intValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___intValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Mathematics.math/IntFloatUnion::floatValue
			float ___floatValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___floatValue_1_forAlignmentOnly;
		};
	};
};

// Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsData
struct AsData_t8E59FF5C35A4A26CBC022D19744117E27B46609D 
{
	// System.Int32 Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsData::Offset
	int32_t ___Offset_0;
	// System.Int32 Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsData::Length
	int32_t ___Length_1;
	// System.Byte Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsData::HasPipelineByte
	uint8_t ___HasPipelineByte_2;
};

// Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsProtocolStatusUpdate
struct AsProtocolStatusUpdate_t7D9E6F8F2D1D4DA7886545F8DEE54F4F0956746A 
{
	// System.Int32 Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsProtocolStatusUpdate::Status
	int32_t ___Status_0;
};

// Unity.Networking.Transport.Utilities.ReliableUtility/ReliablePacket/<Buffer>e__FixedBuffer
struct U3CBufferU3Ee__FixedBuffer_tB9F94B824C0925E29D2EFA057FC5B438259715FE 
{
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.Utilities.ReliableUtility/ReliablePacket/<Buffer>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CBufferU3Ee__FixedBuffer_tB9F94B824C0925E29D2EFA057FC5B438259715FE__padding[1404];
	};
};

// Unity.Burst.FunctionPointer`1<System.Object>
struct FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback>
struct FunctionPointer_1_tA2FC39F25D07D293D943EDC747A8E0E7A70BDFC6 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback>
struct FunctionPointer_1_tF917A6CBC8E241E4F555974CCF4507F08B71041A 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate>
struct FunctionPointer_1_tF29FF6D2564E315434ED47AB1554C8096BDB3B3A 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ConnectDelegate>
struct FunctionPointer_1_t8C37DE1737CA4B219489A8BE872435F8391F4F08 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate>
struct FunctionPointer_1_t2B11019D68001BBA761F297DF394B647E9B2D0AF 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate>
struct FunctionPointer_1_tE199B9295009A8E22A29B6DDD22ED499A663A39B 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate>
struct FunctionPointer_1_t04915FE164A4EB6B97CE508C2D62CCB1830EDD86 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate>
struct FunctionPointer_1_t10B538976246CA89EE16B10A9A3F981194F98C59 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate>
struct FunctionPointer_1_t87DC6AA7478438FC2A893CEFC30932DB880EECFE 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate>
struct FunctionPointer_1_t92B1E9993FD30276E18F8D355C528D0024CE9CEF 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/UpdateDelegate>
struct FunctionPointer_1_t646F6606413775C943F0F4782FBB82DED8FB3123 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate>
struct FunctionPointer_1_t605FCD8E1E05F041A75BCDAE5CE44D9A201BFAA1 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate>
struct FunctionPointer_1_t5E2F5FC9CFE7FBBBECA6EB73BABFA0CD5F645155 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate>
struct FunctionPointer_1_tD15B3870776AA5A42DBB36B9CCA6AA930B9628DE 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Collections.NativeList`1<System.Byte>
struct NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<System.Int64,Unity.Networking.Transport.NetworkSettings/ParameterSlice>
struct UnsafeHashMap_2_tF7A9469DA8C5BBA8B491A7436DE7FD6D75DE130B 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData* Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::m_Buffer
	UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___m_Buffer_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<Unity.Networking.Transport.NetworkInterfaceEndPoint,Unity.Networking.Transport.TLS.SecureClientState>
struct UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData* Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::m_Buffer
	UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___m_Buffer_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_1;
};

// Unity.Networking.Transport.DataStreamWriter
struct DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA 
{
	// Unity.Networking.Transport.DataStreamWriter/StreamData Unity.Networking.Transport.DataStreamWriter::m_Data
	StreamData_tF9752A5347148C4C2FD2C07D204FABE9539D1E94 ___m_Data_0;
	// System.IntPtr Unity.Networking.Transport.DataStreamWriter::m_SendHandleData
	intptr_t ___m_SendHandleData_1;
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

// Unity.Collections.FixedBytes30
struct FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes30::offset0000
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0016_1_OffsetPadding[16];
					// System.Byte Unity.Collections.FixedBytes30::byte0016
					uint8_t ___byte0016_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0016_1_OffsetPadding_forAlignmentOnly[16];
					uint8_t ___byte0016_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0017_2_OffsetPadding[17];
					// System.Byte Unity.Collections.FixedBytes30::byte0017
					uint8_t ___byte0017_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0017_2_OffsetPadding_forAlignmentOnly[17];
					uint8_t ___byte0017_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0018_3_OffsetPadding[18];
					// System.Byte Unity.Collections.FixedBytes30::byte0018
					uint8_t ___byte0018_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0018_3_OffsetPadding_forAlignmentOnly[18];
					uint8_t ___byte0018_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0019_4_OffsetPadding[19];
					// System.Byte Unity.Collections.FixedBytes30::byte0019
					uint8_t ___byte0019_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0019_4_OffsetPadding_forAlignmentOnly[19];
					uint8_t ___byte0019_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0020_5_OffsetPadding[20];
					// System.Byte Unity.Collections.FixedBytes30::byte0020
					uint8_t ___byte0020_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0020_5_OffsetPadding_forAlignmentOnly[20];
					uint8_t ___byte0020_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0021_6_OffsetPadding[21];
					// System.Byte Unity.Collections.FixedBytes30::byte0021
					uint8_t ___byte0021_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0021_6_OffsetPadding_forAlignmentOnly[21];
					uint8_t ___byte0021_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0022_7_OffsetPadding[22];
					// System.Byte Unity.Collections.FixedBytes30::byte0022
					uint8_t ___byte0022_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0022_7_OffsetPadding_forAlignmentOnly[22];
					uint8_t ___byte0022_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0023_8_OffsetPadding[23];
					// System.Byte Unity.Collections.FixedBytes30::byte0023
					uint8_t ___byte0023_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0023_8_OffsetPadding_forAlignmentOnly[23];
					uint8_t ___byte0023_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0024_9_OffsetPadding[24];
					// System.Byte Unity.Collections.FixedBytes30::byte0024
					uint8_t ___byte0024_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0024_9_OffsetPadding_forAlignmentOnly[24];
					uint8_t ___byte0024_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0025_10_OffsetPadding[25];
					// System.Byte Unity.Collections.FixedBytes30::byte0025
					uint8_t ___byte0025_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0025_10_OffsetPadding_forAlignmentOnly[25];
					uint8_t ___byte0025_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0026_11_OffsetPadding[26];
					// System.Byte Unity.Collections.FixedBytes30::byte0026
					uint8_t ___byte0026_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0026_11_OffsetPadding_forAlignmentOnly[26];
					uint8_t ___byte0026_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0027_12_OffsetPadding[27];
					// System.Byte Unity.Collections.FixedBytes30::byte0027
					uint8_t ___byte0027_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0027_12_OffsetPadding_forAlignmentOnly[27];
					uint8_t ___byte0027_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0028_13_OffsetPadding[28];
					// System.Byte Unity.Collections.FixedBytes30::byte0028
					uint8_t ___byte0028_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0028_13_OffsetPadding_forAlignmentOnly[28];
					uint8_t ___byte0028_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0029_14_OffsetPadding[29];
					// System.Byte Unity.Collections.FixedBytes30::byte0029
					uint8_t ___byte0029_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0029_14_OffsetPadding_forAlignmentOnly[29];
					uint8_t ___byte0029_14_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2__padding[30];
	};
};

// Unity.Collections.FixedBytes4094
struct FixedBytes4094_t8611441D8BDC6A677C2D9E551086F59EFBFCBBE5 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0000
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_1_OffsetPadding[16];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0016
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_1_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_2_OffsetPadding[32];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0032
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_2_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_3_OffsetPadding[48];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0048
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_3_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0064_4_OffsetPadding[64];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0064
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0064_4_OffsetPadding_forAlignmentOnly[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0080_5_OffsetPadding[80];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0080
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0080_5_OffsetPadding_forAlignmentOnly[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0096_6_OffsetPadding[96];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0096
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0096_6_OffsetPadding_forAlignmentOnly[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0112_7_OffsetPadding[112];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0112
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0112_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0112_7_OffsetPadding_forAlignmentOnly[112];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0112_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0128_8_OffsetPadding[128];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0128
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0128_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0128_8_OffsetPadding_forAlignmentOnly[128];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0128_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0144_9_OffsetPadding[144];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0144
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0144_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0144_9_OffsetPadding_forAlignmentOnly[144];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0144_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0160_10_OffsetPadding[160];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0160
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0160_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0160_10_OffsetPadding_forAlignmentOnly[160];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0160_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0176_11_OffsetPadding[176];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0176
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0176_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0176_11_OffsetPadding_forAlignmentOnly[176];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0176_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0192_12_OffsetPadding[192];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0192
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0192_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0192_12_OffsetPadding_forAlignmentOnly[192];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0192_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0208_13_OffsetPadding[208];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0208
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0208_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0208_13_OffsetPadding_forAlignmentOnly[208];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0208_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0224_14_OffsetPadding[224];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0224
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0224_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0224_14_OffsetPadding_forAlignmentOnly[224];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0224_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0240_15_OffsetPadding[240];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0240
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0240_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0240_15_OffsetPadding_forAlignmentOnly[240];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0240_15_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0256_16_OffsetPadding[256];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0256
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0256_16;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0256_16_OffsetPadding_forAlignmentOnly[256];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0256_16_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0272_17_OffsetPadding[272];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0272
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0272_17;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0272_17_OffsetPadding_forAlignmentOnly[272];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0272_17_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0288_18_OffsetPadding[288];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0288
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0288_18;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0288_18_OffsetPadding_forAlignmentOnly[288];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0288_18_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0304_19_OffsetPadding[304];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0304
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0304_19;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0304_19_OffsetPadding_forAlignmentOnly[304];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0304_19_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0320_20_OffsetPadding[320];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0320
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0320_20;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0320_20_OffsetPadding_forAlignmentOnly[320];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0320_20_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0336_21_OffsetPadding[336];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0336
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0336_21;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0336_21_OffsetPadding_forAlignmentOnly[336];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0336_21_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0352_22_OffsetPadding[352];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0352
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0352_22;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0352_22_OffsetPadding_forAlignmentOnly[352];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0352_22_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0368_23_OffsetPadding[368];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0368
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0368_23;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0368_23_OffsetPadding_forAlignmentOnly[368];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0368_23_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0384_24_OffsetPadding[384];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0384
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0384_24;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0384_24_OffsetPadding_forAlignmentOnly[384];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0384_24_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0400_25_OffsetPadding[400];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0400
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0400_25;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0400_25_OffsetPadding_forAlignmentOnly[400];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0400_25_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0416_26_OffsetPadding[416];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0416
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0416_26;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0416_26_OffsetPadding_forAlignmentOnly[416];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0416_26_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0432_27_OffsetPadding[432];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0432
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0432_27;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0432_27_OffsetPadding_forAlignmentOnly[432];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0432_27_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0448_28_OffsetPadding[448];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0448
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0448_28;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0448_28_OffsetPadding_forAlignmentOnly[448];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0448_28_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0464_29_OffsetPadding[464];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0464
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0464_29;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0464_29_OffsetPadding_forAlignmentOnly[464];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0464_29_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0480_30_OffsetPadding[480];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0480
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0480_30;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0480_30_OffsetPadding_forAlignmentOnly[480];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0480_30_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0496_31_OffsetPadding[496];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0496
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0496_31;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0496_31_OffsetPadding_forAlignmentOnly[496];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0496_31_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0512_32_OffsetPadding[512];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0512
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0512_32;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0512_32_OffsetPadding_forAlignmentOnly[512];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0512_32_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0528_33_OffsetPadding[528];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0528
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0528_33;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0528_33_OffsetPadding_forAlignmentOnly[528];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0528_33_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0544_34_OffsetPadding[544];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0544
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0544_34;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0544_34_OffsetPadding_forAlignmentOnly[544];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0544_34_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0560_35_OffsetPadding[560];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0560
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0560_35;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0560_35_OffsetPadding_forAlignmentOnly[560];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0560_35_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0576_36_OffsetPadding[576];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0576
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0576_36;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0576_36_OffsetPadding_forAlignmentOnly[576];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0576_36_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0592_37_OffsetPadding[592];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0592
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0592_37;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0592_37_OffsetPadding_forAlignmentOnly[592];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0592_37_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0608_38_OffsetPadding[608];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0608
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0608_38;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0608_38_OffsetPadding_forAlignmentOnly[608];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0608_38_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0624_39_OffsetPadding[624];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0624
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0624_39;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0624_39_OffsetPadding_forAlignmentOnly[624];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0624_39_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0640_40_OffsetPadding[640];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0640
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0640_40;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0640_40_OffsetPadding_forAlignmentOnly[640];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0640_40_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0656_41_OffsetPadding[656];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0656
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0656_41;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0656_41_OffsetPadding_forAlignmentOnly[656];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0656_41_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0672_42_OffsetPadding[672];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0672
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0672_42;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0672_42_OffsetPadding_forAlignmentOnly[672];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0672_42_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0688_43_OffsetPadding[688];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0688
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0688_43;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0688_43_OffsetPadding_forAlignmentOnly[688];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0688_43_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0704_44_OffsetPadding[704];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0704
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0704_44;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0704_44_OffsetPadding_forAlignmentOnly[704];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0704_44_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0720_45_OffsetPadding[720];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0720
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0720_45;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0720_45_OffsetPadding_forAlignmentOnly[720];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0720_45_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0736_46_OffsetPadding[736];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0736
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0736_46;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0736_46_OffsetPadding_forAlignmentOnly[736];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0736_46_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0752_47_OffsetPadding[752];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0752
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0752_47;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0752_47_OffsetPadding_forAlignmentOnly[752];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0752_47_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0768_48_OffsetPadding[768];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0768
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0768_48;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0768_48_OffsetPadding_forAlignmentOnly[768];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0768_48_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0784_49_OffsetPadding[784];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0784
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0784_49;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0784_49_OffsetPadding_forAlignmentOnly[784];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0784_49_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0800_50_OffsetPadding[800];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0800
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0800_50;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0800_50_OffsetPadding_forAlignmentOnly[800];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0800_50_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0816_51_OffsetPadding[816];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0816
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0816_51;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0816_51_OffsetPadding_forAlignmentOnly[816];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0816_51_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0832_52_OffsetPadding[832];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0832
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0832_52;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0832_52_OffsetPadding_forAlignmentOnly[832];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0832_52_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0848_53_OffsetPadding[848];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0848
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0848_53;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0848_53_OffsetPadding_forAlignmentOnly[848];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0848_53_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0864_54_OffsetPadding[864];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0864
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0864_54;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0864_54_OffsetPadding_forAlignmentOnly[864];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0864_54_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0880_55_OffsetPadding[880];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0880
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0880_55;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0880_55_OffsetPadding_forAlignmentOnly[880];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0880_55_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0896_56_OffsetPadding[896];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0896
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0896_56;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0896_56_OffsetPadding_forAlignmentOnly[896];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0896_56_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0912_57_OffsetPadding[912];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0912
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0912_57;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0912_57_OffsetPadding_forAlignmentOnly[912];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0912_57_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0928_58_OffsetPadding[928];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0928
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0928_58;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0928_58_OffsetPadding_forAlignmentOnly[928];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0928_58_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0944_59_OffsetPadding[944];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0944
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0944_59;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0944_59_OffsetPadding_forAlignmentOnly[944];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0944_59_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0960_60_OffsetPadding[960];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0960
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0960_60;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0960_60_OffsetPadding_forAlignmentOnly[960];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0960_60_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0976_61_OffsetPadding[976];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0976
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0976_61;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0976_61_OffsetPadding_forAlignmentOnly[976];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0976_61_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0992_62_OffsetPadding[992];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0992
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0992_62;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0992_62_OffsetPadding_forAlignmentOnly[992];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0992_62_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1008_63_OffsetPadding[1008];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1008
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1008_63;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1008_63_OffsetPadding_forAlignmentOnly[1008];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1008_63_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1024_64_OffsetPadding[1024];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1024
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1024_64;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1024_64_OffsetPadding_forAlignmentOnly[1024];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1024_64_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1040_65_OffsetPadding[1040];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1040
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1040_65;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1040_65_OffsetPadding_forAlignmentOnly[1040];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1040_65_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1056_66_OffsetPadding[1056];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1056
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1056_66;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1056_66_OffsetPadding_forAlignmentOnly[1056];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1056_66_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1072_67_OffsetPadding[1072];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1072
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1072_67;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1072_67_OffsetPadding_forAlignmentOnly[1072];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1072_67_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1088_68_OffsetPadding[1088];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1088
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1088_68;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1088_68_OffsetPadding_forAlignmentOnly[1088];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1088_68_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1104_69_OffsetPadding[1104];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1104
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1104_69;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1104_69_OffsetPadding_forAlignmentOnly[1104];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1104_69_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1120_70_OffsetPadding[1120];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1120
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1120_70;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1120_70_OffsetPadding_forAlignmentOnly[1120];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1120_70_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1136_71_OffsetPadding[1136];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1136
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1136_71;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1136_71_OffsetPadding_forAlignmentOnly[1136];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1136_71_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1152_72_OffsetPadding[1152];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1152
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1152_72;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1152_72_OffsetPadding_forAlignmentOnly[1152];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1152_72_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1168_73_OffsetPadding[1168];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1168
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1168_73;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1168_73_OffsetPadding_forAlignmentOnly[1168];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1168_73_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1184_74_OffsetPadding[1184];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1184
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1184_74;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1184_74_OffsetPadding_forAlignmentOnly[1184];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1184_74_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1200_75_OffsetPadding[1200];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1200
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1200_75;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1200_75_OffsetPadding_forAlignmentOnly[1200];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1200_75_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1216_76_OffsetPadding[1216];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1216
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1216_76;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1216_76_OffsetPadding_forAlignmentOnly[1216];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1216_76_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1232_77_OffsetPadding[1232];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1232
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1232_77;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1232_77_OffsetPadding_forAlignmentOnly[1232];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1232_77_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1248_78_OffsetPadding[1248];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1248
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1248_78;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1248_78_OffsetPadding_forAlignmentOnly[1248];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1248_78_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1264_79_OffsetPadding[1264];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1264
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1264_79;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1264_79_OffsetPadding_forAlignmentOnly[1264];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1264_79_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1280_80_OffsetPadding[1280];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1280
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1280_80;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1280_80_OffsetPadding_forAlignmentOnly[1280];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1280_80_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1296_81_OffsetPadding[1296];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1296
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1296_81;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1296_81_OffsetPadding_forAlignmentOnly[1296];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1296_81_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1312_82_OffsetPadding[1312];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1312
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1312_82;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1312_82_OffsetPadding_forAlignmentOnly[1312];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1312_82_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1328_83_OffsetPadding[1328];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1328
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1328_83;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1328_83_OffsetPadding_forAlignmentOnly[1328];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1328_83_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1344_84_OffsetPadding[1344];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1344
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1344_84;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1344_84_OffsetPadding_forAlignmentOnly[1344];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1344_84_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1360_85_OffsetPadding[1360];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1360
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1360_85;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1360_85_OffsetPadding_forAlignmentOnly[1360];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1360_85_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1376_86_OffsetPadding[1376];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1376
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1376_86;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1376_86_OffsetPadding_forAlignmentOnly[1376];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1376_86_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1392_87_OffsetPadding[1392];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1392
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1392_87;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1392_87_OffsetPadding_forAlignmentOnly[1392];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1392_87_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1408_88_OffsetPadding[1408];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1408
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1408_88;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1408_88_OffsetPadding_forAlignmentOnly[1408];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1408_88_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1424_89_OffsetPadding[1424];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1424
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1424_89;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1424_89_OffsetPadding_forAlignmentOnly[1424];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1424_89_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1440_90_OffsetPadding[1440];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1440
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1440_90;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1440_90_OffsetPadding_forAlignmentOnly[1440];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1440_90_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1456_91_OffsetPadding[1456];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1456
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1456_91;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1456_91_OffsetPadding_forAlignmentOnly[1456];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1456_91_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1472_92_OffsetPadding[1472];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1472
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1472_92;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1472_92_OffsetPadding_forAlignmentOnly[1472];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1472_92_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1488_93_OffsetPadding[1488];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1488
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1488_93;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1488_93_OffsetPadding_forAlignmentOnly[1488];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1488_93_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1504_94_OffsetPadding[1504];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1504
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1504_94;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1504_94_OffsetPadding_forAlignmentOnly[1504];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1504_94_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1520_95_OffsetPadding[1520];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1520
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1520_95;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1520_95_OffsetPadding_forAlignmentOnly[1520];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1520_95_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1536_96_OffsetPadding[1536];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1536
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1536_96;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1536_96_OffsetPadding_forAlignmentOnly[1536];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1536_96_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1552_97_OffsetPadding[1552];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1552
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1552_97;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1552_97_OffsetPadding_forAlignmentOnly[1552];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1552_97_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1568_98_OffsetPadding[1568];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1568
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1568_98;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1568_98_OffsetPadding_forAlignmentOnly[1568];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1568_98_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1584_99_OffsetPadding[1584];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1584
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1584_99;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1584_99_OffsetPadding_forAlignmentOnly[1584];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1584_99_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1600_100_OffsetPadding[1600];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1600
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1600_100;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1600_100_OffsetPadding_forAlignmentOnly[1600];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1600_100_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1616_101_OffsetPadding[1616];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1616
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1616_101;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1616_101_OffsetPadding_forAlignmentOnly[1616];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1616_101_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1632_102_OffsetPadding[1632];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1632
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1632_102;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1632_102_OffsetPadding_forAlignmentOnly[1632];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1632_102_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1648_103_OffsetPadding[1648];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1648
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1648_103;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1648_103_OffsetPadding_forAlignmentOnly[1648];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1648_103_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1664_104_OffsetPadding[1664];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1664
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1664_104;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1664_104_OffsetPadding_forAlignmentOnly[1664];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1664_104_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1680_105_OffsetPadding[1680];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1680
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1680_105;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1680_105_OffsetPadding_forAlignmentOnly[1680];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1680_105_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1696_106_OffsetPadding[1696];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1696
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1696_106;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1696_106_OffsetPadding_forAlignmentOnly[1696];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1696_106_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1712_107_OffsetPadding[1712];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1712
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1712_107;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1712_107_OffsetPadding_forAlignmentOnly[1712];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1712_107_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1728_108_OffsetPadding[1728];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1728
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1728_108;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1728_108_OffsetPadding_forAlignmentOnly[1728];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1728_108_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1744_109_OffsetPadding[1744];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1744
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1744_109;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1744_109_OffsetPadding_forAlignmentOnly[1744];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1744_109_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1760_110_OffsetPadding[1760];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1760
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1760_110;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1760_110_OffsetPadding_forAlignmentOnly[1760];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1760_110_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1776_111_OffsetPadding[1776];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1776
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1776_111;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1776_111_OffsetPadding_forAlignmentOnly[1776];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1776_111_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1792_112_OffsetPadding[1792];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1792
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1792_112;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1792_112_OffsetPadding_forAlignmentOnly[1792];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1792_112_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1808_113_OffsetPadding[1808];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1808
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1808_113;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1808_113_OffsetPadding_forAlignmentOnly[1808];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1808_113_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1824_114_OffsetPadding[1824];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1824
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1824_114;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1824_114_OffsetPadding_forAlignmentOnly[1824];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1824_114_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1840_115_OffsetPadding[1840];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1840
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1840_115;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1840_115_OffsetPadding_forAlignmentOnly[1840];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1840_115_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1856_116_OffsetPadding[1856];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1856
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1856_116;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1856_116_OffsetPadding_forAlignmentOnly[1856];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1856_116_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1872_117_OffsetPadding[1872];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1872
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1872_117;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1872_117_OffsetPadding_forAlignmentOnly[1872];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1872_117_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1888_118_OffsetPadding[1888];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1888
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1888_118;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1888_118_OffsetPadding_forAlignmentOnly[1888];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1888_118_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1904_119_OffsetPadding[1904];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1904
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1904_119;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1904_119_OffsetPadding_forAlignmentOnly[1904];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1904_119_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1920_120_OffsetPadding[1920];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1920
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1920_120;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1920_120_OffsetPadding_forAlignmentOnly[1920];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1920_120_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1936_121_OffsetPadding[1936];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1936
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1936_121;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1936_121_OffsetPadding_forAlignmentOnly[1936];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1936_121_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1952_122_OffsetPadding[1952];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1952
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1952_122;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1952_122_OffsetPadding_forAlignmentOnly[1952];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1952_122_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1968_123_OffsetPadding[1968];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1968
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1968_123;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1968_123_OffsetPadding_forAlignmentOnly[1968];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1968_123_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1984_124_OffsetPadding[1984];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1984
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1984_124;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1984_124_OffsetPadding_forAlignmentOnly[1984];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset1984_124_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2000_125_OffsetPadding[2000];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2000
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2000_125;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2000_125_OffsetPadding_forAlignmentOnly[2000];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2000_125_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2016_126_OffsetPadding[2016];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2016
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2016_126;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2016_126_OffsetPadding_forAlignmentOnly[2016];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2016_126_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2032_127_OffsetPadding[2032];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2032
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2032_127;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2032_127_OffsetPadding_forAlignmentOnly[2032];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2032_127_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2048_128_OffsetPadding[2048];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2048
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2048_128;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2048_128_OffsetPadding_forAlignmentOnly[2048];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2048_128_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2064_129_OffsetPadding[2064];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2064
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2064_129;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2064_129_OffsetPadding_forAlignmentOnly[2064];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2064_129_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2080_130_OffsetPadding[2080];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2080
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2080_130;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2080_130_OffsetPadding_forAlignmentOnly[2080];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2080_130_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2096_131_OffsetPadding[2096];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2096
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2096_131;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2096_131_OffsetPadding_forAlignmentOnly[2096];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2096_131_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2112_132_OffsetPadding[2112];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2112
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2112_132;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2112_132_OffsetPadding_forAlignmentOnly[2112];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2112_132_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2128_133_OffsetPadding[2128];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2128
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2128_133;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2128_133_OffsetPadding_forAlignmentOnly[2128];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2128_133_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2144_134_OffsetPadding[2144];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2144
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2144_134;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2144_134_OffsetPadding_forAlignmentOnly[2144];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2144_134_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2160_135_OffsetPadding[2160];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2160
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2160_135;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2160_135_OffsetPadding_forAlignmentOnly[2160];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2160_135_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2176_136_OffsetPadding[2176];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2176
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2176_136;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2176_136_OffsetPadding_forAlignmentOnly[2176];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2176_136_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2192_137_OffsetPadding[2192];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2192
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2192_137;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2192_137_OffsetPadding_forAlignmentOnly[2192];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2192_137_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2208_138_OffsetPadding[2208];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2208
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2208_138;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2208_138_OffsetPadding_forAlignmentOnly[2208];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2208_138_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2224_139_OffsetPadding[2224];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2224
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2224_139;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2224_139_OffsetPadding_forAlignmentOnly[2224];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2224_139_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2240_140_OffsetPadding[2240];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2240
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2240_140;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2240_140_OffsetPadding_forAlignmentOnly[2240];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2240_140_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2256_141_OffsetPadding[2256];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2256
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2256_141;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2256_141_OffsetPadding_forAlignmentOnly[2256];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2256_141_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2272_142_OffsetPadding[2272];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2272
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2272_142;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2272_142_OffsetPadding_forAlignmentOnly[2272];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2272_142_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2288_143_OffsetPadding[2288];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2288
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2288_143;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2288_143_OffsetPadding_forAlignmentOnly[2288];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2288_143_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2304_144_OffsetPadding[2304];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2304
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2304_144;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2304_144_OffsetPadding_forAlignmentOnly[2304];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2304_144_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2320_145_OffsetPadding[2320];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2320
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2320_145;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2320_145_OffsetPadding_forAlignmentOnly[2320];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2320_145_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2336_146_OffsetPadding[2336];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2336
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2336_146;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2336_146_OffsetPadding_forAlignmentOnly[2336];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2336_146_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2352_147_OffsetPadding[2352];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2352
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2352_147;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2352_147_OffsetPadding_forAlignmentOnly[2352];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2352_147_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2368_148_OffsetPadding[2368];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2368
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2368_148;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2368_148_OffsetPadding_forAlignmentOnly[2368];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2368_148_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2384_149_OffsetPadding[2384];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2384
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2384_149;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2384_149_OffsetPadding_forAlignmentOnly[2384];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2384_149_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2400_150_OffsetPadding[2400];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2400
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2400_150;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2400_150_OffsetPadding_forAlignmentOnly[2400];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2400_150_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2416_151_OffsetPadding[2416];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2416
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2416_151;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2416_151_OffsetPadding_forAlignmentOnly[2416];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2416_151_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2432_152_OffsetPadding[2432];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2432
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2432_152;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2432_152_OffsetPadding_forAlignmentOnly[2432];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2432_152_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2448_153_OffsetPadding[2448];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2448
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2448_153;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2448_153_OffsetPadding_forAlignmentOnly[2448];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2448_153_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2464_154_OffsetPadding[2464];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2464
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2464_154;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2464_154_OffsetPadding_forAlignmentOnly[2464];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2464_154_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2480_155_OffsetPadding[2480];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2480
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2480_155;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2480_155_OffsetPadding_forAlignmentOnly[2480];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2480_155_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2496_156_OffsetPadding[2496];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2496
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2496_156;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2496_156_OffsetPadding_forAlignmentOnly[2496];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2496_156_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2512_157_OffsetPadding[2512];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2512
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2512_157;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2512_157_OffsetPadding_forAlignmentOnly[2512];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2512_157_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2528_158_OffsetPadding[2528];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2528
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2528_158;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2528_158_OffsetPadding_forAlignmentOnly[2528];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2528_158_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2544_159_OffsetPadding[2544];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2544
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2544_159;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2544_159_OffsetPadding_forAlignmentOnly[2544];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2544_159_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2560_160_OffsetPadding[2560];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2560
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2560_160;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2560_160_OffsetPadding_forAlignmentOnly[2560];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2560_160_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2576_161_OffsetPadding[2576];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2576
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2576_161;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2576_161_OffsetPadding_forAlignmentOnly[2576];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2576_161_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2592_162_OffsetPadding[2592];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2592
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2592_162;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2592_162_OffsetPadding_forAlignmentOnly[2592];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2592_162_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2608_163_OffsetPadding[2608];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2608
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2608_163;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2608_163_OffsetPadding_forAlignmentOnly[2608];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2608_163_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2624_164_OffsetPadding[2624];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2624
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2624_164;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2624_164_OffsetPadding_forAlignmentOnly[2624];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2624_164_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2640_165_OffsetPadding[2640];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2640
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2640_165;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2640_165_OffsetPadding_forAlignmentOnly[2640];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2640_165_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2656_166_OffsetPadding[2656];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2656
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2656_166;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2656_166_OffsetPadding_forAlignmentOnly[2656];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2656_166_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2672_167_OffsetPadding[2672];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2672
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2672_167;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2672_167_OffsetPadding_forAlignmentOnly[2672];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2672_167_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2688_168_OffsetPadding[2688];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2688
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2688_168;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2688_168_OffsetPadding_forAlignmentOnly[2688];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2688_168_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2704_169_OffsetPadding[2704];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2704
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2704_169;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2704_169_OffsetPadding_forAlignmentOnly[2704];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2704_169_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2720_170_OffsetPadding[2720];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2720
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2720_170;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2720_170_OffsetPadding_forAlignmentOnly[2720];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2720_170_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2736_171_OffsetPadding[2736];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2736
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2736_171;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2736_171_OffsetPadding_forAlignmentOnly[2736];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2736_171_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2752_172_OffsetPadding[2752];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2752
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2752_172;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2752_172_OffsetPadding_forAlignmentOnly[2752];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2752_172_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2768_173_OffsetPadding[2768];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2768
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2768_173;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2768_173_OffsetPadding_forAlignmentOnly[2768];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2768_173_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2784_174_OffsetPadding[2784];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2784
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2784_174;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2784_174_OffsetPadding_forAlignmentOnly[2784];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2784_174_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2800_175_OffsetPadding[2800];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2800
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2800_175;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2800_175_OffsetPadding_forAlignmentOnly[2800];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2800_175_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2816_176_OffsetPadding[2816];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2816
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2816_176;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2816_176_OffsetPadding_forAlignmentOnly[2816];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2816_176_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2832_177_OffsetPadding[2832];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2832
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2832_177;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2832_177_OffsetPadding_forAlignmentOnly[2832];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2832_177_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2848_178_OffsetPadding[2848];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2848
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2848_178;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2848_178_OffsetPadding_forAlignmentOnly[2848];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2848_178_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2864_179_OffsetPadding[2864];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2864
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2864_179;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2864_179_OffsetPadding_forAlignmentOnly[2864];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2864_179_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2880_180_OffsetPadding[2880];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2880
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2880_180;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2880_180_OffsetPadding_forAlignmentOnly[2880];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2880_180_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2896_181_OffsetPadding[2896];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2896
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2896_181;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2896_181_OffsetPadding_forAlignmentOnly[2896];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2896_181_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2912_182_OffsetPadding[2912];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2912
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2912_182;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2912_182_OffsetPadding_forAlignmentOnly[2912];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2912_182_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2928_183_OffsetPadding[2928];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2928
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2928_183;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2928_183_OffsetPadding_forAlignmentOnly[2928];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2928_183_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2944_184_OffsetPadding[2944];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2944
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2944_184;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2944_184_OffsetPadding_forAlignmentOnly[2944];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2944_184_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2960_185_OffsetPadding[2960];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2960
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2960_185;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2960_185_OffsetPadding_forAlignmentOnly[2960];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2960_185_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2976_186_OffsetPadding[2976];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2976
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2976_186;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2976_186_OffsetPadding_forAlignmentOnly[2976];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2976_186_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2992_187_OffsetPadding[2992];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2992
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2992_187;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2992_187_OffsetPadding_forAlignmentOnly[2992];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset2992_187_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3008_188_OffsetPadding[3008];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3008
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3008_188;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3008_188_OffsetPadding_forAlignmentOnly[3008];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3008_188_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3024_189_OffsetPadding[3024];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3024
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3024_189;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3024_189_OffsetPadding_forAlignmentOnly[3024];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3024_189_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3040_190_OffsetPadding[3040];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3040
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3040_190;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3040_190_OffsetPadding_forAlignmentOnly[3040];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3040_190_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3056_191_OffsetPadding[3056];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3056
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3056_191;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3056_191_OffsetPadding_forAlignmentOnly[3056];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3056_191_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3072_192_OffsetPadding[3072];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3072
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3072_192;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3072_192_OffsetPadding_forAlignmentOnly[3072];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3072_192_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3088_193_OffsetPadding[3088];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3088
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3088_193;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3088_193_OffsetPadding_forAlignmentOnly[3088];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3088_193_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3104_194_OffsetPadding[3104];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3104
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3104_194;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3104_194_OffsetPadding_forAlignmentOnly[3104];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3104_194_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3120_195_OffsetPadding[3120];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3120
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3120_195;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3120_195_OffsetPadding_forAlignmentOnly[3120];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3120_195_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3136_196_OffsetPadding[3136];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3136
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3136_196;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3136_196_OffsetPadding_forAlignmentOnly[3136];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3136_196_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3152_197_OffsetPadding[3152];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3152
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3152_197;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3152_197_OffsetPadding_forAlignmentOnly[3152];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3152_197_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3168_198_OffsetPadding[3168];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3168
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3168_198;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3168_198_OffsetPadding_forAlignmentOnly[3168];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3168_198_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3184_199_OffsetPadding[3184];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3184
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3184_199;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3184_199_OffsetPadding_forAlignmentOnly[3184];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3184_199_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3200_200_OffsetPadding[3200];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3200
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3200_200;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3200_200_OffsetPadding_forAlignmentOnly[3200];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3200_200_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3216_201_OffsetPadding[3216];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3216
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3216_201;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3216_201_OffsetPadding_forAlignmentOnly[3216];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3216_201_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3232_202_OffsetPadding[3232];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3232
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3232_202;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3232_202_OffsetPadding_forAlignmentOnly[3232];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3232_202_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3248_203_OffsetPadding[3248];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3248
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3248_203;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3248_203_OffsetPadding_forAlignmentOnly[3248];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3248_203_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3264_204_OffsetPadding[3264];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3264
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3264_204;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3264_204_OffsetPadding_forAlignmentOnly[3264];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3264_204_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3280_205_OffsetPadding[3280];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3280
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3280_205;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3280_205_OffsetPadding_forAlignmentOnly[3280];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3280_205_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3296_206_OffsetPadding[3296];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3296
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3296_206;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3296_206_OffsetPadding_forAlignmentOnly[3296];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3296_206_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3312_207_OffsetPadding[3312];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3312
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3312_207;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3312_207_OffsetPadding_forAlignmentOnly[3312];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3312_207_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3328_208_OffsetPadding[3328];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3328
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3328_208;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3328_208_OffsetPadding_forAlignmentOnly[3328];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3328_208_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3344_209_OffsetPadding[3344];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3344
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3344_209;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3344_209_OffsetPadding_forAlignmentOnly[3344];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3344_209_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3360_210_OffsetPadding[3360];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3360
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3360_210;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3360_210_OffsetPadding_forAlignmentOnly[3360];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3360_210_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3376_211_OffsetPadding[3376];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3376
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3376_211;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3376_211_OffsetPadding_forAlignmentOnly[3376];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3376_211_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3392_212_OffsetPadding[3392];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3392
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3392_212;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3392_212_OffsetPadding_forAlignmentOnly[3392];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3392_212_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3408_213_OffsetPadding[3408];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3408
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3408_213;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3408_213_OffsetPadding_forAlignmentOnly[3408];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3408_213_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3424_214_OffsetPadding[3424];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3424
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3424_214;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3424_214_OffsetPadding_forAlignmentOnly[3424];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3424_214_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3440_215_OffsetPadding[3440];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3440
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3440_215;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3440_215_OffsetPadding_forAlignmentOnly[3440];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3440_215_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3456_216_OffsetPadding[3456];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3456
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3456_216;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3456_216_OffsetPadding_forAlignmentOnly[3456];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3456_216_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3472_217_OffsetPadding[3472];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3472
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3472_217;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3472_217_OffsetPadding_forAlignmentOnly[3472];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3472_217_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3488_218_OffsetPadding[3488];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3488
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3488_218;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3488_218_OffsetPadding_forAlignmentOnly[3488];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3488_218_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3504_219_OffsetPadding[3504];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3504
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3504_219;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3504_219_OffsetPadding_forAlignmentOnly[3504];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3504_219_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3520_220_OffsetPadding[3520];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3520
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3520_220;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3520_220_OffsetPadding_forAlignmentOnly[3520];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3520_220_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3536_221_OffsetPadding[3536];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3536
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3536_221;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3536_221_OffsetPadding_forAlignmentOnly[3536];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3536_221_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3552_222_OffsetPadding[3552];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3552
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3552_222;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3552_222_OffsetPadding_forAlignmentOnly[3552];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3552_222_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3568_223_OffsetPadding[3568];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3568
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3568_223;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3568_223_OffsetPadding_forAlignmentOnly[3568];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3568_223_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3584_224_OffsetPadding[3584];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3584
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3584_224;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3584_224_OffsetPadding_forAlignmentOnly[3584];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3584_224_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3600_225_OffsetPadding[3600];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3600
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3600_225;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3600_225_OffsetPadding_forAlignmentOnly[3600];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3600_225_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3616_226_OffsetPadding[3616];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3616
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3616_226;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3616_226_OffsetPadding_forAlignmentOnly[3616];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3616_226_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3632_227_OffsetPadding[3632];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3632
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3632_227;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3632_227_OffsetPadding_forAlignmentOnly[3632];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3632_227_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3648_228_OffsetPadding[3648];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3648
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3648_228;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3648_228_OffsetPadding_forAlignmentOnly[3648];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3648_228_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3664_229_OffsetPadding[3664];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3664
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3664_229;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3664_229_OffsetPadding_forAlignmentOnly[3664];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3664_229_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3680_230_OffsetPadding[3680];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3680
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3680_230;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3680_230_OffsetPadding_forAlignmentOnly[3680];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3680_230_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3696_231_OffsetPadding[3696];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3696
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3696_231;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3696_231_OffsetPadding_forAlignmentOnly[3696];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3696_231_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3712_232_OffsetPadding[3712];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3712
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3712_232;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3712_232_OffsetPadding_forAlignmentOnly[3712];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3712_232_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3728_233_OffsetPadding[3728];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3728
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3728_233;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3728_233_OffsetPadding_forAlignmentOnly[3728];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3728_233_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3744_234_OffsetPadding[3744];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3744
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3744_234;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3744_234_OffsetPadding_forAlignmentOnly[3744];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3744_234_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3760_235_OffsetPadding[3760];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3760
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3760_235;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3760_235_OffsetPadding_forAlignmentOnly[3760];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3760_235_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3776_236_OffsetPadding[3776];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3776
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3776_236;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3776_236_OffsetPadding_forAlignmentOnly[3776];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3776_236_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3792_237_OffsetPadding[3792];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3792
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3792_237;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3792_237_OffsetPadding_forAlignmentOnly[3792];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3792_237_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3808_238_OffsetPadding[3808];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3808
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3808_238;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3808_238_OffsetPadding_forAlignmentOnly[3808];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3808_238_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3824_239_OffsetPadding[3824];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3824
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3824_239;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3824_239_OffsetPadding_forAlignmentOnly[3824];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3824_239_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3840_240_OffsetPadding[3840];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3840
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3840_240;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3840_240_OffsetPadding_forAlignmentOnly[3840];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3840_240_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3856_241_OffsetPadding[3856];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3856
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3856_241;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3856_241_OffsetPadding_forAlignmentOnly[3856];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3856_241_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3872_242_OffsetPadding[3872];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3872
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3872_242;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3872_242_OffsetPadding_forAlignmentOnly[3872];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3872_242_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3888_243_OffsetPadding[3888];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3888
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3888_243;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3888_243_OffsetPadding_forAlignmentOnly[3888];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3888_243_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3904_244_OffsetPadding[3904];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3904
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3904_244;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3904_244_OffsetPadding_forAlignmentOnly[3904];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3904_244_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3920_245_OffsetPadding[3920];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3920
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3920_245;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3920_245_OffsetPadding_forAlignmentOnly[3920];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3920_245_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3936_246_OffsetPadding[3936];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3936
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3936_246;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3936_246_OffsetPadding_forAlignmentOnly[3936];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3936_246_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3952_247_OffsetPadding[3952];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3952
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3952_247;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3952_247_OffsetPadding_forAlignmentOnly[3952];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3952_247_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3968_248_OffsetPadding[3968];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3968
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3968_248;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3968_248_OffsetPadding_forAlignmentOnly[3968];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3968_248_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3984_249_OffsetPadding[3984];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3984
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3984_249;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3984_249_OffsetPadding_forAlignmentOnly[3984];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset3984_249_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4000_250_OffsetPadding[4000];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset4000
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4000_250;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4000_250_OffsetPadding_forAlignmentOnly[4000];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4000_250_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4016_251_OffsetPadding[4016];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset4016
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4016_251;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4016_251_OffsetPadding_forAlignmentOnly[4016];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4016_251_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4032_252_OffsetPadding[4032];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset4032
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4032_252;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4032_252_OffsetPadding_forAlignmentOnly[4032];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4032_252_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4048_253_OffsetPadding[4048];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset4048
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4048_253;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4048_253_OffsetPadding_forAlignmentOnly[4048];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4048_253_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4064_254_OffsetPadding[4064];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset4064
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4064_254;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4064_254_OffsetPadding_forAlignmentOnly[4064];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset4064_254_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4080_255_OffsetPadding[4080];
					// System.Byte Unity.Collections.FixedBytes4094::byte4080
					uint8_t ___byte4080_255;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4080_255_OffsetPadding_forAlignmentOnly[4080];
					uint8_t ___byte4080_255_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4081_256_OffsetPadding[4081];
					// System.Byte Unity.Collections.FixedBytes4094::byte4081
					uint8_t ___byte4081_256;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4081_256_OffsetPadding_forAlignmentOnly[4081];
					uint8_t ___byte4081_256_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4082_257_OffsetPadding[4082];
					// System.Byte Unity.Collections.FixedBytes4094::byte4082
					uint8_t ___byte4082_257;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4082_257_OffsetPadding_forAlignmentOnly[4082];
					uint8_t ___byte4082_257_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4083_258_OffsetPadding[4083];
					// System.Byte Unity.Collections.FixedBytes4094::byte4083
					uint8_t ___byte4083_258;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4083_258_OffsetPadding_forAlignmentOnly[4083];
					uint8_t ___byte4083_258_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4084_259_OffsetPadding[4084];
					// System.Byte Unity.Collections.FixedBytes4094::byte4084
					uint8_t ___byte4084_259;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4084_259_OffsetPadding_forAlignmentOnly[4084];
					uint8_t ___byte4084_259_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4085_260_OffsetPadding[4085];
					// System.Byte Unity.Collections.FixedBytes4094::byte4085
					uint8_t ___byte4085_260;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4085_260_OffsetPadding_forAlignmentOnly[4085];
					uint8_t ___byte4085_260_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4086_261_OffsetPadding[4086];
					// System.Byte Unity.Collections.FixedBytes4094::byte4086
					uint8_t ___byte4086_261;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4086_261_OffsetPadding_forAlignmentOnly[4086];
					uint8_t ___byte4086_261_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4087_262_OffsetPadding[4087];
					// System.Byte Unity.Collections.FixedBytes4094::byte4087
					uint8_t ___byte4087_262;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4087_262_OffsetPadding_forAlignmentOnly[4087];
					uint8_t ___byte4087_262_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4088_263_OffsetPadding[4088];
					// System.Byte Unity.Collections.FixedBytes4094::byte4088
					uint8_t ___byte4088_263;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4088_263_OffsetPadding_forAlignmentOnly[4088];
					uint8_t ___byte4088_263_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4089_264_OffsetPadding[4089];
					// System.Byte Unity.Collections.FixedBytes4094::byte4089
					uint8_t ___byte4089_264;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4089_264_OffsetPadding_forAlignmentOnly[4089];
					uint8_t ___byte4089_264_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4090_265_OffsetPadding[4090];
					// System.Byte Unity.Collections.FixedBytes4094::byte4090
					uint8_t ___byte4090_265;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4090_265_OffsetPadding_forAlignmentOnly[4090];
					uint8_t ___byte4090_265_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4091_266_OffsetPadding[4091];
					// System.Byte Unity.Collections.FixedBytes4094::byte4091
					uint8_t ___byte4091_266;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4091_266_OffsetPadding_forAlignmentOnly[4091];
					uint8_t ___byte4091_266_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4092_267_OffsetPadding[4092];
					// System.Byte Unity.Collections.FixedBytes4094::byte4092
					uint8_t ___byte4092_267;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4092_267_OffsetPadding_forAlignmentOnly[4092];
					uint8_t ___byte4092_267_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4093_268_OffsetPadding[4093];
					// System.Byte Unity.Collections.FixedBytes4094::byte4093
					uint8_t ___byte4093_268;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4093_268_OffsetPadding_forAlignmentOnly[4093];
					uint8_t ___byte4093_268_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes4094_t8611441D8BDC6A677C2D9E551086F59EFBFCBBE5__padding[4094];
	};
};

// Unity.Networking.Transport.TLS.ManagedSecureFunctions
struct ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937  : public RuntimeObject
{
};

// Unity.Networking.Transport.NetworkEndPoint
struct NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 
{
	// Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress Unity.Networking.Transport.NetworkEndPoint::rawNetworkAddress
	Baselib_NetworkAddress_t2F4AF92B4EEFE31182BADF512CA004AFF48128E0 ___rawNetworkAddress_1;
};

// Unity.Networking.Transport.NetworkInterfaceEndPoint
struct NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 
{
	// System.Int32 Unity.Networking.Transport.NetworkInterfaceEndPoint::dataLength
	int32_t ___dataLength_1;
	// Unity.Networking.Transport.NetworkInterfaceEndPoint/<data>e__FixedBuffer Unity.Networking.Transport.NetworkInterfaceEndPoint::data
	U3CdataU3Ee__FixedBuffer_tA444E672C5AB32F413A3235C5075E48F04008AA0 ___data_2;
};

// Unity.Networking.Transport.NetworkInterfaceSendHandle
struct NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3 
{
	// System.IntPtr Unity.Networking.Transport.NetworkInterfaceSendHandle::data
	intptr_t ___data_0;
	// System.Int32 Unity.Networking.Transport.NetworkInterfaceSendHandle::capacity
	int32_t ___capacity_1;
	// System.Int32 Unity.Networking.Transport.NetworkInterfaceSendHandle::size
	int32_t ___size_2;
	// System.Int32 Unity.Networking.Transport.NetworkInterfaceSendHandle::id
	int32_t ___id_3;
	// Unity.Networking.Transport.SendHandleFlags Unity.Networking.Transport.NetworkInterfaceSendHandle::flags
	int32_t ___flags_4;
};

// Unity.Networking.Transport.NetworkSendQueueHandle
struct NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090 
{
	// System.IntPtr Unity.Networking.Transport.NetworkSendQueueHandle::handle
	intptr_t ___handle_0;
};

// Unity.Networking.Transport.Relay.RelayAllocationId
struct RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 
{
	// Unity.Networking.Transport.Relay.RelayAllocationId/<Value>e__FixedBuffer Unity.Networking.Transport.Relay.RelayAllocationId::Value
	U3CValueU3Ee__FixedBuffer_t0E279F5AD765D68C7D3ADB57B98FD471710955C8 ___Value_0;
};

// Unity.Networking.Transport.Relay.RelayConnectionData
struct RelayConnectionData_tA5306A14AEB9FA72A119334CBE01CE0B1F7AC18D 
{
	// Unity.Networking.Transport.Relay.RelayConnectionData/<Value>e__FixedBuffer Unity.Networking.Transport.Relay.RelayConnectionData::Value
	U3CValueU3Ee__FixedBuffer_t2EBBD6566B9DD8EF0CBC9EF9A9340955B5792054 ___Value_0;
};

// Unity.Networking.Transport.Relay.RelayHMACKey
struct RelayHMACKey_t8A1480D4E69892635FBA3B1408C094733613B844 
{
	// Unity.Networking.Transport.Relay.RelayHMACKey/<Value>e__FixedBuffer Unity.Networking.Transport.Relay.RelayHMACKey::Value
	U3CValueU3Ee__FixedBuffer_t3C8B36A587C8DE2573C0B7FD1CBD94E571B38A67 ___Value_0;
};

// Unity.Networking.Transport.Relay.RelayNetworkProtocol
struct RelayNetworkProtocol_tD7EB1F41E6E4E1E3F12A681F08030C24245E867B 
{
	// System.IntPtr Unity.Networking.Transport.Relay.RelayNetworkProtocol::UserData
	intptr_t ___UserData_0;
};

// Unity.Networking.Transport.SessionIdToken
struct SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Networking.Transport.SessionIdToken/<Value>e__FixedBuffer Unity.Networking.Transport.SessionIdToken::Value
			U3CValueU3Ee__FixedBuffer_t4CE95A1DC9ED09372188CEDA707F9A09B897742D ___Value_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			U3CValueU3Ee__FixedBuffer_t4CE95A1DC9ED09372188CEDA707F9A09B897742D ___Value_1_forAlignmentOnly;
		};
	};
};

// Unity.TLS.LowLevel.Binding/unitytls_client
struct unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80 
{
	// System.UInt32 Unity.TLS.LowLevel.Binding/unitytls_client::role
	uint32_t ___role_0;
	// System.UInt32 Unity.TLS.LowLevel.Binding/unitytls_client::state
	uint32_t ___state_1;
	// System.UInt32 Unity.TLS.LowLevel.Binding/unitytls_client::handshakeState
	uint32_t ___handshakeState_2;
	// System.IntPtr Unity.TLS.LowLevel.Binding/unitytls_client::ctx
	intptr_t ___ctx_3;
	// Unity.TLS.LowLevel.Binding/unitytls_client_config* Unity.TLS.LowLevel.Binding/unitytls_client::config
	unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* ___config_4;
	// System.IntPtr Unity.TLS.LowLevel.Binding/unitytls_client::internalCtx
	intptr_t ___internalCtx_5;
};

// Unity.TLS.LowLevel.Binding/unitytls_dataRef
struct unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 
{
	// System.Byte* Unity.TLS.LowLevel.Binding/unitytls_dataRef::dataPtr
	uint8_t* ___dataPtr_0;
	// System.UIntPtr Unity.TLS.LowLevel.Binding/unitytls_dataRef::dataLen
	uintptr_t ___dataLen_1;
};

// Unity.Networking.Transport.Utilities.ReliableUtility/ReliablePacket
struct ReliablePacket_t338CE432D688A8C732B0705415F25B05A2AD3D04 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Networking.Transport.Utilities.ReliableUtility/ReliableHeader Unity.Networking.Transport.Utilities.ReliableUtility/ReliablePacket::Header
			ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 ___Header_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 ___Header_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Networking.Transport.Utilities.ReliableUtility/ReliablePacket/<Buffer>e__FixedBuffer Unity.Networking.Transport.Utilities.ReliableUtility/ReliablePacket::Buffer
			U3CBufferU3Ee__FixedBuffer_tB9F94B824C0925E29D2EFA057FC5B438259715FE ___Buffer_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			U3CBufferU3Ee__FixedBuffer_tB9F94B824C0925E29D2EFA057FC5B438259715FE ___Buffer_1_forAlignmentOnly;
		};
	};
};

// Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext
struct SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0 
{
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::WindowSize
	int32_t ___WindowSize_0;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::MinimumResendTime
	int32_t ___MinimumResendTime_1;
	// Unity.Networking.Transport.Utilities.SequenceBufferContext Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::SentPackets
	SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599 ___SentPackets_2;
	// Unity.Networking.Transport.Utilities.SequenceBufferContext Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::ReceivedPackets
	SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599 ___ReceivedPackets_3;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::DuplicatesSinceLastAck
	int32_t ___DuplicatesSinceLastAck_4;
	// Unity.Networking.Transport.Utilities.ReliableUtility/Statistics Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::stats
	Statistics_t11CF93D4C83ABFDDFD0BBAD848B752181939A2E5 ___stats_5;
	// Unity.Networking.Transport.Utilities.ReliableUtility/ErrorCodes Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::errorCode
	int32_t ___errorCode_6;
	// Unity.Networking.Transport.Utilities.ReliableUtility/RTTInfo Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::RttInfo
	RTTInfo_tAF1A100DBA67BD0367A9ABA6928B4E574CBE5518 ___RttInfo_7;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::TimerDataOffset
	int32_t ___TimerDataOffset_8;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::TimerDataStride
	int32_t ___TimerDataStride_9;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::RemoteTimerDataOffset
	int32_t ___RemoteTimerDataOffset_10;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::RemoteTimerDataStride
	int32_t ___RemoteTimerDataStride_11;
};

// Unity.Networking.Transport.Utilities.SimulatorUtility/Context
struct Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24 
{
	// System.Int32 Unity.Networking.Transport.Utilities.SimulatorUtility/Context::MaxPacketCount
	int32_t ___MaxPacketCount_0;
	// System.Int32 Unity.Networking.Transport.Utilities.SimulatorUtility/Context::MaxPacketSize
	int32_t ___MaxPacketSize_1;
	// System.Int32 Unity.Networking.Transport.Utilities.SimulatorUtility/Context::PacketDelayMs
	int32_t ___PacketDelayMs_2;
	// System.Int32 Unity.Networking.Transport.Utilities.SimulatorUtility/Context::PacketJitterMs
	int32_t ___PacketJitterMs_3;
	// System.Int32 Unity.Networking.Transport.Utilities.SimulatorUtility/Context::PacketDrop
	int32_t ___PacketDrop_4;
	// System.Int32 Unity.Networking.Transport.Utilities.SimulatorUtility/Context::FuzzOffset
	int32_t ___FuzzOffset_5;
	// System.Int32 Unity.Networking.Transport.Utilities.SimulatorUtility/Context::FuzzFactor
	int32_t ___FuzzFactor_6;
	// System.UInt32 Unity.Networking.Transport.Utilities.SimulatorUtility/Context::RandomSeed
	uint32_t ___RandomSeed_7;
	// Unity.Mathematics.Random Unity.Networking.Transport.Utilities.SimulatorUtility/Context::Random
	Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37 ___Random_8;
	// System.Int32 Unity.Networking.Transport.Utilities.SimulatorUtility/Context::PacketCount
	int32_t ___PacketCount_9;
	// System.Int32 Unity.Networking.Transport.Utilities.SimulatorUtility/Context::PacketDropCount
	int32_t ___PacketDropCount_10;
	// System.Int32 Unity.Networking.Transport.Utilities.SimulatorUtility/Context::ReadyPackets
	int32_t ___ReadyPackets_11;
	// System.Int32 Unity.Networking.Transport.Utilities.SimulatorUtility/Context::WaitingPackets
	int32_t ___WaitingPackets_12;
	// System.Int64 Unity.Networking.Transport.Utilities.SimulatorUtility/Context::NextPacketTime
	int64_t ___NextPacketTime_13;
	// System.Int64 Unity.Networking.Transport.Utilities.SimulatorUtility/Context::StatsTime
	int64_t ___StatsTime_14;
};

// Unity.Collections.NativeHashMap`2<System.Int64,Unity.Networking.Transport.NetworkSettings/ParameterSlice>
struct NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<TKey,TValue> Unity.Collections.NativeHashMap`2::m_HashMapData
	UnsafeHashMap_2_tF7A9469DA8C5BBA8B491A7436DE7FD6D75DE130B ___m_HashMapData_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<System.Object>
struct TransportFunctionPointer_1_tA72106224B7FDE775C5A204F61EFF97167778993 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate>
struct TransportFunctionPointer_1_t403A4BA6983AC49EB5EDF3EB14F092C746490EFF 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_tF29FF6D2564E315434ED47AB1554C8096BDB3B3A ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ConnectDelegate>
struct TransportFunctionPointer_1_t71E737606530D4C87CDCF73063247BA844270CFF 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t8C37DE1737CA4B219489A8BE872435F8391F4F08 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate>
struct TransportFunctionPointer_1_t8CB155AD69427676535F5D25A3C9408D5012DDB0 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t2B11019D68001BBA761F297DF394B647E9B2D0AF ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate>
struct TransportFunctionPointer_1_tF0C75E421ACA913F2FA062ED002F9586FEA669FC 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_tE199B9295009A8E22A29B6DDD22ED499A663A39B ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate>
struct TransportFunctionPointer_1_t8BEB3732EF9358D73F93626B99D9423182E4C47D 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t04915FE164A4EB6B97CE508C2D62CCB1830EDD86 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate>
struct TransportFunctionPointer_1_t77C607A1DCF675C39F99E9EEE5AB36FB7CC494B1 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t10B538976246CA89EE16B10A9A3F981194F98C59 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate>
struct TransportFunctionPointer_1_t97CB0A2F7C4082FD45ACA0AE4155845480AE8843 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t87DC6AA7478438FC2A893CEFC30932DB880EECFE ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate>
struct TransportFunctionPointer_1_t1974F1C28035CE103ECF0504CE8E87D6037E0398 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t92B1E9993FD30276E18F8D355C528D0024CE9CEF ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/UpdateDelegate>
struct TransportFunctionPointer_1_tBB4FC4ACEB955CF3ECDC5FB78DE9132C126522F2 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t646F6606413775C943F0F4782FBB82DED8FB3123 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate>
struct TransportFunctionPointer_1_t6BF0E9809FEF820449ED4B566281FFDB8B1F6807 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t605FCD8E1E05F041A75BCDAE5CE44D9A201BFAA1 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate>
struct TransportFunctionPointer_1_t9F2FD24758ADF9E597DCA02A01D7972B74AF6736 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t5E2F5FC9CFE7FBBBECA6EB73BABFA0CD5F645155 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate>
struct TransportFunctionPointer_1_t1933A8E5B03799A74CE910DB0A4F8FF67DD0405D 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_tD15B3870776AA5A42DBB36B9CCA6AA930B9628DE ___Ptr_0;
};

// Unity.Collections.FixedString32Bytes
struct FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 
{
	union
	{
		struct
		{
			// System.UInt16 Unity.Collections.FixedString32Bytes::utf8LengthInBytes
			uint16_t ___utf8LengthInBytes_0;
			// Unity.Collections.FixedBytes30 Unity.Collections.FixedString32Bytes::bytes
			FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2 ___bytes_1;
		};
		uint8_t FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824__padding[32];
	};
};

// Unity.Collections.FixedString4096Bytes
struct FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21 
{
	union
	{
		struct
		{
			// System.UInt16 Unity.Collections.FixedString4096Bytes::utf8LengthInBytes
			uint16_t ___utf8LengthInBytes_0;
			// Unity.Collections.FixedBytes4094 Unity.Collections.FixedString4096Bytes::bytes
			FixedBytes4094_t8611441D8BDC6A677C2D9E551086F59EFBFCBBE5 ___bytes_1;
		};
		uint8_t FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21__padding[4096];
	};
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

// Unity.Networking.Transport.NetworkPipelineContext
struct NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD 
{
	// System.Byte* Unity.Networking.Transport.NetworkPipelineContext::staticInstanceBuffer
	uint8_t* ___staticInstanceBuffer_0;
	// System.Byte* Unity.Networking.Transport.NetworkPipelineContext::internalSharedProcessBuffer
	uint8_t* ___internalSharedProcessBuffer_1;
	// System.Byte* Unity.Networking.Transport.NetworkPipelineContext::internalProcessBuffer
	uint8_t* ___internalProcessBuffer_2;
	// Unity.Networking.Transport.DataStreamWriter Unity.Networking.Transport.NetworkPipelineContext::header
	DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA ___header_3;
	// System.Int64 Unity.Networking.Transport.NetworkPipelineContext::timestamp
	int64_t ___timestamp_4;
	// System.Int32 Unity.Networking.Transport.NetworkPipelineContext::staticInstanceBufferLength
	int32_t ___staticInstanceBufferLength_5;
	// System.Int32 Unity.Networking.Transport.NetworkPipelineContext::internalSharedProcessBufferLength
	int32_t ___internalSharedProcessBufferLength_6;
	// System.Int32 Unity.Networking.Transport.NetworkPipelineContext::internalProcessBufferLength
	int32_t ___internalProcessBufferLength_7;
	// System.Int32 Unity.Networking.Transport.NetworkPipelineContext::accumulatedHeaderCapacity
	int32_t ___accumulatedHeaderCapacity_8;
};

// Unity.Networking.Transport.Relay.RelayMessageAccepted
struct RelayMessageAccepted_t899EF667E1A400FA62FB35FF7F6AFA28087F16EB 
{
	// Unity.Networking.Transport.Relay.RelayMessageHeader Unity.Networking.Transport.Relay.RelayMessageAccepted::Header
	RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72 ___Header_0;
	// Unity.Networking.Transport.Relay.RelayAllocationId Unity.Networking.Transport.Relay.RelayMessageAccepted::FromAllocationId
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___FromAllocationId_1;
	// Unity.Networking.Transport.Relay.RelayAllocationId Unity.Networking.Transport.Relay.RelayMessageAccepted::ToAllocationId
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___ToAllocationId_2;
};

// Unity.Networking.Transport.Relay.RelayMessageConnectRequest
struct RelayMessageConnectRequest_t35AB449CCDF5E31947A8D6CBC59BD62F8A3BEB3C 
{
	// Unity.Networking.Transport.Relay.RelayMessageHeader Unity.Networking.Transport.Relay.RelayMessageConnectRequest::Header
	RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72 ___Header_0;
	// Unity.Networking.Transport.Relay.RelayAllocationId Unity.Networking.Transport.Relay.RelayMessageConnectRequest::AllocationId
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___AllocationId_1;
	// System.Byte Unity.Networking.Transport.Relay.RelayMessageConnectRequest::ToConnectionDataLength
	uint8_t ___ToConnectionDataLength_2;
	// Unity.Networking.Transport.Relay.RelayConnectionData Unity.Networking.Transport.Relay.RelayMessageConnectRequest::ToConnectionData
	RelayConnectionData_tA5306A14AEB9FA72A119334CBE01CE0B1F7AC18D ___ToConnectionData_3;
};

// Unity.Networking.Transport.Relay.RelayMessageDisconnect
struct RelayMessageDisconnect_t96DE3DA36403F2F6EABDF3624DE6F85888CC543D 
{
	// Unity.Networking.Transport.Relay.RelayMessageHeader Unity.Networking.Transport.Relay.RelayMessageDisconnect::Header
	RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72 ___Header_0;
	// Unity.Networking.Transport.Relay.RelayAllocationId Unity.Networking.Transport.Relay.RelayMessageDisconnect::FromAllocationId
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___FromAllocationId_1;
	// Unity.Networking.Transport.Relay.RelayAllocationId Unity.Networking.Transport.Relay.RelayMessageDisconnect::ToAllocationId
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___ToAllocationId_2;
};

// Unity.Networking.Transport.Relay.RelayMessageError
struct RelayMessageError_tCDCB652879438DF82C173B436BAA9743065667BD 
{
	// Unity.Networking.Transport.Relay.RelayMessageHeader Unity.Networking.Transport.Relay.RelayMessageError::Header
	RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72 ___Header_0;
	// Unity.Networking.Transport.Relay.RelayAllocationId Unity.Networking.Transport.Relay.RelayMessageError::AllocationId
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___AllocationId_1;
	// System.Byte Unity.Networking.Transport.Relay.RelayMessageError::ErrorCode
	uint8_t ___ErrorCode_2;
};

// Unity.Networking.Transport.Relay.RelayMessagePing
struct RelayMessagePing_t38F5F4C34944AE32ACC92EBDB4B86C33465CA2E2 
{
	// Unity.Networking.Transport.Relay.RelayMessageHeader Unity.Networking.Transport.Relay.RelayMessagePing::Header
	RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72 ___Header_0;
	// Unity.Networking.Transport.Relay.RelayAllocationId Unity.Networking.Transport.Relay.RelayMessagePing::FromAllocationId
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___FromAllocationId_1;
	// System.UInt16 Unity.Networking.Transport.Relay.RelayMessagePing::SequenceNumber
	uint16_t ___SequenceNumber_2;
};

// Unity.Networking.Transport.Relay.RelayMessageRelay
struct RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49 
{
	// Unity.Networking.Transport.Relay.RelayMessageHeader Unity.Networking.Transport.Relay.RelayMessageRelay::Header
	RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72 ___Header_0;
	// Unity.Networking.Transport.Relay.RelayAllocationId Unity.Networking.Transport.Relay.RelayMessageRelay::FromAllocationId
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___FromAllocationId_1;
	// Unity.Networking.Transport.Relay.RelayAllocationId Unity.Networking.Transport.Relay.RelayMessageRelay::ToAllocationId
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___ToAllocationId_2;
	// System.UInt16 Unity.Networking.Transport.Relay.RelayMessageRelay::DataLength
	uint16_t ___DataLength_3;
};

// Unity.Networking.Transport.Relay.RelayServerData
struct RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 
{
	// Unity.Networking.Transport.NetworkEndPoint Unity.Networking.Transport.Relay.RelayServerData::Endpoint
	NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ___Endpoint_0;
	// System.UInt16 Unity.Networking.Transport.Relay.RelayServerData::Nonce
	uint16_t ___Nonce_1;
	// Unity.Networking.Transport.Relay.RelayConnectionData Unity.Networking.Transport.Relay.RelayServerData::ConnectionData
	RelayConnectionData_tA5306A14AEB9FA72A119334CBE01CE0B1F7AC18D ___ConnectionData_2;
	// Unity.Networking.Transport.Relay.RelayConnectionData Unity.Networking.Transport.Relay.RelayServerData::HostConnectionData
	RelayConnectionData_tA5306A14AEB9FA72A119334CBE01CE0B1F7AC18D ___HostConnectionData_3;
	// Unity.Networking.Transport.Relay.RelayAllocationId Unity.Networking.Transport.Relay.RelayServerData::AllocationId
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___AllocationId_4;
	// Unity.Networking.Transport.Relay.RelayHMACKey Unity.Networking.Transport.Relay.RelayServerData::HMACKey
	RelayHMACKey_t8A1480D4E69892635FBA3B1408C094733613B844 ___HMACKey_5;
	// Unity.Networking.Transport.Relay.RelayServerData/<HMAC>e__FixedBuffer Unity.Networking.Transport.Relay.RelayServerData::HMAC
	U3CHMACU3Ee__FixedBuffer_tEBE6EB5356C21D7CDAA77E2AB69381855EAD9816 ___HMAC_6;
	// System.Byte Unity.Networking.Transport.Relay.RelayServerData::IsSecure
	uint8_t ___IsSecure_7;
};

// Unity.Networking.Transport.TLS.SecureClientState
struct SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 
{
	// Unity.TLS.LowLevel.Binding/unitytls_client* Unity.Networking.Transport.TLS.SecureClientState::ClientPtr
	unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___ClientPtr_0;
	// Unity.TLS.LowLevel.Binding/unitytls_client_config* Unity.Networking.Transport.TLS.SecureClientState::ClientConfig
	unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* ___ClientConfig_1;
	// Unity.Networking.Transport.SessionIdToken Unity.Networking.Transport.TLS.SecureClientState::ReceiveToken
	SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 ___ReceiveToken_2;
	// System.Int64 Unity.Networking.Transport.TLS.SecureClientState::LastHandshakeUpdate
	int64_t ___LastHandshakeUpdate_3;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Unity.Networking.Transport.Protocols.UdpCHeader
struct UdpCHeader_t603CBEC64367B86F59E725571C597885519A613B 
{
	// System.Byte Unity.Networking.Transport.Protocols.UdpCHeader::Type
	uint8_t ___Type_0;
	// Unity.Networking.Transport.Protocols.UdpCHeader/HeaderFlags Unity.Networking.Transport.Protocols.UdpCHeader::Flags
	uint8_t ___Flags_1;
	// Unity.Networking.Transport.SessionIdToken Unity.Networking.Transport.Protocols.UdpCHeader::SessionToken
	SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 ___SessionToken_2;
};

// Unity.TLS.LowLevel.Binding/unitytls_client_config
struct unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F 
{
	// Unity.TLS.LowLevel.Binding/unitytls_dataRef Unity.TLS.LowLevel.Binding/unitytls_client_config::caPEM
	unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 ___caPEM_0;
	// Unity.TLS.LowLevel.Binding/unitytls_dataRef Unity.TLS.LowLevel.Binding/unitytls_client_config::serverPEM
	unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 ___serverPEM_1;
	// Unity.TLS.LowLevel.Binding/unitytls_dataRef Unity.TLS.LowLevel.Binding/unitytls_client_config::privateKeyPEM
	unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 ___privateKeyPEM_2;
	// System.UInt32 Unity.TLS.LowLevel.Binding/unitytls_client_config::clientAuth
	uint32_t ___clientAuth_3;
	// System.UInt32 Unity.TLS.LowLevel.Binding/unitytls_client_config::transportProtocol
	uint32_t ___transportProtocol_4;
	// Unity.TLS.LowLevel.Binding/unitytls_dataRef Unity.TLS.LowLevel.Binding/unitytls_client_config::psk
	unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 ___psk_5;
	// Unity.TLS.LowLevel.Binding/unitytls_dataRef Unity.TLS.LowLevel.Binding/unitytls_client_config::pskIdentity
	unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 ___pskIdentity_6;
	// System.IntPtr Unity.TLS.LowLevel.Binding/unitytls_client_config::onDataCB
	intptr_t ___onDataCB_7;
	// System.IntPtr Unity.TLS.LowLevel.Binding/unitytls_client_config::dataSendCB
	intptr_t ___dataSendCB_8;
	// System.IntPtr Unity.TLS.LowLevel.Binding/unitytls_client_config::dataReceiveCB
	intptr_t ___dataReceiveCB_9;
	// System.IntPtr Unity.TLS.LowLevel.Binding/unitytls_client_config::dataReceiveTimeoutCB
	intptr_t ___dataReceiveTimeoutCB_10;
	// System.IntPtr Unity.TLS.LowLevel.Binding/unitytls_client_config::transportUserData
	intptr_t ___transportUserData_11;
	// System.IntPtr Unity.TLS.LowLevel.Binding/unitytls_client_config::applicationUserData
	intptr_t ___applicationUserData_12;
	// System.Int32 Unity.TLS.LowLevel.Binding/unitytls_client_config::handshakeReturnsOnStep
	int32_t ___handshakeReturnsOnStep_13;
	// System.Int32 Unity.TLS.LowLevel.Binding/unitytls_client_config::handshakeReturnsIfWouldBlock
	int32_t ___handshakeReturnsIfWouldBlock_14;
	// System.UInt32 Unity.TLS.LowLevel.Binding/unitytls_client_config::ssl_read_timeout_ms
	uint32_t ___ssl_read_timeout_ms_15;
	// System.Byte* Unity.TLS.LowLevel.Binding/unitytls_client_config::hostname
	uint8_t* ___hostname_16;
	// System.UInt32 Unity.TLS.LowLevel.Binding/unitytls_client_config::tracelevel
	uint32_t ___tracelevel_17;
	// System.IntPtr Unity.TLS.LowLevel.Binding/unitytls_client_config::logCallback
	intptr_t ___logCallback_18;
	// System.UInt32 Unity.TLS.LowLevel.Binding/unitytls_client_config::ssl_handshake_timeout_min
	uint32_t ___ssl_handshake_timeout_min_19;
	// System.UInt32 Unity.TLS.LowLevel.Binding/unitytls_client_config::ssl_handshake_timeout_max
	uint32_t ___ssl_handshake_timeout_max_20;
	// System.UInt16 Unity.TLS.LowLevel.Binding/unitytls_client_config::mtu
	uint16_t ___mtu_21;
};

// Unity.Networking.Transport.NetworkDriver/Connection
struct Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70 
{
	// Unity.Networking.Transport.NetworkInterfaceEndPoint Unity.Networking.Transport.NetworkDriver/Connection::Address
	NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 ___Address_0;
	// System.Int64 Unity.Networking.Transport.NetworkDriver/Connection::LastNonDataSend
	int64_t ___LastNonDataSend_1;
	// System.Int64 Unity.Networking.Transport.NetworkDriver/Connection::LastReceive
	int64_t ___LastReceive_2;
	// System.Int32 Unity.Networking.Transport.NetworkDriver/Connection::Id
	int32_t ___Id_3;
	// System.Int32 Unity.Networking.Transport.NetworkDriver/Connection::Version
	int32_t ___Version_4;
	// System.Int32 Unity.Networking.Transport.NetworkDriver/Connection::ConnectAttempts
	int32_t ___ConnectAttempts_5;
	// Unity.Networking.Transport.NetworkConnection/State Unity.Networking.Transport.NetworkDriver/Connection::State
	int32_t ___State_6;
	// Unity.Networking.Transport.SessionIdToken Unity.Networking.Transport.NetworkDriver/Connection::ReceiveToken
	SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 ___ReceiveToken_7;
	// Unity.Networking.Transport.SessionIdToken Unity.Networking.Transport.NetworkDriver/Connection::SendToken
	SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 ___SendToken_8;
	// System.Byte Unity.Networking.Transport.NetworkDriver/Connection::DidReceiveData
	uint8_t ___DidReceiveData_9;
	// System.Byte Unity.Networking.Transport.NetworkDriver/Connection::IsAccepted
	uint8_t ___IsAccepted_10;
};

// Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsAddressUpdate
struct AsAddressUpdate_tF9F7E0B706D3CB02AADB4946E23F9287B281CB52 
{
	// Unity.Networking.Transport.NetworkInterfaceEndPoint Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsAddressUpdate::NewAddress
	NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 ___NewAddress_0;
};

// Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsConnectionAccept
struct AsConnectionAccept_t0140A44B5A8D91D8BD8DC5502278D2BB7B7B91C2 
{
	// Unity.Networking.Transport.SessionIdToken Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsConnectionAccept::ConnectionToken
	SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 ___ConnectionToken_0;
};

// Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsDataWithImplicitConnectionAccept
struct AsDataWithImplicitConnectionAccept_t6D7E405008359118E0EEF160A655ECD30453FBA2 
{
	// System.Int32 Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsDataWithImplicitConnectionAccept::Offset
	int32_t ___Offset_0;
	// System.Int32 Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsDataWithImplicitConnectionAccept::Length
	int32_t ___Length_1;
	// System.Byte Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsDataWithImplicitConnectionAccept::HasPipelineByte
	uint8_t ___HasPipelineByte_2;
	// Unity.Networking.Transport.SessionIdToken Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsDataWithImplicitConnectionAccept::ConnectionToken
	SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 ___ConnectionToken_3;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Unity.Networking.Transport.NetworkProtocol
struct NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9 
{
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate> Unity.Networking.Transport.NetworkProtocol::ComputePacketOverhead
	TransportFunctionPointer_1_t403A4BA6983AC49EB5EDF3EB14F092C746490EFF ___ComputePacketOverhead_0;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate> Unity.Networking.Transport.NetworkProtocol::ProcessReceive
	TransportFunctionPointer_1_tF0C75E421ACA913F2FA062ED002F9586FEA669FC ___ProcessReceive_1;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate> Unity.Networking.Transport.NetworkProtocol::ProcessSend
	TransportFunctionPointer_1_t77C607A1DCF675C39F99E9EEE5AB36FB7CC494B1 ___ProcessSend_2;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate> Unity.Networking.Transport.NetworkProtocol::ProcessSendConnectionAccept
	TransportFunctionPointer_1_t8BEB3732EF9358D73F93626B99D9423182E4C47D ___ProcessSendConnectionAccept_3;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ConnectDelegate> Unity.Networking.Transport.NetworkProtocol::Connect
	TransportFunctionPointer_1_t71E737606530D4C87CDCF73063247BA844270CFF ___Connect_4;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate> Unity.Networking.Transport.NetworkProtocol::Disconnect
	TransportFunctionPointer_1_t8CB155AD69427676535F5D25A3C9408D5012DDB0 ___Disconnect_5;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate> Unity.Networking.Transport.NetworkProtocol::ProcessSendPing
	TransportFunctionPointer_1_t97CB0A2F7C4082FD45ACA0AE4155845480AE8843 ___ProcessSendPing_6;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate> Unity.Networking.Transport.NetworkProtocol::ProcessSendPong
	TransportFunctionPointer_1_t1974F1C28035CE103ECF0504CE8E87D6037E0398 ___ProcessSendPong_7;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/UpdateDelegate> Unity.Networking.Transport.NetworkProtocol::Update
	TransportFunctionPointer_1_tBB4FC4ACEB955CF3ECDC5FB78DE9132C126522F2 ___Update_8;
	// System.IntPtr Unity.Networking.Transport.NetworkProtocol::UserData
	intptr_t ___UserData_9;
	// System.Int32 Unity.Networking.Transport.NetworkProtocol::MaxHeaderSize
	int32_t ___MaxHeaderSize_10;
	// System.Int32 Unity.Networking.Transport.NetworkProtocol::MaxFooterSize
	int32_t ___MaxFooterSize_11;
	// System.Boolean Unity.Networking.Transport.NetworkProtocol::NeedsUpdate
	bool ___NeedsUpdate_12;
};
// Native definition for P/Invoke marshalling of Unity.Networking.Transport.NetworkProtocol
struct NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9_marshaled_pinvoke
{
	TransportFunctionPointer_1_t403A4BA6983AC49EB5EDF3EB14F092C746490EFF ___ComputePacketOverhead_0;
	TransportFunctionPointer_1_tF0C75E421ACA913F2FA062ED002F9586FEA669FC ___ProcessReceive_1;
	TransportFunctionPointer_1_t77C607A1DCF675C39F99E9EEE5AB36FB7CC494B1 ___ProcessSend_2;
	TransportFunctionPointer_1_t8BEB3732EF9358D73F93626B99D9423182E4C47D ___ProcessSendConnectionAccept_3;
	TransportFunctionPointer_1_t71E737606530D4C87CDCF73063247BA844270CFF ___Connect_4;
	TransportFunctionPointer_1_t8CB155AD69427676535F5D25A3C9408D5012DDB0 ___Disconnect_5;
	TransportFunctionPointer_1_t97CB0A2F7C4082FD45ACA0AE4155845480AE8843 ___ProcessSendPing_6;
	TransportFunctionPointer_1_t1974F1C28035CE103ECF0504CE8E87D6037E0398 ___ProcessSendPong_7;
	TransportFunctionPointer_1_tBB4FC4ACEB955CF3ECDC5FB78DE9132C126522F2 ___Update_8;
	intptr_t ___UserData_9;
	int32_t ___MaxHeaderSize_10;
	int32_t ___MaxFooterSize_11;
	int32_t ___NeedsUpdate_12;
};
// Native definition for COM marshalling of Unity.Networking.Transport.NetworkProtocol
struct NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9_marshaled_com
{
	TransportFunctionPointer_1_t403A4BA6983AC49EB5EDF3EB14F092C746490EFF ___ComputePacketOverhead_0;
	TransportFunctionPointer_1_tF0C75E421ACA913F2FA062ED002F9586FEA669FC ___ProcessReceive_1;
	TransportFunctionPointer_1_t77C607A1DCF675C39F99E9EEE5AB36FB7CC494B1 ___ProcessSend_2;
	TransportFunctionPointer_1_t8BEB3732EF9358D73F93626B99D9423182E4C47D ___ProcessSendConnectionAccept_3;
	TransportFunctionPointer_1_t71E737606530D4C87CDCF73063247BA844270CFF ___Connect_4;
	TransportFunctionPointer_1_t8CB155AD69427676535F5D25A3C9408D5012DDB0 ___Disconnect_5;
	TransportFunctionPointer_1_t97CB0A2F7C4082FD45ACA0AE4155845480AE8843 ___ProcessSendPing_6;
	TransportFunctionPointer_1_t1974F1C28035CE103ECF0504CE8E87D6037E0398 ___ProcessSendPong_7;
	TransportFunctionPointer_1_tBB4FC4ACEB955CF3ECDC5FB78DE9132C126522F2 ___Update_8;
	intptr_t ___UserData_9;
	int32_t ___MaxHeaderSize_10;
	int32_t ___MaxFooterSize_11;
	int32_t ___NeedsUpdate_12;
};

// Unity.Networking.Transport.NetworkSendInterface
struct NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035 
{
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate> Unity.Networking.Transport.NetworkSendInterface::BeginSendMessage
	TransportFunctionPointer_1_t9F2FD24758ADF9E597DCA02A01D7972B74AF6736 ___BeginSendMessage_0;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate> Unity.Networking.Transport.NetworkSendInterface::EndSendMessage
	TransportFunctionPointer_1_t1933A8E5B03799A74CE910DB0A4F8FF67DD0405D ___EndSendMessage_1;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate> Unity.Networking.Transport.NetworkSendInterface::AbortSendMessage
	TransportFunctionPointer_1_t6BF0E9809FEF820449ED4B566281FFDB8B1F6807 ___AbortSendMessage_2;
	// System.IntPtr Unity.Networking.Transport.NetworkSendInterface::UserData
	intptr_t ___UserData_3;
};

// Unity.Networking.Transport.NetworkSettings
struct NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0 
{
	// Unity.Collections.NativeHashMap`2<System.Int64,Unity.Networking.Transport.NetworkSettings/ParameterSlice> Unity.Networking.Transport.NetworkSettings::m_ParameterOffsets
	NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC ___m_ParameterOffsets_0;
	// Unity.Collections.NativeList`1<System.Byte> Unity.Networking.Transport.NetworkSettings::m_Parameters
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_Parameters_1;
	// System.Byte Unity.Networking.Transport.NetworkSettings::m_Initialized
	uint8_t ___m_Initialized_2;
};

// Unity.Networking.Transport.Relay.RelayNetworkParameter
struct RelayNetworkParameter_tE48AD3A6F0F2548B9929FE896969232D10FBC4B8 
{
	// Unity.Networking.Transport.Relay.RelayServerData Unity.Networking.Transport.Relay.RelayNetworkParameter::ServerData
	RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 ___ServerData_0;
	// System.Int32 Unity.Networking.Transport.Relay.RelayNetworkParameter::RelayConnectionTimeMS
	int32_t ___RelayConnectionTimeMS_1;
};

// Unity.Networking.Transport.TLS.SecureNetworkProtocolData
struct SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<Unity.Networking.Transport.NetworkInterfaceEndPoint,Unity.Networking.Transport.TLS.SecureClientState> Unity.Networking.Transport.TLS.SecureNetworkProtocolData::SecureClients
	UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77 ___SecureClients_0;
	// Unity.Collections.FixedString4096Bytes Unity.Networking.Transport.TLS.SecureNetworkProtocolData::Pem
	FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21 ___Pem_1;
	// Unity.Collections.FixedString4096Bytes Unity.Networking.Transport.TLS.SecureNetworkProtocolData::Rsa
	FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21 ___Rsa_2;
	// Unity.Collections.FixedString4096Bytes Unity.Networking.Transport.TLS.SecureNetworkProtocolData::RsaKey
	FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21 ___RsaKey_3;
	// Unity.Collections.FixedString32Bytes Unity.Networking.Transport.TLS.SecureNetworkProtocolData::Hostname
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___Hostname_4;
	// System.UInt32 Unity.Networking.Transport.TLS.SecureNetworkProtocolData::Protocol
	uint32_t ___Protocol_5;
	// System.UInt32 Unity.Networking.Transport.TLS.SecureNetworkProtocolData::SSLReadTimeoutMs
	uint32_t ___SSLReadTimeoutMs_6;
	// System.UInt32 Unity.Networking.Transport.TLS.SecureNetworkProtocolData::SSLHandshakeTimeoutMax
	uint32_t ___SSLHandshakeTimeoutMax_7;
	// System.UInt32 Unity.Networking.Transport.TLS.SecureNetworkProtocolData::SSLHandshakeTimeoutMin
	uint32_t ___SSLHandshakeTimeoutMin_8;
	// System.UInt32 Unity.Networking.Transport.TLS.SecureNetworkProtocolData::ClientAuth
	uint32_t ___ClientAuth_9;
	// System.Int64 Unity.Networking.Transport.TLS.SecureNetworkProtocolData::LastUpdate
	int64_t ___LastUpdate_10;
	// System.Int64 Unity.Networking.Transport.TLS.SecureNetworkProtocolData::LastHalfOpenPrune
	int64_t ___LastHalfOpenPrune_11;
};

// Unity.Networking.Transport.TLS.SecureNetworkProtocolParameter
struct SecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97 
{
	// Unity.Collections.FixedString4096Bytes Unity.Networking.Transport.TLS.SecureNetworkProtocolParameter::Pem
	FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21 ___Pem_0;
	// Unity.Collections.FixedString4096Bytes Unity.Networking.Transport.TLS.SecureNetworkProtocolParameter::Rsa
	FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21 ___Rsa_1;
	// Unity.Collections.FixedString4096Bytes Unity.Networking.Transport.TLS.SecureNetworkProtocolParameter::RsaKey
	FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21 ___RsaKey_2;
	// Unity.Collections.FixedString32Bytes Unity.Networking.Transport.TLS.SecureNetworkProtocolParameter::Hostname
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___Hostname_3;
	// Unity.Networking.Transport.TLS.SecureTransportProtocol Unity.Networking.Transport.TLS.SecureNetworkProtocolParameter::Protocol
	uint32_t ___Protocol_4;
	// Unity.Networking.Transport.TLS.SecureClientAuthPolicy Unity.Networking.Transport.TLS.SecureNetworkProtocolParameter::ClientAuthenticationPolicy
	uint32_t ___ClientAuthenticationPolicy_5;
	// System.UInt32 Unity.Networking.Transport.TLS.SecureNetworkProtocolParameter::SSLReadTimeoutMs
	uint32_t ___SSLReadTimeoutMs_6;
	// System.UInt32 Unity.Networking.Transport.TLS.SecureNetworkProtocolParameter::SSLHandshakeTimeoutMax
	uint32_t ___SSLHandshakeTimeoutMax_7;
	// System.UInt32 Unity.Networking.Transport.TLS.SecureNetworkProtocolParameter::SSLHandshakeTimeoutMin
	uint32_t ___SSLHandshakeTimeoutMin_8;
};

// Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback
struct unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637  : public MulticastDelegate_t
{
};

// Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback
struct unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D  : public MulticastDelegate_t
{
};

// Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate
struct ComputePacketOverheadDelegate_tFF6AB7CC7E33391F1CF729C3FC4C5DF1D47CA9C7  : public MulticastDelegate_t
{
};

// Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate
struct AbortSendMessageDelegate_t6FBF6C859A8E442AC6D2CC1FEF00CD4D9815FB0D  : public MulticastDelegate_t
{
};

// Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate
struct BeginSendMessageDelegate_t55D0469152EC11CCF544924363F1C12F13CF2FE1  : public MulticastDelegate_t
{
};

// Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate
struct EndSendMessageDelegate_tCA4D3D136AE26FE2B671C22F4765E9B2C28025ED  : public MulticastDelegate_t
{
};

// Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs
struct ProcessPacketCommandAs_t3C67AC3B9A8B54418EC8E41F0A293F51026E6A78 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsAddressUpdate Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs::AddressUpdate
			AsAddressUpdate_tF9F7E0B706D3CB02AADB4946E23F9287B281CB52 ___AddressUpdate_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			AsAddressUpdate_tF9F7E0B706D3CB02AADB4946E23F9287B281CB52 ___AddressUpdate_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsConnectionAccept Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs::ConnectionAccept
			AsConnectionAccept_t0140A44B5A8D91D8BD8DC5502278D2BB7B7B91C2 ___ConnectionAccept_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			AsConnectionAccept_t0140A44B5A8D91D8BD8DC5502278D2BB7B7B91C2 ___ConnectionAccept_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsData Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs::Data
			AsData_t8E59FF5C35A4A26CBC022D19744117E27B46609D ___Data_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			AsData_t8E59FF5C35A4A26CBC022D19744117E27B46609D ___Data_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsDataWithImplicitConnectionAccept Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs::DataWithImplicitConnectionAccept
			AsDataWithImplicitConnectionAccept_t6D7E405008359118E0EEF160A655ECD30453FBA2 ___DataWithImplicitConnectionAccept_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			AsDataWithImplicitConnectionAccept_t6D7E405008359118E0EEF160A655ECD30453FBA2 ___DataWithImplicitConnectionAccept_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsProtocolStatusUpdate Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs::ProtocolStatusUpdate
			AsProtocolStatusUpdate_t7D9E6F8F2D1D4DA7886545F8DEE54F4F0956746A ___ProtocolStatusUpdate_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			AsProtocolStatusUpdate_t7D9E6F8F2D1D4DA7886545F8DEE54F4F0956746A ___ProtocolStatusUpdate_4_forAlignmentOnly;
		};
	};
};

// Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData
struct RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F 
{
	// Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayConnectionState Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData::ConnectionState
	uint8_t ___ConnectionState_0;
	// Unity.Networking.Transport.Relay.RelayNetworkProtocol/SecuredRelayConnectionState Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData::SecureState
	uint8_t ___SecureState_1;
	// Unity.Networking.Transport.SessionIdToken Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData::ConnectionReceiveToken
	SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 ___ConnectionReceiveToken_2;
	// System.Int64 Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData::LastConnectAttempt
	int64_t ___LastConnectAttempt_3;
	// System.Int64 Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData::LastUpdateTime
	int64_t ___LastUpdateTime_4;
	// System.Int64 Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData::LastSentTime
	int64_t ___LastSentTime_5;
	// System.Int32 Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData::ConnectTimeoutMS
	int32_t ___ConnectTimeoutMS_6;
	// System.Int32 Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData::RelayConnectionTimeMS
	int32_t ___RelayConnectionTimeMS_7;
	// Unity.Networking.Transport.Relay.RelayAllocationId Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData::HostAllocationId
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___HostAllocationId_8;
	// Unity.Networking.Transport.NetworkInterfaceEndPoint Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData::ServerEndpoint
	NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 ___ServerEndpoint_9;
	// Unity.Networking.Transport.Relay.RelayServerData Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData::ServerData
	RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 ___ServerData_10;
	// Unity.Networking.Transport.TLS.SecureClientState Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData::SecureClientState
	SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 ___SecureClientState_11;
	// System.Boolean Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData::ConnectOnBind
	bool ___ConnectOnBind_12;
};
// Native definition for P/Invoke marshalling of Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData
struct RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_marshaled_pinvoke
{
	uint8_t ___ConnectionState_0;
	uint8_t ___SecureState_1;
	SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 ___ConnectionReceiveToken_2;
	int64_t ___LastConnectAttempt_3;
	int64_t ___LastUpdateTime_4;
	int64_t ___LastSentTime_5;
	int32_t ___ConnectTimeoutMS_6;
	int32_t ___RelayConnectionTimeMS_7;
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___HostAllocationId_8;
	NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 ___ServerEndpoint_9;
	RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 ___ServerData_10;
	SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 ___SecureClientState_11;
	int32_t ___ConnectOnBind_12;
};
// Native definition for COM marshalling of Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData
struct RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_marshaled_com
{
	uint8_t ___ConnectionState_0;
	uint8_t ___SecureState_1;
	SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 ___ConnectionReceiveToken_2;
	int64_t ___LastConnectAttempt_3;
	int64_t ___LastUpdateTime_4;
	int64_t ___LastSentTime_5;
	int32_t ___ConnectTimeoutMS_6;
	int32_t ___RelayConnectionTimeMS_7;
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___HostAllocationId_8;
	NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 ___ServerEndpoint_9;
	RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 ___ServerData_10;
	SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 ___SecureClientState_11;
	int32_t ___ConnectOnBind_12;
};

// Unity.Networking.Transport.ProcessPacketCommand
struct ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70 
{
	// Unity.Networking.Transport.ProcessPacketCommandType Unity.Networking.Transport.ProcessPacketCommand::Type
	uint8_t ___Type_0;
	// Unity.Networking.Transport.NetworkInterfaceEndPoint Unity.Networking.Transport.ProcessPacketCommand::Address
	NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 ___Address_1;
	// Unity.Networking.Transport.SessionIdToken Unity.Networking.Transport.ProcessPacketCommand::SessionId
	SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 ___SessionId_2;
	// Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs Unity.Networking.Transport.ProcessPacketCommand::As
	ProcessPacketCommandAs_t3C67AC3B9A8B54418EC8E41F0A293F51026E6A78 ___As_3;
};

// Unity.Networking.Transport.TLS.SecureNetworkProtocol
struct SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581 
{
	// System.IntPtr Unity.Networking.Transport.TLS.SecureNetworkProtocol::UserData
	intptr_t ___UserData_0;
};

// Unity.Networking.Transport.TLS.SecureUserData
struct SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B 
{
	// System.IntPtr Unity.Networking.Transport.TLS.SecureUserData::StreamData
	intptr_t ___StreamData_0;
	// Unity.Networking.Transport.NetworkSendInterface Unity.Networking.Transport.TLS.SecureUserData::Interface
	NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035 ___Interface_1;
	// Unity.Networking.Transport.NetworkInterfaceEndPoint Unity.Networking.Transport.TLS.SecureUserData::Remote
	NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 ___Remote_2;
	// Unity.Networking.Transport.NetworkSendQueueHandle Unity.Networking.Transport.TLS.SecureUserData::QueueHandle
	NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090 ___QueueHandle_3;
	// System.Int32 Unity.Networking.Transport.TLS.SecureUserData::Size
	int32_t ___Size_4;
	// System.Int32 Unity.Networking.Transport.TLS.SecureUserData::BytesProcessed
	int32_t ___BytesProcessed_5;
};

// Unity.Networking.Transport.NetworkProtocol/ConnectDelegate
struct ConnectDelegate_tF0F993B09F4013E6F8765D173E20519526B78613  : public MulticastDelegate_t
{
};

// Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate
struct DisconnectDelegate_tEF9FFFB31023D3A29E0A1FA73D4F830B0E799A14  : public MulticastDelegate_t
{
};

// Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate
struct ProcessSendConnectionAcceptDelegate_t69D4C0B8BE8F81AFC1A4A2F0A4EF5540B3003CAF  : public MulticastDelegate_t
{
};

// Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate
struct ProcessSendDelegate_t13BEFEE10F53345833169A7C7AF11F3B3EB2DA11  : public MulticastDelegate_t
{
};

// Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate
struct ProcessSendPingDelegate_t152699432B5574DC4245F79AD09F4AAC5038FD2B  : public MulticastDelegate_t
{
};

// Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate
struct ProcessSendPongDelegate_t10EC1FA49739F7F923218C56A0FCBB3A2E99CE49  : public MulticastDelegate_t
{
};

// Unity.Networking.Transport.NetworkProtocol/UpdateDelegate
struct UpdateDelegate_t848AE3DE157F214CEF33820CF17818729BACFFCD  : public MulticastDelegate_t
{
};

// Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate
struct ProcessReceiveDelegate_tC13DF5985CEFE17FBFF48B30FECDD7C4470A83C4  : public MulticastDelegate_t
{
};

// Unity.Networking.Transport.Relay.ConnectionAddressExtensions

// Unity.Networking.Transport.Relay.ConnectionAddressExtensions

// Unity.Networking.Transport.Utilities.FixedStringHexExt

// Unity.Networking.Transport.Utilities.FixedStringHexExt

// Unity.Networking.Transport.Utilities.FragmentationStageParameterExtensions

// Unity.Networking.Transport.Utilities.FragmentationStageParameterExtensions

// Unity.Networking.Transport.Utilities.NativeListExt

// Unity.Networking.Transport.Utilities.NativeListExt

// Unity.Networking.Transport.Relay.RelayMessageBind

// Unity.Networking.Transport.Relay.RelayMessageBind

// Unity.Networking.Transport.Relay.RelayParameterExtensions

// Unity.Networking.Transport.Relay.RelayParameterExtensions

// Unity.Networking.Transport.Utilities.ReliableStageParameterExtensions

// Unity.Networking.Transport.Utilities.ReliableStageParameterExtensions

// Unity.Networking.Transport.TLS.SecureParameterExtensions

// Unity.Networking.Transport.TLS.SecureParameterExtensions

// Unity.Networking.Transport.Utilities.SequenceHelpers

// Unity.Networking.Transport.Utilities.SequenceHelpers

// Unity.Networking.Transport.Utilities.SimulatorStageParameterExtensions

// Unity.Networking.Transport.Utilities.SimulatorStageParameterExtensions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Unity.Collections.NativeArray`1<System.Byte>

// Unity.Collections.NativeArray`1<System.Byte>

// Unity.Collections.NativeArray`1<Unity.Networking.Transport.NetworkInterfaceEndPoint>

// Unity.Collections.NativeArray`1<Unity.Networking.Transport.NetworkInterfaceEndPoint>

// Unity.Burst.SharedStatic`1<Unity.Burst.FunctionPointer`1<System.Object>>

// Unity.Burst.SharedStatic`1<Unity.Burst.FunctionPointer`1<System.Object>>

// Unity.Burst.SharedStatic`1<Unity.Burst.FunctionPointer`1<Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback>>

// Unity.Burst.SharedStatic`1<Unity.Burst.FunctionPointer`1<Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback>>

// Unity.Burst.SharedStatic`1<Unity.Burst.FunctionPointer`1<Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback>>

// Unity.Burst.SharedStatic`1<Unity.Burst.FunctionPointer`1<Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback>>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// Unity.Networking.Transport.Utilities.FragmentationUtility

// Unity.Networking.Transport.Utilities.FragmentationUtility

// Unity.Networking.Transport.InboundRecvBuffer

// Unity.Networking.Transport.InboundRecvBuffer

// Unity.Networking.Transport.InboundSendBuffer

// Unity.Networking.Transport.InboundSendBuffer

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Unity.Networking.Transport.NetworkConfigParameter

// Unity.Networking.Transport.NetworkConfigParameter

// Unity.Mathematics.Random

// Unity.Mathematics.Random

// Unity.Networking.Transport.Relay.RelayMessageHeader

// Unity.Networking.Transport.Relay.RelayMessageHeader

// Unity.Networking.Transport.Utilities.ReliableUtility

// Unity.Networking.Transport.Utilities.ReliableUtility

// Unity.Networking.Transport.Utilities.SequenceBufferContext

// Unity.Networking.Transport.Utilities.SequenceBufferContext

// Unity.Networking.Transport.Utilities.SimulatorUtility

// Unity.Networking.Transport.Utilities.SimulatorUtility

// System.Single

// System.Single

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.UIntPtr
struct UIntPtr_t_StaticFields
{
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;
};

// System.UIntPtr

// Unity.Networking.Transport.Utilities.LowLevel.Unsafe.UnsafeAtomicFreeList

// Unity.Networking.Transport.Utilities.LowLevel.Unsafe.UnsafeAtomicFreeList

// System.Void

// System.Void

// Unity.Collections.AllocatorManager/AllocatorHandle

// Unity.Collections.AllocatorManager/AllocatorHandle

// Unity.Networking.Transport.Utilities.FragmentationUtility/Parameters

// Unity.Networking.Transport.Utilities.FragmentationUtility/Parameters

// Unity.Networking.Transport.TLS.ManagedSecureFunctions/ManagedSecureFunctionsKey

// Unity.Networking.Transport.TLS.ManagedSecureFunctions/ManagedSecureFunctionsKey

// Unity.Networking.Transport.NetworkInterfaceEndPoint/<data>e__FixedBuffer

// Unity.Networking.Transport.NetworkInterfaceEndPoint/<data>e__FixedBuffer

// Unity.Networking.Transport.Relay.RelayAllocationId/<Value>e__FixedBuffer

// Unity.Networking.Transport.Relay.RelayAllocationId/<Value>e__FixedBuffer

// Unity.Networking.Transport.Relay.RelayConnectionData/<Value>e__FixedBuffer

// Unity.Networking.Transport.Relay.RelayConnectionData/<Value>e__FixedBuffer

// Unity.Networking.Transport.Relay.RelayHMACKey/<Value>e__FixedBuffer

// Unity.Networking.Transport.Relay.RelayHMACKey/<Value>e__FixedBuffer

// Unity.Networking.Transport.Relay.RelayServerData/<HMAC>e__FixedBuffer

// Unity.Networking.Transport.Relay.RelayServerData/<HMAC>e__FixedBuffer

// Unity.Networking.Transport.Utilities.ReliableUtility/Context

// Unity.Networking.Transport.Utilities.ReliableUtility/Context

// Unity.Networking.Transport.Utilities.ReliableUtility/PacketInformation

// Unity.Networking.Transport.Utilities.ReliableUtility/PacketInformation

// Unity.Networking.Transport.Utilities.ReliableUtility/PacketTimers

// Unity.Networking.Transport.Utilities.ReliableUtility/PacketTimers

// Unity.Networking.Transport.Utilities.ReliableUtility/Parameters

// Unity.Networking.Transport.Utilities.ReliableUtility/Parameters

// Unity.Networking.Transport.Utilities.ReliableUtility/RTTInfo

// Unity.Networking.Transport.Utilities.ReliableUtility/RTTInfo

// Unity.Networking.Transport.Utilities.ReliableUtility/ReliableHeader

// Unity.Networking.Transport.Utilities.ReliableUtility/ReliableHeader

// Unity.Networking.Transport.Utilities.ReliableUtility/Statistics

// Unity.Networking.Transport.Utilities.ReliableUtility/Statistics

// Unity.Networking.Transport.Utilities.SimulatorUtility/DelayedPacket

// Unity.Networking.Transport.Utilities.SimulatorUtility/DelayedPacket

// Unity.Networking.Transport.Utilities.SimulatorUtility/Parameters

// Unity.Networking.Transport.Utilities.SimulatorUtility/Parameters

// Unity.Mathematics.math/IntFloatUnion

// Unity.Mathematics.math/IntFloatUnion

// Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsData

// Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsData

// Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsProtocolStatusUpdate

// Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsProtocolStatusUpdate

// Unity.Networking.Transport.Utilities.ReliableUtility/ReliablePacket/<Buffer>e__FixedBuffer

// Unity.Networking.Transport.Utilities.ReliableUtility/ReliablePacket/<Buffer>e__FixedBuffer

// Unity.Burst.FunctionPointer`1<System.Object>

// Unity.Burst.FunctionPointer`1<System.Object>

// Unity.Burst.FunctionPointer`1<Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback>

// Unity.Burst.FunctionPointer`1<Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback>

// Unity.Burst.FunctionPointer`1<Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback>

// Unity.Burst.FunctionPointer`1<Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate>

// Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<Unity.Networking.Transport.NetworkInterfaceEndPoint,Unity.Networking.Transport.TLS.SecureClientState>

// Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<Unity.Networking.Transport.NetworkInterfaceEndPoint,Unity.Networking.Transport.TLS.SecureClientState>

// Unity.Networking.Transport.DataStreamWriter

// Unity.Networking.Transport.DataStreamWriter

// Unity.Collections.FixedBytes30

// Unity.Collections.FixedBytes30

// Unity.Collections.FixedBytes4094

// Unity.Collections.FixedBytes4094

// Unity.Networking.Transport.TLS.ManagedSecureFunctions
struct ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_StaticFields
{
	// Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback Unity.Networking.Transport.TLS.ManagedSecureFunctions::s_sendCallback
	unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D* ___s_sendCallback_0;
	// Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback Unity.Networking.Transport.TLS.ManagedSecureFunctions::s_recvCallback
	unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637* ___s_recvCallback_1;
	// System.Boolean Unity.Networking.Transport.TLS.ManagedSecureFunctions::IsInitialized
	bool ___IsInitialized_2;
	// Unity.Burst.SharedStatic`1<Unity.Burst.FunctionPointer`1<Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback>> Unity.Networking.Transport.TLS.ManagedSecureFunctions::s_SendCallback
	SharedStatic_1_t47339D7DCF45ED555300835940E9AFFB859D37B1 ___s_SendCallback_3;
	// Unity.Burst.SharedStatic`1<Unity.Burst.FunctionPointer`1<Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback>> Unity.Networking.Transport.TLS.ManagedSecureFunctions::s_RecvMethod
	SharedStatic_1_tB8E12BEEFE90AF4450BDCB3502FC8A0745B05C87 ___s_RecvMethod_4;
};

// Unity.Networking.Transport.TLS.ManagedSecureFunctions

// Unity.Networking.Transport.NetworkEndPoint
struct NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_StaticFields
{
	// System.Boolean Unity.Networking.Transport.NetworkEndPoint::IsLittleEndian
	bool ___IsLittleEndian_0;
};

// Unity.Networking.Transport.NetworkEndPoint

// Unity.Networking.Transport.NetworkInterfaceEndPoint

// Unity.Networking.Transport.NetworkInterfaceEndPoint

// Unity.Networking.Transport.NetworkInterfaceSendHandle

// Unity.Networking.Transport.NetworkInterfaceSendHandle

// Unity.Networking.Transport.NetworkSendQueueHandle

// Unity.Networking.Transport.NetworkSendQueueHandle

// Unity.Networking.Transport.Relay.RelayAllocationId

// Unity.Networking.Transport.Relay.RelayAllocationId

// Unity.Networking.Transport.Relay.RelayConnectionData

// Unity.Networking.Transport.Relay.RelayConnectionData

// Unity.Networking.Transport.Relay.RelayHMACKey

// Unity.Networking.Transport.Relay.RelayHMACKey

// Unity.Networking.Transport.Relay.RelayNetworkProtocol

// Unity.Networking.Transport.Relay.RelayNetworkProtocol

// Unity.Networking.Transport.SessionIdToken

// Unity.Networking.Transport.SessionIdToken

// Unity.TLS.LowLevel.Binding/unitytls_client

// Unity.TLS.LowLevel.Binding/unitytls_client

// Unity.TLS.LowLevel.Binding/unitytls_dataRef

// Unity.TLS.LowLevel.Binding/unitytls_dataRef

// Unity.Networking.Transport.Utilities.ReliableUtility/ReliablePacket

// Unity.Networking.Transport.Utilities.ReliableUtility/ReliablePacket

// Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext

// Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext

// Unity.Networking.Transport.Utilities.SimulatorUtility/Context

// Unity.Networking.Transport.Utilities.SimulatorUtility/Context

// Unity.Networking.Transport.TransportFunctionPointer`1<System.Object>

// Unity.Networking.Transport.TransportFunctionPointer`1<System.Object>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ConnectDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ConnectDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/UpdateDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/UpdateDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate>

// Unity.Collections.FixedString32Bytes

// Unity.Collections.FixedString32Bytes

// Unity.Collections.FixedString4096Bytes

// Unity.Collections.FixedString4096Bytes

// Unity.Networking.Transport.NetworkPipelineContext

// Unity.Networking.Transport.NetworkPipelineContext

// Unity.Networking.Transport.Relay.RelayMessageAccepted

// Unity.Networking.Transport.Relay.RelayMessageAccepted

// Unity.Networking.Transport.Relay.RelayMessageConnectRequest

// Unity.Networking.Transport.Relay.RelayMessageConnectRequest

// Unity.Networking.Transport.Relay.RelayMessageDisconnect

// Unity.Networking.Transport.Relay.RelayMessageDisconnect

// Unity.Networking.Transport.Relay.RelayMessageError

// Unity.Networking.Transport.Relay.RelayMessageError

// Unity.Networking.Transport.Relay.RelayMessagePing

// Unity.Networking.Transport.Relay.RelayMessagePing

// Unity.Networking.Transport.Relay.RelayMessageRelay

// Unity.Networking.Transport.Relay.RelayMessageRelay

// Unity.Networking.Transport.Relay.RelayServerData

// Unity.Networking.Transport.Relay.RelayServerData

// Unity.Networking.Transport.TLS.SecureClientState

// Unity.Networking.Transport.TLS.SecureClientState

// Unity.Networking.Transport.Protocols.UdpCHeader

// Unity.Networking.Transport.Protocols.UdpCHeader

// Unity.TLS.LowLevel.Binding/unitytls_client_config

// Unity.TLS.LowLevel.Binding/unitytls_client_config

// Unity.Networking.Transport.NetworkDriver/Connection

// Unity.Networking.Transport.NetworkDriver/Connection

// Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsAddressUpdate

// Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsAddressUpdate

// Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsDataWithImplicitConnectionAccept

// Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs/AsDataWithImplicitConnectionAccept

// System.InvalidOperationException

// System.InvalidOperationException

// Unity.Networking.Transport.NetworkProtocol

// Unity.Networking.Transport.NetworkProtocol

// Unity.Networking.Transport.NetworkSendInterface

// Unity.Networking.Transport.NetworkSendInterface

// Unity.Networking.Transport.NetworkSettings

// Unity.Networking.Transport.NetworkSettings

// Unity.Networking.Transport.Relay.RelayNetworkParameter

// Unity.Networking.Transport.Relay.RelayNetworkParameter

// Unity.Networking.Transport.TLS.SecureNetworkProtocolData

// Unity.Networking.Transport.TLS.SecureNetworkProtocolData

// Unity.Networking.Transport.TLS.SecureNetworkProtocolParameter

// Unity.Networking.Transport.TLS.SecureNetworkProtocolParameter

// Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback

// Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback

// Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback

// Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback

// Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate

// Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate

// Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate

// Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate

// Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate

// Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate

// Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate

// Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate

// Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs

// Unity.Networking.Transport.ProcessPacketCommand/ProcessPacketCommandAs

// Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData

// Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData

// Unity.Networking.Transport.ProcessPacketCommand

// Unity.Networking.Transport.ProcessPacketCommand

// Unity.Networking.Transport.TLS.SecureNetworkProtocol
struct SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_StaticFields
{
	// Unity.Networking.Transport.TLS.SecureNetworkProtocolParameter Unity.Networking.Transport.TLS.SecureNetworkProtocol::DefaultParameters
	SecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97 ___DefaultParameters_1;
};

// Unity.Networking.Transport.TLS.SecureNetworkProtocol

// Unity.Networking.Transport.TLS.SecureUserData

// Unity.Networking.Transport.TLS.SecureUserData

// Unity.Networking.Transport.NetworkProtocol/ConnectDelegate

// Unity.Networking.Transport.NetworkProtocol/ConnectDelegate

// Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate

// Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate

// Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate

// Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate

// Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate

// Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate

// Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate

// Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate

// Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate

// Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate

// Unity.Networking.Transport.NetworkProtocol/UpdateDelegate

// Unity.Networking.Transport.NetworkProtocol/UpdateDelegate

// Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate

// Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T& Unity.Burst.SharedStatic`1<Unity.Burst.FunctionPointer`1<System.Object>>::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2* SharedStatic_1_get_Data_mB5F855CAE2B6F83A2D6A10DAABF9B29053B4F11F_gshared (SharedStatic_1_tE6D7548D21D8ED69C6AC8ECAD846CDB43304B444* __this, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<System.Object>(TDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m389A3417EF0CFE64A042AA7E53E8604F24458074_gshared (RuntimeObject* ___0_d, const RuntimeMethod* method) ;
// System.Void Unity.Burst.FunctionPointer`1<System.Object>::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FunctionPointer_1__ctor_mE2BD136AA4DB860E4183D3293D3AE1A04B978DA3_gshared_inline (FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2* __this, intptr_t ___0_ptr, const RuntimeMethod* method) ;
// T Unity.Burst.FunctionPointer`1<System.Object>::get_Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FunctionPointer_1_get_Invoke_m3E7098A72E4D4E432490A6F99AF8749B862ACF93_gshared (FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2* __this, const RuntimeMethod* method) ;
// Unity.Burst.SharedStatic`1<T> Unity.Burst.SharedStatic`1<Unity.Burst.FunctionPointer`1<System.Object>>::GetOrCreate<Unity.Burst.FunctionPointer`1<System.Object>,Unity.Networking.Transport.TLS.ManagedSecureFunctions/ManagedSecureFunctionsKey>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SharedStatic_1_tE6D7548D21D8ED69C6AC8ECAD846CDB43304B444 SharedStatic_1_GetOrCreate_TisFunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2_TisManagedSecureFunctionsKey_t773373200D4DB2198DD729D87E4AC96A78F446FC_m11D7D55346FC367221AFB3DC978A273B32DAE1D5_gshared (uint32_t ___0_alignment, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.TLS.LowLevel.Binding/unitytls_client_config>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisunitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F_mB5C3FE2DC1AACE0DDBD3777316FBF67D9DED09BD_gshared (const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<Unity.TLS.LowLevel.Binding/unitytls_client_config>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_Tisunitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F_m59D5E5DE33D7D644DA555FA3F7A1D8623361D326_gshared (const RuntimeMethod* method) ;
// System.IntPtr Unity.Burst.FunctionPointer`1<System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t FunctionPointer_1_get_Value_m71D7FF781C694A7C4EE28362DFC78D8DDFE9A105_gshared_inline (FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Networking.Transport.TLS.SecureNetworkProtocolData>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582_mD87AFEA55A4560FB415A7925E1F0285462A8EFD9_gshared (const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<Unity.Networking.Transport.TLS.SecureNetworkProtocolData>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisSecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582_m2A0723994580C2ECBB82DAF6262E34EB6EA66581_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<Unity.Networking.Transport.NetworkInterfaceEndPoint,Unity.Networking.Transport.TLS.SecureClientState>::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeHashMap_2__ctor_m31E886D42092D529AC55246DA8F9E37C4A485613_gshared (UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<TKey> Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<Unity.Networking.Transport.NetworkInterfaceEndPoint,Unity.Networking.Transport.TLS.SecureClientState>::GetKeyArray(Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDF8469CB50B586533F70B614C38965EEBD6145B2 UnsafeHashMap_2_GetKeyArray_m5F34C4DF59F343A77EBFAD1EF1667A43A38781C8_gshared (UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
// TValue Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<Unity.Networking.Transport.NetworkInterfaceEndPoint,Unity.Networking.Transport.TLS.SecureClientState>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC_gshared (UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* __this, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 ___0_key, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<Unity.Networking.Transport.NetworkInterfaceEndPoint,Unity.Networking.Transport.TLS.SecureClientState>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeHashMap_2_Remove_m94BE3198B3A3508CB109FAC4EE568ED86407F71B_gshared (UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* __this, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 ___0_key, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.TransportFunctionPointer`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransportFunctionPointer_1__ctor_mDFDCBE62DAAFA10648F4CEA771C756D0661FBFA8_gshared (TransportFunctionPointer_1_tA72106224B7FDE775C5A204F61EFF97167778993* __this, RuntimeObject* ___0_executeDelegate, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<Unity.Networking.Transport.NetworkInterfaceEndPoint,Unity.Networking.Transport.TLS.SecureClientState>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeHashMap_2_TryAdd_mB425A45433A55B799577F14EFBE7C7379D37CF2E_gshared (UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* __this, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 ___0_key, SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 ___1_item, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Networking.Transport.TLS.SecureUserData>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B_m93E4445737BC86FE087B87E97CD00064A2CD9114_gshared (const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<Unity.Networking.Transport.TLS.SecureUserData>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisSecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B_m42E37113A90B5272BE314C380722580DEF3E96F8_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<Unity.Networking.Transport.NetworkInterfaceEndPoint,Unity.Networking.Transport.TLS.SecureClientState>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeHashMap_2_set_Item_mA9D2E832C60A25C9C7F70B3F329AC7BF45D01288_gshared (UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* __this, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 ___0_key, SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 ___1_value, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<Unity.Networking.Transport.NetworkInterfaceEndPoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mDDF671931CE60775804BC5073A9296DD06BD335F_gshared (NativeArray_1_tDF8469CB50B586533F70B614C38965EEBD6145B2* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Byte>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.NetworkSettings::TryGet<Unity.Networking.Transport.TLS.SecureNetworkProtocolParameter>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkSettings_TryGet_TisSecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97_mB2F1591010C6E88F9124C708EFF49FE9FF190D45_gshared (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, SecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97* ___0_parameter, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.NetworkSettings::TryGet<Unity.Networking.Transport.Relay.RelayNetworkParameter>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkSettings_TryGet_TisRelayNetworkParameter_tE48AD3A6F0F2548B9929FE896969232D10FBC4B8_m2915D2DF811C81800CA3F27275A5D1F1C6FB371C_gshared (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, RelayNetworkParameter_tE48AD3A6F0F2548B9929FE896969232D10FBC4B8* ___0_parameter, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisRelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_m3FFD617F4FF50F0299817A643B51550473E1A5F9_gshared (const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisRelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_m1F90C43667A7F4543B0FF1CD95DBA6C1F92E94EC_gshared (const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.NetworkSettings::TryGet<Unity.Networking.Transport.Utilities.FragmentationUtility/Parameters>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkSettings_TryGet_TisParameters_t59B022551E59FBC1EA11D32A22CF7C3457682BAE_mC5258ABE8D7C61CFE499332D7AEBE17451C38BA8_gshared (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, Parameters_t59B022551E59FBC1EA11D32A22CF7C3457682BAE* ___0_parameter, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.NetworkSettings::TryGet<Unity.Networking.Transport.Utilities.ReliableUtility/Parameters>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkSettings_TryGet_TisParameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5_m1265A0047017C7EE05689AA051CCD6EC15B4A67F_gshared (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, Parameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5* ___0_parameter, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Networking.Transport.Utilities.ReliableUtility/ReliableHeader>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01_mE682CCE1084DECD3C3F1EF2FFA2AB8BC799E35E4_gshared (const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility::AlignedSizeOf<Unity.Networking.Transport.Utilities.ReliableUtility/PacketTimers>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReliableUtility_AlignedSizeOf_TisPacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4_m9785E521127021B2207B6EF5E4B37CA3B3C2C617_gshared (const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility::AlignedSizeOf<Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReliableUtility_AlignedSizeOf_TisSharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0_mD98E333F02D354D9F0A02FA0C35C05AEE9B87739_gshared (const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility::AlignedSizeOf<Unity.Networking.Transport.Utilities.ReliableUtility/PacketInformation>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReliableUtility_AlignedSizeOf_TisPacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2_mD6EDD07DCBAB2FCA68CA5BB60625D06BD7D7F19E_gshared (const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility::AlignedSizeOf<Unity.Networking.Transport.Utilities.ReliableUtility/Context>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReliableUtility_AlignedSizeOf_TisContext_t99C75CF38B33BF89D1AF089C3466321489BEA99A_m7B68590F46CFFDE67D46991BA2B5EBB1C0AACF14_gshared (const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.NetworkSettings::TryGet<Unity.Networking.Transport.Utilities.SimulatorUtility/Parameters>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkSettings_TryGet_TisParameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0_m25BF9D875AB182834BBE5DD10FB021D046288E5E_gshared (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, Parameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0* ___0_parameter, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Networking.Transport.Utilities.SimulatorUtility/DelayedPacket>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisDelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81_m74D2F275F08D06BCB3E55494D0BCA36ED3D06BF0_gshared (const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared (const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF_gshared (const RuntimeMethod* method) ;

// System.Int32 Unity.Networking.Transport.TLS.ManagedSecureFunctions::SecureDataSendCallback(System.IntPtr,System.Byte*,System.UIntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManagedSecureFunctions_SecureDataSendCallback_m9194B5EB17E62D9763907E987D0A384802C89722 (intptr_t ___0_userData, uint8_t* ___1_data, uintptr_t ___2_dataLen, uint32_t ___3_status, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.TLS.ManagedSecureFunctions::SecureDataReceiveCallback(System.IntPtr,System.Byte*,System.UIntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManagedSecureFunctions_SecureDataReceiveCallback_mEFC143BA88C57BBAD38EB40927FEB51F850D447B (intptr_t ___0_userData, uint8_t* ___1_data, uintptr_t ___2_dataLen, uint32_t ___3_status, const RuntimeMethod* method) ;
// System.Void Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_client_data_send_callback__ctor_mA3190917673633997FB351384D19AC2DCB09F3D4 (unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_client_data_receive_callback__ctor_m856BA3CAF960B07B7C62FF0A91FA3108F55FF56E (unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T& Unity.Burst.SharedStatic`1<Unity.Burst.FunctionPointer`1<Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback>>::get_Data()
inline FunctionPointer_1_tF917A6CBC8E241E4F555974CCF4507F08B71041A* SharedStatic_1_get_Data_m0E24869D29188E83B6F4BF368F46108CFB1B6FB1 (SharedStatic_1_t47339D7DCF45ED555300835940E9AFFB859D37B1* __this, const RuntimeMethod* method)
{
	return ((  FunctionPointer_1_tF917A6CBC8E241E4F555974CCF4507F08B71041A* (*) (SharedStatic_1_t47339D7DCF45ED555300835940E9AFFB859D37B1*, const RuntimeMethod*))SharedStatic_1_get_Data_mB5F855CAE2B6F83A2D6A10DAABF9B29053B4F11F_gshared)(__this, method);
}
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback>(TDelegate)
inline intptr_t Marshal_GetFunctionPointerForDelegate_Tisunitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D_mA730202CAC3AA87076B60876B5D250C8D711A231 (unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D* ___0_d, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D*, const RuntimeMethod*))Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m389A3417EF0CFE64A042AA7E53E8604F24458074_gshared)(___0_d, method);
}
// System.Void Unity.Burst.FunctionPointer`1<Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback>::.ctor(System.IntPtr)
inline void FunctionPointer_1__ctor_m2C14C57FBCC0E5F421D2075EF65CAC85951F0E84_inline (FunctionPointer_1_tF917A6CBC8E241E4F555974CCF4507F08B71041A* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	((  void (*) (FunctionPointer_1_tF917A6CBC8E241E4F555974CCF4507F08B71041A*, intptr_t, const RuntimeMethod*))FunctionPointer_1__ctor_mE2BD136AA4DB860E4183D3293D3AE1A04B978DA3_gshared_inline)(__this, ___0_ptr, method);
}
// T& Unity.Burst.SharedStatic`1<Unity.Burst.FunctionPointer`1<Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback>>::get_Data()
inline FunctionPointer_1_tA2FC39F25D07D293D943EDC747A8E0E7A70BDFC6* SharedStatic_1_get_Data_m42E67BC10BCF19DA2EF4E13CEFBA6D7E4228F91C (SharedStatic_1_tB8E12BEEFE90AF4450BDCB3502FC8A0745B05C87* __this, const RuntimeMethod* method)
{
	return ((  FunctionPointer_1_tA2FC39F25D07D293D943EDC747A8E0E7A70BDFC6* (*) (SharedStatic_1_tB8E12BEEFE90AF4450BDCB3502FC8A0745B05C87*, const RuntimeMethod*))SharedStatic_1_get_Data_mB5F855CAE2B6F83A2D6A10DAABF9B29053B4F11F_gshared)(__this, method);
}
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback>(TDelegate)
inline intptr_t Marshal_GetFunctionPointerForDelegate_Tisunitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637_mA2BE3117B02AF1D3E4BB983A8D37AD4231457CD7 (unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637* ___0_d, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637*, const RuntimeMethod*))Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m389A3417EF0CFE64A042AA7E53E8604F24458074_gshared)(___0_d, method);
}
// System.Void Unity.Burst.FunctionPointer`1<Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback>::.ctor(System.IntPtr)
inline void FunctionPointer_1__ctor_m5CC710D14C71364457A98C2B92699248FE30D51B_inline (FunctionPointer_1_tA2FC39F25D07D293D943EDC747A8E0E7A70BDFC6* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	((  void (*) (FunctionPointer_1_tA2FC39F25D07D293D943EDC747A8E0E7A70BDFC6*, intptr_t, const RuntimeMethod*))FunctionPointer_1__ctor_mE2BD136AA4DB860E4183D3293D3AE1A04B978DA3_gshared_inline)(__this, ___0_ptr, method);
}
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
// T Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate>::get_Invoke()
inline BeginSendMessageDelegate_t55D0469152EC11CCF544924363F1C12F13CF2FE1* FunctionPointer_1_get_Invoke_mB99A6DFFF953B5843576414230D5153BAD08925B (FunctionPointer_1_t5E2F5FC9CFE7FBBBECA6EB73BABFA0CD5F645155* __this, const RuntimeMethod* method)
{
	return ((  BeginSendMessageDelegate_t55D0469152EC11CCF544924363F1C12F13CF2FE1* (*) (FunctionPointer_1_t5E2F5FC9CFE7FBBBECA6EB73BABFA0CD5F645155*, const RuntimeMethod*))FunctionPointer_1_get_Invoke_m3E7098A72E4D4E432490A6F99AF8749B862ACF93_gshared)(__this, method);
}
// System.UInt32 System.UIntPtr::ToUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965 (uintptr_t* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate::Invoke(Unity.Networking.Transport.NetworkInterfaceSendHandle&,System.IntPtr,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BeginSendMessageDelegate_Invoke_m616D28C5DFFFB30E1F1392F14F6C6EB3B7EC99CD_inline (BeginSendMessageDelegate_t55D0469152EC11CCF544924363F1C12F13CF2FE1* __this, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___0_handle, intptr_t ___1_userData, int32_t ___2_requiredPayloadSize, const RuntimeMethod* method) ;
// System.UInt64 System.UIntPtr::ToUInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UIntPtr_ToUInt64_m7789E1D758F7AA7B1AAADB296EBC04E026A3F9FA (uintptr_t* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
// T Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate>::get_Invoke()
inline EndSendMessageDelegate_tCA4D3D136AE26FE2B671C22F4765E9B2C28025ED* FunctionPointer_1_get_Invoke_mFEE8AD2F13BFB25522EFCA2233290EF5A4BBCE32 (FunctionPointer_1_tD15B3870776AA5A42DBB36B9CCA6AA930B9628DE* __this, const RuntimeMethod* method)
{
	return ((  EndSendMessageDelegate_tCA4D3D136AE26FE2B671C22F4765E9B2C28025ED* (*) (FunctionPointer_1_tD15B3870776AA5A42DBB36B9CCA6AA930B9628DE*, const RuntimeMethod*))FunctionPointer_1_get_Invoke_m3E7098A72E4D4E432490A6F99AF8749B862ACF93_gshared)(__this, method);
}
// System.Int32 Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate::Invoke(Unity.Networking.Transport.NetworkInterfaceSendHandle&,Unity.Networking.Transport.NetworkInterfaceEndPoint&,System.IntPtr,Unity.Networking.Transport.NetworkSendQueueHandle&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EndSendMessageDelegate_Invoke_m13088C10AA0AD56CAD443B995E262A65BAC6C54F_inline (EndSendMessageDelegate_tCA4D3D136AE26FE2B671C22F4765E9B2C28025ED* __this, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___0_handle, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_address, intptr_t ___2_userData, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___3_sendQueue, const RuntimeMethod* method) ;
// Unity.Burst.SharedStatic`1<T> Unity.Burst.SharedStatic`1<Unity.Burst.FunctionPointer`1<Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback>>::GetOrCreate<Unity.Burst.FunctionPointer`1<Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback>,Unity.Networking.Transport.TLS.ManagedSecureFunctions/ManagedSecureFunctionsKey>(System.UInt32)
inline SharedStatic_1_t47339D7DCF45ED555300835940E9AFFB859D37B1 SharedStatic_1_GetOrCreate_TisFunctionPointer_1_tF917A6CBC8E241E4F555974CCF4507F08B71041A_TisManagedSecureFunctionsKey_t773373200D4DB2198DD729D87E4AC96A78F446FC_m4092AADF42DD27A470A1E23E08BE285D5633866B (uint32_t ___0_alignment, const RuntimeMethod* method)
{
	return ((  SharedStatic_1_t47339D7DCF45ED555300835940E9AFFB859D37B1 (*) (uint32_t, const RuntimeMethod*))SharedStatic_1_GetOrCreate_TisFunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2_TisManagedSecureFunctionsKey_t773373200D4DB2198DD729D87E4AC96A78F446FC_m11D7D55346FC367221AFB3DC978A273B32DAE1D5_gshared)(___0_alignment, method);
}
// Unity.Burst.SharedStatic`1<T> Unity.Burst.SharedStatic`1<Unity.Burst.FunctionPointer`1<Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback>>::GetOrCreate<Unity.Burst.FunctionPointer`1<Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback>,Unity.Networking.Transport.TLS.ManagedSecureFunctions/ManagedSecureFunctionsKey>(System.UInt32)
inline SharedStatic_1_tB8E12BEEFE90AF4450BDCB3502FC8A0745B05C87 SharedStatic_1_GetOrCreate_TisFunctionPointer_1_tA2FC39F25D07D293D943EDC747A8E0E7A70BDFC6_TisManagedSecureFunctionsKey_t773373200D4DB2198DD729D87E4AC96A78F446FC_m5E0058FDCCE914CC7CE32A61B6FC4A3A49357B8D (uint32_t ___0_alignment, const RuntimeMethod* method)
{
	return ((  SharedStatic_1_tB8E12BEEFE90AF4450BDCB3502FC8A0745B05C87 (*) (uint32_t, const RuntimeMethod*))SharedStatic_1_GetOrCreate_TisFunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2_TisManagedSecureFunctionsKey_t773373200D4DB2198DD729D87E4AC96A78F446FC_m11D7D55346FC367221AFB3DC978A273B32DAE1D5_gshared)(___0_alignment, method);
}
// System.Int32 Unity.Networking.Transport.TLS.SecureNetworkProtocol::ComputePacketOverhead(Unity.Networking.Transport.NetworkDriver/Connection&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SecureNetworkProtocol_ComputePacketOverhead_m23FF3AD571738B5BBBC31F0DC7A1BADFB3C4B12A (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, int32_t* ___1_dataOffset, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::ProcessReceive(System.IntPtr,Unity.Networking.Transport.NetworkInterfaceEndPoint&,System.Int32,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr,Unity.Networking.Transport.ProcessPacketCommand&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_ProcessReceive_m31DC346544D8BEACDEF4858B7B7E8051DC870067 (intptr_t ___0_stream, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_endpoint, int32_t ___2_size, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___3_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, intptr_t ___5_userData, ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* ___6_command, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.TLS.SecureNetworkProtocol::ProcessSend(Unity.Networking.Transport.NetworkDriver/Connection&,System.Boolean,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkInterfaceSendHandle&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SecureNetworkProtocol_ProcessSend_m953E726B286E1FF9FB1836FB4897A8357A558987 (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, bool ___1_hasPipeline, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___2_sendInterface, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___3_sendHandle, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, intptr_t ___5_userData, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::ProcessSendConnectionAccept(Unity.Networking.Transport.NetworkDriver/Connection&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_ProcessSendConnectionAccept_m6E2E06B210D208CE575A32F53B49199A9ED0EEB5 (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::Connect(Unity.Networking.Transport.NetworkDriver/Connection&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_Connect_mAE3ED3A9FBA3023E1E50467AD4BF826ED89ADFFB (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::Disconnect(Unity.Networking.Transport.NetworkDriver/Connection&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_Disconnect_m73A4699BBAFB93E2FEF31C3F4F6F406E19C66B53 (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::ProcessSendPing(Unity.Networking.Transport.NetworkDriver/Connection&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_ProcessSendPing_m2CD7DA3B44CD99AB7E16C101FB83912649196F18 (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::ProcessSendPong(Unity.Networking.Transport.NetworkDriver/Connection&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_ProcessSendPong_m8D7736A3DAE23BE23205ECA0E5EFFFB2BA3B1AB7 (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::Update(System.Int64,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_Update_m40062B33F2208A000DB3ACE25B599336414CE9A3 (int64_t ___0_updateTime, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) ;
// Unity.TLS.LowLevel.Binding/unitytls_client* Unity.TLS.LowLevel.Binding::unitytls_client_create(System.UInt32,Unity.TLS.LowLevel.Binding/unitytls_client_config*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* Binding_unitytls_client_create_mA830787311EBD55A7ACAA925541EE3A28F398026 (uint32_t ___0_role, unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* ___1_config, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.TLS.LowLevel.Binding/unitytls_client_config>()
inline int32_t UnsafeUtility_SizeOf_Tisunitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F_mB5C3FE2DC1AACE0DDBD3777316FBF67D9DED09BD (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_Tisunitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F_mB5C3FE2DC1AACE0DDBD3777316FBF67D9DED09BD_gshared)(method);
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<Unity.TLS.LowLevel.Binding/unitytls_client_config>()
inline int32_t UnsafeUtility_AlignOf_Tisunitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F_m59D5E5DE33D7D644DA555FA3F7A1D8623361D326 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_Tisunitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F_m59D5E5DE33D7D644DA555FA3F7A1D8623361D326_gshared)(method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Malloc(System.Int64,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_Malloc_mD7BD28D5AE7E4901B225B7DFFE2B568EE7BDC0C9 (int64_t ___0_size, int32_t ___1_alignment, int32_t ___2_allocator, const RuntimeMethod* method) ;
// System.Void Unity.TLS.LowLevel.Binding::unitytls_client_init_config(Unity.TLS.LowLevel.Binding/unitytls_client_config*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Binding_unitytls_client_init_config_m82074495EA2A17758484F4A7FF1C6BB2EFE198B5 (unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* ___0_config, const RuntimeMethod* method) ;
// System.IntPtr Unity.Burst.FunctionPointer`1<Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback>::get_Value()
inline intptr_t FunctionPointer_1_get_Value_m5016AF7AD65D91AA6D0456BEB6ED3A9D3AD8B9A5_inline (FunctionPointer_1_tF917A6CBC8E241E4F555974CCF4507F08B71041A* __this, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (FunctionPointer_1_tF917A6CBC8E241E4F555974CCF4507F08B71041A*, const RuntimeMethod*))FunctionPointer_1_get_Value_m71D7FF781C694A7C4EE28362DFC78D8DDFE9A105_gshared_inline)(__this, method);
}
// System.IntPtr Unity.Burst.FunctionPointer`1<Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback>::get_Value()
inline intptr_t FunctionPointer_1_get_Value_mD9253C9B8BD4ED226D78C76033424F14A1BFC366_inline (FunctionPointer_1_tA2FC39F25D07D293D943EDC747A8E0E7A70BDFC6* __this, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (FunctionPointer_1_tA2FC39F25D07D293D943EDC747A8E0E7A70BDFC6*, const RuntimeMethod*))FunctionPointer_1_get_Value_m71D7FF781C694A7C4EE28362DFC78D8DDFE9A105_gshared_inline)(__this, method);
}
// System.Void Unity.Networking.Transport.TLS.ManagedSecureFunctions::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedSecureFunctions_Initialize_m3EC45C8144F2303167F7AF87B68CEBE6A08956D8 (const RuntimeMethod* method) ;
// Unity.Networking.Transport.TLS.SecureNetworkProtocolParameter Unity.Networking.Transport.TLS.SecureParameterExtensions::GetSecureParameters(Unity.Networking.Transport.NetworkSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97 SecureParameterExtensions_GetSecureParameters_mDA8792BF305FD4821DAFF2E9A01582078B58B7EF (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* ___0_settings, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Networking.Transport.TLS.SecureNetworkProtocolData>()
inline int32_t UnsafeUtility_SizeOf_TisSecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582_mD87AFEA55A4560FB415A7925E1F0285462A8EFD9 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisSecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582_mD87AFEA55A4560FB415A7925E1F0285462A8EFD9_gshared)(method);
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<Unity.Networking.Transport.TLS.SecureNetworkProtocolData>()
inline int32_t UnsafeUtility_AlignOf_TisSecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582_m2A0723994580C2ECBB82DAF6262E34EB6EA66581 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisSecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582_m2A0723994580C2ECBB82DAF6262E34EB6EA66581_gshared)(method);
}
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D (int32_t ___0_a, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<Unity.Networking.Transport.NetworkInterfaceEndPoint,Unity.Networking.Transport.TLS.SecureClientState>::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void UnsafeHashMap_2__ctor_m31E886D42092D529AC55246DA8F9E37C4A485613 (UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeHashMap_2__ctor_m31E886D42092D529AC55246DA8F9E37C4A485613_gshared)(__this, ___0_capacity, ___1_allocator, method);
}
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::Initialize(Unity.Networking.Transport.NetworkSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_Initialize_mF5865F808C4FB0306850F1C9660679CC8B050E29 (SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581* __this, NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0 ___0_settings, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Free(System.Void*,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_Free_mFF99F4F02FE7F735AB30D8987D6953E55A2B23E1 (void* ___0_memory, int32_t ___1_allocator, const RuntimeMethod* method) ;
// System.Void Unity.TLS.LowLevel.Binding::unitytls_client_destroy(Unity.TLS.LowLevel.Binding/unitytls_client*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Binding_unitytls_client_destroy_m3454EE8424B3F530183F2FB04DE935EFA0D4CE0B (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<TKey> Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<Unity.Networking.Transport.NetworkInterfaceEndPoint,Unity.Networking.Transport.TLS.SecureClientState>::GetKeyArray(Unity.Collections.AllocatorManager/AllocatorHandle)
inline NativeArray_1_tDF8469CB50B586533F70B614C38965EEBD6145B2 UnsafeHashMap_2_GetKeyArray_m5F34C4DF59F343A77EBFAD1EF1667A43A38781C8 (UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDF8469CB50B586533F70B614C38965EEBD6145B2 (*) (UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeHashMap_2_GetKeyArray_m5F34C4DF59F343A77EBFAD1EF1667A43A38781C8_gshared)(__this, ___0_allocator, method);
}
// TValue Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<Unity.Networking.Transport.NetworkInterfaceEndPoint,Unity.Networking.Transport.TLS.SecureClientState>::get_Item(TKey)
inline SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC (UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* __this, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 ___0_key, const RuntimeMethod* method)
{
	return ((  SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 (*) (UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77*, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686, const RuntimeMethod*))UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC_gshared)(__this, ___0_key, method);
}
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::DisposeSecureClient(Unity.Networking.Transport.TLS.SecureClientState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_DisposeSecureClient_mB349E3980ACCB847640BCE87AA1319627170B17D (SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* ___0_state, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<Unity.Networking.Transport.NetworkInterfaceEndPoint,Unity.Networking.Transport.TLS.SecureClientState>::Remove(TKey)
inline bool UnsafeHashMap_2_Remove_m94BE3198B3A3508CB109FAC4EE568ED86407F71B (UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* __this, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77*, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686, const RuntimeMethod*))UnsafeHashMap_2_Remove_m94BE3198B3A3508CB109FAC4EE568ED86407F71B_gshared)(__this, ___0_key, method);
}
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_Dispose_m8CF7827AE167471FBC0126F15EBDF9437C62A4C8 (SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.TLS.SecureNetworkProtocol::Bind(Unity.Networking.Transport.INetworkInterface,Unity.Networking.Transport.NetworkInterfaceEndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SecureNetworkProtocol_Bind_m6CA2F8559AA95DAB225229C05264B1440DA46A85 (SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581* __this, RuntimeObject* ___0_networkInterface, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_localEndPoint, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputePacketOverheadDelegate__ctor_mFF77EEC0FBE97189793098037E72362557312B64 (ComputePacketOverheadDelegate_tFF6AB7CC7E33391F1CF729C3FC4C5DF1D47CA9C7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate>::.ctor(T)
inline void TransportFunctionPointer_1__ctor_m3E02B7E6A2635CD893E5D1C86CC9176D982BC3D0 (TransportFunctionPointer_1_t403A4BA6983AC49EB5EDF3EB14F092C746490EFF* __this, ComputePacketOverheadDelegate_tFF6AB7CC7E33391F1CF729C3FC4C5DF1D47CA9C7* ___0_executeDelegate, const RuntimeMethod* method)
{
	((  void (*) (TransportFunctionPointer_1_t403A4BA6983AC49EB5EDF3EB14F092C746490EFF*, ComputePacketOverheadDelegate_tFF6AB7CC7E33391F1CF729C3FC4C5DF1D47CA9C7*, const RuntimeMethod*))TransportFunctionPointer_1__ctor_mDFDCBE62DAAFA10648F4CEA771C756D0661FBFA8_gshared)(__this, ___0_executeDelegate, method);
}
// System.Void Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessReceiveDelegate__ctor_m36FA8288C211E49A48DFEC43097F51CDF87F94FC (ProcessReceiveDelegate_tC13DF5985CEFE17FBFF48B30FECDD7C4470A83C4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate>::.ctor(T)
inline void TransportFunctionPointer_1__ctor_m0CF0EB42CBD6B29DBC6A68F45E303B0996D7D22D (TransportFunctionPointer_1_tF0C75E421ACA913F2FA062ED002F9586FEA669FC* __this, ProcessReceiveDelegate_tC13DF5985CEFE17FBFF48B30FECDD7C4470A83C4* ___0_executeDelegate, const RuntimeMethod* method)
{
	((  void (*) (TransportFunctionPointer_1_tF0C75E421ACA913F2FA062ED002F9586FEA669FC*, ProcessReceiveDelegate_tC13DF5985CEFE17FBFF48B30FECDD7C4470A83C4*, const RuntimeMethod*))TransportFunctionPointer_1__ctor_mDFDCBE62DAAFA10648F4CEA771C756D0661FBFA8_gshared)(__this, ___0_executeDelegate, method);
}
// System.Void Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessSendDelegate__ctor_mD549857AED7833D3BB6E64DB337BCC959AF46E9F (ProcessSendDelegate_t13BEFEE10F53345833169A7C7AF11F3B3EB2DA11* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate>::.ctor(T)
inline void TransportFunctionPointer_1__ctor_m39D9CD4BCB4ED59BD85E320FF4EE2208AC5B7882 (TransportFunctionPointer_1_t77C607A1DCF675C39F99E9EEE5AB36FB7CC494B1* __this, ProcessSendDelegate_t13BEFEE10F53345833169A7C7AF11F3B3EB2DA11* ___0_executeDelegate, const RuntimeMethod* method)
{
	((  void (*) (TransportFunctionPointer_1_t77C607A1DCF675C39F99E9EEE5AB36FB7CC494B1*, ProcessSendDelegate_t13BEFEE10F53345833169A7C7AF11F3B3EB2DA11*, const RuntimeMethod*))TransportFunctionPointer_1__ctor_mDFDCBE62DAAFA10648F4CEA771C756D0661FBFA8_gshared)(__this, ___0_executeDelegate, method);
}
// System.Void Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessSendConnectionAcceptDelegate__ctor_mCDB2854F94CC9B1FBF2E3F5D3EC06455879412AE (ProcessSendConnectionAcceptDelegate_t69D4C0B8BE8F81AFC1A4A2F0A4EF5540B3003CAF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate>::.ctor(T)
inline void TransportFunctionPointer_1__ctor_mB4B753786975770CB3F5DDC734BB2DBAE1781673 (TransportFunctionPointer_1_t8BEB3732EF9358D73F93626B99D9423182E4C47D* __this, ProcessSendConnectionAcceptDelegate_t69D4C0B8BE8F81AFC1A4A2F0A4EF5540B3003CAF* ___0_executeDelegate, const RuntimeMethod* method)
{
	((  void (*) (TransportFunctionPointer_1_t8BEB3732EF9358D73F93626B99D9423182E4C47D*, ProcessSendConnectionAcceptDelegate_t69D4C0B8BE8F81AFC1A4A2F0A4EF5540B3003CAF*, const RuntimeMethod*))TransportFunctionPointer_1__ctor_mDFDCBE62DAAFA10648F4CEA771C756D0661FBFA8_gshared)(__this, ___0_executeDelegate, method);
}
// System.Void Unity.Networking.Transport.NetworkProtocol/ConnectDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectDelegate__ctor_m5F8C25B575FFE1F35F90E02833B67A870635D40C (ConnectDelegate_tF0F993B09F4013E6F8765D173E20519526B78613* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ConnectDelegate>::.ctor(T)
inline void TransportFunctionPointer_1__ctor_m857908203463C9FB5C58EA05FE3415FCA9309886 (TransportFunctionPointer_1_t71E737606530D4C87CDCF73063247BA844270CFF* __this, ConnectDelegate_tF0F993B09F4013E6F8765D173E20519526B78613* ___0_executeDelegate, const RuntimeMethod* method)
{
	((  void (*) (TransportFunctionPointer_1_t71E737606530D4C87CDCF73063247BA844270CFF*, ConnectDelegate_tF0F993B09F4013E6F8765D173E20519526B78613*, const RuntimeMethod*))TransportFunctionPointer_1__ctor_mDFDCBE62DAAFA10648F4CEA771C756D0661FBFA8_gshared)(__this, ___0_executeDelegate, method);
}
// System.Void Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisconnectDelegate__ctor_m94F15D89BBBB6D3B470B0E028C32940ABE783B76 (DisconnectDelegate_tEF9FFFB31023D3A29E0A1FA73D4F830B0E799A14* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate>::.ctor(T)
inline void TransportFunctionPointer_1__ctor_m5D145E90EC40CE16611DF7593398529E85263C56 (TransportFunctionPointer_1_t8CB155AD69427676535F5D25A3C9408D5012DDB0* __this, DisconnectDelegate_tEF9FFFB31023D3A29E0A1FA73D4F830B0E799A14* ___0_executeDelegate, const RuntimeMethod* method)
{
	((  void (*) (TransportFunctionPointer_1_t8CB155AD69427676535F5D25A3C9408D5012DDB0*, DisconnectDelegate_tEF9FFFB31023D3A29E0A1FA73D4F830B0E799A14*, const RuntimeMethod*))TransportFunctionPointer_1__ctor_mDFDCBE62DAAFA10648F4CEA771C756D0661FBFA8_gshared)(__this, ___0_executeDelegate, method);
}
// System.Void Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessSendPingDelegate__ctor_mCD2550603B06D8CEC25F4E2D446BF5CC5C8A0BC0 (ProcessSendPingDelegate_t152699432B5574DC4245F79AD09F4AAC5038FD2B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate>::.ctor(T)
inline void TransportFunctionPointer_1__ctor_m99B3F3334311C659D1A30A1A1DD501A278504B62 (TransportFunctionPointer_1_t97CB0A2F7C4082FD45ACA0AE4155845480AE8843* __this, ProcessSendPingDelegate_t152699432B5574DC4245F79AD09F4AAC5038FD2B* ___0_executeDelegate, const RuntimeMethod* method)
{
	((  void (*) (TransportFunctionPointer_1_t97CB0A2F7C4082FD45ACA0AE4155845480AE8843*, ProcessSendPingDelegate_t152699432B5574DC4245F79AD09F4AAC5038FD2B*, const RuntimeMethod*))TransportFunctionPointer_1__ctor_mDFDCBE62DAAFA10648F4CEA771C756D0661FBFA8_gshared)(__this, ___0_executeDelegate, method);
}
// System.Void Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessSendPongDelegate__ctor_m941B05EA730046AF3D8D72BCAEAD489B81E07455 (ProcessSendPongDelegate_t10EC1FA49739F7F923218C56A0FCBB3A2E99CE49* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate>::.ctor(T)
inline void TransportFunctionPointer_1__ctor_m6C20ABFA8FDDFF6594D8ED81DD9E8A1ADD5A105C (TransportFunctionPointer_1_t1974F1C28035CE103ECF0504CE8E87D6037E0398* __this, ProcessSendPongDelegate_t10EC1FA49739F7F923218C56A0FCBB3A2E99CE49* ___0_executeDelegate, const RuntimeMethod* method)
{
	((  void (*) (TransportFunctionPointer_1_t1974F1C28035CE103ECF0504CE8E87D6037E0398*, ProcessSendPongDelegate_t10EC1FA49739F7F923218C56A0FCBB3A2E99CE49*, const RuntimeMethod*))TransportFunctionPointer_1__ctor_mDFDCBE62DAAFA10648F4CEA771C756D0661FBFA8_gshared)(__this, ___0_executeDelegate, method);
}
// System.Void Unity.Networking.Transport.NetworkProtocol/UpdateDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateDelegate__ctor_m86BE497BB0163FA75917B006CE9090480E515766 (UpdateDelegate_t848AE3DE157F214CEF33820CF17818729BACFFCD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/UpdateDelegate>::.ctor(T)
inline void TransportFunctionPointer_1__ctor_mBCE476BB901D7124332E857E414D21674E44764D (TransportFunctionPointer_1_tBB4FC4ACEB955CF3ECDC5FB78DE9132C126522F2* __this, UpdateDelegate_t848AE3DE157F214CEF33820CF17818729BACFFCD* ___0_executeDelegate, const RuntimeMethod* method)
{
	((  void (*) (TransportFunctionPointer_1_tBB4FC4ACEB955CF3ECDC5FB78DE9132C126522F2*, UpdateDelegate_t848AE3DE157F214CEF33820CF17818729BACFFCD*, const RuntimeMethod*))TransportFunctionPointer_1__ctor_mDFDCBE62DAAFA10648F4CEA771C756D0661FBFA8_gshared)(__this, ___0_executeDelegate, method);
}
// System.Void Unity.Networking.Transport.NetworkProtocol::.ctor(Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate>,Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate>,Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate>,Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate>,Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ConnectDelegate>,Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate>,Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate>,Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate>,Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/UpdateDelegate>,System.Boolean,System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkProtocol__ctor_mC2750284019C0B13ACEC26B10D34B77E617D7B2A (NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9* __this, TransportFunctionPointer_1_t403A4BA6983AC49EB5EDF3EB14F092C746490EFF ___0_computePacketOverhead, TransportFunctionPointer_1_tF0C75E421ACA913F2FA062ED002F9586FEA669FC ___1_processReceive, TransportFunctionPointer_1_t77C607A1DCF675C39F99E9EEE5AB36FB7CC494B1 ___2_processSend, TransportFunctionPointer_1_t8BEB3732EF9358D73F93626B99D9423182E4C47D ___3_processSendConnectionAccept, TransportFunctionPointer_1_t71E737606530D4C87CDCF73063247BA844270CFF ___4_connect, TransportFunctionPointer_1_t8CB155AD69427676535F5D25A3C9408D5012DDB0 ___5_disconnect, TransportFunctionPointer_1_t97CB0A2F7C4082FD45ACA0AE4155845480AE8843 ___6_processSendPing, TransportFunctionPointer_1_t1974F1C28035CE103ECF0504CE8E87D6037E0398 ___7_processSendPong, TransportFunctionPointer_1_tBB4FC4ACEB955CF3ECDC5FB78DE9132C126522F2 ___8_update, bool ___9_needsUpdate, intptr_t ___10_userData, int32_t ___11_maxHeaderSize, int32_t ___12_maxFooterSize, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkProtocol Unity.Networking.Transport.TLS.SecureNetworkProtocol::CreateProtocolInterface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9 SecureNetworkProtocol_CreateProtocolInterface_mB81A91C3ADAC273D4D07AD0056F8F170E0AC4E06 (SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.UnityTransportProtocol::ComputePacketOverhead(Unity.Networking.Transport.NetworkDriver/Connection&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransportProtocol_ComputePacketOverhead_m7F9F4F3826262A4AD39C1176E4C91AA76C6BB11B (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, int32_t* ___1_dataOffset, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<Unity.Networking.Transport.NetworkInterfaceEndPoint,Unity.Networking.Transport.TLS.SecureClientState>::TryAdd(TKey,TValue)
inline bool UnsafeHashMap_2_TryAdd_mB425A45433A55B799577F14EFBE7C7379D37CF2E (UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* __this, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 ___0_key, SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 ___1_item, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77*, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686, SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54, const RuntimeMethod*))UnsafeHashMap_2_TryAdd_mB425A45433A55B799577F14EFBE7C7379D37CF2E_gshared)(__this, ___0_key, ___1_item, method);
}
// Unity.TLS.LowLevel.Binding/unitytls_client_config* Unity.Networking.Transport.TLS.SecureNetworkProtocol::GetSecureClientConfig(Unity.Networking.Transport.TLS.SecureNetworkProtocolData*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* SecureNetworkProtocol_GetSecureClientConfig_m1EB7EDB53869DD1C0A75D2D8CEF81BDBC3BFE4C7 (SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* ___0_protocolData, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::CreateSecureClient(System.UInt32,Unity.Networking.Transport.TLS.SecureClientState*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_CreateSecureClient_mD8F9F20B481B1487C7B1D2F3AFAE2DB1A2FF9B1D (uint32_t ___0_role, SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* ___1_state, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Networking.Transport.TLS.SecureUserData>()
inline int32_t UnsafeUtility_SizeOf_TisSecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B_m93E4445737BC86FE087B87E97CD00064A2CD9114 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisSecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B_m93E4445737BC86FE087B87E97CD00064A2CD9114_gshared)(method);
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<Unity.Networking.Transport.TLS.SecureUserData>()
inline int32_t UnsafeUtility_AlignOf_TisSecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B_m42E37113A90B5272BE314C380722580DEF3E96F8 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisSecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B_m42E37113A90B5272BE314C380722580DEF3E96F8_gshared)(method);
}
// System.Boolean Unity.Collections.FixedString32Bytes::op_Inequality(Unity.Collections.FixedString32Bytes&,Unity.Collections.FixedString32Bytes&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FixedString32Bytes_op_Inequality_m79C9EBDDD8ACA515FEE668E2C49C5F0CD4B2AD16 (FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* ___0_a, FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* ___1_b, const RuntimeMethod* method) ;
// System.Byte* Unity.Collections.FixedString32Bytes::GetUnsafePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedString32Bytes_GetUnsafePtr_mA653D9296813A2EA93C0D6FC501500008121C3A8_inline (FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.FixedString4096Bytes::op_Inequality(Unity.Collections.FixedString4096Bytes&,Unity.Collections.FixedString32Bytes&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FixedString4096Bytes_op_Inequality_m7FFBE281245A53F6FF937ABE36ADAD484F1B0B1F (FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21* ___0_a, FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* ___1_b, const RuntimeMethod* method) ;
// System.Byte* Unity.Collections.FixedString4096Bytes::GetUnsafePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedString4096Bytes_GetUnsafePtr_mE1DB42C2C0EEA7D6E1B5D0366A4727125D916EEB_inline (FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.FixedString4096Bytes::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FixedString4096Bytes_get_Length_mC2A80F2813739852F0675DA8D2AB68AA92BFC36F_inline (FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21* __this, const RuntimeMethod* method) ;
// System.Void System.UIntPtr::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIntPtr__ctor_m5915109E3F198CA16FDFA9CF438FAAEBFB90DE27 (uintptr_t* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 Unity.TLS.LowLevel.Binding::unitytls_client_init(Unity.TLS.LowLevel.Binding/unitytls_client*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Binding_unitytls_client_init_m4A2D0AEC37B2EEAFFF7793ECE1C27B52E718C9AA (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<Unity.Networking.Transport.NetworkInterfaceEndPoint,Unity.Networking.Transport.TLS.SecureClientState>::set_Item(TKey,TValue)
inline void UnsafeHashMap_2_set_Item_mA9D2E832C60A25C9C7F70B3F329AC7BF45D01288 (UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* __this, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 ___0_key, SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77*, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686, SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54, const RuntimeMethod*))UnsafeHashMap_2_set_Item_mA9D2E832C60A25C9C7F70B3F329AC7BF45D01288_gshared)(__this, ___0_key, ___1_value, method);
}
// System.UInt32 Unity.TLS.LowLevel.Binding::unitytls_client_get_role(Unity.TLS.LowLevel.Binding/unitytls_client*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_get_role_m1F838334033B29D9251DDD0153303DEE21B6C8EB (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, const RuntimeMethod* method) ;
// System.UInt32 Unity.TLS.LowLevel.Binding::unitytls_client_handshake(Unity.TLS.LowLevel.Binding/unitytls_client*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_handshake_mD90B620858219D8DF2E01747ED7DEFE6CF944F46 (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, const RuntimeMethod* method) ;
// System.UInt32 Unity.TLS.LowLevel.Binding::unitytls_client_get_handshake_state(Unity.TLS.LowLevel.Binding/unitytls_client*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_get_handshake_state_m5DCB8B5E8841F1BCF2CC2E52310B30CCE0EB2199 (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.TLS.SecureNetworkProtocol::ClientShouldStep(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SecureNetworkProtocol_ClientShouldStep_m51AC70186760C7BB190576E633FE88397E4108CF (uint32_t ___0_currentState, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.TLS.SecureNetworkProtocol::ServerShouldStep(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SecureNetworkProtocol_ServerShouldStep_mBD0476B9F58C6EA7017CE0328275C80D7B1A8270 (uint32_t ___0_currentState, const RuntimeMethod* method) ;
// System.UInt32 Unity.Networking.Transport.TLS.SecureNetworkProtocol::SecureHandshakeStep(Unity.Networking.Transport.TLS.SecureClientState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SecureNetworkProtocol_SecureHandshakeStep_m28362FB06B2A4D53DBA0A066C7C3BB61FCD3C910 (SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* ___0_clientAgent, const RuntimeMethod* method) ;
// System.UInt32 Unity.TLS.LowLevel.Binding::unitytls_client_get_state(Unity.TLS.LowLevel.Binding/unitytls_client*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_get_state_mFA36FD1C48800D3B88D142ED9E1FFFC65F196B0F (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<Unity.Networking.Transport.NetworkInterfaceEndPoint>::Dispose()
inline void NativeArray_1_Dispose_mDDF671931CE60775804BC5073A9296DD06BD335F (NativeArray_1_tDF8469CB50B586533F70B614C38965EEBD6145B2* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDF8469CB50B586533F70B614C38965EEBD6145B2*, const RuntimeMethod*))NativeArray_1_Dispose_mDDF671931CE60775804BC5073A9296DD06BD335F_gshared)(__this, method);
}
// System.Boolean Unity.Networking.Transport.TLS.SecureNetworkProtocol::CreateNewSecureClientState(Unity.Networking.Transport.NetworkInterfaceEndPoint&,System.UInt32,Unity.Networking.Transport.TLS.SecureNetworkProtocolData*,Unity.Networking.Transport.SessionIdToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SecureNetworkProtocol_CreateNewSecureClientState_mAA5DDF2BA684C99D2BC6C5DA03B3DB14DBDF726B (NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___0_endpoint, uint32_t ___1_tlsRole, SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* ___2_protocolData, SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 ___3_receiveToken, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::SetSecureUserData(System.IntPtr,System.Int32,Unity.Networking.Transport.NetworkInterfaceEndPoint&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,Unity.Networking.Transport.TLS.SecureUserData*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_SetSecureUserData_m26108E90B1F178D279794549BC3435FE957E3542 (intptr_t ___0_inStream, int32_t ___1_size, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___2_remote, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___3_networkSendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* ___5_secureUserData, const RuntimeMethod* method) ;
// System.UInt32 Unity.Networking.Transport.TLS.SecureNetworkProtocol::UpdateSecureHandshakeState(Unity.Networking.Transport.TLS.SecureNetworkProtocolData*,Unity.Networking.Transport.NetworkInterfaceEndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SecureNetworkProtocol_UpdateSecureHandshakeState_mA53751EDD6F70C01A3942C8C2F53655DBD8083CE (SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* ___0_protocolData, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_endpoint, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::SendConnectionRequest(Unity.Networking.Transport.SessionIdToken,Unity.Networking.Transport.TLS.SecureClientState,Unity.Networking.Transport.NetworkInterfaceEndPoint&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_SendConnectionRequest_m720B1352ECC1FE9E22E423DFA9710111BE2496A6 (SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 ___0_token, SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 ___1_secureClient, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___2_address, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___3_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Byte>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared)(___0_nativeArray, method);
}
// System.UInt32 Unity.TLS.LowLevel.Binding::unitytls_client_read_data(Unity.TLS.LowLevel.Binding/unitytls_client*,System.Byte*,System.UIntPtr,System.UIntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_read_data_mF232A9B9C2DB17E25ACB540144CB2C4CD3D67C2F (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, uint8_t* ___1_buffer, uintptr_t ___2_bufferLen, uintptr_t* ___3_bytesRead, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.UnityTransportProtocol::ProcessReceive(System.IntPtr,Unity.Networking.Transport.NetworkInterfaceEndPoint&,System.Int32,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr,Unity.Networking.Transport.ProcessPacketCommand&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransportProtocol_ProcessReceive_m5157A3D3CAE03473F57E45490FEA106A4828281E (intptr_t ___0_stream, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_endpoint, int32_t ___2_size, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___3_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, intptr_t ___5_userData, ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* ___6_command, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.UnityTransportProtocol::WriteSendMessageHeader(Unity.Networking.Transport.NetworkDriver/Connection&,System.Boolean,Unity.Networking.Transport.NetworkInterfaceSendHandle&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransportProtocol_WriteSendMessageHeader_m17ABE04555AF690ECA01FB36C9F35BAA59299C97 (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, bool ___1_hasPipeline, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___2_sendHandle, int32_t ___3_offset, const RuntimeMethod* method) ;
// T Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate>::get_Invoke()
inline AbortSendMessageDelegate_t6FBF6C859A8E442AC6D2CC1FEF00CD4D9815FB0D* FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904 (FunctionPointer_1_t605FCD8E1E05F041A75BCDAE5CE44D9A201BFAA1* __this, const RuntimeMethod* method)
{
	return ((  AbortSendMessageDelegate_t6FBF6C859A8E442AC6D2CC1FEF00CD4D9815FB0D* (*) (FunctionPointer_1_t605FCD8E1E05F041A75BCDAE5CE44D9A201BFAA1*, const RuntimeMethod*))FunctionPointer_1_get_Invoke_m3E7098A72E4D4E432490A6F99AF8749B862ACF93_gshared)(__this, method);
}
// System.Void Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate::Invoke(Unity.Networking.Transport.NetworkInterfaceSendHandle&,System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AbortSendMessageDelegate_Invoke_m60B3BB8663C28583542B560731BE31828023A7CD_inline (AbortSendMessageDelegate_t6FBF6C859A8E442AC6D2CC1FEF00CD4D9815FB0D* __this, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___0_handle, intptr_t ___1_userData, const RuntimeMethod* method) ;
// System.UInt32 Unity.TLS.LowLevel.Binding::unitytls_client_send_data(Unity.TLS.LowLevel.Binding/unitytls_client*,System.Byte*,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_send_data_m5086C52FA8F5F51D6A764CDF277FFFBCBA6D1928 (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, uint8_t* ___1_data, uintptr_t ___2_dataLen, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.TLS.SecureNetworkProtocol::WriteConnectionAcceptMessage(Unity.Networking.Transport.NetworkDriver/Connection&,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SecureNetworkProtocol_WriteConnectionAcceptMessage_m53C6A68F7408FB7B2047CAD491247A7FCCD7D8D7 (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, uint8_t* ___1_packet, int32_t ___2_capacity, const RuntimeMethod* method) ;
// System.UInt32 Unity.Networking.Transport.TLS.SecureNetworkProtocol::SendHeaderOnlyMessage(Unity.Networking.Transport.Protocols.UdpCProtocol,Unity.Networking.Transport.SessionIdToken,Unity.Networking.Transport.TLS.SecureClientState,Unity.Networking.Transport.NetworkDriver/Connection&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SecureNetworkProtocol_SendHeaderOnlyMessage_m865EC5185367FA14E35E45B8FC642616A6CD3314 (int32_t ___0_type, SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 ___1_token, SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 ___2_secureClient, Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___3_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___4_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___5_queueHandle, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::PruneHalfOpenConnections(Unity.Networking.Transport.TLS.SecureNetworkProtocolData*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_PruneHalfOpenConnections_m86DADCC8B19C2A5A2065CB1DB70FAF73CC5AC597 (SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* ___0_protocolData, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.NetworkSettings::TryGet<Unity.Networking.Transport.TLS.SecureNetworkProtocolParameter>(T&)
inline bool NetworkSettings_TryGet_TisSecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97_mB2F1591010C6E88F9124C708EFF49FE9FF190D45 (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, SecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97* ___0_parameter, const RuntimeMethod* method)
{
	return ((  bool (*) (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0*, SecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97*, const RuntimeMethod*))NetworkSettings_TryGet_TisSecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97_mB2F1591010C6E88F9124C708EFF49FE9FF190D45_gshared)(__this, ___0_parameter, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// Unity.Networking.Transport.Relay.RelayMessageHeader Unity.Networking.Transport.Relay.RelayMessageHeader::Create(Unity.Networking.Transport.Relay.RelayMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72 RelayMessageHeader_Create_mAFABE63AE20CD1AE19E5D90726384E868DF35823 (uint8_t ___0_type, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.DataStreamWriter::WriteBytes(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataStreamWriter_WriteBytes_m5A6218CBEEA1204AC2B8822CB09422FCABF42CFD (DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* __this, uint8_t* ___0_data, int32_t ___1_bytes, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.DataStreamWriter::WriteByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataStreamWriter_WriteByte_m4590CE6F34784974D396931C455EFB75028760CD (DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.DataStreamWriter::WriteUShort(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataStreamWriter_WriteUShort_mC6EE4378B5C9F0DE233542BBB730F4CB210F7287 (DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.Relay.RelayMessageHeader::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RelayMessageHeader_IsValid_m87A499AEA741893D3947B9648833443FC3383113 (RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72* __this, const RuntimeMethod* method) ;
// System.UInt16 Unity.Networking.Transport.Relay.RelayNetworkProtocol::SwitchEndianness(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RelayNetworkProtocol_SwitchEndianness_m06F5B2C60C6F9A88468FA3F720977E2CF7CDD124 (uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.Relay.RelayAllocationId::Compare(Unity.Networking.Transport.Relay.RelayAllocationId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RelayAllocationId_Compare_m91795613B6AB51348C394FCACFC0032E996D33E7 (RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* __this, RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___0_other, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.Relay.RelayAllocationId::Equals(Unity.Networking.Transport.Relay.RelayAllocationId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RelayAllocationId_Equals_m592299E57528316BE905F7A4B6CB9967636ABE41 (RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* __this, RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___0_other, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.Relay.RelayAllocationId::CompareTo(Unity.Networking.Transport.Relay.RelayAllocationId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RelayAllocationId_CompareTo_m6999449ACE6F980D62F70A25BF299644BC117B97 (RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* __this, RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___0_other, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.Relay.RelayAllocationId::op_Equality(Unity.Networking.Transport.Relay.RelayAllocationId,Unity.Networking.Transport.Relay.RelayAllocationId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RelayAllocationId_op_Equality_m9AC1B0DC988A52B10DB8E3E48BE2EC6DF6B9C046 (RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___0_lhs, RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.Relay.RelayAllocationId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RelayAllocationId_Equals_mB3CF3FB1E9B1101844216E8288CBB09610509B5A (RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.Relay.RelayAllocationId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RelayAllocationId_GetHashCode_m62B1E35940A073B2FA3F8A199EC9151980D3CA17 (RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCmp(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_MemCmp_mA0E0E1A93F715105E7B576F1603DCAB37717A5EF (void* ___0_ptr1, void* ___1_ptr2, int64_t ___2_size, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.NetworkSettings::TryGet<Unity.Networking.Transport.Relay.RelayNetworkParameter>(T&)
inline bool NetworkSettings_TryGet_TisRelayNetworkParameter_tE48AD3A6F0F2548B9929FE896969232D10FBC4B8_m2915D2DF811C81800CA3F27275A5D1F1C6FB371C (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, RelayNetworkParameter_tE48AD3A6F0F2548B9929FE896969232D10FBC4B8* ___0_parameter, const RuntimeMethod* method)
{
	return ((  bool (*) (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0*, RelayNetworkParameter_tE48AD3A6F0F2548B9929FE896969232D10FBC4B8*, const RuntimeMethod*))NetworkSettings_TryGet_TisRelayNetworkParameter_tE48AD3A6F0F2548B9929FE896969232D10FBC4B8_m2915D2DF811C81800CA3F27275A5D1F1C6FB371C_gshared)(__this, ___0_parameter, method);
}
// System.Int32 Unity.Networking.Transport.Relay.RelayNetworkProtocol::ComputePacketOverhead(Unity.Networking.Transport.NetworkDriver/Connection&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RelayNetworkProtocol_ComputePacketOverhead_m4E78C92092C1484F2CB95DD10DE9AA4E2911B5F2 (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, int32_t* ___1_dataOffset, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Relay.RelayNetworkProtocol::ProcessReceive(System.IntPtr,Unity.Networking.Transport.NetworkInterfaceEndPoint&,System.Int32,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr,Unity.Networking.Transport.ProcessPacketCommand&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayNetworkProtocol_ProcessReceive_m31C9840BD1234A5598DAF1D57D750A6A79849765 (intptr_t ___0_stream, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_endpoint, int32_t ___2_size, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___3_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, intptr_t ___5_userData, ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* ___6_command, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.Relay.RelayNetworkProtocol::ProcessSend(Unity.Networking.Transport.NetworkDriver/Connection&,System.Boolean,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkInterfaceSendHandle&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RelayNetworkProtocol_ProcessSend_m7575ABC041AB3CEF12A17815D0870773958B412C (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, bool ___1_hasPipeline, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___2_sendInterface, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___3_sendHandle, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, intptr_t ___5_userData, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Relay.RelayNetworkProtocol::ProcessSendConnectionAccept(Unity.Networking.Transport.NetworkDriver/Connection&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayNetworkProtocol_ProcessSendConnectionAccept_mB019F49554DCD5FB156369B699D405AD567FA9AD (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Relay.RelayNetworkProtocol::Connect(Unity.Networking.Transport.NetworkDriver/Connection&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayNetworkProtocol_Connect_mF79B494839F2860E97A8001403E8E7B2F2D0BFFF (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Relay.RelayNetworkProtocol::Disconnect(Unity.Networking.Transport.NetworkDriver/Connection&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayNetworkProtocol_Disconnect_m2B817AF28256EEE336098E3654EE115825D9C766 (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Relay.RelayNetworkProtocol::ProcessSendPing(Unity.Networking.Transport.NetworkDriver/Connection&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayNetworkProtocol_ProcessSendPing_m7CE90FC0007C848A69176703204B0EA13B7BE9ED (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Relay.RelayNetworkProtocol::ProcessSendPong(Unity.Networking.Transport.NetworkDriver/Connection&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayNetworkProtocol_ProcessSendPong_m0F98CD0FC19258C75C3DDA67D78E324C032AF6DC (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Relay.RelayNetworkProtocol::Update(System.Int64,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayNetworkProtocol_Update_m7A9E599807DE1BFFB74A44187363C8C6FA39B443 (int64_t ___0_updateTime, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.DataStreamWriter::get_IsLittleEndian()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataStreamWriter_get_IsLittleEndian_m99AB4FF719469C5EF8346A3AC76C562CF6EF474A (const RuntimeMethod* method) ;
// Unity.Networking.Transport.Relay.RelayNetworkParameter Unity.Networking.Transport.Relay.RelayParameterExtensions::GetRelayParameters(Unity.Networking.Transport.NetworkSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RelayNetworkParameter_tE48AD3A6F0F2548B9929FE896969232D10FBC4B8 RelayParameterExtensions_GetRelayParameters_m311AF739522A233FEEEED2CD79ECFEA9C4FA36D5 (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* ___0_settings, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkConfigParameter Unity.Networking.Transport.CommonNetworkParametersExtensions::GetNetworkConfigParameters(Unity.Networking.Transport.NetworkSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D CommonNetworkParametersExtensions_GetNetworkConfigParameters_m26145252253BE83A2CDFB63E7DC5F3FE220A8ECB (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* ___0_settings, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData>()
inline int32_t UnsafeUtility_SizeOf_TisRelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_m3FFD617F4FF50F0299817A643B51550473E1A5F9 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisRelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_m3FFD617F4FF50F0299817A643B51550473E1A5F9_gshared)(method);
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData>()
inline int32_t UnsafeUtility_AlignOf_TisRelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_m1F90C43667A7F4543B0FF1CD95DBA6C1F92E94EC (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisRelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_m1F90C43667A7F4543B0FF1CD95DBA6C1F92E94EC_gshared)(method);
}
// System.Void Unity.Networking.Transport.Relay.RelayNetworkProtocol::Initialize(Unity.Networking.Transport.NetworkSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayNetworkProtocol_Initialize_m0A33A964C44694B69D2FAECB5893EABAE925F5ED (RelayNetworkProtocol_tD7EB1F41E6E4E1E3F12A681F08030C24245E867B* __this, NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0 ___0_settings, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Relay.RelayNetworkProtocol::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayNetworkProtocol_Dispose_m70BD5B16EB56D48F0A5BAEF1F1BAD1BB5DDA2544 (RelayNetworkProtocol_tD7EB1F41E6E4E1E3F12A681F08030C24245E867B* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.Relay.RelayNetworkProtocol::Bind(Unity.Networking.Transport.INetworkInterface,Unity.Networking.Transport.NetworkInterfaceEndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RelayNetworkProtocol_Bind_mD652826E3028AFB6BA3739F194C92BFD9F44BA49 (RelayNetworkProtocol_tD7EB1F41E6E4E1E3F12A681F08030C24245E867B* __this, RuntimeObject* ___0_networkInterface, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_localEndPoint, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkProtocol Unity.Networking.Transport.Relay.RelayNetworkProtocol::CreateProtocolInterface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9 RelayNetworkProtocol_CreateProtocolInterface_m15D5F918B80BB326FB310F6861E2EA70EC90EB87 (RelayNetworkProtocol_tD7EB1F41E6E4E1E3F12A681F08030C24245E867B* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.NetworkInterfaceEndPoint::op_Inequality(Unity.Networking.Transport.NetworkInterfaceEndPoint,Unity.Networking.Transport.NetworkInterfaceEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkInterfaceEndPoint_op_Inequality_m61D38D4018E83A8A799C7A1797DAF8EFA34AA6B6 (NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 ___0_lhs, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.Relay.RelayNetworkProtocol::ProcessRelayData(System.IntPtr,Unity.Networking.Transport.NetworkInterfaceEndPoint&,System.Int32,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,Unity.Networking.Transport.ProcessPacketCommand&,Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RelayNetworkProtocol_ProcessRelayData_m7B1D94B8862612904AA706F6315B3299FFB3A68D (intptr_t ___0_stream, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_endpoint, int32_t ___2_size, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___3_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* ___5_command, RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* ___6_protocolData, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Relay.RelayNetworkProtocol::SendConnectionRequestToRelay(Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData*,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayNetworkProtocol_SendConnectionRequestToRelay_mB5D30B668FC0962E5DF3A55404B8292CF53D613E (RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* ___0_relayProtocolData, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.Relay.RelayAllocationId::op_Inequality(Unity.Networking.Transport.Relay.RelayAllocationId,Unity.Networking.Transport.Relay.RelayAllocationId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RelayAllocationId_op_Inequality_m9FA8F02E88ECEC66668FC0EF8D7A4DE71D3DEB53 (RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___0_lhs, RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___1_rhs, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.Relay.RelayNetworkProtocol::SendHeaderOnlyHostMessage(Unity.Networking.Transport.Protocols.UdpCProtocol,Unity.Networking.Transport.SessionIdToken,Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData*,Unity.Networking.Transport.Relay.RelayAllocationId&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RelayNetworkProtocol_SendHeaderOnlyHostMessage_m88EFE5904D925CF2537A546691441FD9FA7D6D3F (int32_t ___0_type, SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 ___1_token, RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* ___2_relayProtocolData, RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* ___3_hostAllocationId, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___4_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___5_queueHandle, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A (intptr_t ___0_pointer, int32_t ___1_offset, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Relay.RelayNetworkProtocol::SendRelayDisconnect(Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData*,Unity.Networking.Transport.Relay.RelayAllocationId&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayNetworkProtocol_SendRelayDisconnect_mCC1BE4666F8A5962180E487C7D774B88304748ED (RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* ___0_protocolData, RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* ___1_hostAllocationId, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___2_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___3_queueHandle, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Relay.RelayNetworkProtocol::ProcessRelayError(System.Byte*,System.Int32,Unity.Networking.Transport.ProcessPacketCommand&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayNetworkProtocol_ProcessRelayError_m01B304680E28DF2AE71E59C22F536154F1C274A5 (uint8_t* ___0_data, int32_t ___1_size, ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* ___2_command, const RuntimeMethod* method) ;
// Unity.Networking.Transport.Relay.RelayMessageDisconnect Unity.Networking.Transport.Relay.RelayMessageDisconnect::Create(Unity.Networking.Transport.Relay.RelayAllocationId,Unity.Networking.Transport.Relay.RelayAllocationId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RelayMessageDisconnect_t96DE3DA36403F2F6EABDF3624DE6F85888CC543D RelayMessageDisconnect_Create_m1CDE7115330ADBD35069AAC2C9FDD662EC1D22FE (RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___0_fromAllocationId, RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___1_toAllocationId, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.Relay.RelayNetworkProtocol::SendMessage(Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData*,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkInterfaceSendHandle&,Unity.Networking.Transport.NetworkSendQueueHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RelayNetworkProtocol_SendMessage_m90991C8E728497F7EEC594CE0478BA866B6BDBC2 (RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* ___0_protocolData, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___2_sendHandle, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___3_queueHandle, const RuntimeMethod* method) ;
// Unity.Networking.Transport.Relay.RelayMessageRelay Unity.Networking.Transport.Relay.RelayMessageRelay::Create(Unity.Networking.Transport.Relay.RelayAllocationId,Unity.Networking.Transport.Relay.RelayAllocationId,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49 RelayMessageRelay_Create_m654762D910C3744664149896D80B85205944772B (RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___0_fromAllocationId, RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___1_toAllocationId, uint16_t ___2_dataLength, const RuntimeMethod* method) ;
// System.Int64 System.Threading.Interlocked::Exchange(System.Int64&,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Interlocked_Exchange_m723B7E02F99661E7576E204D8862757E12682961 (int64_t* ___0_location1, int64_t ___1_value, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.UnityTransportProtocol::GetConnectionAcceptMessageMaxLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransportProtocol_GetConnectionAcceptMessageMaxLength_mBF0058AB7A48721C9F5B1F54B79C4B5995AEBF3D (const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.UnityTransportProtocol::WriteConnectionAcceptMessage(Unity.Networking.Transport.NetworkDriver/Connection&,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransportProtocol_WriteConnectionAcceptMessage_m4C9CBEE9735B6465540DF839BCBFE236EE01B6F9 (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, uint8_t* ___1_packet, int32_t ___2_capacity, const RuntimeMethod* method) ;
// Unity.Networking.Transport.Relay.RelayMessageConnectRequest Unity.Networking.Transport.Relay.RelayMessageConnectRequest::Create(Unity.Networking.Transport.Relay.RelayAllocationId,Unity.Networking.Transport.Relay.RelayConnectionData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RelayMessageConnectRequest_t35AB449CCDF5E31947A8D6CBC59BD62F8A3BEB3C RelayMessageConnectRequest_Create_mC778E243E6F1C1E5721E9483E6D610A80FDCF431 (RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___0_allocationId, RelayConnectionData_tA5306A14AEB9FA72A119334CBE01CE0B1F7AC18D ___1_toConnectionData, const RuntimeMethod* method) ;
// Unity.Networking.Transport.Relay.RelayAllocationId& Unity.Networking.Transport.Relay.ConnectionAddressExtensions::AsRelayAllocationId(Unity.Networking.Transport.NetworkInterfaceEndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* ConnectionAddressExtensions_AsRelayAllocationId_mB760454368A28166B3FEAAAF75B03F2DD5B957BF (NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___0_address, const RuntimeMethod* method) ;
// Unity.Collections.FixedString32Bytes Unity.Collections.FixedString32Bytes::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 FixedString32Bytes_op_Implicit_mD0ABB16ACC6621C61F924F70651403927DEACF9F (String_t* ___0_b, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.Relay.RelayNetworkProtocol::WriteBindMessage(Unity.Networking.Transport.NetworkInterfaceEndPoint&,Unity.Networking.Transport.NetworkInterfaceSendHandle&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RelayNetworkProtocol_WriteBindMessage_mC25C43A384627ABC02C5EC0C4771E998779FA562 (NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___0_serverEndpoint, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___1_sendHandle, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.Relay.RelayNetworkProtocol::WriteRelayPingMessage(Unity.Networking.Transport.NetworkInterfaceEndPoint&,Unity.Networking.Transport.NetworkInterfaceSendHandle&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RelayNetworkProtocol_WriteRelayPingMessage_m7D8A31AD76ACA7140B8DFCE0AA2BD525CD4E0163 (NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___0_serverEndpoint, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___1_sendHandle, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) ;
// Unity.Networking.Transport.Relay.RelayMessagePing Unity.Networking.Transport.Relay.RelayMessagePing::Create(Unity.Networking.Transport.Relay.RelayAllocationId,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RelayMessagePing_t38F5F4C34944AE32ACC92EBDB4B86C33465CA2E2 RelayMessagePing_Create_m243B5A5AB0FB857278CC72CE0831BC229AB29D74 (RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___0_fromAllocationId, uint16_t ___1_dataLength, const RuntimeMethod* method) ;
// Unity.Networking.Transport.DataStreamWriter Unity.Networking.Transport.Relay.RelayNetworkProtocol::WriterForSendBuffer(System.Int32,Unity.Networking.Transport.NetworkInterfaceSendHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA RelayNetworkProtocol_WriterForSendBuffer_m6BF6076BF31268B7C02D0DC9EE95F2E949F08349 (int32_t ___0_requestSize, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___1_sendHandle, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.DataStreamWriter::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataStreamWriter_get_IsCreated_m11271E3EF88236DDD0C01BC571E304CCB1D47A00 (DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* __this, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Relay.RelayMessageBind::Write(Unity.Networking.Transport.DataStreamWriter,System.Byte,System.UInt16,System.Byte*,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayMessageBind_Write_mF2E171A35040AF34C9C02F90C81DD2D807BBE6BC (DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA ___0_writer, uint8_t ___1_acceptMode, uint16_t ___2_nonce, uint8_t* ___3_connectionDataPtr, uint8_t* ___4_hmac, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.DataStreamWriter::.ctor(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStreamWriter__ctor_mE61DA857285F4FF4469253135FF3E8A40673EE62 (DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* __this, uint8_t* ___0_data, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.NetworkSettings::TryGet<Unity.Networking.Transport.Utilities.FragmentationUtility/Parameters>(T&)
inline bool NetworkSettings_TryGet_TisParameters_t59B022551E59FBC1EA11D32A22CF7C3457682BAE_mC5258ABE8D7C61CFE499332D7AEBE17451C38BA8 (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, Parameters_t59B022551E59FBC1EA11D32A22CF7C3457682BAE* ___0_parameter, const RuntimeMethod* method)
{
	return ((  bool (*) (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0*, Parameters_t59B022551E59FBC1EA11D32A22CF7C3457682BAE*, const RuntimeMethod*))NetworkSettings_TryGet_TisParameters_t59B022551E59FBC1EA11D32A22CF7C3457682BAE_mC5258ABE8D7C61CFE499332D7AEBE17451C38BA8_gshared)(__this, ___0_parameter, method);
}
// System.Boolean Unity.Networking.Transport.NetworkSettings::TryGet<Unity.Networking.Transport.Utilities.ReliableUtility/Parameters>(T&)
inline bool NetworkSettings_TryGet_TisParameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5_m1265A0047017C7EE05689AA051CCD6EC15B4A67F (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, Parameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5* ___0_parameter, const RuntimeMethod* method)
{
	return ((  bool (*) (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0*, Parameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5*, const RuntimeMethod*))NetworkSettings_TryGet_TisParameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5_m1265A0047017C7EE05689AA051CCD6EC15B4A67F_gshared)(__this, ___0_parameter, method);
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Networking.Transport.Utilities.ReliableUtility/ReliableHeader>()
inline int32_t UnsafeUtility_SizeOf_TisReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01_mE682CCE1084DECD3C3F1EF2FFA2AB8BC799E35E4 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01_mE682CCE1084DECD3C3F1EF2FFA2AB8BC799E35E4_gshared)(method);
}
// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility::PacketHeaderWireSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReliableUtility_PacketHeaderWireSize_mAF098505D9DB52C30D3AB041DDC025CB1FDCC82A (int32_t ___0_windowSize, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility::AlignedSizeOf<Unity.Networking.Transport.Utilities.ReliableUtility/PacketTimers>()
inline int32_t ReliableUtility_AlignedSizeOf_TisPacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4_m9785E521127021B2207B6EF5E4B37CA3B3C2C617 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))ReliableUtility_AlignedSizeOf_TisPacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4_m9785E521127021B2207B6EF5E4B37CA3B3C2C617_gshared)(method);
}
// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility::AlignedSizeOf<Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext>()
inline int32_t ReliableUtility_AlignedSizeOf_TisSharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0_mD98E333F02D354D9F0A02FA0C35C05AEE9B87739 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))ReliableUtility_AlignedSizeOf_TisSharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0_mD98E333F02D354D9F0A02FA0C35C05AEE9B87739_gshared)(method);
}
// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility::AlignedSizeOf<Unity.Networking.Transport.Utilities.ReliableUtility/PacketInformation>()
inline int32_t ReliableUtility_AlignedSizeOf_TisPacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2_mD6EDD07DCBAB2FCA68CA5BB60625D06BD7D7F19E (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))ReliableUtility_AlignedSizeOf_TisPacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2_mD6EDD07DCBAB2FCA68CA5BB60625D06BD7D7F19E_gshared)(method);
}
// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility::AlignedSizeOf<Unity.Networking.Transport.Utilities.ReliableUtility/Context>()
inline int32_t ReliableUtility_AlignedSizeOf_TisContext_t99C75CF38B33BF89D1AF089C3466321489BEA99A_m7B68590F46CFFDE67D46991BA2B5EBB1C0AACF14 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))ReliableUtility_AlignedSizeOf_TisContext_t99C75CF38B33BF89D1AF089C3466321489BEA99A_m7B68590F46CFFDE67D46991BA2B5EBB1C0AACF14_gshared)(method);
}
// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility::InitializeProcessContext(System.Byte*,System.Int32,Unity.Networking.Transport.Utilities.ReliableUtility/Parameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReliableUtility_InitializeProcessContext_mC2B15D02CD6EBDC10DDEF0BA297875B08BC3A7A0 (uint8_t* ___0_buffer, int32_t ___1_bufferLength, Parameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5 ___2_param, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility::ProcessCapacityNeeded(Unity.Networking.Transport.Utilities.ReliableUtility/Parameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReliableUtility_ProcessCapacityNeeded_mBB1217FF168816E29F164AF46A1AB866B306AA53 (Parameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5 ___0_param, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Utilities.ReliableUtility::Release(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableUtility_Release_mA4044B7D5E9BAC7CE0E362CDAF088E8AC4FB4926 (uint8_t* ___0_self, int32_t ___1_start_sequence, int32_t ___2_count, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Utilities.ReliableUtility::SetPacket(System.Byte*,System.Int32,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableUtility_SetPacket_m943290735B843FCDEA4C74D5051FD998983C0AAA (uint8_t* ___0_self, int32_t ___1_sequence, void* ___2_data, int32_t ___3_length, const RuntimeMethod* method) ;
// Unity.Networking.Transport.Utilities.ReliableUtility/PacketInformation* Unity.Networking.Transport.Utilities.ReliableUtility::GetPacketInformation(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* ReliableUtility_GetPacketInformation_m9968D029D03346A7B0BA66F91F183EADC5ECA103 (uint8_t* ___0_self, int32_t ___1_sequence, const RuntimeMethod* method) ;
// Unity.Networking.Transport.Utilities.ReliableUtility/ReliablePacket* Unity.Networking.Transport.Utilities.ReliableUtility::GetReliablePacket(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReliablePacket_t338CE432D688A8C732B0705415F25B05A2AD3D04* ReliableUtility_GetReliablePacket_m5D93BC69A8272050BD5CBDD907178A723FEE232A (uint8_t* ___0_self, int32_t ___1_sequence, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility::GetIndex(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReliableUtility_GetIndex_m3B9D65DE3DF43A2AE496EBBD70378D82008EEE10 (uint8_t* ___0_self, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Utilities.ReliableUtility::SetIndex(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableUtility_SetIndex_mB3D120D218F8FE0948B6FAE10C2B0DC1A2B81557 (uint8_t* ___0_self, int32_t ___1_index, int32_t ___2_sequence, const RuntimeMethod* method) ;
// System.UInt16 Unity.Networking.Transport.Utilities.ReliableUtility::GetNonWrappingLastAckedSequenceNumber(Unity.Networking.Transport.NetworkPipelineContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ReliableUtility_GetNonWrappingLastAckedSequenceNumber_mEB65A7F6EAEAB76DFF14F2DBE89ADE8591354C52 (NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD ___0_context, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.Utilities.SequenceHelpers::AbsDistance(System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SequenceHelpers_AbsDistance_m35554BEFC1196304E6DA535D075E70B33F070C52 (uint16_t ___0_lhs, uint16_t ___1_rhs, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Utilities.ReliableUtility::Release(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableUtility_Release_mA2409AE91C98C8CE716EC6DB32673DBAFD52299A (uint8_t* ___0_self, int32_t ___1_sequence, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility::CurrentResendTime(System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReliableUtility_CurrentResendTime_m57B142B68943887C63A093A67B45C74778F6F38C (uint8_t* ___0_sharedBuffer, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.Utilities.SequenceHelpers::LessThan16(System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequenceHelpers_LessThan16_m00415C30EFDD7D790BFCE5BEDD7C7DF89C6D3F34 (uint16_t ___0_lhs, uint16_t ___1_rhs, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.InboundSendBuffer::SetBufferFrombufferWithHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InboundSendBuffer_SetBufferFrombufferWithHeaders_m6C284E52DA10F7889A53C82BB4B422A6A349E7B1 (InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.Utilities.ReliableUtility::TryAquire(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReliableUtility_TryAquire_m32DD237DEB8FC7722570AD65EEC71EAA24912ACE (uint8_t* ___0_self, int32_t ___1_sequence, const RuntimeMethod* method) ;
// System.UInt16 Unity.Networking.Transport.Utilities.ReliableUtility::CalculateProcessingTime(System.Byte*,System.UInt16,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ReliableUtility_CalculateProcessingTime_mC47ABB3E9C1BEE78BCF1CFFB185BAB143F0394D6 (uint8_t* ___0_sharedBuffer, uint16_t ___1_sequenceId, int64_t ___2_timestamp, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Utilities.ReliableUtility::SetHeaderAndPacket(System.Byte*,System.Int32,Unity.Networking.Transport.Utilities.ReliableUtility/ReliableHeader,Unity.Networking.Transport.InboundSendBuffer,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableUtility_SetHeaderAndPacket_m3E50ED0B90006FCE97882C54F3C169C7DFC06920 (uint8_t* ___0_self, int32_t ___1_sequence, ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 ___2_header, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2 ___3_data, int64_t ___4_timestamp, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Utilities.ReliableUtility::StoreTimestamp(System.Byte*,System.UInt16,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableUtility_StoreTimestamp_mD1D266A4E280396725145A6FB9FC0C71741BA3A5 (uint8_t* ___0_sharedBuffer, uint16_t ___1_sequenceId, int64_t ___2_timestamp, const RuntimeMethod* method) ;
// Unity.Networking.Transport.Utilities.ReliableUtility/PacketTimers* Unity.Networking.Transport.Utilities.ReliableUtility::GetLocalPacketTimer(System.Byte*,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4* ReliableUtility_GetLocalPacketTimer_m34EDCCB24CAE223C05EC1BF7B725FD98F7F174F8 (uint8_t* ___0_sharedBuffer, uint16_t ___1_sequenceId, const RuntimeMethod* method) ;
// System.Int64 System.Math::Max(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Math_Max_mD37411571F0547F04F280D5A8D1F044819AFA597 (int64_t ___0_val1, int64_t ___1_val2, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::abs(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_abs_m3D9508B36B045BFE7B89C6C69AD34596264E4FE1_inline (float ___0_x, const RuntimeMethod* method) ;
// Unity.Networking.Transport.Utilities.ReliableUtility/PacketTimers* Unity.Networking.Transport.Utilities.ReliableUtility::GetRemotePacketTimer(System.Byte*,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4* ReliableUtility_GetRemotePacketTimer_mF50EE904AF2D83AAD21081044F431475585D88D8 (uint8_t* ___0_sharedBuffer, uint16_t ___1_sequenceId, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.UInt16 System.Math::Min(System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Math_Min_mA7BFF48067FBED606414C9937B00BE496B2696D7 (uint16_t ___0_val1, uint16_t ___1_val2, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.Utilities.SequenceHelpers::StalePacket(System.UInt16,System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequenceHelpers_StalePacket_m5415DDC5B4A6EAEFB981E5B1F4A8A7D1C34DC779 (uint16_t ___0_sequence, uint16_t ___1_oldSequence, uint16_t ___2_windowSize, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.Utilities.SequenceHelpers::GreaterThan16(System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequenceHelpers_GreaterThan16_m3DF2C81C6DF22575EB63E8A206D3FA740A5BA58B (uint16_t ___0_lhs, uint16_t ___1_rhs, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Utilities.ReliableUtility::ReadAckPacket(Unity.Networking.Transport.NetworkPipelineContext,Unity.Networking.Transport.Utilities.ReliableUtility/ReliableHeader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableUtility_ReadAckPacket_m59A5D13E6B09CA561974D97696477772990BD8E4 (NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD ___0_context, ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 ___1_header, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Utilities.ReliableUtility::StoreRemoteReceiveTimestamp(System.Byte*,System.UInt16,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableUtility_StoreRemoteReceiveTimestamp_mECCC46C7B95636F1D0DCEE6297B7CC73EA4AFC56 (uint8_t* ___0_sharedBuffer, uint16_t ___1_sequenceId, int64_t ___2_timestamp, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Utilities.ReliableUtility::StoreReceiveTimestamp(System.Byte*,System.UInt16,System.Int64,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableUtility_StoreReceiveTimestamp_mF4199125BAF9CB1F49E00F0F1CDA037FFDC9418A (uint8_t* ___0_sharedBuffer, uint16_t ___1_sequenceId, int64_t ___2_timestamp, uint16_t ___3_processingTime, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.NetworkSettings::TryGet<Unity.Networking.Transport.Utilities.SimulatorUtility/Parameters>(T&)
inline bool NetworkSettings_TryGet_TisParameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0_m25BF9D875AB182834BBE5DD10FB021D046288E5E (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, Parameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0* ___0_parameter, const RuntimeMethod* method)
{
	return ((  bool (*) (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0*, Parameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0*, const RuntimeMethod*))NetworkSettings_TryGet_TisParameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0_m25BF9D875AB182834BBE5DD10FB021D046288E5E_gshared)(__this, ___0_parameter, method);
}
// System.Void Unity.Networking.Transport.Utilities.SimulatorUtility::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatorUtility__ctor_m40AA100EC0E3200EC7AFA8CD4A16C8F74DB2EBED (SimulatorUtility_t6B9B7C22FA101BDB50654F105BA143BFCD297F06* __this, int32_t ___0_packetCount, int32_t ___1_maxPacketSize, int32_t ___2_packetDelayMs, int32_t ___3_packetJitterMs, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.Random::InitState(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Random_InitState_mCDAC36582272DAF59478FEA71F1307CF0E58716D_inline (Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37* __this, uint32_t ___0_seed, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Networking.Transport.Utilities.SimulatorUtility/DelayedPacket>()
inline int32_t UnsafeUtility_SizeOf_TisDelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81_m74D2F275F08D06BCB3E55494D0BCA36ED3D06BF0 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisDelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81_m74D2F275F08D06BCB3E55494D0BCA36ED3D06BF0_gshared)(method);
}
// System.Boolean Unity.Networking.Transport.Utilities.SimulatorUtility::GetEmptyDataSlot(System.Byte*,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatorUtility_GetEmptyDataSlot_m1EB029D68D6ADA9318ABFC9BE5265E7FCB408062 (SimulatorUtility_t6B9B7C22FA101BDB50654F105BA143BFCD297F06* __this, uint8_t* ___0_processBufferPtr, int32_t* ___1_packetPayloadOffset, int32_t* ___2_packetDataOffset, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.Utilities.SimulatorUtility::GetDelayedPacket(Unity.Networking.Transport.NetworkPipelineContext&,Unity.Networking.Transport.InboundSendBuffer&,Unity.Networking.Transport.NetworkPipelineStage/Requests&,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatorUtility_GetDelayedPacket_m2EDDFD26BA1F67AA80F1E28C14094FC4CC29FD44 (SimulatorUtility_t6B9B7C22FA101BDB50654F105BA143BFCD297F06* __this, NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* ___1_delayedPacket, int32_t* ___2_requests, int64_t ___3_currentTimestamp, const RuntimeMethod* method) ;
// System.Int32 Unity.Mathematics.Random::NextInt(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Random_NextInt_m794218A3A149A97A6276B37A546E381D44E0222B_inline (Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37* __this, int32_t ___0_min, int32_t ___1_max, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Utilities.SimulatorUtility::FuzzPacket(Unity.Networking.Transport.Utilities.SimulatorUtility/Context*,Unity.Networking.Transport.InboundSendBuffer&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatorUtility_FuzzPacket_m49047E4E67A8301EF88DA802C8D60AC72F36544B (SimulatorUtility_t6B9B7C22FA101BDB50654F105BA143BFCD297F06* __this, Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* ___0_ctx, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* ___1_inboundBuffer, const RuntimeMethod* method) ;
// System.Int32 Unity.Mathematics.Random::NextInt(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Random_NextInt_m8D466D37B7144CBE66EFDE4A8A5C32EE8A19D4AE_inline (Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37* __this, int32_t ___0_max, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.Utilities.SimulatorUtility::DelayPacket(Unity.Networking.Transport.NetworkPipelineContext&,Unity.Networking.Transport.InboundSendBuffer,Unity.Networking.Transport.NetworkPipelineStage/Requests&,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatorUtility_DelayPacket_m8E1B868B275E5AE31E94D457158A048CF0ACA814 (SimulatorUtility_t6B9B7C22FA101BDB50654F105BA143BFCD297F06* __this, NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2 ___1_inboundBuffer, int32_t* ___2_requests, int64_t ___3_timestamp, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.Utilities.SimulatorUtility::ShouldDropPacket(Unity.Networking.Transport.Utilities.SimulatorUtility/Context*,Unity.Networking.Transport.Utilities.SimulatorUtility/Parameters,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatorUtility_ShouldDropPacket_mB84B41425FEE0EF6D91376E88357DAC457FACE47 (SimulatorUtility_t6B9B7C22FA101BDB50654F105BA143BFCD297F06* __this, Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* ___0_ctx, Parameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0 ___1_param, int64_t ___2_timestamp, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.Utilities.LowLevel.Unsafe.UnsafeAtomicFreeList::get_Capacity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeAtomicFreeList_get_Capacity_mBD400529FFA9B31195958D74B4FF1BB75CE0715D_inline (UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.Utilities.LowLevel.Unsafe.UnsafeAtomicFreeList::get_InUse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeAtomicFreeList_get_InUse_m153B8AF0414DF281E62C7856B37B86400197AC7E (UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.Utilities.LowLevel.Unsafe.UnsafeAtomicFreeList::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeAtomicFreeList_get_IsCreated_mBAE6D394FA1338D9A07DE998C9A9CB802681FB3F (UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Int32>()
inline int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared)(method);
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Int32>()
inline int32_t UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF_gshared)(method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemClear(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1 (void* ___0_destination, int64_t ___1_size, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Utilities.LowLevel.Unsafe.UnsafeAtomicFreeList::.ctor(System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeAtomicFreeList__ctor_mB4498E5EFBE5ECBEA211EA9F773ADFF1333C0D8C (UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04* __this, int32_t ___0_capacity, int32_t ___1_allocator, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Utilities.LowLevel.Unsafe.UnsafeAtomicFreeList::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeAtomicFreeList_Dispose_m3E8AA8784068C96EF8CFDF19A369DA2CF303CD5A (UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04* __this, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___0_location, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717 (int32_t* ___0_location1, int32_t ___1_value, int32_t ___2_comparand, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Utilities.LowLevel.Unsafe.UnsafeAtomicFreeList::Push(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeAtomicFreeList_Push_m44B366C036D6872928DE3AA26B488022F6D003A3 (UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Exchange(System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF (int32_t* ___0_location1, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Decrement(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Decrement_m6AFAD2E874CBDA373B1EF7572F11D6E91813E75D (int32_t* ___0_location, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.Utilities.LowLevel.Unsafe.UnsafeAtomicFreeList::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeAtomicFreeList_Pop_mD84373612AA7D40AC717CFBDB46AC73C576D0B28 (UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04* __this, const RuntimeMethod* method) ;
// System.UInt32 Unity.Mathematics.math::asuint(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t math_asuint_m503D1ABF19E4BA615FD8AE1BF1A2E103BBED6139_inline (float ___0_x, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::asfloat(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_asfloat_m20D259DAAB46464B59BD8BF5678F9D59800F70A9_inline (uint32_t ___0_x, const RuntimeMethod* method) ;
// System.UInt32 Unity.Mathematics.Random::NextState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Random_NextState_m3C669E9C9DBB958FABE0879335C0732A91DA02F7_inline (Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Mathematics.math::asint(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_asint_mBDED7FE966CA65F6A8ACEAEF8FD779B1B8998288_inline (float ___0_x, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::asfloat(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_asfloat_m9FA56DE5C61FCEF3DCD0675252D40DFD9C9B712F_inline (int32_t ___0_x, const RuntimeMethod* method) ;
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
extern "C" int32_t CDECL ReversePInvokeWrapper_ManagedSecureFunctions_SecureDataSendCallback_m9194B5EB17E62D9763907E987D0A384802C89722(intptr_t ___0_userData, uint8_t* ___1_data, uintptr_t ___2_dataLen, uint32_t ___3_status)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = ManagedSecureFunctions_SecureDataSendCallback_m9194B5EB17E62D9763907E987D0A384802C89722(___0_userData, ___1_data, ___2_dataLen, ___3_status, NULL);

	return returnValue;
}
extern "C" int32_t CDECL ReversePInvokeWrapper_ManagedSecureFunctions_SecureDataReceiveCallback_mEFC143BA88C57BBAD38EB40927FEB51F850D447B(intptr_t ___0_userData, uint8_t* ___1_data, uintptr_t ___2_dataLen, uint32_t ___3_status)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = ManagedSecureFunctions_SecureDataReceiveCallback_mEFC143BA88C57BBAD38EB40927FEB51F850D447B(___0_userData, ___1_data, ___2_dataLen, ___3_status, NULL);

	return returnValue;
}
// System.Void Unity.Networking.Transport.TLS.ManagedSecureFunctions::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedSecureFunctions_Initialize_m3EC45C8144F2303167F7AF87B68CEBE6A08956D8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1__ctor_m2C14C57FBCC0E5F421D2075EF65CAC85951F0E84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1__ctor_m5CC710D14C71364457A98C2B92699248FE30D51B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedSecureFunctions_SecureDataReceiveCallback_mEFC143BA88C57BBAD38EB40927FEB51F850D447B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedSecureFunctions_SecureDataSendCallback_m9194B5EB17E62D9763907E987D0A384802C89722_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_Tisunitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637_mA2BE3117B02AF1D3E4BB983A8D37AD4231457CD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_Tisunitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D_mA730202CAC3AA87076B60876B5D250C8D711A231_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_get_Data_m0E24869D29188E83B6F4BF368F46108CFB1B6FB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_get_Data_m42E67BC10BCF19DA2EF4E13CEFBA6D7E4228F91C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsInitialized) return;
		il2cpp_codegen_runtime_class_init_inline(ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var);
		bool L_0 = ((ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_StaticFields*)il2cpp_codegen_static_fields_for(ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var))->___IsInitialized_2;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (IsInitialized) return;
		return;
	}

IL_0008:
	{
		// IsInitialized = true;
		il2cpp_codegen_runtime_class_init_inline(ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var);
		((ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_StaticFields*)il2cpp_codegen_static_fields_for(ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var))->___IsInitialized_2 = (bool)1;
		// s_sendCallback = SecureDataSendCallback;
		unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D* L_1 = (unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D*)il2cpp_codegen_object_new(unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		unitytls_client_data_send_callback__ctor_mA3190917673633997FB351384D19AC2DCB09F3D4(L_1, NULL, (intptr_t)((void*)ManagedSecureFunctions_SecureDataSendCallback_m9194B5EB17E62D9763907E987D0A384802C89722_RuntimeMethod_var), NULL);
		((ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_StaticFields*)il2cpp_codegen_static_fields_for(ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var))->___s_sendCallback_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_StaticFields*)il2cpp_codegen_static_fields_for(ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var))->___s_sendCallback_0), (void*)L_1);
		// s_recvCallback = SecureDataReceiveCallback;
		unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637* L_2 = (unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637*)il2cpp_codegen_object_new(unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		unitytls_client_data_receive_callback__ctor_m856BA3CAF960B07B7C62FF0A91FA3108F55FF56E(L_2, NULL, (intptr_t)((void*)ManagedSecureFunctions_SecureDataReceiveCallback_mEFC143BA88C57BBAD38EB40927FEB51F850D447B_RuntimeMethod_var), NULL);
		((ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_StaticFields*)il2cpp_codegen_static_fields_for(ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var))->___s_recvCallback_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_StaticFields*)il2cpp_codegen_static_fields_for(ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var))->___s_recvCallback_1), (void*)L_2);
		// s_SendCallback.Data = new FunctionPointer<Binding.unitytls_client_data_send_callback>(Marshal.GetFunctionPointerForDelegate(s_sendCallback));
		FunctionPointer_1_tF917A6CBC8E241E4F555974CCF4507F08B71041A* L_3;
		L_3 = SharedStatic_1_get_Data_m0E24869D29188E83B6F4BF368F46108CFB1B6FB1((&((ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_StaticFields*)il2cpp_codegen_static_fields_for(ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var))->___s_SendCallback_3), SharedStatic_1_get_Data_m0E24869D29188E83B6F4BF368F46108CFB1B6FB1_RuntimeMethod_var);
		unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D* L_4 = ((ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_StaticFields*)il2cpp_codegen_static_fields_for(ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var))->___s_sendCallback_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_5;
		L_5 = Marshal_GetFunctionPointerForDelegate_Tisunitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D_mA730202CAC3AA87076B60876B5D250C8D711A231(L_4, Marshal_GetFunctionPointerForDelegate_Tisunitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D_mA730202CAC3AA87076B60876B5D250C8D711A231_RuntimeMethod_var);
		FunctionPointer_1_tF917A6CBC8E241E4F555974CCF4507F08B71041A L_6;
		memset((&L_6), 0, sizeof(L_6));
		FunctionPointer_1__ctor_m2C14C57FBCC0E5F421D2075EF65CAC85951F0E84_inline((&L_6), L_5, /*hidden argument*/FunctionPointer_1__ctor_m2C14C57FBCC0E5F421D2075EF65CAC85951F0E84_RuntimeMethod_var);
		*(FunctionPointer_1_tF917A6CBC8E241E4F555974CCF4507F08B71041A*)L_3 = L_6;
		// s_RecvMethod.Data = new FunctionPointer<Binding.unitytls_client_data_receive_callback>(Marshal.GetFunctionPointerForDelegate(s_recvCallback));
		FunctionPointer_1_tA2FC39F25D07D293D943EDC747A8E0E7A70BDFC6* L_7;
		L_7 = SharedStatic_1_get_Data_m42E67BC10BCF19DA2EF4E13CEFBA6D7E4228F91C((&((ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_StaticFields*)il2cpp_codegen_static_fields_for(ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var))->___s_RecvMethod_4), SharedStatic_1_get_Data_m42E67BC10BCF19DA2EF4E13CEFBA6D7E4228F91C_RuntimeMethod_var);
		unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637* L_8 = ((ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_StaticFields*)il2cpp_codegen_static_fields_for(ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var))->___s_recvCallback_1;
		intptr_t L_9;
		L_9 = Marshal_GetFunctionPointerForDelegate_Tisunitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637_mA2BE3117B02AF1D3E4BB983A8D37AD4231457CD7(L_8, Marshal_GetFunctionPointerForDelegate_Tisunitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637_mA2BE3117B02AF1D3E4BB983A8D37AD4231457CD7_RuntimeMethod_var);
		FunctionPointer_1_tA2FC39F25D07D293D943EDC747A8E0E7A70BDFC6 L_10;
		memset((&L_10), 0, sizeof(L_10));
		FunctionPointer_1__ctor_m5CC710D14C71364457A98C2B92699248FE30D51B_inline((&L_10), L_9, /*hidden argument*/FunctionPointer_1__ctor_m5CC710D14C71364457A98C2B92699248FE30D51B_RuntimeMethod_var);
		*(FunctionPointer_1_tA2FC39F25D07D293D943EDC747A8E0E7A70BDFC6*)L_7 = L_10;
		// }
		return;
	}
}
// System.Int32 Unity.Networking.Transport.TLS.ManagedSecureFunctions::SecureDataSendCallback(System.IntPtr,System.Byte*,System.UIntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManagedSecureFunctions_SecureDataSendCallback_m9194B5EB17E62D9763907E987D0A384802C89722 (intptr_t ___0_userData, uint8_t* ___1_data, uintptr_t ___2_dataLen, uint32_t ___3_status, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Invoke_mB99A6DFFF953B5843576414230D5153BAD08925B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Invoke_mFEE8AD2F13BFB25522EFCA2233290EF5A4BBCE32_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* V_0 = NULL;
	NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint8_t* V_2 = NULL;
	{
		// var protocolData = (SecureUserData*)userData;
		intptr_t L_0 = ___0_userData;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B*)L_1;
		// if (protocolData->Interface.BeginSendMessage.Ptr.Invoke(out var sendHandle,
		//     protocolData->Interface.UserData, (int)dataLen.ToUInt32()) != 0)
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_2 = V_0;
		NullCheck(L_2);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_3 = (&L_2->___Interface_1);
		TransportFunctionPointer_1_t9F2FD24758ADF9E597DCA02A01D7972B74AF6736* L_4 = (&L_3->___BeginSendMessage_0);
		FunctionPointer_1_t5E2F5FC9CFE7FBBBECA6EB73BABFA0CD5F645155* L_5 = (&L_4->___Ptr_0);
		BeginSendMessageDelegate_t55D0469152EC11CCF544924363F1C12F13CF2FE1* L_6;
		L_6 = FunctionPointer_1_get_Invoke_mB99A6DFFF953B5843576414230D5153BAD08925B(L_5, FunctionPointer_1_get_Invoke_mB99A6DFFF953B5843576414230D5153BAD08925B_RuntimeMethod_var);
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_7 = V_0;
		NullCheck(L_7);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_8 = (&L_7->___Interface_1);
		intptr_t L_9 = L_8->___UserData_3;
		uint32_t L_10;
		L_10 = UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965((&___2_dataLen), NULL);
		NullCheck(L_6);
		int32_t L_11;
		L_11 = BeginSendMessageDelegate_Invoke_m616D28C5DFFFB30E1F1392F14F6C6EB3B7EC99CD_inline(L_6, (&V_1), L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_003d;
		}
	}
	{
		// return UNITYTLS_ERR_SSL_WANT_WRITE;
		return ((int32_t)-26752);
	}

IL_003d:
	{
		// sendHandle.size = (int)dataLen.ToUInt32();
		uint32_t L_12;
		L_12 = UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965((&___2_dataLen), NULL);
		(&V_1)->___size_2 = L_12;
		// byte* packet = (byte*)sendHandle.data;
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3 L_13 = V_1;
		intptr_t L_14 = L_13.___data_0;
		void* L_15;
		L_15 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_14, NULL);
		V_2 = (uint8_t*)L_15;
		// UnsafeUtility.MemCpy(packet, data, (long)dataLen.ToUInt64());
		uint8_t* L_16 = V_2;
		uint8_t* L_17 = ___1_data;
		uint64_t L_18;
		L_18 = UIntPtr_ToUInt64_m7789E1D758F7AA7B1AAADB296EBC04E026A3F9FA((&___2_dataLen), NULL);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_16, (void*)L_17, L_18, NULL);
		// return protocolData->Interface.EndSendMessage.Ptr.Invoke(ref sendHandle, ref protocolData->Remote,
		//     protocolData->Interface.UserData, ref protocolData->QueueHandle);
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_19 = V_0;
		NullCheck(L_19);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_20 = (&L_19->___Interface_1);
		TransportFunctionPointer_1_t1933A8E5B03799A74CE910DB0A4F8FF67DD0405D* L_21 = (&L_20->___EndSendMessage_1);
		FunctionPointer_1_tD15B3870776AA5A42DBB36B9CCA6AA930B9628DE* L_22 = (&L_21->___Ptr_0);
		EndSendMessageDelegate_tCA4D3D136AE26FE2B671C22F4765E9B2C28025ED* L_23;
		L_23 = FunctionPointer_1_get_Invoke_mFEE8AD2F13BFB25522EFCA2233290EF5A4BBCE32(L_22, FunctionPointer_1_get_Invoke_mFEE8AD2F13BFB25522EFCA2233290EF5A4BBCE32_RuntimeMethod_var);
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_24 = V_0;
		NullCheck(L_24);
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_25 = (&L_24->___Remote_2);
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_26 = V_0;
		NullCheck(L_26);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_27 = (&L_26->___Interface_1);
		intptr_t L_28 = L_27->___UserData_3;
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_29 = V_0;
		NullCheck(L_29);
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_30 = (&L_29->___QueueHandle_3);
		NullCheck(L_23);
		int32_t L_31;
		L_31 = EndSendMessageDelegate_Invoke_m13088C10AA0AD56CAD443B995E262A65BAC6C54F_inline(L_23, (&V_1), L_25, L_28, L_30, NULL);
		return L_31;
	}
}
// System.Int32 Unity.Networking.Transport.TLS.ManagedSecureFunctions::SecureDataReceiveCallback(System.IntPtr,System.Byte*,System.UIntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManagedSecureFunctions_SecureDataReceiveCallback_mEFC143BA88C57BBAD38EB40927FEB51F850D447B (intptr_t ___0_userData, uint8_t* ___1_data, uintptr_t ___2_dataLen, uint32_t ___3_status, const RuntimeMethod* method) 
{
	SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		// var protocolData = (SecureUserData*)userData;
		intptr_t L_0 = ___0_userData;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B*)L_1;
		// var packet = (byte*)protocolData->StreamData;
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_2 = V_0;
		NullCheck(L_2);
		intptr_t L_3 = L_2->___StreamData_0;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		V_1 = (uint8_t*)L_4;
		// if (packet == null || protocolData->Size <= 0)
		uint8_t* L_5 = V_1;
		if ((((intptr_t)L_5) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0021;
		}
	}
	{
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___Size_4;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}

IL_0021:
	{
		// return UNITYTLS_ERR_SSL_WANT_READ;
		return ((int32_t)-26880);
	}

IL_0027:
	{
		// if (protocolData->BytesProcessed != 0)
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___BytesProcessed_5;
		if (!L_9)
		{
			goto IL_0035;
		}
	}
	{
		// return UNITYTLS_ERR_SSL_WANT_READ;
		return ((int32_t)-26880);
	}

IL_0035:
	{
		// UnsafeUtility.MemCpy(data, packet, protocolData->Size);
		uint8_t* L_10 = ___1_data;
		uint8_t* L_11 = V_1;
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___Size_4;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_10, (void*)L_11, ((int64_t)L_13), NULL);
		// protocolData->BytesProcessed = protocolData->Size;
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_14 = V_0;
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = L_15->___Size_4;
		NullCheck(L_14);
		L_14->___BytesProcessed_5 = L_16;
		// return protocolData->Size;
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = L_17->___Size_4;
		return L_18;
	}
}
// System.Void Unity.Networking.Transport.TLS.ManagedSecureFunctions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedSecureFunctions__cctor_m957C851695BEBF0364162BDAC111AB70996C9A95 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_GetOrCreate_TisFunctionPointer_1_tA2FC39F25D07D293D943EDC747A8E0E7A70BDFC6_TisManagedSecureFunctionsKey_t773373200D4DB2198DD729D87E4AC96A78F446FC_m5E0058FDCCE914CC7CE32A61B6FC4A3A49357B8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_GetOrCreate_TisFunctionPointer_1_tF917A6CBC8E241E4F555974CCF4507F08B71041A_TisManagedSecureFunctionsKey_t773373200D4DB2198DD729D87E4AC96A78F446FC_m4092AADF42DD27A470A1E23E08BE285D5633866B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly SharedStatic<FunctionPointer<Binding.unitytls_client_data_send_callback>>
		// s_SendCallback = SharedStatic<FunctionPointer<Binding.unitytls_client_data_send_callback>>
		//     .GetOrCreate<FunctionPointer<Binding.unitytls_client_data_send_callback>, ManagedSecureFunctionsKey>();
		SharedStatic_1_t47339D7DCF45ED555300835940E9AFFB859D37B1 L_0;
		L_0 = SharedStatic_1_GetOrCreate_TisFunctionPointer_1_tF917A6CBC8E241E4F555974CCF4507F08B71041A_TisManagedSecureFunctionsKey_t773373200D4DB2198DD729D87E4AC96A78F446FC_m4092AADF42DD27A470A1E23E08BE285D5633866B(0, SharedStatic_1_GetOrCreate_TisFunctionPointer_1_tF917A6CBC8E241E4F555974CCF4507F08B71041A_TisManagedSecureFunctionsKey_t773373200D4DB2198DD729D87E4AC96A78F446FC_m4092AADF42DD27A470A1E23E08BE285D5633866B_RuntimeMethod_var);
		((ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_StaticFields*)il2cpp_codegen_static_fields_for(ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var))->___s_SendCallback_3 = L_0;
		// internal static readonly SharedStatic<FunctionPointer<Binding.unitytls_client_data_receive_callback>>
		// s_RecvMethod =
		//     SharedStatic<FunctionPointer<Binding.unitytls_client_data_receive_callback>>
		//         .GetOrCreate<FunctionPointer<Binding.unitytls_client_data_receive_callback>, ManagedSecureFunctionsKey>();
		SharedStatic_1_tB8E12BEEFE90AF4450BDCB3502FC8A0745B05C87 L_1;
		L_1 = SharedStatic_1_GetOrCreate_TisFunctionPointer_1_tA2FC39F25D07D293D943EDC747A8E0E7A70BDFC6_TisManagedSecureFunctionsKey_t773373200D4DB2198DD729D87E4AC96A78F446FC_m5E0058FDCCE914CC7CE32A61B6FC4A3A49357B8D(0, SharedStatic_1_GetOrCreate_TisFunctionPointer_1_tA2FC39F25D07D293D943EDC747A8E0E7A70BDFC6_TisManagedSecureFunctionsKey_t773373200D4DB2198DD729D87E4AC96A78F446FC_m5E0058FDCCE914CC7CE32A61B6FC4A3A49357B8D_RuntimeMethod_var);
		((ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_StaticFields*)il2cpp_codegen_static_fields_for(ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var))->___s_RecvMethod_4 = L_1;
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
extern "C" int32_t CDECL ReversePInvokeWrapper_SecureNetworkProtocol_ComputePacketOverhead_m23FF3AD571738B5BBBC31F0DC7A1BADFB3C4B12A(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, int32_t* ___1_dataOffset)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___1_dataOffset' to managed representation
	int32_t ____1_dataOffset_empty = 0;

	// Managed method invocation
	int32_t returnValue;
	returnValue = SecureNetworkProtocol_ComputePacketOverhead_m23FF3AD571738B5BBBC31F0DC7A1BADFB3C4B12A(___0_connection, (&____1_dataOffset_empty), NULL);

	// Marshaling of parameter '___1_dataOffset' back from managed representation
	*___1_dataOffset = ____1_dataOffset_empty;

	return returnValue;
}
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_ProcessReceive_m31DC346544D8BEACDEF4858B7B7E8051DC870067(intptr_t ___0_stream, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_endpoint, int32_t ___2_size, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___3_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, intptr_t ___5_userData, ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* ___6_command)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SecureNetworkProtocol_ProcessReceive_m31DC346544D8BEACDEF4858B7B7E8051DC870067(___0_stream, ___1_endpoint, ___2_size, ___3_sendInterface, ___4_queueHandle, ___5_userData, ___6_command, NULL);

}
extern "C" int32_t CDECL ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSend_m953E726B286E1FF9FB1836FB4897A8357A558987(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, int32_t ___1_hasPipeline, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___2_sendInterface, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___3_sendHandle, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, intptr_t ___5_userData)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = SecureNetworkProtocol_ProcessSend_m953E726B286E1FF9FB1836FB4897A8357A558987(___0_connection, static_cast<bool>(___1_hasPipeline), ___2_sendInterface, ___3_sendHandle, ___4_queueHandle, ___5_userData, NULL);

	return returnValue;
}
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSendConnectionAccept_m6E2E06B210D208CE575A32F53B49199A9ED0EEB5(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SecureNetworkProtocol_ProcessSendConnectionAccept_m6E2E06B210D208CE575A32F53B49199A9ED0EEB5(___0_connection, ___1_sendInterface, ___2_queueHandle, ___3_userData, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_Connect_mAE3ED3A9FBA3023E1E50467AD4BF826ED89ADFFB(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SecureNetworkProtocol_Connect_mAE3ED3A9FBA3023E1E50467AD4BF826ED89ADFFB(___0_connection, ___1_sendInterface, ___2_queueHandle, ___3_userData, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_Disconnect_m73A4699BBAFB93E2FEF31C3F4F6F406E19C66B53(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SecureNetworkProtocol_Disconnect_m73A4699BBAFB93E2FEF31C3F4F6F406E19C66B53(___0_connection, ___1_sendInterface, ___2_queueHandle, ___3_userData, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSendPing_m2CD7DA3B44CD99AB7E16C101FB83912649196F18(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SecureNetworkProtocol_ProcessSendPing_m2CD7DA3B44CD99AB7E16C101FB83912649196F18(___0_connection, ___1_sendInterface, ___2_queueHandle, ___3_userData, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSendPong_m8D7736A3DAE23BE23205ECA0E5EFFFB2BA3B1AB7(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SecureNetworkProtocol_ProcessSendPong_m8D7736A3DAE23BE23205ECA0E5EFFFB2BA3B1AB7(___0_connection, ___1_sendInterface, ___2_queueHandle, ___3_userData, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_Update_m40062B33F2208A000DB3ACE25B599336414CE9A3(int64_t ___0_updateTime, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SecureNetworkProtocol_Update_m40062B33F2208A000DB3ACE25B599336414CE9A3(___0_updateTime, ___1_sendInterface, ___2_queueHandle, ___3_userData, NULL);

}
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::CreateSecureClient(System.UInt32,Unity.Networking.Transport.TLS.SecureClientState*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_CreateSecureClient_mD8F9F20B481B1487C7B1D2F3AFAE2DB1A2FF9B1D (uint32_t ___0_role, SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* ___1_state, const RuntimeMethod* method) 
{
	unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* V_0 = NULL;
	{
		// var client = Binding.unitytls_client_create(role, state->ClientConfig);
		uint32_t L_0 = ___0_role;
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_1 = ___1_state;
		NullCheck(L_1);
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_2 = L_1->___ClientConfig_1;
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_3;
		L_3 = Binding_unitytls_client_create_mA830787311EBD55A7ACAA925541EE3A28F398026(L_0, L_2, NULL);
		V_0 = L_3;
		// state->ClientPtr = client;
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_4 = ___1_state;
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_5 = V_0;
		NullCheck(L_4);
		L_4->___ClientPtr_0 = L_5;
		// }
		return;
	}
}
// Unity.TLS.LowLevel.Binding/unitytls_client_config* Unity.Networking.Transport.TLS.SecureNetworkProtocol::GetSecureClientConfig(Unity.Networking.Transport.TLS.SecureNetworkProtocolData*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* SecureNetworkProtocol_GetSecureClientConfig_m1EB7EDB53869DD1C0A75D2D8CEF81BDBC3BFE4C7 (SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* ___0_protocolData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Value_m5016AF7AD65D91AA6D0456BEB6ED3A9D3AD8B9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Value_mD9253C9B8BD4ED226D78C76033424F14A1BFC366_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_get_Data_m0E24869D29188E83B6F4BF368F46108CFB1B6FB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_get_Data_m42E67BC10BCF19DA2EF4E13CEFBA6D7E4228F91C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_AlignOf_Tisunitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F_m59D5E5DE33D7D644DA555FA3F7A1D8623361D326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_Tisunitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F_mB5C3FE2DC1AACE0DDBD3777316FBF67D9DED09BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* V_0 = NULL;
	{
		// var config = (Binding.unitytls_client_config*)UnsafeUtility.Malloc(
		//     UnsafeUtility.SizeOf<Binding.unitytls_client_config>(),
		//     UnsafeUtility.AlignOf<Binding.unitytls_client_config>(), Allocator.Persistent);
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_Tisunitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F_mB5C3FE2DC1AACE0DDBD3777316FBF67D9DED09BD(UnsafeUtility_SizeOf_Tisunitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F_mB5C3FE2DC1AACE0DDBD3777316FBF67D9DED09BD_RuntimeMethod_var);
		int32_t L_1;
		L_1 = UnsafeUtility_AlignOf_Tisunitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F_m59D5E5DE33D7D644DA555FA3F7A1D8623361D326(UnsafeUtility_AlignOf_Tisunitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F_m59D5E5DE33D7D644DA555FA3F7A1D8623361D326_RuntimeMethod_var);
		void* L_2;
		L_2 = UnsafeUtility_Malloc_mD7BD28D5AE7E4901B225B7DFFE2B568EE7BDC0C9(((int64_t)L_0), L_1, 4, NULL);
		V_0 = (unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F*)L_2;
		// *config = new Binding.unitytls_client_config();
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_3 = V_0;
		il2cpp_codegen_initobj(L_3, sizeof(unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F));
		// Binding.unitytls_client_init_config(config);
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_4 = V_0;
		Binding_unitytls_client_init_config_m82074495EA2A17758484F4A7FF1C6BB2EFE198B5(L_4, NULL);
		// config->dataSendCB = ManagedSecureFunctions.s_SendCallback.Data.Value;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var);
		FunctionPointer_1_tF917A6CBC8E241E4F555974CCF4507F08B71041A* L_6;
		L_6 = SharedStatic_1_get_Data_m0E24869D29188E83B6F4BF368F46108CFB1B6FB1((&((ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_StaticFields*)il2cpp_codegen_static_fields_for(ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var))->___s_SendCallback_3), SharedStatic_1_get_Data_m0E24869D29188E83B6F4BF368F46108CFB1B6FB1_RuntimeMethod_var);
		intptr_t L_7;
		L_7 = FunctionPointer_1_get_Value_m5016AF7AD65D91AA6D0456BEB6ED3A9D3AD8B9A5_inline(L_6, FunctionPointer_1_get_Value_m5016AF7AD65D91AA6D0456BEB6ED3A9D3AD8B9A5_RuntimeMethod_var);
		NullCheck(L_5);
		L_5->___dataSendCB_8 = L_7;
		// config->dataReceiveCB = ManagedSecureFunctions.s_RecvMethod.Data.Value;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_8 = V_0;
		FunctionPointer_1_tA2FC39F25D07D293D943EDC747A8E0E7A70BDFC6* L_9;
		L_9 = SharedStatic_1_get_Data_m42E67BC10BCF19DA2EF4E13CEFBA6D7E4228F91C((&((ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_StaticFields*)il2cpp_codegen_static_fields_for(ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var))->___s_RecvMethod_4), SharedStatic_1_get_Data_m42E67BC10BCF19DA2EF4E13CEFBA6D7E4228F91C_RuntimeMethod_var);
		intptr_t L_10;
		L_10 = FunctionPointer_1_get_Value_mD9253C9B8BD4ED226D78C76033424F14A1BFC366_inline(L_9, FunctionPointer_1_get_Value_mD9253C9B8BD4ED226D78C76033424F14A1BFC366_RuntimeMethod_var);
		NullCheck(L_8);
		L_8->___dataReceiveCB_9 = L_10;
		// config->logCallback = IntPtr.Zero;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_11 = V_0;
		intptr_t L_12 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		NullCheck(L_11);
		L_11->___logCallback_18 = L_12;
		// config->clientAuth = Binding.UnityTLSRole_None;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_13 = V_0;
		NullCheck(L_13);
		L_13->___clientAuth_3 = 0;
		// config->transportProtocol = protocolData->Protocol;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_14 = V_0;
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_15 = ___0_protocolData;
		NullCheck(L_15);
		uint32_t L_16 = L_15->___Protocol_5;
		NullCheck(L_14);
		L_14->___transportProtocol_4 = L_16;
		// config->clientAuth = protocolData->ClientAuth;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_17 = V_0;
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_18 = ___0_protocolData;
		NullCheck(L_18);
		uint32_t L_19 = L_18->___ClientAuth_9;
		NullCheck(L_17);
		L_17->___clientAuth_3 = L_19;
		// config->ssl_read_timeout_ms = protocolData->SSLReadTimeoutMs;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_20 = V_0;
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_21 = ___0_protocolData;
		NullCheck(L_21);
		uint32_t L_22 = L_21->___SSLReadTimeoutMs_6;
		NullCheck(L_20);
		L_20->___ssl_read_timeout_ms_15 = L_22;
		// config->ssl_handshake_timeout_min = protocolData->SSLHandshakeTimeoutMin;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_23 = V_0;
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_24 = ___0_protocolData;
		NullCheck(L_24);
		uint32_t L_25 = L_24->___SSLHandshakeTimeoutMin_8;
		NullCheck(L_23);
		L_23->___ssl_handshake_timeout_min_19 = L_25;
		// config->ssl_handshake_timeout_max = protocolData->SSLHandshakeTimeoutMax;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_26 = V_0;
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_27 = ___0_protocolData;
		NullCheck(L_27);
		uint32_t L_28 = L_27->___SSLHandshakeTimeoutMax_7;
		NullCheck(L_26);
		L_26->___ssl_handshake_timeout_max_20 = L_28;
		// return config;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_29 = V_0;
		return L_29;
	}
}
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::Initialize(Unity.Networking.Transport.NetworkSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_Initialize_mF5865F808C4FB0306850F1C9660679CC8B050E29 (SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581* __this, NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0 ___0_settings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeHashMap_2__ctor_m31E886D42092D529AC55246DA8F9E37C4A485613_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_AlignOf_TisSecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582_m2A0723994580C2ECBB82DAF6262E34EB6EA66581_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisSecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582_mD87AFEA55A4560FB415A7925E1F0285462A8EFD9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// ManagedSecureFunctions.Initialize();
		il2cpp_codegen_runtime_class_init_inline(ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var);
		ManagedSecureFunctions_Initialize_m3EC45C8144F2303167F7AF87B68CEBE6A08956D8(NULL);
		// var secureConfig = settings.GetSecureParameters();
		SecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97 L_0;
		L_0 = SecureParameterExtensions_GetSecureParameters_mDA8792BF305FD4821DAFF2E9A01582078B58B7EF((&___0_settings), NULL);
		V_0 = L_0;
		// UserData = (IntPtr)UnsafeUtility.Malloc(UnsafeUtility.SizeOf<SecureNetworkProtocolData>(),
		//     UnsafeUtility.AlignOf<SecureNetworkProtocolData>(), Allocator.Persistent);
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisSecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582_mD87AFEA55A4560FB415A7925E1F0285462A8EFD9(UnsafeUtility_SizeOf_TisSecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582_mD87AFEA55A4560FB415A7925E1F0285462A8EFD9_RuntimeMethod_var);
		int32_t L_2;
		L_2 = UnsafeUtility_AlignOf_TisSecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582_m2A0723994580C2ECBB82DAF6262E34EB6EA66581(UnsafeUtility_AlignOf_TisSecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582_m2A0723994580C2ECBB82DAF6262E34EB6EA66581_RuntimeMethod_var);
		void* L_3;
		L_3 = UnsafeUtility_Malloc_mD7BD28D5AE7E4901B225B7DFFE2B568EE7BDC0C9(((int64_t)L_1), L_2, 4, NULL);
		intptr_t L_4;
		L_4 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_3, NULL);
		__this->___UserData_0 = L_4;
		// *(SecureNetworkProtocolData*)UserData = new SecureNetworkProtocolData
		// {
		//     SecureClients = new UnsafeHashMap<NetworkInterfaceEndPoint, SecureClientState>(1, Allocator.Persistent),
		//     Rsa = secureConfig.Rsa,
		//     RsaKey = secureConfig.RsaKey,
		//     Pem = secureConfig.Pem,
		//     Hostname = secureConfig.Hostname,
		//     Protocol = (uint)secureConfig.Protocol,
		//     SSLReadTimeoutMs = secureConfig.SSLReadTimeoutMs,
		//     SSLHandshakeTimeoutMin = secureConfig.SSLHandshakeTimeoutMin,
		//     SSLHandshakeTimeoutMax = secureConfig.SSLHandshakeTimeoutMax,
		//     ClientAuth = (uint)secureConfig.ClientAuthenticationPolicy
		// };
		intptr_t L_5 = __this->___UserData_0;
		void* L_6;
		L_6 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_5, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(4, NULL);
		UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77 L_8;
		memset((&L_8), 0, sizeof(L_8));
		UnsafeHashMap_2__ctor_m31E886D42092D529AC55246DA8F9E37C4A485613((&L_8), 1, L_7, /*hidden argument*/UnsafeHashMap_2__ctor_m31E886D42092D529AC55246DA8F9E37C4A485613_RuntimeMethod_var);
		(&V_1)->___SecureClients_0 = L_8;
		SecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97 L_9 = V_0;
		FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21 L_10 = L_9.___Rsa_1;
		(&V_1)->___Rsa_2 = L_10;
		SecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97 L_11 = V_0;
		FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21 L_12 = L_11.___RsaKey_2;
		(&V_1)->___RsaKey_3 = L_12;
		SecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97 L_13 = V_0;
		FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21 L_14 = L_13.___Pem_0;
		(&V_1)->___Pem_1 = L_14;
		SecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97 L_15 = V_0;
		FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 L_16 = L_15.___Hostname_3;
		(&V_1)->___Hostname_4 = L_16;
		SecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97 L_17 = V_0;
		uint32_t L_18 = L_17.___Protocol_4;
		(&V_1)->___Protocol_5 = L_18;
		SecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97 L_19 = V_0;
		uint32_t L_20 = L_19.___SSLReadTimeoutMs_6;
		(&V_1)->___SSLReadTimeoutMs_6 = L_20;
		SecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97 L_21 = V_0;
		uint32_t L_22 = L_21.___SSLHandshakeTimeoutMin_8;
		(&V_1)->___SSLHandshakeTimeoutMin_8 = L_22;
		SecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97 L_23 = V_0;
		uint32_t L_24 = L_23.___SSLHandshakeTimeoutMax_7;
		(&V_1)->___SSLHandshakeTimeoutMax_7 = L_24;
		SecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97 L_25 = V_0;
		uint32_t L_26 = L_25.___ClientAuthenticationPolicy_5;
		(&V_1)->___ClientAuth_9 = L_26;
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582 L_27 = V_1;
		*(SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582*)L_6 = L_27;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SecureNetworkProtocol_Initialize_mF5865F808C4FB0306850F1C9660679CC8B050E29_AdjustorThunk (RuntimeObject* __this, NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0 ___0_settings, const RuntimeMethod* method)
{
	SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581*>(__this + _offset);
	SecureNetworkProtocol_Initialize_mF5865F808C4FB0306850F1C9660679CC8B050E29(_thisAdjusted, ___0_settings, method);
}
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::DisposeSecureClient(Unity.Networking.Transport.TLS.SecureClientState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_DisposeSecureClient_mB349E3980ACCB847640BCE87AA1319627170B17D (SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* ___0_state, const RuntimeMethod* method) 
{
	{
		// if (state.ClientConfig->transportUserData.ToPointer() != null)
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_0 = ___0_state;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_1 = L_0->___ClientConfig_1;
		NullCheck(L_1);
		intptr_t* L_2 = (&L_1->___transportUserData_11);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		if ((((intptr_t)L_3) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_002a;
		}
	}
	{
		// UnsafeUtility.Free(state.ClientConfig->transportUserData.ToPointer(), Allocator.Persistent);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_4 = ___0_state;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_5 = L_4->___ClientConfig_1;
		NullCheck(L_5);
		intptr_t* L_6 = (&L_5->___transportUserData_11);
		void* L_7;
		L_7 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_6, NULL);
		UnsafeUtility_Free_mFF99F4F02FE7F735AB30D8987D6953E55A2B23E1(L_7, 4, NULL);
	}

IL_002a:
	{
		// if (state.ClientConfig != null)
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_8 = ___0_state;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_9 = L_8->___ClientConfig_1;
		if ((((intptr_t)L_9) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0040;
		}
	}
	{
		// UnsafeUtility.Free((void*)state.ClientConfig, Allocator.Persistent);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_10 = ___0_state;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_11 = L_10->___ClientConfig_1;
		UnsafeUtility_Free_mFF99F4F02FE7F735AB30D8987D6953E55A2B23E1((void*)L_11, 4, NULL);
	}

IL_0040:
	{
		// state.ClientConfig = null;
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_12 = ___0_state;
		L_12->___ClientConfig_1 = (unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F*)((uintptr_t)0);
		// if (state.ClientPtr != null)
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_13 = ___0_state;
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_14 = L_13->___ClientPtr_0;
		if ((((intptr_t)L_14) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_005d;
		}
	}
	{
		// Binding.unitytls_client_destroy(state.ClientPtr);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_15 = ___0_state;
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_16 = L_15->___ClientPtr_0;
		Binding_unitytls_client_destroy_m3454EE8424B3F530183F2FB04DE935EFA0D4CE0B(L_16, NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_Dispose_m8CF7827AE167471FBC0126F15EBDF9437C62A4C8 (SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeHashMap_2_GetKeyArray_m5F34C4DF59F343A77EBFAD1EF1667A43A38781C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeHashMap_2_Remove_m94BE3198B3A3508CB109FAC4EE568ED86407F71B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* V_0 = NULL;
	NativeArray_1_tDF8469CB50B586533F70B614C38965EEBD6145B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var protocolData = (SecureNetworkProtocolData*)UserData;
		intptr_t L_0 = __this->___UserData_0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582*)L_1;
		// var keys = protocolData->SecureClients.GetKeyArray(Allocator.Temp);
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_2 = V_0;
		NullCheck(L_2);
		UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* L_3 = (&L_2->___SecureClients_0);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4;
		L_4 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(2, NULL);
		NativeArray_1_tDF8469CB50B586533F70B614C38965EEBD6145B2 L_5;
		L_5 = UnsafeHashMap_2_GetKeyArray_m5F34C4DF59F343A77EBFAD1EF1667A43A38781C8(L_3, L_4, UnsafeHashMap_2_GetKeyArray_m5F34C4DF59F343A77EBFAD1EF1667A43A38781C8_RuntimeMethod_var);
		V_1 = L_5;
		// for (int connectionIndex = 0; connectionIndex < keys.Length; ++connectionIndex)
		V_2 = 0;
		goto IL_0055;
	}

IL_0022:
	{
		// var connection = protocolData->SecureClients[keys[connectionIndex]];
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_6 = V_0;
		NullCheck(L_6);
		UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* L_7 = (&L_6->___SecureClients_0);
		int32_t L_8 = V_2;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 L_9;
		L_9 = IL2CPP_NATIVEARRAY_GET_ITEM(NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686, ((&V_1))->___m_Buffer_0, L_8);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_10;
		L_10 = UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC(L_7, L_9, UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC_RuntimeMethod_var);
		V_3 = L_10;
		// DisposeSecureClient(ref connection);
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		SecureNetworkProtocol_DisposeSecureClient_mB349E3980ACCB847640BCE87AA1319627170B17D((&V_3), NULL);
		// protocolData->SecureClients.Remove(keys[connectionIndex]);
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_11 = V_0;
		NullCheck(L_11);
		UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* L_12 = (&L_11->___SecureClients_0);
		int32_t L_13 = V_2;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 L_14;
		L_14 = IL2CPP_NATIVEARRAY_GET_ITEM(NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686, ((&V_1))->___m_Buffer_0, L_13);
		bool L_15;
		L_15 = UnsafeHashMap_2_Remove_m94BE3198B3A3508CB109FAC4EE568ED86407F71B(L_12, L_14, UnsafeHashMap_2_Remove_m94BE3198B3A3508CB109FAC4EE568ED86407F71B_RuntimeMethod_var);
		// for (int connectionIndex = 0; connectionIndex < keys.Length; ++connectionIndex)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0055:
	{
		// for (int connectionIndex = 0; connectionIndex < keys.Length; ++connectionIndex)
		int32_t L_17 = V_2;
		int32_t L_18;
		L_18 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_1))->___m_Length_1);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0022;
		}
	}
	{
		// if (UserData != default)
		intptr_t L_19 = __this->___UserData_0;
		bool L_20;
		L_20 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_19, ((intptr_t)0), NULL);
		if (!L_20)
		{
			goto IL_007f;
		}
	}
	{
		// UnsafeUtility.Free(UserData.ToPointer(), Allocator.Persistent);
		intptr_t* L_21 = (&__this->___UserData_0);
		void* L_22;
		L_22 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_21, NULL);
		UnsafeUtility_Free_mFF99F4F02FE7F735AB30D8987D6953E55A2B23E1(L_22, 4, NULL);
	}

IL_007f:
	{
		// UserData = default;
		intptr_t* L_23 = (&__this->___UserData_0);
		il2cpp_codegen_initobj(L_23, sizeof(intptr_t));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SecureNetworkProtocol_Dispose_m8CF7827AE167471FBC0126F15EBDF9437C62A4C8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581*>(__this + _offset);
	SecureNetworkProtocol_Dispose_m8CF7827AE167471FBC0126F15EBDF9437C62A4C8(_thisAdjusted, method);
}
// System.Int32 Unity.Networking.Transport.TLS.SecureNetworkProtocol::Bind(Unity.Networking.Transport.INetworkInterface,Unity.Networking.Transport.NetworkInterfaceEndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SecureNetworkProtocol_Bind_m6CA2F8559AA95DAB225229C05264B1440DA46A85 (SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581* __this, RuntimeObject* ___0_networkInterface, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_localEndPoint, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkInterface_tF8AD6FEF3DE45849521F3435AE8E07CCFDCFFBB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (networkInterface.Bind(localEndPoint) != 0)
		RuntimeObject* L_0 = ___0_networkInterface;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_1 = ___1_localEndPoint;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 L_2 = (*(NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686*)L_1);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 >::Invoke(3 /* System.Int32 Unity.Networking.Transport.INetworkInterface::Bind(Unity.Networking.Transport.NetworkInterfaceEndPoint) */, INetworkInterface_tF8AD6FEF3DE45849521F3435AE8E07CCFDCFFBB1_il2cpp_TypeInfo_var, L_0, L_2);
		if (!L_3)
		{
			goto IL_0010;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0010:
	{
		// return 0;
		return 0;
	}
}
IL2CPP_EXTERN_C  int32_t SecureNetworkProtocol_Bind_m6CA2F8559AA95DAB225229C05264B1440DA46A85_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_networkInterface, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_localEndPoint, const RuntimeMethod* method)
{
	SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SecureNetworkProtocol_Bind_m6CA2F8559AA95DAB225229C05264B1440DA46A85(_thisAdjusted, ___0_networkInterface, ___1_localEndPoint, method);
	return _returnValue;
}
// Unity.Networking.Transport.NetworkProtocol Unity.Networking.Transport.TLS.SecureNetworkProtocol::CreateProtocolInterface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9 SecureNetworkProtocol_CreateProtocolInterface_mB81A91C3ADAC273D4D07AD0056F8F170E0AC4E06 (SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComputePacketOverheadDelegate_tFF6AB7CC7E33391F1CF729C3FC4C5DF1D47CA9C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectDelegate_tF0F993B09F4013E6F8765D173E20519526B78613_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectDelegate_tEF9FFFB31023D3A29E0A1FA73D4F830B0E799A14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProcessReceiveDelegate_tC13DF5985CEFE17FBFF48B30FECDD7C4470A83C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProcessSendConnectionAcceptDelegate_t69D4C0B8BE8F81AFC1A4A2F0A4EF5540B3003CAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProcessSendDelegate_t13BEFEE10F53345833169A7C7AF11F3B3EB2DA11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProcessSendPingDelegate_t152699432B5574DC4245F79AD09F4AAC5038FD2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProcessSendPongDelegate_t10EC1FA49739F7F923218C56A0FCBB3A2E99CE49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_ComputePacketOverhead_m23FF3AD571738B5BBBC31F0DC7A1BADFB3C4B12A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_Connect_mAE3ED3A9FBA3023E1E50467AD4BF826ED89ADFFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_Disconnect_m73A4699BBAFB93E2FEF31C3F4F6F406E19C66B53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_ProcessReceive_m31DC346544D8BEACDEF4858B7B7E8051DC870067_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_ProcessSendConnectionAccept_m6E2E06B210D208CE575A32F53B49199A9ED0EEB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_ProcessSendPing_m2CD7DA3B44CD99AB7E16C101FB83912649196F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_ProcessSendPong_m8D7736A3DAE23BE23205ECA0E5EFFFB2BA3B1AB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_ProcessSend_m953E726B286E1FF9FB1836FB4897A8357A558987_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_Update_m40062B33F2208A000DB3ACE25B599336414CE9A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransportFunctionPointer_1__ctor_m0CF0EB42CBD6B29DBC6A68F45E303B0996D7D22D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransportFunctionPointer_1__ctor_m39D9CD4BCB4ED59BD85E320FF4EE2208AC5B7882_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransportFunctionPointer_1__ctor_m3E02B7E6A2635CD893E5D1C86CC9176D982BC3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransportFunctionPointer_1__ctor_m5D145E90EC40CE16611DF7593398529E85263C56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransportFunctionPointer_1__ctor_m6C20ABFA8FDDFF6594D8ED81DD9E8A1ADD5A105C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransportFunctionPointer_1__ctor_m857908203463C9FB5C58EA05FE3415FCA9309886_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransportFunctionPointer_1__ctor_m99B3F3334311C659D1A30A1A1DD501A278504B62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransportFunctionPointer_1__ctor_mB4B753786975770CB3F5DDC734BB2DBAE1781673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransportFunctionPointer_1__ctor_mBCE476BB901D7124332E857E414D21674E44764D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateDelegate_t848AE3DE157F214CEF33820CF17818729BACFFCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new NetworkProtocol(
		//     computePacketOverhead: new TransportFunctionPointer<NetworkProtocol.ComputePacketOverheadDelegate>(ComputePacketOverhead),
		//     processReceive: new TransportFunctionPointer<NetworkProtocol.ProcessReceiveDelegate>(ProcessReceive),
		//     processSend: new TransportFunctionPointer<NetworkProtocol.ProcessSendDelegate>(ProcessSend),
		//     processSendConnectionAccept: new TransportFunctionPointer<NetworkProtocol.ProcessSendConnectionAcceptDelegate>(ProcessSendConnectionAccept),
		//     connect: new TransportFunctionPointer<NetworkProtocol.ConnectDelegate>(Connect),
		//     disconnect: new TransportFunctionPointer<NetworkProtocol.DisconnectDelegate>(Disconnect),
		//     processSendPing: new TransportFunctionPointer<NetworkProtocol.ProcessSendPingDelegate>(ProcessSendPing),
		//     processSendPong: new TransportFunctionPointer<NetworkProtocol.ProcessSendPongDelegate>(ProcessSendPong),
		//     update: new TransportFunctionPointer<NetworkProtocol.UpdateDelegate>(Update),
		//     needsUpdate: true,
		//     userData: UserData,
		//     maxHeaderSize: UdpCHeader.Length,
		//     maxFooterSize: SessionIdToken.k_Length
		// );
		ComputePacketOverheadDelegate_tFF6AB7CC7E33391F1CF729C3FC4C5DF1D47CA9C7* L_0 = (ComputePacketOverheadDelegate_tFF6AB7CC7E33391F1CF729C3FC4C5DF1D47CA9C7*)il2cpp_codegen_object_new(ComputePacketOverheadDelegate_tFF6AB7CC7E33391F1CF729C3FC4C5DF1D47CA9C7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ComputePacketOverheadDelegate__ctor_mFF77EEC0FBE97189793098037E72362557312B64(L_0, NULL, (intptr_t)((void*)SecureNetworkProtocol_ComputePacketOverhead_m23FF3AD571738B5BBBC31F0DC7A1BADFB3C4B12A_RuntimeMethod_var), NULL);
		TransportFunctionPointer_1_t403A4BA6983AC49EB5EDF3EB14F092C746490EFF L_1;
		memset((&L_1), 0, sizeof(L_1));
		TransportFunctionPointer_1__ctor_m3E02B7E6A2635CD893E5D1C86CC9176D982BC3D0((&L_1), L_0, /*hidden argument*/TransportFunctionPointer_1__ctor_m3E02B7E6A2635CD893E5D1C86CC9176D982BC3D0_RuntimeMethod_var);
		ProcessReceiveDelegate_tC13DF5985CEFE17FBFF48B30FECDD7C4470A83C4* L_2 = (ProcessReceiveDelegate_tC13DF5985CEFE17FBFF48B30FECDD7C4470A83C4*)il2cpp_codegen_object_new(ProcessReceiveDelegate_tC13DF5985CEFE17FBFF48B30FECDD7C4470A83C4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ProcessReceiveDelegate__ctor_m36FA8288C211E49A48DFEC43097F51CDF87F94FC(L_2, NULL, (intptr_t)((void*)SecureNetworkProtocol_ProcessReceive_m31DC346544D8BEACDEF4858B7B7E8051DC870067_RuntimeMethod_var), NULL);
		TransportFunctionPointer_1_tF0C75E421ACA913F2FA062ED002F9586FEA669FC L_3;
		memset((&L_3), 0, sizeof(L_3));
		TransportFunctionPointer_1__ctor_m0CF0EB42CBD6B29DBC6A68F45E303B0996D7D22D((&L_3), L_2, /*hidden argument*/TransportFunctionPointer_1__ctor_m0CF0EB42CBD6B29DBC6A68F45E303B0996D7D22D_RuntimeMethod_var);
		ProcessSendDelegate_t13BEFEE10F53345833169A7C7AF11F3B3EB2DA11* L_4 = (ProcessSendDelegate_t13BEFEE10F53345833169A7C7AF11F3B3EB2DA11*)il2cpp_codegen_object_new(ProcessSendDelegate_t13BEFEE10F53345833169A7C7AF11F3B3EB2DA11_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ProcessSendDelegate__ctor_mD549857AED7833D3BB6E64DB337BCC959AF46E9F(L_4, NULL, (intptr_t)((void*)SecureNetworkProtocol_ProcessSend_m953E726B286E1FF9FB1836FB4897A8357A558987_RuntimeMethod_var), NULL);
		TransportFunctionPointer_1_t77C607A1DCF675C39F99E9EEE5AB36FB7CC494B1 L_5;
		memset((&L_5), 0, sizeof(L_5));
		TransportFunctionPointer_1__ctor_m39D9CD4BCB4ED59BD85E320FF4EE2208AC5B7882((&L_5), L_4, /*hidden argument*/TransportFunctionPointer_1__ctor_m39D9CD4BCB4ED59BD85E320FF4EE2208AC5B7882_RuntimeMethod_var);
		ProcessSendConnectionAcceptDelegate_t69D4C0B8BE8F81AFC1A4A2F0A4EF5540B3003CAF* L_6 = (ProcessSendConnectionAcceptDelegate_t69D4C0B8BE8F81AFC1A4A2F0A4EF5540B3003CAF*)il2cpp_codegen_object_new(ProcessSendConnectionAcceptDelegate_t69D4C0B8BE8F81AFC1A4A2F0A4EF5540B3003CAF_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ProcessSendConnectionAcceptDelegate__ctor_mCDB2854F94CC9B1FBF2E3F5D3EC06455879412AE(L_6, NULL, (intptr_t)((void*)SecureNetworkProtocol_ProcessSendConnectionAccept_m6E2E06B210D208CE575A32F53B49199A9ED0EEB5_RuntimeMethod_var), NULL);
		TransportFunctionPointer_1_t8BEB3732EF9358D73F93626B99D9423182E4C47D L_7;
		memset((&L_7), 0, sizeof(L_7));
		TransportFunctionPointer_1__ctor_mB4B753786975770CB3F5DDC734BB2DBAE1781673((&L_7), L_6, /*hidden argument*/TransportFunctionPointer_1__ctor_mB4B753786975770CB3F5DDC734BB2DBAE1781673_RuntimeMethod_var);
		ConnectDelegate_tF0F993B09F4013E6F8765D173E20519526B78613* L_8 = (ConnectDelegate_tF0F993B09F4013E6F8765D173E20519526B78613*)il2cpp_codegen_object_new(ConnectDelegate_tF0F993B09F4013E6F8765D173E20519526B78613_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ConnectDelegate__ctor_m5F8C25B575FFE1F35F90E02833B67A870635D40C(L_8, NULL, (intptr_t)((void*)SecureNetworkProtocol_Connect_mAE3ED3A9FBA3023E1E50467AD4BF826ED89ADFFB_RuntimeMethod_var), NULL);
		TransportFunctionPointer_1_t71E737606530D4C87CDCF73063247BA844270CFF L_9;
		memset((&L_9), 0, sizeof(L_9));
		TransportFunctionPointer_1__ctor_m857908203463C9FB5C58EA05FE3415FCA9309886((&L_9), L_8, /*hidden argument*/TransportFunctionPointer_1__ctor_m857908203463C9FB5C58EA05FE3415FCA9309886_RuntimeMethod_var);
		DisconnectDelegate_tEF9FFFB31023D3A29E0A1FA73D4F830B0E799A14* L_10 = (DisconnectDelegate_tEF9FFFB31023D3A29E0A1FA73D4F830B0E799A14*)il2cpp_codegen_object_new(DisconnectDelegate_tEF9FFFB31023D3A29E0A1FA73D4F830B0E799A14_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		DisconnectDelegate__ctor_m94F15D89BBBB6D3B470B0E028C32940ABE783B76(L_10, NULL, (intptr_t)((void*)SecureNetworkProtocol_Disconnect_m73A4699BBAFB93E2FEF31C3F4F6F406E19C66B53_RuntimeMethod_var), NULL);
		TransportFunctionPointer_1_t8CB155AD69427676535F5D25A3C9408D5012DDB0 L_11;
		memset((&L_11), 0, sizeof(L_11));
		TransportFunctionPointer_1__ctor_m5D145E90EC40CE16611DF7593398529E85263C56((&L_11), L_10, /*hidden argument*/TransportFunctionPointer_1__ctor_m5D145E90EC40CE16611DF7593398529E85263C56_RuntimeMethod_var);
		ProcessSendPingDelegate_t152699432B5574DC4245F79AD09F4AAC5038FD2B* L_12 = (ProcessSendPingDelegate_t152699432B5574DC4245F79AD09F4AAC5038FD2B*)il2cpp_codegen_object_new(ProcessSendPingDelegate_t152699432B5574DC4245F79AD09F4AAC5038FD2B_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ProcessSendPingDelegate__ctor_mCD2550603B06D8CEC25F4E2D446BF5CC5C8A0BC0(L_12, NULL, (intptr_t)((void*)SecureNetworkProtocol_ProcessSendPing_m2CD7DA3B44CD99AB7E16C101FB83912649196F18_RuntimeMethod_var), NULL);
		TransportFunctionPointer_1_t97CB0A2F7C4082FD45ACA0AE4155845480AE8843 L_13;
		memset((&L_13), 0, sizeof(L_13));
		TransportFunctionPointer_1__ctor_m99B3F3334311C659D1A30A1A1DD501A278504B62((&L_13), L_12, /*hidden argument*/TransportFunctionPointer_1__ctor_m99B3F3334311C659D1A30A1A1DD501A278504B62_RuntimeMethod_var);
		ProcessSendPongDelegate_t10EC1FA49739F7F923218C56A0FCBB3A2E99CE49* L_14 = (ProcessSendPongDelegate_t10EC1FA49739F7F923218C56A0FCBB3A2E99CE49*)il2cpp_codegen_object_new(ProcessSendPongDelegate_t10EC1FA49739F7F923218C56A0FCBB3A2E99CE49_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		ProcessSendPongDelegate__ctor_m941B05EA730046AF3D8D72BCAEAD489B81E07455(L_14, NULL, (intptr_t)((void*)SecureNetworkProtocol_ProcessSendPong_m8D7736A3DAE23BE23205ECA0E5EFFFB2BA3B1AB7_RuntimeMethod_var), NULL);
		TransportFunctionPointer_1_t1974F1C28035CE103ECF0504CE8E87D6037E0398 L_15;
		memset((&L_15), 0, sizeof(L_15));
		TransportFunctionPointer_1__ctor_m6C20ABFA8FDDFF6594D8ED81DD9E8A1ADD5A105C((&L_15), L_14, /*hidden argument*/TransportFunctionPointer_1__ctor_m6C20ABFA8FDDFF6594D8ED81DD9E8A1ADD5A105C_RuntimeMethod_var);
		UpdateDelegate_t848AE3DE157F214CEF33820CF17818729BACFFCD* L_16 = (UpdateDelegate_t848AE3DE157F214CEF33820CF17818729BACFFCD*)il2cpp_codegen_object_new(UpdateDelegate_t848AE3DE157F214CEF33820CF17818729BACFFCD_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		UpdateDelegate__ctor_m86BE497BB0163FA75917B006CE9090480E515766(L_16, NULL, (intptr_t)((void*)SecureNetworkProtocol_Update_m40062B33F2208A000DB3ACE25B599336414CE9A3_RuntimeMethod_var), NULL);
		TransportFunctionPointer_1_tBB4FC4ACEB955CF3ECDC5FB78DE9132C126522F2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		TransportFunctionPointer_1__ctor_mBCE476BB901D7124332E857E414D21674E44764D((&L_17), L_16, /*hidden argument*/TransportFunctionPointer_1__ctor_mBCE476BB901D7124332E857E414D21674E44764D_RuntimeMethod_var);
		intptr_t L_18 = __this->___UserData_0;
		NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9 L_19;
		memset((&L_19), 0, sizeof(L_19));
		NetworkProtocol__ctor_mC2750284019C0B13ACEC26B10D34B77E617D7B2A((&L_19), L_1, L_3, L_5, L_7, L_9, L_11, L_13, L_15, L_17, (bool)1, L_18, ((int32_t)10), 8, /*hidden argument*/NULL);
		return L_19;
	}
}
IL2CPP_EXTERN_C  NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9 SecureNetworkProtocol_CreateProtocolInterface_mB81A91C3ADAC273D4D07AD0056F8F170E0AC4E06_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581*>(__this + _offset);
	NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9 _returnValue;
	_returnValue = SecureNetworkProtocol_CreateProtocolInterface_mB81A91C3ADAC273D4D07AD0056F8F170E0AC4E06(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Networking.Transport.TLS.SecureNetworkProtocol::ComputePacketOverhead(Unity.Networking.Transport.NetworkDriver/Connection&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SecureNetworkProtocol_ComputePacketOverhead_m23FF3AD571738B5BBBC31F0DC7A1BADFB3C4B12A (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, int32_t* ___1_dataOffset, const RuntimeMethod* method) 
{
	{
		// return UnityTransportProtocol.ComputePacketOverhead(ref connection, out dataOffset);
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_0 = ___0_connection;
		int32_t* L_1 = ___1_dataOffset;
		int32_t L_2;
		L_2 = UnityTransportProtocol_ComputePacketOverhead_m7F9F4F3826262A4AD39C1176E4C91AA76C6BB11B(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Unity.Networking.Transport.TLS.SecureNetworkProtocol::ServerShouldStep(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SecureNetworkProtocol_ServerShouldStep_mBD0476B9F58C6EA7017CE0328275C80D7B1A8270 (uint32_t ___0_currentState, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_currentState;
		if ((!(((uint32_t)L_0) > ((uint32_t)6))))
		{
			goto IL_000b;
		}
	}
	{
		uint32_t L_1 = ___0_currentState;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, ((int32_t)12)))) <= ((uint32_t)4))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		// return true;
		return (bool)1;
	}

IL_000d:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Networking.Transport.TLS.SecureNetworkProtocol::ClientShouldStep(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SecureNetworkProtocol_ClientShouldStep_m51AC70186760C7BB190576E633FE88397E4108CF (uint32_t ___0_currentState, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_currentState;
		switch (L_0)
		{
			case 0:
			{
				goto IL_004c;
			}
			case 1:
			{
				goto IL_004c;
			}
			case 2:
			{
				goto IL_004e;
			}
			case 3:
			{
				goto IL_004e;
			}
			case 4:
			{
				goto IL_004e;
			}
			case 5:
			{
				goto IL_004e;
			}
			case 6:
			{
				goto IL_0050;
			}
			case 7:
			{
				goto IL_0050;
			}
			case 8:
			{
				goto IL_0050;
			}
			case 9:
			{
				goto IL_0050;
			}
			case 10:
			{
				goto IL_0050;
			}
			case 11:
			{
				goto IL_0050;
			}
			case 12:
			{
				goto IL_0052;
			}
			case 13:
			{
				goto IL_0052;
			}
			case 14:
			{
				goto IL_0050;
			}
			case 15:
			{
				goto IL_0050;
			}
			case 16:
			{
				goto IL_0050;
			}
		}
	}
	{
		goto IL_0052;
	}

IL_004c:
	{
		// return true;
		return (bool)1;
	}

IL_004e:
	{
		// return false;
		return (bool)0;
	}

IL_0050:
	{
		// return true;
		return (bool)1;
	}

IL_0052:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::SetSecureUserData(System.IntPtr,System.Int32,Unity.Networking.Transport.NetworkInterfaceEndPoint&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,Unity.Networking.Transport.TLS.SecureUserData*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_SetSecureUserData_m26108E90B1F178D279794549BC3435FE957E3542 (intptr_t ___0_inStream, int32_t ___1_size, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___2_remote, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___3_networkSendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* ___5_secureUserData, const RuntimeMethod* method) 
{
	{
		// secureUserData->Interface = networkSendInterface;
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_0 = ___5_secureUserData;
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_1 = ___3_networkSendInterface;
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035 L_2 = (*(NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035*)L_1);
		NullCheck(L_0);
		L_0->___Interface_1 = L_2;
		// secureUserData->Remote = remote;
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_3 = ___5_secureUserData;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_4 = ___2_remote;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 L_5 = (*(NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686*)L_4);
		NullCheck(L_3);
		L_3->___Remote_2 = L_5;
		// secureUserData->QueueHandle = queueHandle;
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_6 = ___5_secureUserData;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_7 = ___4_queueHandle;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090 L_8 = (*(NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090*)L_7);
		NullCheck(L_6);
		L_6->___QueueHandle_3 = L_8;
		// secureUserData->Size = size;
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_9 = ___5_secureUserData;
		int32_t L_10 = ___1_size;
		NullCheck(L_9);
		L_9->___Size_4 = L_10;
		// secureUserData->StreamData = inStream;
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_11 = ___5_secureUserData;
		intptr_t L_12 = ___0_inStream;
		NullCheck(L_11);
		L_11->___StreamData_0 = L_12;
		// secureUserData->BytesProcessed = 0;
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_13 = ___5_secureUserData;
		NullCheck(L_13);
		L_13->___BytesProcessed_5 = 0;
		// }
		return;
	}
}
// System.Boolean Unity.Networking.Transport.TLS.SecureNetworkProtocol::CreateNewSecureClientState(Unity.Networking.Transport.NetworkInterfaceEndPoint&,System.UInt32,Unity.Networking.Transport.TLS.SecureNetworkProtocolData*,Unity.Networking.Transport.SessionIdToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SecureNetworkProtocol_CreateNewSecureClientState_mAA5DDF2BA684C99D2BC6C5DA03B3DB14DBDF726B (NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___0_endpoint, uint32_t ___1_tlsRole, SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* ___2_protocolData, SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 ___3_receiveToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeHashMap_2_TryAdd_mB425A45433A55B799577F14EFBE7C7379D37CF2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeHashMap_2_set_Item_mA9D2E832C60A25C9C7F70B3F329AC7BF45D01288_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_AlignOf_TisSecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B_m42E37113A90B5272BE314C380722580DEF3E96F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisSecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B_m93E4445737BC86FE087B87E97CD00064A2CD9114_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B V_3;
	memset((&V_3), 0, sizeof(V_3));
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 V_4;
	memset((&V_4), 0, sizeof(V_4));
	unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 V_5;
	memset((&V_5), 0, sizeof(V_5));
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if (protocolData->SecureClients.TryAdd(endpoint, new SecureClientState()))
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_0 = ___2_protocolData;
		NullCheck(L_0);
		UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* L_1 = (&L_0->___SecureClients_0);
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_2 = ___0_endpoint;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 L_3 = (*(NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686*)L_2);
		il2cpp_codegen_initobj((&V_0), sizeof(SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54));
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_4 = V_0;
		bool L_5;
		L_5 = UnsafeHashMap_2_TryAdd_mB425A45433A55B799577F14EFBE7C7379D37CF2E(L_1, L_3, L_4, UnsafeHashMap_2_TryAdd_mB425A45433A55B799577F14EFBE7C7379D37CF2E_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_02a6;
		}
	}
	{
		// var secureClient = protocolData->SecureClients[endpoint];
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_6 = ___2_protocolData;
		NullCheck(L_6);
		UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* L_7 = (&L_6->___SecureClients_0);
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_8 = ___0_endpoint;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 L_9 = (*(NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686*)L_8);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_10;
		L_10 = UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC(L_7, L_9, UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC_RuntimeMethod_var);
		V_1 = L_10;
		// secureClient.ClientConfig = GetSecureClientConfig(protocolData);
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_11 = ___2_protocolData;
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_12;
		L_12 = SecureNetworkProtocol_GetSecureClientConfig_m1EB7EDB53869DD1C0A75D2D8CEF81BDBC3BFE4C7(L_11, NULL);
		(&V_1)->___ClientConfig_1 = L_12;
		// secureClient.ReceiveToken = receiveToken;
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_13 = ___3_receiveToken;
		(&V_1)->___ReceiveToken_2 = L_13;
		// CreateSecureClient(tlsRole, &secureClient);
		uint32_t L_14 = ___1_tlsRole;
		SecureNetworkProtocol_CreateSecureClient_mD8F9F20B481B1487C7B1D2F3AFAE2DB1A2FF9B1D(L_14, (SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54*)((uintptr_t)(&V_1)), NULL);
		// IntPtr secureUserData = (IntPtr)UnsafeUtility.Malloc(UnsafeUtility.SizeOf<SecureUserData>(),
		//     UnsafeUtility.AlignOf<SecureUserData>(), Allocator.Persistent);
		int32_t L_15;
		L_15 = UnsafeUtility_SizeOf_TisSecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B_m93E4445737BC86FE087B87E97CD00064A2CD9114(UnsafeUtility_SizeOf_TisSecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B_m93E4445737BC86FE087B87E97CD00064A2CD9114_RuntimeMethod_var);
		int32_t L_16;
		L_16 = UnsafeUtility_AlignOf_TisSecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B_m42E37113A90B5272BE314C380722580DEF3E96F8(UnsafeUtility_AlignOf_TisSecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B_m42E37113A90B5272BE314C380722580DEF3E96F8_RuntimeMethod_var);
		void* L_17;
		L_17 = UnsafeUtility_Malloc_mD7BD28D5AE7E4901B225B7DFFE2B568EE7BDC0C9(((int64_t)L_15), L_16, 4, NULL);
		intptr_t L_18;
		L_18 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_17, NULL);
		V_2 = L_18;
		// *(SecureUserData*)secureUserData = new SecureUserData
		// {
		//     Interface = default,
		//     Remote = default,
		//     QueueHandle = default,
		//     StreamData = IntPtr.Zero,
		//     Size = 0,
		//     BytesProcessed = 0
		// };
		intptr_t L_19 = V_2;
		void* L_20;
		L_20 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_19, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B));
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_21 = (&(&V_3)->___Interface_1);
		il2cpp_codegen_initobj(L_21, sizeof(NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035));
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_22 = (&(&V_3)->___Remote_2);
		il2cpp_codegen_initobj(L_22, sizeof(NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686));
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_23 = (&(&V_3)->___QueueHandle_3);
		il2cpp_codegen_initobj(L_23, sizeof(NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090));
		intptr_t L_24 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		(&V_3)->___StreamData_0 = L_24;
		(&V_3)->___Size_4 = 0;
		(&V_3)->___BytesProcessed_5 = 0;
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B L_25 = V_3;
		*(SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B*)L_20 = L_25;
		// secureClient.ClientConfig->transportUserData = secureUserData;
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_26 = V_1;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_27 = L_26.___ClientConfig_1;
		intptr_t L_28 = V_2;
		NullCheck(L_27);
		L_27->___transportUserData_11 = L_28;
		// if (protocolData->Hostname != default)
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_29 = ___2_protocolData;
		NullCheck(L_29);
		FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* L_30 = (&L_29->___Hostname_4);
		FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* L_31 = (&V_4);
		il2cpp_codegen_initobj(L_31, sizeof(FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824));
		bool L_32;
		L_32 = FixedString32Bytes_op_Inequality_m79C9EBDDD8ACA515FEE668E2C49C5F0CD4B2AD16(L_30, L_31, NULL);
		if (!L_32)
		{
			goto IL_00f7;
		}
	}
	{
		// secureClient.ClientConfig->hostname = protocolData->Hostname.GetUnsafePtr();
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_33 = V_1;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_34 = L_33.___ClientConfig_1;
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_35 = ___2_protocolData;
		NullCheck(L_35);
		FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* L_36 = (&L_35->___Hostname_4);
		uint8_t* L_37;
		L_37 = FixedString32Bytes_GetUnsafePtr_mA653D9296813A2EA93C0D6FC501500008121C3A8_inline(L_36, NULL);
		NullCheck(L_34);
		L_34->___hostname_16 = L_37;
		goto IL_0104;
	}

IL_00f7:
	{
		// secureClient.ClientConfig->hostname = null;
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_38 = V_1;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_39 = L_38.___ClientConfig_1;
		NullCheck(L_39);
		L_39->___hostname_16 = (uint8_t*)((uintptr_t)0);
	}

IL_0104:
	{
		// if (protocolData->Pem != default)
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_40 = ___2_protocolData;
		NullCheck(L_40);
		FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21* L_41 = (&L_40->___Pem_1);
		FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* L_42 = (&V_4);
		il2cpp_codegen_initobj(L_42, sizeof(FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824));
		bool L_43;
		L_43 = FixedString4096Bytes_op_Inequality_m7FFBE281245A53F6FF937ABE36ADAD484F1B0B1F(L_41, L_42, NULL);
		if (!L_43)
		{
			goto IL_015a;
		}
	}
	{
		// secureClient.ClientConfig->caPEM = new Binding.unitytls_dataRef()
		// {
		//     dataPtr = protocolData->Pem.GetUnsafePtr(),
		//     dataLen = new UIntPtr((uint)protocolData->Pem.Length)
		// };
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_44 = V_1;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_45 = L_44.___ClientConfig_1;
		il2cpp_codegen_initobj((&V_5), sizeof(unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8));
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_46 = ___2_protocolData;
		NullCheck(L_46);
		FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21* L_47 = (&L_46->___Pem_1);
		uint8_t* L_48;
		L_48 = FixedString4096Bytes_GetUnsafePtr_mE1DB42C2C0EEA7D6E1B5D0366A4727125D916EEB_inline(L_47, NULL);
		(&V_5)->___dataPtr_0 = L_48;
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_49 = ___2_protocolData;
		NullCheck(L_49);
		FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21* L_50 = (&L_49->___Pem_1);
		int32_t L_51;
		L_51 = FixedString4096Bytes_get_Length_mC2A80F2813739852F0675DA8D2AB68AA92BFC36F_inline(L_50, NULL);
		uintptr_t L_52;
		memset((&L_52), 0, sizeof(L_52));
		UIntPtr__ctor_m5915109E3F198CA16FDFA9CF438FAAEBFB90DE27((&L_52), L_51, /*hidden argument*/NULL);
		(&V_5)->___dataLen_1 = L_52;
		unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 L_53 = V_5;
		NullCheck(L_45);
		L_45->___caPEM_0 = L_53;
		goto IL_0185;
	}

IL_015a:
	{
		// secureClient.ClientConfig->caPEM = new Binding.unitytls_dataRef()
		// {
		//     dataPtr = null,
		//     dataLen = new UIntPtr(0)
		// };
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_54 = V_1;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_55 = L_54.___ClientConfig_1;
		il2cpp_codegen_initobj((&V_5), sizeof(unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8));
		(&V_5)->___dataPtr_0 = (uint8_t*)((uintptr_t)0);
		uintptr_t L_56;
		memset((&L_56), 0, sizeof(L_56));
		UIntPtr__ctor_m5915109E3F198CA16FDFA9CF438FAAEBFB90DE27((&L_56), 0, /*hidden argument*/NULL);
		(&V_5)->___dataLen_1 = L_56;
		unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 L_57 = V_5;
		NullCheck(L_55);
		L_55->___caPEM_0 = L_57;
	}

IL_0185:
	{
		// if (protocolData->Rsa != default && protocolData->RsaKey != default)
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_58 = ___2_protocolData;
		NullCheck(L_58);
		FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21* L_59 = (&L_58->___Rsa_2);
		FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* L_60 = (&V_4);
		il2cpp_codegen_initobj(L_60, sizeof(FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824));
		bool L_61;
		L_61 = FixedString4096Bytes_op_Inequality_m7FFBE281245A53F6FF937ABE36ADAD484F1B0B1F(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0232;
		}
	}
	{
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_62 = ___2_protocolData;
		NullCheck(L_62);
		FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21* L_63 = (&L_62->___RsaKey_3);
		FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* L_64 = (&V_6);
		il2cpp_codegen_initobj(L_64, sizeof(FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824));
		bool L_65;
		L_65 = FixedString4096Bytes_op_Inequality_m7FFBE281245A53F6FF937ABE36ADAD484F1B0B1F(L_63, L_64, NULL);
		if (!L_65)
		{
			goto IL_0232;
		}
	}
	{
		// secureClient.ClientConfig->serverPEM = new Binding.unitytls_dataRef()
		// {
		//     dataPtr = protocolData->Rsa.GetUnsafePtr(),
		//     dataLen = new UIntPtr((uint)protocolData->Rsa.Length)
		// };
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_66 = V_1;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_67 = L_66.___ClientConfig_1;
		il2cpp_codegen_initobj((&V_5), sizeof(unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8));
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_68 = ___2_protocolData;
		NullCheck(L_68);
		FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21* L_69 = (&L_68->___Rsa_2);
		uint8_t* L_70;
		L_70 = FixedString4096Bytes_GetUnsafePtr_mE1DB42C2C0EEA7D6E1B5D0366A4727125D916EEB_inline(L_69, NULL);
		(&V_5)->___dataPtr_0 = L_70;
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_71 = ___2_protocolData;
		NullCheck(L_71);
		FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21* L_72 = (&L_71->___Rsa_2);
		int32_t L_73;
		L_73 = FixedString4096Bytes_get_Length_mC2A80F2813739852F0675DA8D2AB68AA92BFC36F_inline(L_72, NULL);
		uintptr_t L_74;
		memset((&L_74), 0, sizeof(L_74));
		UIntPtr__ctor_m5915109E3F198CA16FDFA9CF438FAAEBFB90DE27((&L_74), L_73, /*hidden argument*/NULL);
		(&V_5)->___dataLen_1 = L_74;
		unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 L_75 = V_5;
		NullCheck(L_67);
		L_67->___serverPEM_1 = L_75;
		// secureClient.ClientConfig->privateKeyPEM = new Binding.unitytls_dataRef()
		// {
		//     dataPtr = protocolData->RsaKey.GetUnsafePtr(),
		//     dataLen = new UIntPtr((uint)protocolData->RsaKey.Length)
		// };
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_76 = V_1;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_77 = L_76.___ClientConfig_1;
		il2cpp_codegen_initobj((&V_5), sizeof(unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8));
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_78 = ___2_protocolData;
		NullCheck(L_78);
		FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21* L_79 = (&L_78->___RsaKey_3);
		uint8_t* L_80;
		L_80 = FixedString4096Bytes_GetUnsafePtr_mE1DB42C2C0EEA7D6E1B5D0366A4727125D916EEB_inline(L_79, NULL);
		(&V_5)->___dataPtr_0 = L_80;
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_81 = ___2_protocolData;
		NullCheck(L_81);
		FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21* L_82 = (&L_81->___RsaKey_3);
		int32_t L_83;
		L_83 = FixedString4096Bytes_get_Length_mC2A80F2813739852F0675DA8D2AB68AA92BFC36F_inline(L_82, NULL);
		uintptr_t L_84;
		memset((&L_84), 0, sizeof(L_84));
		UIntPtr__ctor_m5915109E3F198CA16FDFA9CF438FAAEBFB90DE27((&L_84), L_83, /*hidden argument*/NULL);
		(&V_5)->___dataLen_1 = L_84;
		unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 L_85 = V_5;
		NullCheck(L_77);
		L_77->___privateKeyPEM_2 = L_85;
		goto IL_0288;
	}

IL_0232:
	{
		// secureClient.ClientConfig->serverPEM = new Binding.unitytls_dataRef()
		// {
		//     dataPtr = null,
		//     dataLen = new UIntPtr(0)
		// };
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_86 = V_1;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_87 = L_86.___ClientConfig_1;
		il2cpp_codegen_initobj((&V_5), sizeof(unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8));
		(&V_5)->___dataPtr_0 = (uint8_t*)((uintptr_t)0);
		uintptr_t L_88;
		memset((&L_88), 0, sizeof(L_88));
		UIntPtr__ctor_m5915109E3F198CA16FDFA9CF438FAAEBFB90DE27((&L_88), 0, /*hidden argument*/NULL);
		(&V_5)->___dataLen_1 = L_88;
		unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 L_89 = V_5;
		NullCheck(L_87);
		L_87->___serverPEM_1 = L_89;
		// secureClient.ClientConfig->privateKeyPEM = new Binding.unitytls_dataRef()
		// {
		//     dataPtr = null,
		//     dataLen = new UIntPtr(0)
		// };
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_90 = V_1;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_91 = L_90.___ClientConfig_1;
		il2cpp_codegen_initobj((&V_5), sizeof(unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8));
		(&V_5)->___dataPtr_0 = (uint8_t*)((uintptr_t)0);
		uintptr_t L_92;
		memset((&L_92), 0, sizeof(L_92));
		UIntPtr__ctor_m5915109E3F198CA16FDFA9CF438FAAEBFB90DE27((&L_92), 0, /*hidden argument*/NULL);
		(&V_5)->___dataLen_1 = L_92;
		unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 L_93 = V_5;
		NullCheck(L_91);
		L_91->___privateKeyPEM_2 = L_93;
	}

IL_0288:
	{
		// Binding.unitytls_client_init(secureClient.ClientPtr);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_94 = V_1;
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_95 = L_94.___ClientPtr_0;
		int32_t L_96;
		L_96 = Binding_unitytls_client_init_m4A2D0AEC37B2EEAFFF7793ECE1C27B52E718C9AA(L_95, NULL);
		// protocolData->SecureClients[endpoint] = secureClient;
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_97 = ___2_protocolData;
		NullCheck(L_97);
		UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* L_98 = (&L_97->___SecureClients_0);
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_99 = ___0_endpoint;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 L_100 = (*(NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686*)L_99);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_101 = V_1;
		UnsafeHashMap_2_set_Item_mA9D2E832C60A25C9C7F70B3F329AC7BF45D01288(L_98, L_100, L_101, UnsafeHashMap_2_set_Item_mA9D2E832C60A25C9C7F70B3F329AC7BF45D01288_RuntimeMethod_var);
	}

IL_02a6:
	{
		// return false;
		return (bool)0;
	}
}
// System.UInt32 Unity.Networking.Transport.TLS.SecureNetworkProtocol::SecureHandshakeStep(Unity.Networking.Transport.TLS.SecureClientState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SecureNetworkProtocol_SecureHandshakeStep_m28362FB06B2A4D53DBA0A066C7C3BB61FCD3C910 (SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* ___0_clientAgent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	bool G_B5_0 = false;
	{
		// var isServer = Binding.unitytls_client_get_role(clientAgent.ClientPtr) == Binding.UnityTLSRole_Server;
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_0 = ___0_clientAgent;
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_1 = L_0->___ClientPtr_0;
		uint32_t L_2;
		L_2 = Binding_unitytls_client_get_role_m1F838334033B29D9251DDD0153303DEE21B6C8EB(L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		// bool shouldStep = true;
		V_1 = (bool)1;
		// uint result = Binding.UNITYTLS_HANDSHAKE_STEP;
		V_2 = ((int32_t)1048584);
	}

IL_0017:
	{
		// shouldStep = false;
		V_1 = (bool)0;
		// result = Binding.unitytls_client_handshake(
		//     clientAgent.ClientPtr);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_3 = ___0_clientAgent;
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_4 = L_3->___ClientPtr_0;
		uint32_t L_5;
		L_5 = Binding_unitytls_client_handshake_mD90B620858219D8DF2E01747ED7DEFE6CF944F46(L_4, NULL);
		V_2 = L_5;
		// if (result == Binding.UNITYTLS_HANDSHAKE_STEP)
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)1048584)))))
		{
			goto IL_004b;
		}
	}
	{
		// uint currentState = Binding.unitytls_client_get_handshake_state(clientAgent.ClientPtr);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_7 = ___0_clientAgent;
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_8 = L_7->___ClientPtr_0;
		uint32_t L_9;
		L_9 = Binding_unitytls_client_get_handshake_state_m5DCB8B5E8841F1BCF2CC2E52310B30CCE0EB2199(L_8, NULL);
		V_3 = L_9;
		// shouldStep = isServer ? ServerShouldStep(currentState) : ClientShouldStep(currentState);
		bool L_10 = V_0;
		if (L_10)
		{
			goto IL_0044;
		}
	}
	{
		uint32_t L_11 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = SecureNetworkProtocol_ClientShouldStep_m51AC70186760C7BB190576E633FE88397E4108CF(L_11, NULL);
		G_B5_0 = L_12;
		goto IL_004a;
	}

IL_0044:
	{
		uint32_t L_13 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = SecureNetworkProtocol_ServerShouldStep_mBD0476B9F58C6EA7017CE0328275C80D7B1A8270(L_13, NULL);
		G_B5_0 = L_14;
	}

IL_004a:
	{
		V_1 = G_B5_0;
	}

IL_004b:
	{
		// while (shouldStep);
		bool L_15 = V_1;
		if (L_15)
		{
			goto IL_0017;
		}
	}
	{
		// return result;
		uint32_t L_16 = V_2;
		return L_16;
	}
}
// System.UInt32 Unity.Networking.Transport.TLS.SecureNetworkProtocol::UpdateSecureHandshakeState(Unity.Networking.Transport.TLS.SecureNetworkProtocolData*,Unity.Networking.Transport.NetworkInterfaceEndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SecureNetworkProtocol_UpdateSecureHandshakeState_mA53751EDD6F70C01A3942C8C2F53655DBD8083CE (SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* ___0_protocolData, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_endpoint, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeHashMap_2_set_Item_mA9D2E832C60A25C9C7F70B3F329AC7BF45D01288_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var secureClient = protocolData->SecureClients[endpoint];
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_0 = ___0_protocolData;
		NullCheck(L_0);
		UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* L_1 = (&L_0->___SecureClients_0);
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_2 = ___1_endpoint;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 L_3 = (*(NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686*)L_2);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_4;
		L_4 = UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC(L_1, L_3, UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC_RuntimeMethod_var);
		V_0 = L_4;
		// secureClient.LastHandshakeUpdate = protocolData->LastUpdate;
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_5 = ___0_protocolData;
		NullCheck(L_5);
		int64_t L_6 = L_5->___LastUpdate_10;
		(&V_0)->___LastHandshakeUpdate_3 = L_6;
		// protocolData->SecureClients[endpoint] = secureClient;
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_7 = ___0_protocolData;
		NullCheck(L_7);
		UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* L_8 = (&L_7->___SecureClients_0);
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_9 = ___1_endpoint;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 L_10 = (*(NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686*)L_9);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_11 = V_0;
		UnsafeHashMap_2_set_Item_mA9D2E832C60A25C9C7F70B3F329AC7BF45D01288(L_8, L_10, L_11, UnsafeHashMap_2_set_Item_mA9D2E832C60A25C9C7F70B3F329AC7BF45D01288_RuntimeMethod_var);
		// return SecureHandshakeStep(ref secureClient);
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		uint32_t L_12;
		L_12 = SecureNetworkProtocol_SecureHandshakeStep_m28362FB06B2A4D53DBA0A066C7C3BB61FCD3C910((&V_0), NULL);
		return L_12;
	}
}
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::PruneHalfOpenConnections(Unity.Networking.Transport.TLS.SecureNetworkProtocolData*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_PruneHalfOpenConnections_m86DADCC8B19C2A5A2065CB1DB70FAF73CC5AC597 (SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* ___0_protocolData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mDDF671931CE60775804BC5073A9296DD06BD335F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeHashMap_2_GetKeyArray_m5F34C4DF59F343A77EBFAD1EF1667A43A38781C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeHashMap_2_Remove_m94BE3198B3A3508CB109FAC4EE568ED86407F71B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B4BAA2C7AF6BFDCEF47AC8CCA3B374281428B0C);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tDF8469CB50B586533F70B614C38965EEBD6145B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var endpoints = protocolData->SecureClients.GetKeyArray(Allocator.Temp);
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_0 = ___0_protocolData;
		NullCheck(L_0);
		UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* L_1 = (&L_0->___SecureClients_0);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2;
		L_2 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(2, NULL);
		NativeArray_1_tDF8469CB50B586533F70B614C38965EEBD6145B2 L_3;
		L_3 = UnsafeHashMap_2_GetKeyArray_m5F34C4DF59F343A77EBFAD1EF1667A43A38781C8(L_1, L_2, UnsafeHashMap_2_GetKeyArray_m5F34C4DF59F343A77EBFAD1EF1667A43A38781C8_RuntimeMethod_var);
		V_0 = L_3;
		// bool pruned = false;
		V_1 = (bool)0;
		// for (int i = 0; i < endpoints.Length; i++)
		V_2 = 0;
		goto IL_007b;
	}

IL_0018:
	{
		// var secureClient = protocolData->SecureClients[endpoints[i]];
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_4 = ___0_protocolData;
		NullCheck(L_4);
		UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* L_5 = (&L_4->___SecureClients_0);
		int32_t L_6 = V_2;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 L_7;
		L_7 = IL2CPP_NATIVEARRAY_GET_ITEM(NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686, ((&V_0))->___m_Buffer_0, L_6);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_8;
		L_8 = UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC(L_5, L_7, UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC_RuntimeMethod_var);
		V_3 = L_8;
		// var state = Binding.unitytls_client_get_state(secureClient.ClientPtr);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_9 = V_3;
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_10 = L_9.___ClientPtr_0;
		uint32_t L_11;
		L_11 = Binding_unitytls_client_get_state_mFA36FD1C48800D3B88D142ED9E1FFFC65F196B0F(L_10, NULL);
		// if (state == Binding.UnityTLSClientState_Handshake &&
		//     secureClient.LastHandshakeUpdate > 0 &&
		//     protocolData->LastUpdate - secureClient.LastHandshakeUpdate > protocolData->SSLHandshakeTimeoutMax)
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_0077;
		}
	}
	{
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_12 = V_3;
		int64_t L_13 = L_12.___LastHandshakeUpdate_3;
		if ((((int64_t)L_13) <= ((int64_t)((int64_t)0))))
		{
			goto IL_0077;
		}
	}
	{
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_14 = ___0_protocolData;
		NullCheck(L_14);
		int64_t L_15 = L_14->___LastUpdate_10;
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_16 = V_3;
		int64_t L_17 = L_16.___LastHandshakeUpdate_3;
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_18 = ___0_protocolData;
		NullCheck(L_18);
		uint32_t L_19 = L_18->___SSLHandshakeTimeoutMax_7;
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract(L_15, L_17))) <= ((int64_t)((int64_t)(uint64_t)L_19))))
		{
			goto IL_0077;
		}
	}
	{
		// DisposeSecureClient(ref secureClient);
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		SecureNetworkProtocol_DisposeSecureClient_mB349E3980ACCB847640BCE87AA1319627170B17D((&V_3), NULL);
		// protocolData->SecureClients.Remove(endpoints[i]);
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_20 = ___0_protocolData;
		NullCheck(L_20);
		UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* L_21 = (&L_20->___SecureClients_0);
		int32_t L_22 = V_2;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 L_23;
		L_23 = IL2CPP_NATIVEARRAY_GET_ITEM(NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686, ((&V_0))->___m_Buffer_0, L_22);
		bool L_24;
		L_24 = UnsafeHashMap_2_Remove_m94BE3198B3A3508CB109FAC4EE568ED86407F71B(L_21, L_23, UnsafeHashMap_2_Remove_m94BE3198B3A3508CB109FAC4EE568ED86407F71B_RuntimeMethod_var);
		// pruned = true;
		V_1 = (bool)1;
	}

IL_0077:
	{
		// for (int i = 0; i < endpoints.Length; i++)
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_007b:
	{
		// for (int i = 0; i < endpoints.Length; i++)
		int32_t L_26 = V_2;
		int32_t L_27;
		L_27 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_0))->___m_Length_1);
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0018;
		}
	}
	{
		// if (pruned)
		bool L_28 = V_1;
		if (!L_28)
		{
			goto IL_0092;
		}
	}
	{
		// Debug.LogError("Had to prune half-open connections (clients with unfinished TLS handshakes).");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral6B4BAA2C7AF6BFDCEF47AC8CCA3B374281428B0C, NULL);
	}

IL_0092:
	{
		// endpoints.Dispose();
		NativeArray_1_Dispose_mDDF671931CE60775804BC5073A9296DD06BD335F((&V_0), NativeArray_1_Dispose_mDDF671931CE60775804BC5073A9296DD06BD335F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::ProcessReceive(System.IntPtr,Unity.Networking.Transport.NetworkInterfaceEndPoint&,System.Int32,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr,Unity.Networking.Transport.ProcessPacketCommand&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_ProcessReceive_m31DC346544D8BEACDEF4858B7B7E8051DC870067 (intptr_t ___0_stream, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_endpoint, int32_t ___2_size, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___3_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, intptr_t ___5_userData, ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* ___6_command, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeHashMap_2_Remove_m94BE3198B3A3508CB109FAC4EE568ED86407F71B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral841CC2C16CF6FF25C799C414002A52BD5E0E4A21);
		s_Il2CppMethodInitialized = true;
	}
	SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* V_0 = NULL;
	SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* V_2 = NULL;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_7;
	memset((&V_7), 0, sizeof(V_7));
	uintptr_t V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t G_B7_0 = 0;
	{
		// var protocolData = (SecureNetworkProtocolData*)userData;
		intptr_t L_0 = ___5_userData;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582*)L_1;
		// CreateNewSecureClientState(ref endpoint, Binding.UnityTLSRole_Server, protocolData);
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_2 = ___1_endpoint;
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_3 = V_0;
		il2cpp_codegen_initobj((&V_5), sizeof(SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672));
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_4 = V_5;
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = SecureNetworkProtocol_CreateNewSecureClientState_mAA5DDF2BA684C99D2BC6C5DA03B3DB14DBDF726B(L_2, 1, L_3, L_4, NULL);
		// var secureClient = protocolData->SecureClients[endpoint];
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_6 = V_0;
		NullCheck(L_6);
		UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* L_7 = (&L_6->___SecureClients_0);
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_8 = ___1_endpoint;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 L_9 = (*(NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686*)L_8);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_10;
		L_10 = UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC(L_7, L_9, UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC_RuntimeMethod_var);
		V_1 = L_10;
		// var secureUserData = (SecureUserData*)secureClient.ClientConfig->transportUserData;
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_11 = V_1;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_12 = L_11.___ClientConfig_1;
		NullCheck(L_12);
		intptr_t L_13 = L_12->___transportUserData_11;
		void* L_14;
		L_14 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_13, NULL);
		V_2 = (SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B*)L_14;
		// SetSecureUserData(stream, size, ref endpoint, ref sendInterface, ref queueHandle, secureUserData);
		intptr_t L_15 = ___0_stream;
		int32_t L_16 = ___2_size;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_17 = ___1_endpoint;
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_18 = ___3_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_19 = ___4_queueHandle;
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_20 = V_2;
		SecureNetworkProtocol_SetSecureUserData_m26108E90B1F178D279794549BC3435FE957E3542(L_15, L_16, L_17, L_18, L_19, L_20, NULL);
		// var clientState = Binding.unitytls_client_get_state(secureClient.ClientPtr);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_21 = V_1;
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_22 = L_21.___ClientPtr_0;
		uint32_t L_23;
		L_23 = Binding_unitytls_client_get_state_mFA36FD1C48800D3B88D142ED9E1FFFC65F196B0F(L_22, NULL);
		V_3 = L_23;
		// uint handshakeResult = Binding.UNITYTLS_SUCCESS;
		V_4 = 0;
		// if (clientState == Binding.UnityTLSClientState_Handshake
		//     || clientState == Binding.UnityTLSClientState_Init)
		uint32_t L_24 = V_3;
		if ((((int32_t)L_24) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		uint32_t L_25 = V_3;
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_00c0;
		}
	}

IL_0061:
	{
		// bool shouldRunAgain = false;
		V_6 = (bool)0;
	}

IL_0064:
	{
		// handshakeResult = UpdateSecureHandshakeState(protocolData, ref endpoint);
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_26 = V_0;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_27 = ___1_endpoint;
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		uint32_t L_28;
		L_28 = SecureNetworkProtocol_UpdateSecureHandshakeState_mA53751EDD6F70C01A3942C8C2F53655DBD8083CE(L_26, L_27, NULL);
		V_4 = L_28;
		// clientState = Binding.unitytls_client_get_state(secureClient.ClientPtr);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_29 = V_1;
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_30 = L_29.___ClientPtr_0;
		uint32_t L_31;
		L_31 = Binding_unitytls_client_get_state_mFA36FD1C48800D3B88D142ED9E1FFFC65F196B0F(L_30, NULL);
		V_3 = L_31;
		// shouldRunAgain = (size != 0 && secureUserData->BytesProcessed == 0 && clientState == Binding.UnityTLSClientState_Handshake);
		int32_t L_32 = ___2_size;
		if (!L_32)
		{
			goto IL_008a;
		}
	}
	{
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_33 = V_2;
		NullCheck(L_33);
		int32_t L_34 = L_33->___BytesProcessed_5;
		if (L_34)
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_35 = V_3;
		G_B7_0 = ((((int32_t)L_35) == ((int32_t)2))? 1 : 0);
		goto IL_008b;
	}

IL_008a:
	{
		G_B7_0 = 0;
	}

IL_008b:
	{
		V_6 = (bool)G_B7_0;
		// while (shouldRunAgain);
		bool L_36 = V_6;
		if (L_36)
		{
			goto IL_0064;
		}
	}
	{
		// var role = Binding.unitytls_client_get_role(secureClient.ClientPtr);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_37 = V_1;
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_38 = L_37.___ClientPtr_0;
		uint32_t L_39;
		L_39 = Binding_unitytls_client_get_role_m1F838334033B29D9251DDD0153303DEE21B6C8EB(L_38, NULL);
		// if (role == Binding.UnityTLSRole_Client && clientState == Binding.UnityTLSClientState_Messaging)
		if ((!(((uint32_t)L_39) == ((uint32_t)2))))
		{
			goto IL_00b3;
		}
	}
	{
		uint32_t L_40 = V_3;
		if ((!(((uint32_t)L_40) == ((uint32_t)3))))
		{
			goto IL_00b3;
		}
	}
	{
		// SendConnectionRequest(
		//     secureClient.ReceiveToken, secureClient, ref endpoint, ref sendInterface, ref queueHandle);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_41 = V_1;
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_42 = L_41.___ReceiveToken_2;
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_43 = V_1;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_44 = ___1_endpoint;
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_45 = ___3_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_46 = ___4_queueHandle;
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		SecureNetworkProtocol_SendConnectionRequest_m720B1352ECC1FE9E22E423DFA9710111BE2496A6(L_42, L_43, L_44, L_45, L_46, NULL);
	}

IL_00b3:
	{
		// command.Type = ProcessPacketCommandType.Drop;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_47 = ___6_command;
		L_47->___Type_0 = 0;
		goto IL_015d;
	}

IL_00c0:
	{
		// else if (clientState == Binding.UnityTLSClientState_Messaging)
		uint32_t L_48 = V_3;
		if ((!(((uint32_t)L_48) == ((uint32_t)3))))
		{
			goto IL_015d;
		}
	}
	{
		// var buffer = new NativeArray<byte>(NetworkParameterConstants.MTU, Allocator.Temp);
		NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F((&V_7), ((int32_t)1400), 2, 1, NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		// var bytesRead = new UIntPtr();
		il2cpp_codegen_initobj((&V_8), sizeof(uintptr_t));
		// var result = Binding.unitytls_client_read_data(secureClient.ClientPtr,
		//     (byte*)buffer.GetUnsafePtr(), new UIntPtr(NetworkParameterConstants.MTU),
		//     &bytesRead);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_49 = V_1;
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_50 = L_49.___ClientPtr_0;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_51 = V_7;
		void* L_52;
		L_52 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_51, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		uintptr_t L_53;
		memset((&L_53), 0, sizeof(L_53));
		UIntPtr__ctor_m5915109E3F198CA16FDFA9CF438FAAEBFB90DE27((&L_53), ((int32_t)1400), /*hidden argument*/NULL);
		uint32_t L_54;
		L_54 = Binding_unitytls_client_read_data_mF232A9B9C2DB17E25ACB540144CB2C4CD3D67C2F(L_50, (uint8_t*)L_52, L_53, (uintptr_t*)((uintptr_t)(&V_8)), NULL);
		// if (result != Binding.UNITYTLS_SUCCESS)
		if (!L_54)
		{
			goto IL_0107;
		}
	}
	{
		// command.Type = ProcessPacketCommandType.Drop;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_55 = ___6_command;
		L_55->___Type_0 = 0;
		// return;
		return;
	}

IL_0107:
	{
		// UnsafeUtility.MemCpy((void*)stream, buffer.GetUnsafePtr(), bytesRead.ToUInt32());
		intptr_t L_56 = ___0_stream;
		void* L_57;
		L_57 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_56, NULL);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_58 = V_7;
		void* L_59;
		L_59 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_58, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		uint32_t L_60;
		L_60 = UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965((&V_8), NULL);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_57, L_59, ((int64_t)(uint64_t)L_60), NULL);
		// UnityTransportProtocol.ProcessReceive(stream,
		//     ref endpoint,
		//     (int)bytesRead.ToUInt32(),
		//     ref sendInterface,
		//     ref queueHandle,
		//     IntPtr.Zero,
		//     ref command);
		intptr_t L_61 = ___0_stream;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_62 = ___1_endpoint;
		uint32_t L_63;
		L_63 = UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965((&V_8), NULL);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_64 = ___3_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_65 = ___4_queueHandle;
		intptr_t L_66 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_67 = ___6_command;
		UnityTransportProtocol_ProcessReceive_m5157A3D3CAE03473F57E45490FEA106A4828281E(L_61, L_62, L_63, L_64, L_65, L_66, L_67, NULL);
		// if (command.Type == ProcessPacketCommandType.Disconnect)
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_68 = ___6_command;
		uint8_t L_69 = L_68->___Type_0;
		if ((!(((uint32_t)L_69) == ((uint32_t)6))))
		{
			goto IL_015d;
		}
	}
	{
		// DisposeSecureClient(ref secureClient);
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		SecureNetworkProtocol_DisposeSecureClient_mB349E3980ACCB847640BCE87AA1319627170B17D((&V_1), NULL);
		// protocolData->SecureClients.Remove(endpoint);
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_70 = V_0;
		NullCheck(L_70);
		UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* L_71 = (&L_70->___SecureClients_0);
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_72 = ___1_endpoint;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 L_73 = (*(NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686*)L_72);
		bool L_74;
		L_74 = UnsafeHashMap_2_Remove_m94BE3198B3A3508CB109FAC4EE568ED86407F71B(L_71, L_73, UnsafeHashMap_2_Remove_m94BE3198B3A3508CB109FAC4EE568ED86407F71B_RuntimeMethod_var);
		// return;
		return;
	}

IL_015d:
	{
		// clientState = Binding.unitytls_client_get_state(secureClient.ClientPtr);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_75 = V_1;
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_76 = L_75.___ClientPtr_0;
		uint32_t L_77;
		L_77 = Binding_unitytls_client_get_state_mFA36FD1C48800D3B88D142ED9E1FFFC65F196B0F(L_76, NULL);
		V_3 = L_77;
		// if (clientState == Binding.UnityTLSClientState_Fail)
		uint32_t L_78 = V_3;
		if ((!(((uint32_t)L_78) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_019f;
		}
	}
	{
		// if (handshakeResult == Binding.UNITYTLS_SSL_HANDSHAKE_SERVER_FINISHED)
		uint32_t L_79 = V_4;
		if ((!(((uint32_t)L_79) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_017e;
		}
	}
	{
		// UnityEngine.Debug.LogError("Secure handshake failure (likely caused by certificate validation failure).");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral841CC2C16CF6FF25C799C414002A52BD5E0E4A21, NULL);
	}

IL_017e:
	{
		// command.Type = ProcessPacketCommandType.Drop;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_80 = ___6_command;
		L_80->___Type_0 = 0;
		// DisposeSecureClient(ref secureClient);
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		SecureNetworkProtocol_DisposeSecureClient_mB349E3980ACCB847640BCE87AA1319627170B17D((&V_1), NULL);
		// protocolData->SecureClients.Remove(endpoint);
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_81 = V_0;
		NullCheck(L_81);
		UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* L_82 = (&L_81->___SecureClients_0);
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_83 = ___1_endpoint;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 L_84 = (*(NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686*)L_83);
		bool L_85;
		L_85 = UnsafeHashMap_2_Remove_m94BE3198B3A3508CB109FAC4EE568ED86407F71B(L_82, L_84, UnsafeHashMap_2_Remove_m94BE3198B3A3508CB109FAC4EE568ED86407F71B_RuntimeMethod_var);
	}

IL_019f:
	{
		// }
		return;
	}
}
// System.Int32 Unity.Networking.Transport.TLS.SecureNetworkProtocol::ProcessSend(Unity.Networking.Transport.NetworkDriver/Connection&,System.Boolean,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkInterfaceSendHandle&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SecureNetworkProtocol_ProcessSend_m953E726B286E1FF9FB1836FB4897A8357A558987 (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, bool ___1_hasPipeline, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___2_sendInterface, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___3_sendHandle, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, intptr_t ___5_userData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5111D0655228607DFF1C4E449A4247662E2413);
		s_Il2CppMethodInitialized = true;
	}
	SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* V_0 = NULL;
	SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* V_1 = NULL;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint32_t V_3 = 0;
	SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var protocolData = (SecureNetworkProtocolData*)userData;
		intptr_t L_0 = ___5_userData;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582*)L_1;
		// CreateNewSecureClientState(ref connection.Address, Binding.UnityTLSRole_Server, protocolData);
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_2 = ___0_connection;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_3 = (&L_2->___Address_0);
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_4 = V_0;
		il2cpp_codegen_initobj((&V_4), sizeof(SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672));
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_5 = V_4;
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = SecureNetworkProtocol_CreateNewSecureClientState_mAA5DDF2BA684C99D2BC6C5DA03B3DB14DBDF726B(L_3, 1, L_4, L_5, NULL);
		// var secureClient = protocolData->SecureClients[connection.Address];
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_7 = V_0;
		NullCheck(L_7);
		UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* L_8 = (&L_7->___SecureClients_0);
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_9 = ___0_connection;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 L_10 = L_9->___Address_0;
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_11;
		L_11 = UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC(L_8, L_10, UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC_RuntimeMethod_var);
		// var secureUserData = (SecureUserData*)secureClient.ClientConfig->transportUserData;
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_12 = L_11;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_13 = L_12.___ClientConfig_1;
		NullCheck(L_13);
		intptr_t L_14 = L_13->___transportUserData_11;
		void* L_15;
		L_15 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_14, NULL);
		V_1 = (SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B*)L_15;
		// SetSecureUserData(IntPtr.Zero, 0, ref connection.Address, ref sendInterface, ref queueHandle, secureUserData);
		intptr_t L_16 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_17 = ___0_connection;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_18 = (&L_17->___Address_0);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_19 = ___2_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_20 = ___4_queueHandle;
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_21 = V_1;
		SecureNetworkProtocol_SetSecureUserData_m26108E90B1F178D279794549BC3435FE957E3542(L_16, 0, L_18, L_19, L_20, L_21, NULL);
		// UnityTransportProtocol.WriteSendMessageHeader(ref connection, hasPipeline, ref sendHandle, 0);
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_22 = ___0_connection;
		bool L_23 = ___1_hasPipeline;
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* L_24 = ___3_sendHandle;
		int32_t L_25;
		L_25 = UnityTransportProtocol_WriteSendMessageHeader_m17ABE04555AF690ECA01FB36C9F35BAA59299C97(L_22, L_23, L_24, 0, NULL);
		// var buffer = new NativeArray<byte>(sendHandle.size, Allocator.Temp);
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* L_26 = ___3_sendHandle;
		int32_t L_27 = L_26->___size_2;
		NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F((&V_2), L_27, 2, 1, NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		// UnsafeUtility.MemCpy(buffer.GetUnsafePtr(), (void*)sendHandle.data, sendHandle.size);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_28 = V_2;
		void* L_29;
		L_29 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_28, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* L_30 = ___3_sendHandle;
		intptr_t L_31 = L_30->___data_0;
		void* L_32;
		L_32 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_31, NULL);
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* L_33 = ___3_sendHandle;
		int32_t L_34 = L_33->___size_2;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_29, L_32, ((int64_t)L_34), NULL);
		// sendInterface.AbortSendMessage.Ptr.Invoke(ref sendHandle, sendInterface.UserData);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_35 = ___2_sendInterface;
		TransportFunctionPointer_1_t6BF0E9809FEF820449ED4B566281FFDB8B1F6807* L_36 = (&L_35->___AbortSendMessage_2);
		FunctionPointer_1_t605FCD8E1E05F041A75BCDAE5CE44D9A201BFAA1* L_37 = (&L_36->___Ptr_0);
		AbortSendMessageDelegate_t6FBF6C859A8E442AC6D2CC1FEF00CD4D9815FB0D* L_38;
		L_38 = FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904(L_37, FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904_RuntimeMethod_var);
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* L_39 = ___3_sendHandle;
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_40 = ___2_sendInterface;
		intptr_t L_41 = L_40->___UserData_3;
		NullCheck(L_38);
		AbortSendMessageDelegate_Invoke_m60B3BB8663C28583542B560731BE31828023A7CD_inline(L_38, L_39, L_41, NULL);
		// var result = Binding.unitytls_client_send_data(secureClient.ClientPtr, (byte*)buffer.GetUnsafePtr(), new UIntPtr((uint)buffer.Length));
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_42 = L_12.___ClientPtr_0;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_43 = V_2;
		void* L_44;
		L_44 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_43, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		int32_t L_45;
		L_45 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_2))->___m_Length_1);
		uintptr_t L_46;
		memset((&L_46), 0, sizeof(L_46));
		UIntPtr__ctor_m5915109E3F198CA16FDFA9CF438FAAEBFB90DE27((&L_46), L_45, /*hidden argument*/NULL);
		uint32_t L_47;
		L_47 = Binding_unitytls_client_send_data_m5086C52FA8F5F51D6A764CDF277FFFBCBA6D1928(L_42, (uint8_t*)L_44, L_46, NULL);
		V_3 = L_47;
		// if (result != Binding.UNITYTLS_SUCCESS)
		uint32_t L_48 = V_3;
		if (!L_48)
		{
			goto IL_00e1;
		}
	}
	{
		// Debug.LogError($"Secure Send failed with result {result}");
		uint32_t L_49 = V_3;
		uint32_t L_50 = L_49;
		RuntimeObject* L_51 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_50);
		String_t* L_52;
		L_52 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral7D5111D0655228607DFF1C4E449A4247662E2413, L_51, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_52, NULL);
		// return (int)Error.StatusCode.NetworkStateMismatch;
		return ((int32_t)-3);
	}

IL_00e1:
	{
		// return buffer.Length;
		int32_t L_53;
		L_53 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_2))->___m_Length_1);
		return L_53;
	}
}
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::ProcessSendConnectionAccept(Unity.Networking.Transport.NetworkDriver/Connection&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_ProcessSendConnectionAccept_m6E2E06B210D208CE575A32F53B49199A9ED0EEB5 (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral306123149FDB6460DB923B080E134FA6CDCF748B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5111D0655228607DFF1C4E449A4247662E2413);
		s_Il2CppMethodInitialized = true;
	}
	SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* V_0 = NULL;
	SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_2;
	memset((&V_2), 0, sizeof(V_2));
	SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* V_3 = NULL;
	uint32_t V_4 = 0;
	{
		// var protocolData = (SecureNetworkProtocolData*)userData;
		intptr_t L_0 = ___3_userData;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582*)L_1;
		// var secureClient = protocolData->SecureClients[connection.Address];
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_2 = V_0;
		NullCheck(L_2);
		UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* L_3 = (&L_2->___SecureClients_0);
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_4 = ___0_connection;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 L_5 = L_4->___Address_0;
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_6;
		L_6 = UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC(L_3, L_5, UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC_RuntimeMethod_var);
		V_1 = L_6;
		// var packet = new NativeArray<byte>(UdpCHeader.Length + SessionIdToken.k_Length, Allocator.Temp);
		NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F((&V_2), ((int32_t)18), 2, 1, NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		// var size = WriteConnectionAcceptMessage(ref connection, (byte*)packet.GetUnsafePtr(), packet.Length);
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_7 = ___0_connection;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_8 = V_2;
		void* L_9;
		L_9 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_8, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		int32_t L_10;
		L_10 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_2))->___m_Length_1);
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = SecureNetworkProtocol_WriteConnectionAcceptMessage_m53C6A68F7408FB7B2047CAD491247A7FCCD7D8D7(L_7, (uint8_t*)L_9, L_10, NULL);
		// if (size < 0)
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		// UnityEngine.Debug.LogError("Failed to send a ConnectionAccept packet");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral306123149FDB6460DB923B080E134FA6CDCF748B, NULL);
		// return;
		return;
	}

IL_0045:
	{
		// var secureUserData = (SecureUserData*)secureClient.ClientConfig->transportUserData;
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_12 = V_1;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_13 = L_12.___ClientConfig_1;
		NullCheck(L_13);
		intptr_t L_14 = L_13->___transportUserData_11;
		void* L_15;
		L_15 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_14, NULL);
		V_3 = (SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B*)L_15;
		// SetSecureUserData(IntPtr.Zero, 0, ref connection.Address, ref sendInterface, ref queueHandle, secureUserData);
		intptr_t L_16 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_17 = ___0_connection;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_18 = (&L_17->___Address_0);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_19 = ___1_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_20 = ___2_queueHandle;
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_21 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		SecureNetworkProtocol_SetSecureUserData_m26108E90B1F178D279794549BC3435FE957E3542(L_16, 0, L_18, L_19, L_20, L_21, NULL);
		// var result = Binding.unitytls_client_send_data(secureClient.ClientPtr, (byte*)packet.GetUnsafePtr(), new UIntPtr((uint)packet.Length));
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_22 = V_1;
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_23 = L_22.___ClientPtr_0;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_24 = V_2;
		void* L_25;
		L_25 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_24, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		int32_t L_26;
		L_26 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_2))->___m_Length_1);
		uintptr_t L_27;
		memset((&L_27), 0, sizeof(L_27));
		UIntPtr__ctor_m5915109E3F198CA16FDFA9CF438FAAEBFB90DE27((&L_27), L_26, /*hidden argument*/NULL);
		uint32_t L_28;
		L_28 = Binding_unitytls_client_send_data_m5086C52FA8F5F51D6A764CDF277FFFBCBA6D1928(L_23, (uint8_t*)L_25, L_27, NULL);
		V_4 = L_28;
		// if (result != Binding.UNITYTLS_SUCCESS)
		uint32_t L_29 = V_4;
		if (!L_29)
		{
			goto IL_00a3;
		}
	}
	{
		// Debug.LogError($"Secure Send failed with result {result}");
		uint32_t L_30 = V_4;
		uint32_t L_31 = L_30;
		RuntimeObject* L_32 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_31);
		String_t* L_33;
		L_33 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral7D5111D0655228607DFF1C4E449A4247662E2413, L_32, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_33, NULL);
	}

IL_00a3:
	{
		// }
		return;
	}
}
// System.Int32 Unity.Networking.Transport.TLS.SecureNetworkProtocol::WriteConnectionAcceptMessage(Unity.Networking.Transport.NetworkDriver/Connection&,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SecureNetworkProtocol_WriteConnectionAcceptMessage_m53C6A68F7408FB7B2047CAD491247A7FCCD7D8D7 (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, uint8_t* ___1_packet, int32_t ___2_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848CFA7A063E623491A0FA427C59208BA699C520);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UdpCHeader_t603CBEC64367B86F59E725571C597885519A613B* V_1 = NULL;
	{
		// var size = UdpCHeader.Length;
		V_0 = ((int32_t)10);
		// if (connection.DidReceiveData == 0)
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_0 = ___0_connection;
		uint8_t L_1 = L_0->___DidReceiveData_9;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// size += SessionIdToken.k_Length;
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 8));
	}

IL_000f:
	{
		// if (size > capacity)
		int32_t L_3 = V_0;
		int32_t L_4 = ___2_capacity;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_001f;
		}
	}
	{
		// UnityEngine.Debug.LogError("Failed to create a ConnectionAccept packet: size exceeds capacity");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral848CFA7A063E623491A0FA427C59208BA699C520, NULL);
		// return -1;
		return (-1);
	}

IL_001f:
	{
		// var header = (UdpCHeader*)packet;
		uint8_t* L_5 = ___1_packet;
		V_1 = (UdpCHeader_t603CBEC64367B86F59E725571C597885519A613B*)L_5;
		// header->Type = (byte)UdpCProtocol.ConnectionAccept;
		UdpCHeader_t603CBEC64367B86F59E725571C597885519A613B* L_6 = V_1;
		NullCheck(L_6);
		L_6->___Type_0 = (uint8_t)2;
		// header->SessionToken = connection.SendToken;
		UdpCHeader_t603CBEC64367B86F59E725571C597885519A613B* L_7 = V_1;
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_8 = ___0_connection;
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_9 = L_8->___SendToken_8;
		NullCheck(L_7);
		L_7->___SessionToken_2 = L_9;
		// header->Flags = 0;
		UdpCHeader_t603CBEC64367B86F59E725571C597885519A613B* L_10 = V_1;
		NullCheck(L_10);
		L_10->___Flags_1 = 0;
		// if (connection.DidReceiveData == 0)
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_11 = ___0_connection;
		uint8_t L_12 = L_11->___DidReceiveData_9;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		// header->Flags |= UdpCHeader.HeaderFlags.HasConnectToken;
		UdpCHeader_t603CBEC64367B86F59E725571C597885519A613B* L_13 = V_1;
		NullCheck(L_13);
		uint8_t* L_14 = (&L_13->___Flags_1);
		uint8_t* L_15 = L_14;
		int32_t L_16 = *((uint8_t*)L_15);
		*((int8_t*)L_15) = (int8_t)((int32_t)(L_16|1));
		// *(SessionIdToken*)(packet + UdpCHeader.Length) = connection.ReceiveToken;
		uint8_t* L_17 = ___1_packet;
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_18 = ___0_connection;
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_19 = L_18->___ReceiveToken_7;
		*(SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((int32_t)10))) = L_19;
	}

IL_005d:
	{
		// return size;
		int32_t L_20 = V_0;
		return L_20;
	}
}
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::SendConnectionRequest(Unity.Networking.Transport.SessionIdToken,Unity.Networking.Transport.TLS.SecureClientState,Unity.Networking.Transport.NetworkInterfaceEndPoint&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_SendConnectionRequest_m720B1352ECC1FE9E22E423DFA9710111BE2496A6 (SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 ___0_token, SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 ___1_secureClient, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___2_address, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___3_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90B3881B9F20E8C67A696C54DDC45E0822E68FFB);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	UdpCHeader_t603CBEC64367B86F59E725571C597885519A613B* V_1 = NULL;
	SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* V_2 = NULL;
	{
		// var packet = new NativeArray<byte>(UdpCHeader.Length, Allocator.Temp);
		NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F((&V_0), ((int32_t)10), 2, 1, NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		// var header = (UdpCHeader*)packet.GetUnsafePtr();
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_0 = V_0;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_0, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		V_1 = (UdpCHeader_t603CBEC64367B86F59E725571C597885519A613B*)L_1;
		// header->Type = (byte)UdpCProtocol.ConnectionRequest;
		UdpCHeader_t603CBEC64367B86F59E725571C597885519A613B* L_2 = V_1;
		NullCheck(L_2);
		L_2->___Type_0 = (uint8_t)0;
		// header->SessionToken = token;
		UdpCHeader_t603CBEC64367B86F59E725571C597885519A613B* L_3 = V_1;
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_4 = ___0_token;
		NullCheck(L_3);
		L_3->___SessionToken_2 = L_4;
		// header->Flags = 0;
		UdpCHeader_t603CBEC64367B86F59E725571C597885519A613B* L_5 = V_1;
		NullCheck(L_5);
		L_5->___Flags_1 = 0;
		// var secureUserData = (SecureUserData*)secureClient.ClientConfig->transportUserData;
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_6 = ___1_secureClient;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_7 = L_6.___ClientConfig_1;
		NullCheck(L_7);
		intptr_t L_8 = L_7->___transportUserData_11;
		void* L_9;
		L_9 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_8, NULL);
		V_2 = (SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B*)L_9;
		// SetSecureUserData(IntPtr.Zero, 0, ref address, ref sendInterface, ref queueHandle, secureUserData);
		intptr_t L_10 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_11 = ___2_address;
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_12 = ___3_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_13 = ___4_queueHandle;
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_14 = V_2;
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		SecureNetworkProtocol_SetSecureUserData_m26108E90B1F178D279794549BC3435FE957E3542(L_10, 0, L_11, L_12, L_13, L_14, NULL);
		// var result = Binding.unitytls_client_send_data(secureClient.ClientPtr,
		//     (byte*)packet.GetUnsafePtr(), new UIntPtr((uint)packet.Length));
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_15 = ___1_secureClient;
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_16 = L_15.___ClientPtr_0;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_17 = V_0;
		void* L_18;
		L_18 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_17, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		int32_t L_19;
		L_19 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_0))->___m_Length_1);
		uintptr_t L_20;
		memset((&L_20), 0, sizeof(L_20));
		UIntPtr__ctor_m5915109E3F198CA16FDFA9CF438FAAEBFB90DE27((&L_20), L_19, /*hidden argument*/NULL);
		uint32_t L_21;
		L_21 = Binding_unitytls_client_send_data_m5086C52FA8F5F51D6A764CDF277FFFBCBA6D1928(L_16, (uint8_t*)L_18, L_20, NULL);
		// if (result != Binding.UNITYTLS_SUCCESS)
		if (!L_21)
		{
			goto IL_0071;
		}
	}
	{
		// Debug.LogError("We have failed to Send Encrypted SendConnectionRequest");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral90B3881B9F20E8C67A696C54DDC45E0822E68FFB, NULL);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.UInt32 Unity.Networking.Transport.TLS.SecureNetworkProtocol::SendHeaderOnlyMessage(Unity.Networking.Transport.Protocols.UdpCProtocol,Unity.Networking.Transport.SessionIdToken,Unity.Networking.Transport.TLS.SecureClientState,Unity.Networking.Transport.NetworkDriver/Connection&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SecureNetworkProtocol_SendHeaderOnlyMessage_m865EC5185367FA14E35E45B8FC642616A6CD3314 (int32_t ___0_type, SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 ___1_token, SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 ___2_secureClient, Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___3_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___4_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___5_queueHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	UdpCHeader_t603CBEC64367B86F59E725571C597885519A613B* V_1 = NULL;
	SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* V_2 = NULL;
	{
		// var packet = new NativeArray<byte>(UdpCHeader.Length, Allocator.Temp);
		NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F((&V_0), ((int32_t)10), 2, 1, NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		// var header = (UdpCHeader*)packet.GetUnsafePtr();
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_0 = V_0;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_0, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		V_1 = (UdpCHeader_t603CBEC64367B86F59E725571C597885519A613B*)L_1;
		// header->Type = (byte)type;
		UdpCHeader_t603CBEC64367B86F59E725571C597885519A613B* L_2 = V_1;
		int32_t L_3 = ___0_type;
		NullCheck(L_2);
		L_2->___Type_0 = (uint8_t)((int32_t)(uint8_t)L_3);
		// header->SessionToken = token;
		UdpCHeader_t603CBEC64367B86F59E725571C597885519A613B* L_4 = V_1;
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_5 = ___1_token;
		NullCheck(L_4);
		L_4->___SessionToken_2 = L_5;
		// header->Flags = 0;
		UdpCHeader_t603CBEC64367B86F59E725571C597885519A613B* L_6 = V_1;
		NullCheck(L_6);
		L_6->___Flags_1 = 0;
		// var secureUserData = (SecureUserData*)secureClient.ClientConfig->transportUserData;
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_7 = ___2_secureClient;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_8 = L_7.___ClientConfig_1;
		NullCheck(L_8);
		intptr_t L_9 = L_8->___transportUserData_11;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		V_2 = (SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B*)L_10;
		// SetSecureUserData(IntPtr.Zero, 0, ref connection.Address, ref sendInterface, ref queueHandle, secureUserData);
		intptr_t L_11 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_12 = ___3_connection;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_13 = (&L_12->___Address_0);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_14 = ___4_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_15 = ___5_queueHandle;
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_16 = V_2;
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		SecureNetworkProtocol_SetSecureUserData_m26108E90B1F178D279794549BC3435FE957E3542(L_11, 0, L_13, L_14, L_15, L_16, NULL);
		// return Binding.unitytls_client_send_data(secureClient.ClientPtr, (byte*)packet.GetUnsafePtr(), new UIntPtr((uint)packet.Length));
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_17 = ___2_secureClient;
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_18 = L_17.___ClientPtr_0;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_19 = V_0;
		void* L_20;
		L_20 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_19, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		int32_t L_21;
		L_21 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_0))->___m_Length_1);
		uintptr_t L_22;
		memset((&L_22), 0, sizeof(L_22));
		UIntPtr__ctor_m5915109E3F198CA16FDFA9CF438FAAEBFB90DE27((&L_22), L_21, /*hidden argument*/NULL);
		uint32_t L_23;
		L_23 = Binding_unitytls_client_send_data_m5086C52FA8F5F51D6A764CDF277FFFBCBA6D1928(L_18, (uint8_t*)L_20, L_22, NULL);
		return L_23;
	}
}
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::Connect(Unity.Networking.Transport.NetworkDriver/Connection&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_Connect_mAE3ED3A9FBA3023E1E50467AD4BF826ED89ADFFB (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeHashMap_2_Remove_m94BE3198B3A3508CB109FAC4EE568ED86407F71B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8E686843F0158137A6BFD075088F9131ECF5115);
		s_Il2CppMethodInitialized = true;
	}
	SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* V_0 = NULL;
	SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* V_2 = NULL;
	uint32_t V_3 = 0;
	{
		// var protocolData = (SecureNetworkProtocolData*)userData;
		intptr_t L_0 = ___3_userData;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582*)L_1;
		// CreateNewSecureClientState(
		//     ref connection.Address, Binding.UnityTLSRole_Client, protocolData, connection.ReceiveToken);
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_2 = ___0_connection;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_3 = (&L_2->___Address_0);
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_4 = V_0;
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_5 = ___0_connection;
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_6 = L_5->___ReceiveToken_7;
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = SecureNetworkProtocol_CreateNewSecureClientState_mAA5DDF2BA684C99D2BC6C5DA03B3DB14DBDF726B(L_3, 2, L_4, L_6, NULL);
		// var secureClient = protocolData->SecureClients[connection.Address];
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_8 = V_0;
		NullCheck(L_8);
		UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* L_9 = (&L_8->___SecureClients_0);
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_10 = ___0_connection;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 L_11 = L_10->___Address_0;
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_12;
		L_12 = UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC(L_9, L_11, UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC_RuntimeMethod_var);
		V_1 = L_12;
		// var secureUserData = (SecureUserData*)secureClient.ClientConfig->transportUserData;
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_13 = V_1;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_14 = L_13.___ClientConfig_1;
		NullCheck(L_14);
		intptr_t L_15 = L_14->___transportUserData_11;
		void* L_16;
		L_16 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_15, NULL);
		V_2 = (SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B*)L_16;
		// SetSecureUserData(IntPtr.Zero, 0, ref connection.Address, ref sendInterface, ref queueHandle, secureUserData);
		intptr_t L_17 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_18 = ___0_connection;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_19 = (&L_18->___Address_0);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_20 = ___1_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_21 = ___2_queueHandle;
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_22 = V_2;
		SecureNetworkProtocol_SetSecureUserData_m26108E90B1F178D279794549BC3435FE957E3542(L_17, 0, L_19, L_20, L_21, L_22, NULL);
		// var currentState = Binding.unitytls_client_get_state(secureClient.ClientPtr);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_23 = V_1;
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_24 = L_23.___ClientPtr_0;
		uint32_t L_25;
		L_25 = Binding_unitytls_client_get_state_mFA36FD1C48800D3B88D142ED9E1FFFC65F196B0F(L_24, NULL);
		// if (currentState == Binding.UnityTLSClientState_Messaging)
		if ((!(((uint32_t)L_25) == ((uint32_t)3))))
		{
			goto IL_0075;
		}
	}
	{
		// SendConnectionRequest(
		//     connection.ReceiveToken, secureClient, ref connection.Address, ref sendInterface, ref queueHandle);
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_26 = ___0_connection;
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_27 = L_26->___ReceiveToken_7;
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_28 = V_1;
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_29 = ___0_connection;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_30 = (&L_29->___Address_0);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_31 = ___1_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_32 = ___2_queueHandle;
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		SecureNetworkProtocol_SendConnectionRequest_m720B1352ECC1FE9E22E423DFA9710111BE2496A6(L_27, L_28, L_30, L_31, L_32, NULL);
		// return;
		return;
	}

IL_0075:
	{
		// var handshakeResult = UpdateSecureHandshakeState(protocolData, ref connection.Address);
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_33 = V_0;
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_34 = ___0_connection;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_35 = (&L_34->___Address_0);
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		uint32_t L_36;
		L_36 = SecureNetworkProtocol_UpdateSecureHandshakeState_mA53751EDD6F70C01A3942C8C2F53655DBD8083CE(L_33, L_35, NULL);
		V_3 = L_36;
		// currentState = Binding.unitytls_client_get_state(secureClient.ClientPtr);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_37 = V_1;
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_38 = L_37.___ClientPtr_0;
		uint32_t L_39;
		L_39 = Binding_unitytls_client_get_state_mFA36FD1C48800D3B88D142ED9E1FFFC65F196B0F(L_38, NULL);
		// if (currentState == Binding.UnityTLSClientState_Fail)
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_00bf;
		}
	}
	{
		// Debug.LogError($"Handshake failed with result {handshakeResult}");
		uint32_t L_40 = V_3;
		uint32_t L_41 = L_40;
		RuntimeObject* L_42 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_41);
		String_t* L_43;
		L_43 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralA8E686843F0158137A6BFD075088F9131ECF5115, L_42, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_43, NULL);
		// DisposeSecureClient(ref secureClient);
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		SecureNetworkProtocol_DisposeSecureClient_mB349E3980ACCB847640BCE87AA1319627170B17D((&V_1), NULL);
		// protocolData->SecureClients.Remove(connection.Address);
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_44 = V_0;
		NullCheck(L_44);
		UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* L_45 = (&L_44->___SecureClients_0);
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_46 = ___0_connection;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 L_47 = L_46->___Address_0;
		bool L_48;
		L_48 = UnsafeHashMap_2_Remove_m94BE3198B3A3508CB109FAC4EE568ED86407F71B(L_45, L_47, UnsafeHashMap_2_Remove_m94BE3198B3A3508CB109FAC4EE568ED86407F71B_RuntimeMethod_var);
	}

IL_00bf:
	{
		// }
		return;
	}
}
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::Disconnect(Unity.Networking.Transport.NetworkDriver/Connection&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_Disconnect_m73A4699BBAFB93E2FEF31C3F4F6F406E19C66B53 (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeHashMap_2_Remove_m94BE3198B3A3508CB109FAC4EE568ED86407F71B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F5D2FDC76F491140BD2B8AB6F57479EC23D81DF);
		s_Il2CppMethodInitialized = true;
	}
	SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* V_0 = NULL;
	SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint32_t V_3 = 0;
	{
		// var protocolData = (SecureNetworkProtocolData*)userData;
		intptr_t L_0 = ___3_userData;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582*)L_1;
		// var secureClient = protocolData->SecureClients[connection.Address];
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_2 = V_0;
		NullCheck(L_2);
		UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* L_3 = (&L_2->___SecureClients_0);
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_4 = ___0_connection;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 L_5 = L_4->___Address_0;
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_6;
		L_6 = UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC(L_3, L_5, UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC_RuntimeMethod_var);
		V_1 = L_6;
		// if (connection.State == NetworkConnection.State.Connected)
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_7 = ___0_connection;
		int32_t L_8 = L_7->___State_6;
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_004d;
		}
	}
	{
		// var type = UdpCProtocol.Disconnect;
		// var token = connection.SendToken;
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_9 = ___0_connection;
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_10 = L_9->___SendToken_8;
		V_2 = L_10;
		// var res = SendHeaderOnlyMessage(type, token, secureClient, ref connection, ref sendInterface, ref queueHandle);
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_11 = V_2;
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_12 = V_1;
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_13 = ___0_connection;
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_14 = ___1_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_15 = ___2_queueHandle;
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		uint32_t L_16;
		L_16 = SecureNetworkProtocol_SendHeaderOnlyMessage_m865EC5185367FA14E35E45B8FC642616A6CD3314(3, L_11, L_12, L_13, L_14, L_15, NULL);
		V_3 = L_16;
		// if (res != Binding.UNITYTLS_SUCCESS)
		uint32_t L_17 = V_3;
		if (!L_17)
		{
			goto IL_004d;
		}
	}
	{
		// Debug.LogError($"Failed to send secure Disconnect message (result: {res})");
		uint32_t L_18 = V_3;
		uint32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21;
		L_21 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral0F5D2FDC76F491140BD2B8AB6F57479EC23D81DF, L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_21, NULL);
	}

IL_004d:
	{
		// DisposeSecureClient(ref secureClient);
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		SecureNetworkProtocol_DisposeSecureClient_mB349E3980ACCB847640BCE87AA1319627170B17D((&V_1), NULL);
		// protocolData->SecureClients.Remove(connection.Address);
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_22 = V_0;
		NullCheck(L_22);
		UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* L_23 = (&L_22->___SecureClients_0);
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_24 = ___0_connection;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 L_25 = L_24->___Address_0;
		bool L_26;
		L_26 = UnsafeHashMap_2_Remove_m94BE3198B3A3508CB109FAC4EE568ED86407F71B(L_23, L_25, UnsafeHashMap_2_Remove_m94BE3198B3A3508CB109FAC4EE568ED86407F71B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::ProcessSendPing(Unity.Networking.Transport.NetworkDriver/Connection&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_ProcessSendPing_m2CD7DA3B44CD99AB7E16C101FB83912649196F18 (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1298C5028F2B72FF3A9903D9F47C44DDE92AF98);
		s_Il2CppMethodInitialized = true;
	}
	SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* V_0 = NULL;
	SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint32_t V_3 = 0;
	{
		// var protocolData = (SecureNetworkProtocolData*)userData;
		intptr_t L_0 = ___3_userData;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582*)L_1;
		// var secureClient = protocolData->SecureClients[connection.Address];
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_2 = V_0;
		NullCheck(L_2);
		UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* L_3 = (&L_2->___SecureClients_0);
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_4 = ___0_connection;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 L_5 = L_4->___Address_0;
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_6;
		L_6 = UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC(L_3, L_5, UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC_RuntimeMethod_var);
		V_1 = L_6;
		// var type = UdpCProtocol.Ping;
		// var token = connection.SendToken;
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_7 = ___0_connection;
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_8 = L_7->___SendToken_8;
		V_2 = L_8;
		// var res = SendHeaderOnlyMessage(type, token, secureClient, ref connection, ref sendInterface, ref queueHandle);
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_9 = V_2;
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_10 = V_1;
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_11 = ___0_connection;
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_12 = ___1_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_13 = ___2_queueHandle;
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		uint32_t L_14;
		L_14 = SecureNetworkProtocol_SendHeaderOnlyMessage_m865EC5185367FA14E35E45B8FC642616A6CD3314(5, L_9, L_10, L_11, L_12, L_13, NULL);
		V_3 = L_14;
		// if (res != Binding.UNITYTLS_SUCCESS)
		uint32_t L_15 = V_3;
		if (!L_15)
		{
			goto IL_0044;
		}
	}
	{
		// Debug.LogError($"Failed to send secure Ping message (result: {res})");
		uint32_t L_16 = V_3;
		uint32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_17);
		String_t* L_19;
		L_19 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralF1298C5028F2B72FF3A9903D9F47C44DDE92AF98, L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_19, NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::ProcessSendPong(Unity.Networking.Transport.NetworkDriver/Connection&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_ProcessSendPong_m8D7736A3DAE23BE23205ECA0E5EFFFB2BA3B1AB7 (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral878C6FEE1AB936EED78BB4E259E7F67B4D8D9E38);
		s_Il2CppMethodInitialized = true;
	}
	SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* V_0 = NULL;
	SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint32_t V_3 = 0;
	{
		// var protocolData = (SecureNetworkProtocolData*)userData;
		intptr_t L_0 = ___3_userData;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582*)L_1;
		// var secureClient = protocolData->SecureClients[connection.Address];
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_2 = V_0;
		NullCheck(L_2);
		UnsafeHashMap_2_t3AFF32975843284D4BDD5FD1254D6BC4EAC54F77* L_3 = (&L_2->___SecureClients_0);
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_4 = ___0_connection;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 L_5 = L_4->___Address_0;
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_6;
		L_6 = UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC(L_3, L_5, UnsafeHashMap_2_get_Item_m82174E674180097766B6E5AF3AF439B95DB1DCAC_RuntimeMethod_var);
		V_1 = L_6;
		// var type = UdpCProtocol.Pong;
		// var token = connection.SendToken;
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_7 = ___0_connection;
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_8 = L_7->___SendToken_8;
		V_2 = L_8;
		// var res = SendHeaderOnlyMessage(type, token, secureClient, ref connection, ref sendInterface, ref queueHandle);
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_9 = V_2;
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 L_10 = V_1;
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_11 = ___0_connection;
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_12 = ___1_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_13 = ___2_queueHandle;
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		uint32_t L_14;
		L_14 = SecureNetworkProtocol_SendHeaderOnlyMessage_m865EC5185367FA14E35E45B8FC642616A6CD3314(6, L_9, L_10, L_11, L_12, L_13, NULL);
		V_3 = L_14;
		// if (res != Binding.UNITYTLS_SUCCESS)
		uint32_t L_15 = V_3;
		if (!L_15)
		{
			goto IL_0044;
		}
	}
	{
		// Debug.LogError($"Failed to send secure Pong message (result: {res})");
		uint32_t L_16 = V_3;
		uint32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_17);
		String_t* L_19;
		L_19 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral878C6FEE1AB936EED78BB4E259E7F67B4D8D9E38, L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_19, NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::Update(System.Int64,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol_Update_m40062B33F2208A000DB3ACE25B599336414CE9A3 (int64_t ___0_updateTime, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* V_0 = NULL;
	{
		// var protocolData = (SecureNetworkProtocolData*)userData;
		intptr_t L_0 = ___3_userData;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582*)L_1;
		// protocolData->LastUpdate = updateTime;
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_2 = V_0;
		int64_t L_3 = ___0_updateTime;
		NullCheck(L_2);
		L_2->___LastUpdate_10 = L_3;
		// if (updateTime - protocolData->LastHalfOpenPrune > protocolData->SSLHandshakeTimeoutMin)
		int64_t L_4 = ___0_updateTime;
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_5 = V_0;
		NullCheck(L_5);
		int64_t L_6 = L_5->___LastHalfOpenPrune_11;
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_7 = V_0;
		NullCheck(L_7);
		uint32_t L_8 = L_7->___SSLHandshakeTimeoutMin_8;
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract(L_4, L_6))) <= ((int64_t)((int64_t)(uint64_t)L_8))))
		{
			goto IL_002c;
		}
	}
	{
		// PruneHalfOpenConnections(protocolData);
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		SecureNetworkProtocol_PruneHalfOpenConnections_m86DADCC8B19C2A5A2065CB1DB70FAF73CC5AC597(L_9, NULL);
		// protocolData->LastHalfOpenPrune = updateTime;
		SecureNetworkProtocolData_tA3C3EB543E45487C8250364955DF2F444C3E4582* L_10 = V_0;
		int64_t L_11 = ___0_updateTime;
		NullCheck(L_10);
		L_10->___LastHalfOpenPrune_11 = L_11;
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Unity.Networking.Transport.TLS.SecureNetworkProtocol::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureNetworkProtocol__cctor_m89FCBD688EED2AF091104E47F82EE7EA7C20D7F9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static readonly SecureNetworkProtocolParameter DefaultParameters = new SecureNetworkProtocolParameter
		// {
		//     Protocol = SecureTransportProtocol.DTLS,
		//     SSLReadTimeoutMs = 0,
		//     SSLHandshakeTimeoutMin = 1000,
		//     SSLHandshakeTimeoutMax = 60000,
		//     ClientAuthenticationPolicy = SecureClientAuthPolicy.Optional
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(SecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97));
		(&V_0)->___Protocol_4 = 1;
		(&V_0)->___SSLReadTimeoutMs_6 = 0;
		(&V_0)->___SSLHandshakeTimeoutMin_8 = ((int32_t)1000);
		(&V_0)->___SSLHandshakeTimeoutMax_7 = ((int32_t)60000);
		(&V_0)->___ClientAuthenticationPolicy_5 = 1;
		SecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97 L_0 = V_0;
		((SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_StaticFields*)il2cpp_codegen_static_fields_for(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var))->___DefaultParameters_1 = L_0;
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
// Unity.Networking.Transport.TLS.SecureNetworkProtocolParameter Unity.Networking.Transport.TLS.SecureParameterExtensions::GetSecureParameters(Unity.Networking.Transport.NetworkSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97 SecureParameterExtensions_GetSecureParameters_mDA8792BF305FD4821DAFF2E9A01582078B58B7EF (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* ___0_settings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkSettings_TryGet_TisSecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97_mB2F1591010C6E88F9124C708EFF49FE9FF190D45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!settings.TryGet<SecureNetworkProtocolParameter>(out var parameters))
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_0 = ___0_settings;
		bool L_1;
		L_1 = NetworkSettings_TryGet_TisSecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97_mB2F1591010C6E88F9124C708EFF49FE9FF190D45(L_0, (&V_0), NetworkSettings_TryGet_TisSecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97_mB2F1591010C6E88F9124C708EFF49FE9FF190D45_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		// throw new System.InvalidOperationException($"Can't extract Secure parameters: {nameof(SecureNetworkProtocolParameter)} must be provided to the {nameof(NetworkSettings)}");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral12BB8CCEC19A0197A665CCAC382500079592FA23)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SecureParameterExtensions_GetSecureParameters_mDA8792BF305FD4821DAFF2E9A01582078B58B7EF_RuntimeMethod_var)));
	}

IL_0015:
	{
		// return parameters;
		SecureNetworkProtocolParameter_tF39E59837ABC91C01156741EB769D49BFAFF5F97 L_3 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Networking.Transport.Relay.RelayMessageBind::Write(Unity.Networking.Transport.DataStreamWriter,System.Byte,System.UInt16,System.Byte*,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayMessageBind_Write_mF2E171A35040AF34C9C02F90C81DD2D807BBE6BC (DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA ___0_writer, uint8_t ___1_acceptMode, uint16_t ___2_nonce, uint8_t* ___3_connectionDataPtr, uint8_t* ___4_hmac, const RuntimeMethod* method) 
{
	RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var header = RelayMessageHeader.Create(RelayMessageType.Bind);
		RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72 L_0;
		L_0 = RelayMessageHeader_Create_mAFABE63AE20CD1AE19E5D90726384E868DF35823(0, NULL);
		V_0 = L_0;
		// writer.WriteBytes((byte*)&header, RelayMessageHeader.Length);
		bool L_1;
		L_1 = DataStreamWriter_WriteBytes_m5A6218CBEEA1204AC2B8822CB09422FCABF42CFD((&___0_writer), (uint8_t*)((uintptr_t)(&V_0)), 4, NULL);
		// writer.WriteByte(acceptMode);
		uint8_t L_2 = ___1_acceptMode;
		bool L_3;
		L_3 = DataStreamWriter_WriteByte_m4590CE6F34784974D396931C455EFB75028760CD((&___0_writer), L_2, NULL);
		// writer.WriteUShort(nonce);
		uint16_t L_4 = ___2_nonce;
		bool L_5;
		L_5 = DataStreamWriter_WriteUShort_mC6EE4378B5C9F0DE233542BBB730F4CB210F7287((&___0_writer), L_4, NULL);
		// writer.WriteByte(k_ConnectionDataLength);
		bool L_6;
		L_6 = DataStreamWriter_WriteByte_m4590CE6F34784974D396931C455EFB75028760CD((&___0_writer), (uint8_t)((int32_t)255), NULL);
		// writer.WriteBytes(connectionDataPtr, k_ConnectionDataLength);
		uint8_t* L_7 = ___3_connectionDataPtr;
		bool L_8;
		L_8 = DataStreamWriter_WriteBytes_m5A6218CBEEA1204AC2B8822CB09422FCABF42CFD((&___0_writer), L_7, ((int32_t)255), NULL);
		// writer.WriteBytes(hmac, k_HMACLength);
		uint8_t* L_9 = ___4_hmac;
		bool L_10;
		L_10 = DataStreamWriter_WriteBytes_m5A6218CBEEA1204AC2B8822CB09422FCABF42CFD((&___0_writer), L_9, ((int32_t)32), NULL);
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
// Unity.Networking.Transport.Relay.RelayMessageConnectRequest Unity.Networking.Transport.Relay.RelayMessageConnectRequest::Create(Unity.Networking.Transport.Relay.RelayAllocationId,Unity.Networking.Transport.Relay.RelayConnectionData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RelayMessageConnectRequest_t35AB449CCDF5E31947A8D6CBC59BD62F8A3BEB3C RelayMessageConnectRequest_Create_mC778E243E6F1C1E5721E9483E6D610A80FDCF431 (RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___0_allocationId, RelayConnectionData_tA5306A14AEB9FA72A119334CBE01CE0B1F7AC18D ___1_toConnectionData, const RuntimeMethod* method) 
{
	RelayMessageConnectRequest_t35AB449CCDF5E31947A8D6CBC59BD62F8A3BEB3C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new RelayMessageConnectRequest
		// {
		//     Header = RelayMessageHeader.Create(RelayMessageType.ConnectRequest),
		//     AllocationId = allocationId,
		//     ToConnectionDataLength = 255,
		//     ToConnectionData = toConnectionData,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(RelayMessageConnectRequest_t35AB449CCDF5E31947A8D6CBC59BD62F8A3BEB3C));
		RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72 L_0;
		L_0 = RelayMessageHeader_Create_mAFABE63AE20CD1AE19E5D90726384E868DF35823(3, NULL);
		(&V_0)->___Header_0 = L_0;
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_1 = ___0_allocationId;
		(&V_0)->___AllocationId_1 = L_1;
		(&V_0)->___ToConnectionDataLength_2 = (uint8_t)((int32_t)255);
		RelayConnectionData_tA5306A14AEB9FA72A119334CBE01CE0B1F7AC18D L_2 = ___1_toConnectionData;
		(&V_0)->___ToConnectionData_3 = L_2;
		RelayMessageConnectRequest_t35AB449CCDF5E31947A8D6CBC59BD62F8A3BEB3C L_3 = V_0;
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
// Unity.Networking.Transport.Relay.RelayMessageDisconnect Unity.Networking.Transport.Relay.RelayMessageDisconnect::Create(Unity.Networking.Transport.Relay.RelayAllocationId,Unity.Networking.Transport.Relay.RelayAllocationId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RelayMessageDisconnect_t96DE3DA36403F2F6EABDF3624DE6F85888CC543D RelayMessageDisconnect_Create_m1CDE7115330ADBD35069AAC2C9FDD662EC1D22FE (RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___0_fromAllocationId, RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___1_toAllocationId, const RuntimeMethod* method) 
{
	RelayMessageDisconnect_t96DE3DA36403F2F6EABDF3624DE6F85888CC543D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new RelayMessageDisconnect
		// {
		//     Header = RelayMessageHeader.Create(RelayMessageType.Disconnect),
		//     FromAllocationId = fromAllocationId,
		//     ToAllocationId = toAllocationId,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(RelayMessageDisconnect_t96DE3DA36403F2F6EABDF3624DE6F85888CC543D));
		RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72 L_0;
		L_0 = RelayMessageHeader_Create_mAFABE63AE20CD1AE19E5D90726384E868DF35823(((int32_t)9), NULL);
		(&V_0)->___Header_0 = L_0;
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_1 = ___0_fromAllocationId;
		(&V_0)->___FromAllocationId_1 = L_1;
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_2 = ___1_toAllocationId;
		(&V_0)->___ToAllocationId_2 = L_2;
		RelayMessageDisconnect_t96DE3DA36403F2F6EABDF3624DE6F85888CC543D L_3 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Networking.Transport.Relay.RelayMessageHeader::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RelayMessageHeader_IsValid_m87A499AEA741893D3947B9648833443FC3383113 (RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72* __this, const RuntimeMethod* method) 
{
	{
		// return Signature == 0x72DA && Version == 0;
		uint16_t L_0 = __this->___Signature_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)29402)))))
		{
			goto IL_0017;
		}
	}
	{
		uint8_t L_1 = __this->___Version_1;
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool RelayMessageHeader_IsValid_m87A499AEA741893D3947B9648833443FC3383113_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72*>(__this + _offset);
	bool _returnValue;
	_returnValue = RelayMessageHeader_IsValid_m87A499AEA741893D3947B9648833443FC3383113(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Networking.Transport.Relay.RelayMessageHeader Unity.Networking.Transport.Relay.RelayMessageHeader::Create(Unity.Networking.Transport.Relay.RelayMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72 RelayMessageHeader_Create_mAFABE63AE20CD1AE19E5D90726384E868DF35823 (uint8_t ___0_type, const RuntimeMethod* method) 
{
	RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new RelayMessageHeader
		// {
		//     Signature = 0x72DA,
		//     Version = 0,
		//     Type = type,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72));
		(&V_0)->___Signature_0 = (uint16_t)((int32_t)29402);
		(&V_0)->___Version_1 = (uint8_t)0;
		uint8_t L_0 = ___0_type;
		(&V_0)->___Type_2 = L_0;
		RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72 L_1 = V_0;
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
// Unity.Networking.Transport.Relay.RelayMessagePing Unity.Networking.Transport.Relay.RelayMessagePing::Create(Unity.Networking.Transport.Relay.RelayAllocationId,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RelayMessagePing_t38F5F4C34944AE32ACC92EBDB4B86C33465CA2E2 RelayMessagePing_Create_m243B5A5AB0FB857278CC72CE0831BC229AB29D74 (RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___0_fromAllocationId, uint16_t ___1_dataLength, const RuntimeMethod* method) 
{
	RelayMessagePing_t38F5F4C34944AE32ACC92EBDB4B86C33465CA2E2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new RelayMessagePing
		// {
		//     Header = RelayMessageHeader.Create(RelayMessageType.Ping),
		//     FromAllocationId = fromAllocationId,
		//     SequenceNumber = 1
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(RelayMessagePing_t38F5F4C34944AE32ACC92EBDB4B86C33465CA2E2));
		RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72 L_0;
		L_0 = RelayMessageHeader_Create_mAFABE63AE20CD1AE19E5D90726384E868DF35823(2, NULL);
		(&V_0)->___Header_0 = L_0;
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_1 = ___0_fromAllocationId;
		(&V_0)->___FromAllocationId_1 = L_1;
		(&V_0)->___SequenceNumber_2 = (uint16_t)1;
		RelayMessagePing_t38F5F4C34944AE32ACC92EBDB4B86C33465CA2E2 L_2 = V_0;
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
// Unity.Networking.Transport.Relay.RelayMessageRelay Unity.Networking.Transport.Relay.RelayMessageRelay::Create(Unity.Networking.Transport.Relay.RelayAllocationId,Unity.Networking.Transport.Relay.RelayAllocationId,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49 RelayMessageRelay_Create_m654762D910C3744664149896D80B85205944772B (RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___0_fromAllocationId, RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___1_toAllocationId, uint16_t ___2_dataLength, const RuntimeMethod* method) 
{
	RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new RelayMessageRelay
		// {
		//     Header = RelayMessageHeader.Create(RelayMessageType.Relay),
		//     FromAllocationId = fromAllocationId,
		//     ToAllocationId = toAllocationId,
		//     DataLength = RelayNetworkProtocol.SwitchEndianness(dataLength),
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49));
		RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72 L_0;
		L_0 = RelayMessageHeader_Create_mAFABE63AE20CD1AE19E5D90726384E868DF35823(((int32_t)10), NULL);
		(&V_0)->___Header_0 = L_0;
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_1 = ___0_fromAllocationId;
		(&V_0)->___FromAllocationId_1 = L_1;
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_2 = ___1_toAllocationId;
		(&V_0)->___ToAllocationId_2 = L_2;
		uint16_t L_3 = ___2_dataLength;
		uint16_t L_4;
		L_4 = RelayNetworkProtocol_SwitchEndianness_m06F5B2C60C6F9A88468FA3F720977E2CF7CDD124(L_3, NULL);
		(&V_0)->___DataLength_3 = L_4;
		RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49 L_5 = V_0;
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
// System.Boolean Unity.Networking.Transport.Relay.RelayAllocationId::op_Equality(Unity.Networking.Transport.Relay.RelayAllocationId,Unity.Networking.Transport.Relay.RelayAllocationId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RelayAllocationId_op_Equality_m9AC1B0DC988A52B10DB8E3E48BE2EC6DF6B9C046 (RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___0_lhs, RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___1_rhs, const RuntimeMethod* method) 
{
	{
		// return lhs.Compare(rhs) == 0;
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_0 = ___1_rhs;
		int32_t L_1;
		L_1 = RelayAllocationId_Compare_m91795613B6AB51348C394FCACFC0032E996D33E7((&___0_lhs), L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Unity.Networking.Transport.Relay.RelayAllocationId::op_Inequality(Unity.Networking.Transport.Relay.RelayAllocationId,Unity.Networking.Transport.Relay.RelayAllocationId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RelayAllocationId_op_Inequality_m9FA8F02E88ECEC66668FC0EF8D7A4DE71D3DEB53 (RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___0_lhs, RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___1_rhs, const RuntimeMethod* method) 
{
	{
		// return lhs.Compare(rhs) != 0;
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_0 = ___1_rhs;
		int32_t L_1;
		L_1 = RelayAllocationId_Compare_m91795613B6AB51348C394FCACFC0032E996D33E7((&___0_lhs), L_0, NULL);
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean Unity.Networking.Transport.Relay.RelayAllocationId::Equals(Unity.Networking.Transport.Relay.RelayAllocationId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RelayAllocationId_Equals_m592299E57528316BE905F7A4B6CB9967636ABE41 (RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* __this, RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___0_other, const RuntimeMethod* method) 
{
	{
		// return Compare(other) == 0;
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_0 = ___0_other;
		int32_t L_1;
		L_1 = RelayAllocationId_Compare_m91795613B6AB51348C394FCACFC0032E996D33E7(__this, L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool RelayAllocationId_Equals_m592299E57528316BE905F7A4B6CB9967636ABE41_AdjustorThunk (RuntimeObject* __this, RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___0_other, const RuntimeMethod* method)
{
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984*>(__this + _offset);
	bool _returnValue;
	_returnValue = RelayAllocationId_Equals_m592299E57528316BE905F7A4B6CB9967636ABE41(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Int32 Unity.Networking.Transport.Relay.RelayAllocationId::CompareTo(Unity.Networking.Transport.Relay.RelayAllocationId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RelayAllocationId_CompareTo_m6999449ACE6F980D62F70A25BF299644BC117B97 (RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* __this, RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___0_other, const RuntimeMethod* method) 
{
	{
		// return Compare(other);
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_0 = ___0_other;
		int32_t L_1;
		L_1 = RelayAllocationId_Compare_m91795613B6AB51348C394FCACFC0032E996D33E7(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t RelayAllocationId_CompareTo_m6999449ACE6F980D62F70A25BF299644BC117B97_AdjustorThunk (RuntimeObject* __this, RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___0_other, const RuntimeMethod* method)
{
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RelayAllocationId_CompareTo_m6999449ACE6F980D62F70A25BF299644BC117B97(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean Unity.Networking.Transport.Relay.RelayAllocationId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RelayAllocationId_Equals_mB3CF3FB1E9B1101844216E8288CBB09610509B5A (RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return other != null && this == (RelayAllocationId)other;
		RuntimeObject* L_0 = ___0_other;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_1 = (*(RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984*)__this);
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = RelayAllocationId_op_Equality_m9AC1B0DC988A52B10DB8E3E48BE2EC6DF6B9C046(L_1, ((*(RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984*)((RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984*)(RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984*)UnBox(L_2, RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984_il2cpp_TypeInfo_var)))), NULL);
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool RelayAllocationId_Equals_mB3CF3FB1E9B1101844216E8288CBB09610509B5A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984*>(__this + _offset);
	bool _returnValue;
	_returnValue = RelayAllocationId_Equals_mB3CF3FB1E9B1101844216E8288CBB09610509B5A(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Int32 Unity.Networking.Transport.Relay.RelayAllocationId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RelayAllocationId_GetHashCode_m62B1E35940A073B2FA3F8A199EC9151980D3CA17 (RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* __this, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// {
		U3CValueU3Ee__FixedBuffer_t0E279F5AD765D68C7D3ADB57B98FD471710955C8* L_0 = (&__this->___Value_0);
		uint8_t* L_1 = (&L_0->___FixedElementField_0);
		V_1 = L_1;
		// fixed(byte* p = Value)
		uint8_t* L_2 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_2);
		// var result = 0;
		V_2 = 0;
		// for (int i = 0; i < k_Length; i++)
		V_3 = 0;
		goto IL_0023;
	}

IL_0015:
	{
		// result = (result * 31) ^ (int)p[i];
		int32_t L_3 = V_2;
		uint8_t* L_4 = V_0;
		int32_t L_5 = V_3;
		int32_t L_6 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, L_5)));
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)31)))^L_6));
		// for (int i = 0; i < k_Length; i++)
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0023:
	{
		// for (int i = 0; i < k_Length; i++)
		int32_t L_8 = V_3;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)16))))
		{
			goto IL_0015;
		}
	}
	{
		// return result;
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C  int32_t RelayAllocationId_GetHashCode_m62B1E35940A073B2FA3F8A199EC9151980D3CA17_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RelayAllocationId_GetHashCode_m62B1E35940A073B2FA3F8A199EC9151980D3CA17(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Networking.Transport.Relay.RelayAllocationId::Compare(Unity.Networking.Transport.Relay.RelayAllocationId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RelayAllocationId_Compare_m91795613B6AB51348C394FCACFC0032E996D33E7 (RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* __this, RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___0_other, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		// {
		U3CValueU3Ee__FixedBuffer_t0E279F5AD765D68C7D3ADB57B98FD471710955C8* L_0 = (&__this->___Value_0);
		uint8_t* L_1 = (&L_0->___FixedElementField_0);
		V_1 = L_1;
		// fixed(void* p = Value)
		uint8_t* L_2 = V_1;
		V_0 = (void*)((uintptr_t)L_2);
		// return UnsafeUtility.MemCmp(p, other.Value, k_Length);
		void* L_3 = V_0;
		U3CValueU3Ee__FixedBuffer_t0E279F5AD765D68C7D3ADB57B98FD471710955C8* L_4 = (&(&___0_other)->___Value_0);
		uint8_t* L_5 = (&L_4->___FixedElementField_0);
		int32_t L_6;
		L_6 = UnsafeUtility_MemCmp_mA0E0E1A93F715105E7B576F1603DCAB37717A5EF(L_3, (void*)((uintptr_t)L_5), ((int64_t)((int32_t)16)), NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t RelayAllocationId_Compare_m91795613B6AB51348C394FCACFC0032E996D33E7_AdjustorThunk (RuntimeObject* __this, RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___0_other, const RuntimeMethod* method)
{
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RelayAllocationId_Compare_m91795613B6AB51348C394FCACFC0032E996D33E7(_thisAdjusted, ___0_other, method);
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
// Unity.Networking.Transport.Relay.RelayAllocationId& Unity.Networking.Transport.Relay.ConnectionAddressExtensions::AsRelayAllocationId(Unity.Networking.Transport.NetworkInterfaceEndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* ConnectionAddressExtensions_AsRelayAllocationId_mB760454368A28166B3FEAAAF75B03F2DD5B957BF (NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___0_address, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	{
		// {
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_0 = ___0_address;
		U3CdataU3Ee__FixedBuffer_tA444E672C5AB32F413A3235C5075E48F04008AA0* L_1 = (&L_0->___data_2);
		uint8_t* L_2 = (&L_1->___FixedElementField_0);
		V_0 = L_2;
		// fixed(byte* addressPtr = address.data)
		uint8_t* L_3 = V_0;
		// return ref *(RelayAllocationId*)addressPtr;
		return (RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984*)(((uintptr_t)L_3));
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
// Unity.Networking.Transport.Relay.RelayNetworkParameter Unity.Networking.Transport.Relay.RelayParameterExtensions::GetRelayParameters(Unity.Networking.Transport.NetworkSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RelayNetworkParameter_tE48AD3A6F0F2548B9929FE896969232D10FBC4B8 RelayParameterExtensions_GetRelayParameters_m311AF739522A233FEEEED2CD79ECFEA9C4FA36D5 (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* ___0_settings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkSettings_TryGet_TisRelayNetworkParameter_tE48AD3A6F0F2548B9929FE896969232D10FBC4B8_m2915D2DF811C81800CA3F27275A5D1F1C6FB371C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RelayNetworkParameter_tE48AD3A6F0F2548B9929FE896969232D10FBC4B8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!settings.TryGet<RelayNetworkParameter>(out var parameters))
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_0 = ___0_settings;
		bool L_1;
		L_1 = NetworkSettings_TryGet_TisRelayNetworkParameter_tE48AD3A6F0F2548B9929FE896969232D10FBC4B8_m2915D2DF811C81800CA3F27275A5D1F1C6FB371C(L_0, (&V_0), NetworkSettings_TryGet_TisRelayNetworkParameter_tE48AD3A6F0F2548B9929FE896969232D10FBC4B8_m2915D2DF811C81800CA3F27275A5D1F1C6FB371C_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		// throw new System.InvalidOperationException($"Can't extract Relay parameters: {nameof(RelayNetworkParameter)} must be provided to the {nameof(NetworkSettings)}");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC14A356642F38B11AD09FBB96703606569A97ECB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RelayParameterExtensions_GetRelayParameters_m311AF739522A233FEEEED2CD79ECFEA9C4FA36D5_RuntimeMethod_var)));
	}

IL_0015:
	{
		// return parameters;
		RelayNetworkParameter_tE48AD3A6F0F2548B9929FE896969232D10FBC4B8 L_3 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" int32_t CDECL ReversePInvokeWrapper_RelayNetworkProtocol_ComputePacketOverhead_m4E78C92092C1484F2CB95DD10DE9AA4E2911B5F2(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, int32_t* ___1_dataOffset)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___1_dataOffset' to managed representation
	int32_t ____1_dataOffset_empty = 0;

	// Managed method invocation
	int32_t returnValue;
	returnValue = RelayNetworkProtocol_ComputePacketOverhead_m4E78C92092C1484F2CB95DD10DE9AA4E2911B5F2(___0_connection, (&____1_dataOffset_empty), NULL);

	// Marshaling of parameter '___1_dataOffset' back from managed representation
	*___1_dataOffset = ____1_dataOffset_empty;

	return returnValue;
}
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_ProcessReceive_m31C9840BD1234A5598DAF1D57D750A6A79849765(intptr_t ___0_stream, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_endpoint, int32_t ___2_size, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___3_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, intptr_t ___5_userData, ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* ___6_command)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RelayNetworkProtocol_ProcessReceive_m31C9840BD1234A5598DAF1D57D750A6A79849765(___0_stream, ___1_endpoint, ___2_size, ___3_sendInterface, ___4_queueHandle, ___5_userData, ___6_command, NULL);

}
extern "C" int32_t CDECL ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSend_m7575ABC041AB3CEF12A17815D0870773958B412C(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, int32_t ___1_hasPipeline, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___2_sendInterface, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___3_sendHandle, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, intptr_t ___5_userData)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = RelayNetworkProtocol_ProcessSend_m7575ABC041AB3CEF12A17815D0870773958B412C(___0_connection, static_cast<bool>(___1_hasPipeline), ___2_sendInterface, ___3_sendHandle, ___4_queueHandle, ___5_userData, NULL);

	return returnValue;
}
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSendConnectionAccept_mB019F49554DCD5FB156369B699D405AD567FA9AD(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RelayNetworkProtocol_ProcessSendConnectionAccept_mB019F49554DCD5FB156369B699D405AD567FA9AD(___0_connection, ___1_sendInterface, ___2_queueHandle, ___3_userData, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_Connect_mF79B494839F2860E97A8001403E8E7B2F2D0BFFF(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RelayNetworkProtocol_Connect_mF79B494839F2860E97A8001403E8E7B2F2D0BFFF(___0_connection, ___1_sendInterface, ___2_queueHandle, ___3_userData, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_Disconnect_m2B817AF28256EEE336098E3654EE115825D9C766(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RelayNetworkProtocol_Disconnect_m2B817AF28256EEE336098E3654EE115825D9C766(___0_connection, ___1_sendInterface, ___2_queueHandle, ___3_userData, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSendPing_m7CE90FC0007C848A69176703204B0EA13B7BE9ED(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RelayNetworkProtocol_ProcessSendPing_m7CE90FC0007C848A69176703204B0EA13B7BE9ED(___0_connection, ___1_sendInterface, ___2_queueHandle, ___3_userData, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSendPong_m0F98CD0FC19258C75C3DDA67D78E324C032AF6DC(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RelayNetworkProtocol_ProcessSendPong_m0F98CD0FC19258C75C3DDA67D78E324C032AF6DC(___0_connection, ___1_sendInterface, ___2_queueHandle, ___3_userData, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_Update_m7A9E599807DE1BFFB74A44187363C8C6FA39B443(int64_t ___0_updateTime, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RelayNetworkProtocol_Update_m7A9E599807DE1BFFB74A44187363C8C6FA39B443(___0_updateTime, ___1_sendInterface, ___2_queueHandle, ___3_userData, NULL);

}
// System.UInt16 Unity.Networking.Transport.Relay.RelayNetworkProtocol::SwitchEndianness(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RelayNetworkProtocol_SwitchEndianness_m06F5B2C60C6F9A88468FA3F720977E2CF7CDD124 (uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		// if (DataStreamWriter.IsLittleEndian)
		bool L_0;
		L_0 = DataStreamWriter_get_IsLittleEndian_m99AB4FF719469C5EF8346A3AC76C562CF6EF474A(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// return (ushort)((value << 8) | (value >> 8));
		uint16_t L_1 = ___0_value;
		uint16_t L_2 = ___0_value;
		return (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_1<<8))|((int32_t)((int32_t)L_2>>8)))));
	}

IL_0010:
	{
		// return value;
		uint16_t L_3 = ___0_value;
		return L_3;
	}
}
// System.Void Unity.Networking.Transport.Relay.RelayNetworkProtocol::Initialize(Unity.Networking.Transport.NetworkSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayNetworkProtocol_Initialize_m0A33A964C44694B69D2FAECB5893EABAE925F5ED (RelayNetworkProtocol_tD7EB1F41E6E4E1E3F12A681F08030C24245E867B* __this, NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0 ___0_settings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_AlignOf_TisRelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_m1F90C43667A7F4543B0FF1CD95DBA6C1F92E94EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisRelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_m3FFD617F4FF50F0299817A643B51550473E1A5F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RelayNetworkParameter_tE48AD3A6F0F2548B9929FE896969232D10FBC4B8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D V_1;
	memset((&V_1), 0, sizeof(V_1));
	RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var relayConfig = settings.GetRelayParameters();
		RelayNetworkParameter_tE48AD3A6F0F2548B9929FE896969232D10FBC4B8 L_0;
		L_0 = RelayParameterExtensions_GetRelayParameters_m311AF739522A233FEEEED2CD79ECFEA9C4FA36D5((&___0_settings), NULL);
		V_0 = L_0;
		// var config = settings.GetNetworkConfigParameters();
		NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D L_1;
		L_1 = CommonNetworkParametersExtensions_GetNetworkConfigParameters_m26145252253BE83A2CDFB63E7DC5F3FE220A8ECB((&___0_settings), NULL);
		V_1 = L_1;
		// if (relayConfig.ServerData.IsSecure == 1)
		RelayNetworkParameter_tE48AD3A6F0F2548B9929FE896969232D10FBC4B8 L_2 = V_0;
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 L_3 = L_2.___ServerData_0;
		uint8_t L_4 = L_3.___IsSecure_7;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}
	{
		// ManagedSecureFunctions.Initialize();
		il2cpp_codegen_runtime_class_init_inline(ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var);
		ManagedSecureFunctions_Initialize_m3EC45C8144F2303167F7AF87B68CEBE6A08956D8(NULL);
	}

IL_0023:
	{
		// UserData = (IntPtr)UnsafeUtility.Malloc(UnsafeUtility.SizeOf<RelayProtocolData>(), UnsafeUtility.AlignOf<RelayProtocolData>(), Allocator.Persistent);
		int32_t L_5;
		L_5 = UnsafeUtility_SizeOf_TisRelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_m3FFD617F4FF50F0299817A643B51550473E1A5F9(UnsafeUtility_SizeOf_TisRelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_m3FFD617F4FF50F0299817A643B51550473E1A5F9_RuntimeMethod_var);
		int32_t L_6;
		L_6 = UnsafeUtility_AlignOf_TisRelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_m1F90C43667A7F4543B0FF1CD95DBA6C1F92E94EC(UnsafeUtility_AlignOf_TisRelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_m1F90C43667A7F4543B0FF1CD95DBA6C1F92E94EC_RuntimeMethod_var);
		void* L_7;
		L_7 = UnsafeUtility_Malloc_mD7BD28D5AE7E4901B225B7DFFE2B568EE7BDC0C9(((int64_t)L_5), L_6, 4, NULL);
		intptr_t L_8;
		L_8 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_7, NULL);
		__this->___UserData_0 = L_8;
		// *(RelayProtocolData*)UserData = new RelayProtocolData
		// {
		//     ServerData = relayConfig.ServerData,
		//     ConnectionState = RelayConnectionState.Unbound,
		//     ConnectTimeoutMS = config.connectTimeoutMS,
		//     RelayConnectionTimeMS = relayConfig.RelayConnectionTimeMS,
		//     SecureState = SecuredRelayConnectionState.Unsecure
		// };
		intptr_t L_9 = __this->___UserData_0;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F));
		RelayNetworkParameter_tE48AD3A6F0F2548B9929FE896969232D10FBC4B8 L_11 = V_0;
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 L_12 = L_11.___ServerData_0;
		(&V_2)->___ServerData_10 = L_12;
		(&V_2)->___ConnectionState_0 = 0;
		NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D L_13 = V_1;
		int32_t L_14 = L_13.___connectTimeoutMS_0;
		(&V_2)->___ConnectTimeoutMS_6 = L_14;
		RelayNetworkParameter_tE48AD3A6F0F2548B9929FE896969232D10FBC4B8 L_15 = V_0;
		int32_t L_16 = L_15.___RelayConnectionTimeMS_1;
		(&V_2)->___RelayConnectionTimeMS_7 = L_16;
		(&V_2)->___SecureState_1 = 0;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F L_17 = V_2;
		*(RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F*)L_10 = L_17;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RelayNetworkProtocol_Initialize_m0A33A964C44694B69D2FAECB5893EABAE925F5ED_AdjustorThunk (RuntimeObject* __this, NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0 ___0_settings, const RuntimeMethod* method)
{
	RelayNetworkProtocol_tD7EB1F41E6E4E1E3F12A681F08030C24245E867B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RelayNetworkProtocol_tD7EB1F41E6E4E1E3F12A681F08030C24245E867B*>(__this + _offset);
	RelayNetworkProtocol_Initialize_m0A33A964C44694B69D2FAECB5893EABAE925F5ED(_thisAdjusted, ___0_settings, method);
}
// System.Void Unity.Networking.Transport.Relay.RelayNetworkProtocol::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayNetworkProtocol_Dispose_m70BD5B16EB56D48F0A5BAEF1F1BAD1BB5DDA2544 (RelayNetworkProtocol_tD7EB1F41E6E4E1E3F12A681F08030C24245E867B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* V_0 = NULL;
	{
		// var protocolData = (RelayProtocolData*)UserData;
		intptr_t L_0 = __this->___UserData_0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F*)L_1;
		// if (protocolData->SecureClientState.ClientPtr != null)
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_2 = V_0;
		NullCheck(L_2);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_3 = (&L_2->___SecureClientState_11);
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_4 = L_3->___ClientPtr_0;
		if ((((intptr_t)L_4) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0026;
		}
	}
	{
		// SecureNetworkProtocol.DisposeSecureClient(ref protocolData->SecureClientState);
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_5 = V_0;
		NullCheck(L_5);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_6 = (&L_5->___SecureClientState_11);
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		SecureNetworkProtocol_DisposeSecureClient_mB349E3980ACCB847640BCE87AA1319627170B17D(L_6, NULL);
	}

IL_0026:
	{
		// if (UserData != default)
		intptr_t L_7 = __this->___UserData_0;
		bool L_8;
		L_8 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_7, ((intptr_t)0), NULL);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		// UnsafeUtility.Free(UserData.ToPointer(), Allocator.Persistent);
		intptr_t* L_9 = (&__this->___UserData_0);
		void* L_10;
		L_10 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_9, NULL);
		UnsafeUtility_Free_mFF99F4F02FE7F735AB30D8987D6953E55A2B23E1(L_10, 4, NULL);
	}

IL_0046:
	{
		// UserData = default;
		intptr_t* L_11 = (&__this->___UserData_0);
		il2cpp_codegen_initobj(L_11, sizeof(intptr_t));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RelayNetworkProtocol_Dispose_m70BD5B16EB56D48F0A5BAEF1F1BAD1BB5DDA2544_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RelayNetworkProtocol_tD7EB1F41E6E4E1E3F12A681F08030C24245E867B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RelayNetworkProtocol_tD7EB1F41E6E4E1E3F12A681F08030C24245E867B*>(__this + _offset);
	RelayNetworkProtocol_Dispose_m70BD5B16EB56D48F0A5BAEF1F1BAD1BB5DDA2544(_thisAdjusted, method);
}
// System.Int32 Unity.Networking.Transport.Relay.RelayNetworkProtocol::Bind(Unity.Networking.Transport.INetworkInterface,Unity.Networking.Transport.NetworkInterfaceEndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RelayNetworkProtocol_Bind_mD652826E3028AFB6BA3739F194C92BFD9F44BA49 (RelayNetworkProtocol_tD7EB1F41E6E4E1E3F12A681F08030C24245E867B* __this, RuntimeObject* ___0_networkInterface, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_localEndPoint, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkInterface_tF8AD6FEF3DE45849521F3435AE8E07CCFDCFFBB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* V_0 = NULL;
	{
		// if (networkInterface.Bind(localEndPoint) != 0)
		RuntimeObject* L_0 = ___0_networkInterface;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_1 = ___1_localEndPoint;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 L_2 = (*(NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686*)L_1);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 >::Invoke(3 /* System.Int32 Unity.Networking.Transport.INetworkInterface::Bind(Unity.Networking.Transport.NetworkInterfaceEndPoint) */, INetworkInterface_tF8AD6FEF3DE45849521F3435AE8E07CCFDCFFBB1_il2cpp_TypeInfo_var, L_0, L_2);
		if (!L_3)
		{
			goto IL_0010;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0010:
	{
		// var protocolData = (RelayProtocolData*)UserData;
		intptr_t L_4 = __this->___UserData_0;
		void* L_5;
		L_5 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_4, NULL);
		V_0 = (RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F*)L_5;
		// networkInterface.CreateInterfaceEndPoint(protocolData->ServerData.Endpoint, out protocolData->ServerEndpoint);
		RuntimeObject* L_6 = ___0_networkInterface;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_7 = V_0;
		NullCheck(L_7);
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_8 = (&L_7->___ServerData_10);
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_9 = L_8->___Endpoint_0;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_10 = V_0;
		NullCheck(L_10);
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_11 = (&L_10->___ServerEndpoint_9);
		NullCheck(L_6);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker2< int32_t, NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* >::Invoke(6 /* System.Int32 Unity.Networking.Transport.INetworkInterface::CreateInterfaceEndPoint(Unity.Networking.Transport.NetworkEndPoint,Unity.Networking.Transport.NetworkInterfaceEndPoint&) */, INetworkInterface_tF8AD6FEF3DE45849521F3435AE8E07CCFDCFFBB1_il2cpp_TypeInfo_var, L_6, L_9, L_11);
		// if (protocolData->ServerData.IsSecure == 1)
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_13 = V_0;
		NullCheck(L_13);
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_14 = (&L_13->___ServerData_10);
		uint8_t L_15 = L_14->___IsSecure_7;
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		// protocolData->ConnectionState = RelayConnectionState.Handshake;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_16 = V_0;
		NullCheck(L_16);
		L_16->___ConnectionState_0 = 1;
		goto IL_0052;
	}

IL_004b:
	{
		// protocolData->ConnectionState = RelayConnectionState.Binding;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_17 = V_0;
		NullCheck(L_17);
		L_17->___ConnectionState_0 = 2;
	}

IL_0052:
	{
		// return 0;
		return 0;
	}
}
IL2CPP_EXTERN_C  int32_t RelayNetworkProtocol_Bind_mD652826E3028AFB6BA3739F194C92BFD9F44BA49_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_networkInterface, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_localEndPoint, const RuntimeMethod* method)
{
	RelayNetworkProtocol_tD7EB1F41E6E4E1E3F12A681F08030C24245E867B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RelayNetworkProtocol_tD7EB1F41E6E4E1E3F12A681F08030C24245E867B*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RelayNetworkProtocol_Bind_mD652826E3028AFB6BA3739F194C92BFD9F44BA49(_thisAdjusted, ___0_networkInterface, ___1_localEndPoint, method);
	return _returnValue;
}
// Unity.Networking.Transport.NetworkProtocol Unity.Networking.Transport.Relay.RelayNetworkProtocol::CreateProtocolInterface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9 RelayNetworkProtocol_CreateProtocolInterface_m15D5F918B80BB326FB310F6861E2EA70EC90EB87 (RelayNetworkProtocol_tD7EB1F41E6E4E1E3F12A681F08030C24245E867B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComputePacketOverheadDelegate_tFF6AB7CC7E33391F1CF729C3FC4C5DF1D47CA9C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectDelegate_tF0F993B09F4013E6F8765D173E20519526B78613_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectDelegate_tEF9FFFB31023D3A29E0A1FA73D4F830B0E799A14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProcessReceiveDelegate_tC13DF5985CEFE17FBFF48B30FECDD7C4470A83C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProcessSendConnectionAcceptDelegate_t69D4C0B8BE8F81AFC1A4A2F0A4EF5540B3003CAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProcessSendDelegate_t13BEFEE10F53345833169A7C7AF11F3B3EB2DA11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProcessSendPingDelegate_t152699432B5574DC4245F79AD09F4AAC5038FD2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProcessSendPongDelegate_t10EC1FA49739F7F923218C56A0FCBB3A2E99CE49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelayNetworkProtocol_ComputePacketOverhead_m4E78C92092C1484F2CB95DD10DE9AA4E2911B5F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelayNetworkProtocol_Connect_mF79B494839F2860E97A8001403E8E7B2F2D0BFFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelayNetworkProtocol_Disconnect_m2B817AF28256EEE336098E3654EE115825D9C766_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelayNetworkProtocol_ProcessReceive_m31C9840BD1234A5598DAF1D57D750A6A79849765_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelayNetworkProtocol_ProcessSendConnectionAccept_mB019F49554DCD5FB156369B699D405AD567FA9AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelayNetworkProtocol_ProcessSendPing_m7CE90FC0007C848A69176703204B0EA13B7BE9ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelayNetworkProtocol_ProcessSendPong_m0F98CD0FC19258C75C3DDA67D78E324C032AF6DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelayNetworkProtocol_ProcessSend_m7575ABC041AB3CEF12A17815D0870773958B412C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelayNetworkProtocol_Update_m7A9E599807DE1BFFB74A44187363C8C6FA39B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransportFunctionPointer_1__ctor_m0CF0EB42CBD6B29DBC6A68F45E303B0996D7D22D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransportFunctionPointer_1__ctor_m39D9CD4BCB4ED59BD85E320FF4EE2208AC5B7882_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransportFunctionPointer_1__ctor_m3E02B7E6A2635CD893E5D1C86CC9176D982BC3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransportFunctionPointer_1__ctor_m5D145E90EC40CE16611DF7593398529E85263C56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransportFunctionPointer_1__ctor_m6C20ABFA8FDDFF6594D8ED81DD9E8A1ADD5A105C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransportFunctionPointer_1__ctor_m857908203463C9FB5C58EA05FE3415FCA9309886_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransportFunctionPointer_1__ctor_m99B3F3334311C659D1A30A1A1DD501A278504B62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransportFunctionPointer_1__ctor_mB4B753786975770CB3F5DDC734BB2DBAE1781673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransportFunctionPointer_1__ctor_mBCE476BB901D7124332E857E414D21674E44764D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateDelegate_t848AE3DE157F214CEF33820CF17818729BACFFCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new NetworkProtocol(
		//     computePacketOverhead: new TransportFunctionPointer<NetworkProtocol.ComputePacketOverheadDelegate>(ComputePacketOverhead),
		//     processReceive: new TransportFunctionPointer<NetworkProtocol.ProcessReceiveDelegate>(ProcessReceive),
		//     processSend: new TransportFunctionPointer<NetworkProtocol.ProcessSendDelegate>(ProcessSend),
		//     processSendConnectionAccept: new TransportFunctionPointer<NetworkProtocol.ProcessSendConnectionAcceptDelegate>(ProcessSendConnectionAccept),
		//     connect: new TransportFunctionPointer<NetworkProtocol.ConnectDelegate>(Connect),
		//     disconnect: new TransportFunctionPointer<NetworkProtocol.DisconnectDelegate>(Disconnect),
		//     processSendPing: new TransportFunctionPointer<NetworkProtocol.ProcessSendPingDelegate>(ProcessSendPing),
		//     processSendPong: new TransportFunctionPointer<NetworkProtocol.ProcessSendPongDelegate>(ProcessSendPong),
		//     update: new TransportFunctionPointer<NetworkProtocol.UpdateDelegate>(Update),
		//     needsUpdate: true,
		//     userData: UserData,
		//     maxHeaderSize: RelayMessageRelay.Length + UdpCHeader.Length,
		//     maxFooterSize: SessionIdToken.k_Length
		// );
		ComputePacketOverheadDelegate_tFF6AB7CC7E33391F1CF729C3FC4C5DF1D47CA9C7* L_0 = (ComputePacketOverheadDelegate_tFF6AB7CC7E33391F1CF729C3FC4C5DF1D47CA9C7*)il2cpp_codegen_object_new(ComputePacketOverheadDelegate_tFF6AB7CC7E33391F1CF729C3FC4C5DF1D47CA9C7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ComputePacketOverheadDelegate__ctor_mFF77EEC0FBE97189793098037E72362557312B64(L_0, NULL, (intptr_t)((void*)RelayNetworkProtocol_ComputePacketOverhead_m4E78C92092C1484F2CB95DD10DE9AA4E2911B5F2_RuntimeMethod_var), NULL);
		TransportFunctionPointer_1_t403A4BA6983AC49EB5EDF3EB14F092C746490EFF L_1;
		memset((&L_1), 0, sizeof(L_1));
		TransportFunctionPointer_1__ctor_m3E02B7E6A2635CD893E5D1C86CC9176D982BC3D0((&L_1), L_0, /*hidden argument*/TransportFunctionPointer_1__ctor_m3E02B7E6A2635CD893E5D1C86CC9176D982BC3D0_RuntimeMethod_var);
		ProcessReceiveDelegate_tC13DF5985CEFE17FBFF48B30FECDD7C4470A83C4* L_2 = (ProcessReceiveDelegate_tC13DF5985CEFE17FBFF48B30FECDD7C4470A83C4*)il2cpp_codegen_object_new(ProcessReceiveDelegate_tC13DF5985CEFE17FBFF48B30FECDD7C4470A83C4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ProcessReceiveDelegate__ctor_m36FA8288C211E49A48DFEC43097F51CDF87F94FC(L_2, NULL, (intptr_t)((void*)RelayNetworkProtocol_ProcessReceive_m31C9840BD1234A5598DAF1D57D750A6A79849765_RuntimeMethod_var), NULL);
		TransportFunctionPointer_1_tF0C75E421ACA913F2FA062ED002F9586FEA669FC L_3;
		memset((&L_3), 0, sizeof(L_3));
		TransportFunctionPointer_1__ctor_m0CF0EB42CBD6B29DBC6A68F45E303B0996D7D22D((&L_3), L_2, /*hidden argument*/TransportFunctionPointer_1__ctor_m0CF0EB42CBD6B29DBC6A68F45E303B0996D7D22D_RuntimeMethod_var);
		ProcessSendDelegate_t13BEFEE10F53345833169A7C7AF11F3B3EB2DA11* L_4 = (ProcessSendDelegate_t13BEFEE10F53345833169A7C7AF11F3B3EB2DA11*)il2cpp_codegen_object_new(ProcessSendDelegate_t13BEFEE10F53345833169A7C7AF11F3B3EB2DA11_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ProcessSendDelegate__ctor_mD549857AED7833D3BB6E64DB337BCC959AF46E9F(L_4, NULL, (intptr_t)((void*)RelayNetworkProtocol_ProcessSend_m7575ABC041AB3CEF12A17815D0870773958B412C_RuntimeMethod_var), NULL);
		TransportFunctionPointer_1_t77C607A1DCF675C39F99E9EEE5AB36FB7CC494B1 L_5;
		memset((&L_5), 0, sizeof(L_5));
		TransportFunctionPointer_1__ctor_m39D9CD4BCB4ED59BD85E320FF4EE2208AC5B7882((&L_5), L_4, /*hidden argument*/TransportFunctionPointer_1__ctor_m39D9CD4BCB4ED59BD85E320FF4EE2208AC5B7882_RuntimeMethod_var);
		ProcessSendConnectionAcceptDelegate_t69D4C0B8BE8F81AFC1A4A2F0A4EF5540B3003CAF* L_6 = (ProcessSendConnectionAcceptDelegate_t69D4C0B8BE8F81AFC1A4A2F0A4EF5540B3003CAF*)il2cpp_codegen_object_new(ProcessSendConnectionAcceptDelegate_t69D4C0B8BE8F81AFC1A4A2F0A4EF5540B3003CAF_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ProcessSendConnectionAcceptDelegate__ctor_mCDB2854F94CC9B1FBF2E3F5D3EC06455879412AE(L_6, NULL, (intptr_t)((void*)RelayNetworkProtocol_ProcessSendConnectionAccept_mB019F49554DCD5FB156369B699D405AD567FA9AD_RuntimeMethod_var), NULL);
		TransportFunctionPointer_1_t8BEB3732EF9358D73F93626B99D9423182E4C47D L_7;
		memset((&L_7), 0, sizeof(L_7));
		TransportFunctionPointer_1__ctor_mB4B753786975770CB3F5DDC734BB2DBAE1781673((&L_7), L_6, /*hidden argument*/TransportFunctionPointer_1__ctor_mB4B753786975770CB3F5DDC734BB2DBAE1781673_RuntimeMethod_var);
		ConnectDelegate_tF0F993B09F4013E6F8765D173E20519526B78613* L_8 = (ConnectDelegate_tF0F993B09F4013E6F8765D173E20519526B78613*)il2cpp_codegen_object_new(ConnectDelegate_tF0F993B09F4013E6F8765D173E20519526B78613_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ConnectDelegate__ctor_m5F8C25B575FFE1F35F90E02833B67A870635D40C(L_8, NULL, (intptr_t)((void*)RelayNetworkProtocol_Connect_mF79B494839F2860E97A8001403E8E7B2F2D0BFFF_RuntimeMethod_var), NULL);
		TransportFunctionPointer_1_t71E737606530D4C87CDCF73063247BA844270CFF L_9;
		memset((&L_9), 0, sizeof(L_9));
		TransportFunctionPointer_1__ctor_m857908203463C9FB5C58EA05FE3415FCA9309886((&L_9), L_8, /*hidden argument*/TransportFunctionPointer_1__ctor_m857908203463C9FB5C58EA05FE3415FCA9309886_RuntimeMethod_var);
		DisconnectDelegate_tEF9FFFB31023D3A29E0A1FA73D4F830B0E799A14* L_10 = (DisconnectDelegate_tEF9FFFB31023D3A29E0A1FA73D4F830B0E799A14*)il2cpp_codegen_object_new(DisconnectDelegate_tEF9FFFB31023D3A29E0A1FA73D4F830B0E799A14_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		DisconnectDelegate__ctor_m94F15D89BBBB6D3B470B0E028C32940ABE783B76(L_10, NULL, (intptr_t)((void*)RelayNetworkProtocol_Disconnect_m2B817AF28256EEE336098E3654EE115825D9C766_RuntimeMethod_var), NULL);
		TransportFunctionPointer_1_t8CB155AD69427676535F5D25A3C9408D5012DDB0 L_11;
		memset((&L_11), 0, sizeof(L_11));
		TransportFunctionPointer_1__ctor_m5D145E90EC40CE16611DF7593398529E85263C56((&L_11), L_10, /*hidden argument*/TransportFunctionPointer_1__ctor_m5D145E90EC40CE16611DF7593398529E85263C56_RuntimeMethod_var);
		ProcessSendPingDelegate_t152699432B5574DC4245F79AD09F4AAC5038FD2B* L_12 = (ProcessSendPingDelegate_t152699432B5574DC4245F79AD09F4AAC5038FD2B*)il2cpp_codegen_object_new(ProcessSendPingDelegate_t152699432B5574DC4245F79AD09F4AAC5038FD2B_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ProcessSendPingDelegate__ctor_mCD2550603B06D8CEC25F4E2D446BF5CC5C8A0BC0(L_12, NULL, (intptr_t)((void*)RelayNetworkProtocol_ProcessSendPing_m7CE90FC0007C848A69176703204B0EA13B7BE9ED_RuntimeMethod_var), NULL);
		TransportFunctionPointer_1_t97CB0A2F7C4082FD45ACA0AE4155845480AE8843 L_13;
		memset((&L_13), 0, sizeof(L_13));
		TransportFunctionPointer_1__ctor_m99B3F3334311C659D1A30A1A1DD501A278504B62((&L_13), L_12, /*hidden argument*/TransportFunctionPointer_1__ctor_m99B3F3334311C659D1A30A1A1DD501A278504B62_RuntimeMethod_var);
		ProcessSendPongDelegate_t10EC1FA49739F7F923218C56A0FCBB3A2E99CE49* L_14 = (ProcessSendPongDelegate_t10EC1FA49739F7F923218C56A0FCBB3A2E99CE49*)il2cpp_codegen_object_new(ProcessSendPongDelegate_t10EC1FA49739F7F923218C56A0FCBB3A2E99CE49_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		ProcessSendPongDelegate__ctor_m941B05EA730046AF3D8D72BCAEAD489B81E07455(L_14, NULL, (intptr_t)((void*)RelayNetworkProtocol_ProcessSendPong_m0F98CD0FC19258C75C3DDA67D78E324C032AF6DC_RuntimeMethod_var), NULL);
		TransportFunctionPointer_1_t1974F1C28035CE103ECF0504CE8E87D6037E0398 L_15;
		memset((&L_15), 0, sizeof(L_15));
		TransportFunctionPointer_1__ctor_m6C20ABFA8FDDFF6594D8ED81DD9E8A1ADD5A105C((&L_15), L_14, /*hidden argument*/TransportFunctionPointer_1__ctor_m6C20ABFA8FDDFF6594D8ED81DD9E8A1ADD5A105C_RuntimeMethod_var);
		UpdateDelegate_t848AE3DE157F214CEF33820CF17818729BACFFCD* L_16 = (UpdateDelegate_t848AE3DE157F214CEF33820CF17818729BACFFCD*)il2cpp_codegen_object_new(UpdateDelegate_t848AE3DE157F214CEF33820CF17818729BACFFCD_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		UpdateDelegate__ctor_m86BE497BB0163FA75917B006CE9090480E515766(L_16, NULL, (intptr_t)((void*)RelayNetworkProtocol_Update_m7A9E599807DE1BFFB74A44187363C8C6FA39B443_RuntimeMethod_var), NULL);
		TransportFunctionPointer_1_tBB4FC4ACEB955CF3ECDC5FB78DE9132C126522F2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		TransportFunctionPointer_1__ctor_mBCE476BB901D7124332E857E414D21674E44764D((&L_17), L_16, /*hidden argument*/TransportFunctionPointer_1__ctor_mBCE476BB901D7124332E857E414D21674E44764D_RuntimeMethod_var);
		intptr_t L_18 = __this->___UserData_0;
		NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9 L_19;
		memset((&L_19), 0, sizeof(L_19));
		NetworkProtocol__ctor_mC2750284019C0B13ACEC26B10D34B77E617D7B2A((&L_19), L_1, L_3, L_5, L_7, L_9, L_11, L_13, L_15, L_17, (bool)1, L_18, ((int32_t)48), 8, /*hidden argument*/NULL);
		return L_19;
	}
}
IL2CPP_EXTERN_C  NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9 RelayNetworkProtocol_CreateProtocolInterface_m15D5F918B80BB326FB310F6861E2EA70EC90EB87_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RelayNetworkProtocol_tD7EB1F41E6E4E1E3F12A681F08030C24245E867B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RelayNetworkProtocol_tD7EB1F41E6E4E1E3F12A681F08030C24245E867B*>(__this + _offset);
	NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9 _returnValue;
	_returnValue = RelayNetworkProtocol_CreateProtocolInterface_m15D5F918B80BB326FB310F6861E2EA70EC90EB87(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Networking.Transport.Relay.RelayNetworkProtocol::ComputePacketOverhead(Unity.Networking.Transport.NetworkDriver/Connection&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RelayNetworkProtocol_ComputePacketOverhead_m4E78C92092C1484F2CB95DD10DE9AA4E2911B5F2 (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, int32_t* ___1_dataOffset, const RuntimeMethod* method) 
{
	{
		// var utpOverhead = UnityTransportProtocol.ComputePacketOverhead(ref connection, out dataOffset);
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_0 = ___0_connection;
		int32_t* L_1 = ___1_dataOffset;
		int32_t L_2;
		L_2 = UnityTransportProtocol_ComputePacketOverhead_m7F9F4F3826262A4AD39C1176E4C91AA76C6BB11B(L_0, L_1, NULL);
		// dataOffset += RelayMessageRelay.Length;
		int32_t* L_3 = ___1_dataOffset;
		int32_t* L_4 = ___1_dataOffset;
		int32_t L_5 = *((int32_t*)L_4);
		*((int32_t*)L_3) = (int32_t)((int32_t)il2cpp_codegen_add(L_5, ((int32_t)38)));
		// return utpOverhead + RelayMessageRelay.Length;
		return ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)38)));
	}
}
// System.Void Unity.Networking.Transport.Relay.RelayNetworkProtocol::ProcessReceive(System.IntPtr,Unity.Networking.Transport.NetworkInterfaceEndPoint&,System.Int32,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr,Unity.Networking.Transport.ProcessPacketCommand&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayNetworkProtocol_ProcessReceive_m31C9840BD1234A5598DAF1D57D750A6A79849765 (intptr_t ___0_stream, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_endpoint, int32_t ___2_size, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___3_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, intptr_t ___5_userData, ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* ___6_command, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* V_0 = NULL;
	SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* V_1 = NULL;
	uint32_t V_2 = 0;
	bool V_3 = false;
	SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* V_4 = NULL;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_5;
	memset((&V_5), 0, sizeof(V_5));
	uintptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B10_0 = 0;
	{
		// var protocolData = (RelayProtocolData*)userData;
		intptr_t L_0 = ___5_userData;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F*)L_1;
		// if (endpoint != protocolData->ServerEndpoint)
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_2 = ___1_endpoint;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 L_3 = (*(NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686*)L_2);
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_4 = V_0;
		NullCheck(L_4);
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 L_5 = L_4->___ServerEndpoint_9;
		bool L_6;
		L_6 = NetworkInterfaceEndPoint_op_Inequality_m61D38D4018E83A8A799C7A1797DAF8EFA34AA6B6(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		// command.Type = ProcessPacketCommandType.Drop;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_7 = ___6_command;
		L_7->___Type_0 = 0;
		// return;
		return;
	}

IL_0024:
	{
		// if (protocolData->ConnectionState == RelayConnectionState.Handshake)
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_8 = V_0;
		NullCheck(L_8);
		uint8_t L_9 = L_8->___ConnectionState_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_00bb;
		}
	}
	{
		// var secureUserData = (SecureUserData*)protocolData->SecureClientState.ClientConfig->transportUserData;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_10 = V_0;
		NullCheck(L_10);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_11 = (&L_10->___SecureClientState_11);
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_12 = L_11->___ClientConfig_1;
		NullCheck(L_12);
		intptr_t L_13 = L_12->___transportUserData_11;
		void* L_14;
		L_14 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_13, NULL);
		V_1 = (SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B*)L_14;
		// SecureNetworkProtocol.SetSecureUserData(stream, size, ref endpoint, ref sendInterface, ref queueHandle, secureUserData);
		intptr_t L_15 = ___0_stream;
		int32_t L_16 = ___2_size;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_17 = ___1_endpoint;
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_18 = ___3_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_19 = ___4_queueHandle;
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_20 = V_1;
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		SecureNetworkProtocol_SetSecureUserData_m26108E90B1F178D279794549BC3435FE957E3542(L_15, L_16, L_17, L_18, L_19, L_20, NULL);
		// var clientState = Binding.unitytls_client_get_state(protocolData->SecureClientState.ClientPtr);
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_21 = V_0;
		NullCheck(L_21);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_22 = (&L_21->___SecureClientState_11);
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_23 = L_22->___ClientPtr_0;
		uint32_t L_24;
		L_24 = Binding_unitytls_client_get_state_mFA36FD1C48800D3B88D142ED9E1FFFC65F196B0F(L_23, NULL);
		V_2 = L_24;
		// if (clientState == Binding.UnityTLSClientState_Handshake
		//     || clientState == Binding.UnityTLSClientState_Init)
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)2)))
		{
			goto IL_006b;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_00a0;
		}
	}

IL_006b:
	{
		// bool shouldRunAgain = false;
		V_3 = (bool)0;
	}

IL_006d:
	{
		// handshakeResult = SecureNetworkProtocol.SecureHandshakeStep(ref protocolData->SecureClientState);
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_27 = V_0;
		NullCheck(L_27);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_28 = (&L_27->___SecureClientState_11);
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		uint32_t L_29;
		L_29 = SecureNetworkProtocol_SecureHandshakeStep_m28362FB06B2A4D53DBA0A066C7C3BB61FCD3C910(L_28, NULL);
		// clientState = Binding.unitytls_client_get_state(protocolData->SecureClientState.ClientPtr);
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_30 = V_0;
		NullCheck(L_30);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_31 = (&L_30->___SecureClientState_11);
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_32 = L_31->___ClientPtr_0;
		uint32_t L_33;
		L_33 = Binding_unitytls_client_get_state_mFA36FD1C48800D3B88D142ED9E1FFFC65F196B0F(L_32, NULL);
		V_2 = L_33;
		// shouldRunAgain = (size != 0 && secureUserData->BytesProcessed == 0 && clientState == Binding.UnityTLSClientState_Handshake);
		int32_t L_34 = ___2_size;
		if (!L_34)
		{
			goto IL_009b;
		}
	}
	{
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_35 = V_1;
		NullCheck(L_35);
		int32_t L_36 = L_35->___BytesProcessed_5;
		if (L_36)
		{
			goto IL_009b;
		}
	}
	{
		uint32_t L_37 = V_2;
		G_B10_0 = ((((int32_t)L_37) == ((int32_t)2))? 1 : 0);
		goto IL_009c;
	}

IL_009b:
	{
		G_B10_0 = 0;
	}

IL_009c:
	{
		V_3 = (bool)G_B10_0;
		// while (shouldRunAgain);
		bool L_38 = V_3;
		if (L_38)
		{
			goto IL_006d;
		}
	}

IL_00a0:
	{
		// if (clientState == Binding.UnityTLSClientState_Messaging)
		uint32_t L_39 = V_2;
		if ((!(((uint32_t)L_39) == ((uint32_t)3))))
		{
			goto IL_00b2;
		}
	}
	{
		// protocolData->ConnectionState = RelayConnectionState.Binding;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_40 = V_0;
		NullCheck(L_40);
		L_40->___ConnectionState_0 = 2;
		// protocolData->SecureState = SecuredRelayConnectionState.Secured;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_41 = V_0;
		NullCheck(L_41);
		L_41->___SecureState_1 = 1;
	}

IL_00b2:
	{
		// command.Type = ProcessPacketCommandType.Drop;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_42 = ___6_command;
		L_42->___Type_0 = 0;
		// return;
		return;
	}

IL_00bb:
	{
		// if (protocolData->ServerData.IsSecure == 1 &&
		//     (protocolData->SecureState != SecuredRelayConnectionState.Secured))
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_43 = V_0;
		NullCheck(L_43);
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_44 = (&L_43->___ServerData_10);
		uint8_t L_45 = L_44->___IsSecure_7;
		if ((!(((uint32_t)L_45) == ((uint32_t)1))))
		{
			goto IL_00db;
		}
	}
	{
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_46 = V_0;
		NullCheck(L_46);
		uint8_t L_47 = L_46->___SecureState_1;
		if ((((int32_t)L_47) == ((int32_t)1)))
		{
			goto IL_00db;
		}
	}
	{
		// command.Type = ProcessPacketCommandType.Drop;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_48 = ___6_command;
		L_48->___Type_0 = 0;
		// return;
		return;
	}

IL_00db:
	{
		// if (protocolData->ServerData.IsSecure == 1 &&
		//     (protocolData->SecureState == SecuredRelayConnectionState.Secured))
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_49 = V_0;
		NullCheck(L_49);
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_50 = (&L_49->___ServerData_10);
		uint8_t L_51 = L_50->___IsSecure_7;
		if ((!(((uint32_t)L_51) == ((uint32_t)1))))
		{
			goto IL_0192;
		}
	}
	{
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_52 = V_0;
		NullCheck(L_52);
		uint8_t L_53 = L_52->___SecureState_1;
		if ((!(((uint32_t)L_53) == ((uint32_t)1))))
		{
			goto IL_0192;
		}
	}
	{
		// var secureUserData = (SecureUserData*)protocolData->SecureClientState.ClientConfig->transportUserData;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_54 = V_0;
		NullCheck(L_54);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_55 = (&L_54->___SecureClientState_11);
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_56 = L_55->___ClientConfig_1;
		NullCheck(L_56);
		intptr_t L_57 = L_56->___transportUserData_11;
		void* L_58;
		L_58 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_57, NULL);
		V_4 = (SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B*)L_58;
		// SecureNetworkProtocol.SetSecureUserData(stream, size, ref endpoint, ref sendInterface, ref queueHandle, secureUserData);
		intptr_t L_59 = ___0_stream;
		int32_t L_60 = ___2_size;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_61 = ___1_endpoint;
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_62 = ___3_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_63 = ___4_queueHandle;
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_64 = V_4;
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		SecureNetworkProtocol_SetSecureUserData_m26108E90B1F178D279794549BC3435FE957E3542(L_59, L_60, L_61, L_62, L_63, L_64, NULL);
		// var buffer = new NativeArray<byte>(NetworkParameterConstants.MTU, Allocator.Temp);
		NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F((&V_5), ((int32_t)1400), 2, 1, NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		// var bytesRead = new UIntPtr();
		il2cpp_codegen_initobj((&V_6), sizeof(uintptr_t));
		// var result = Binding.unitytls_client_read_data(protocolData->SecureClientState.ClientPtr,
		//     (byte*)buffer.GetUnsafePtr(), new UIntPtr(NetworkParameterConstants.MTU),
		//     &bytesRead);
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_65 = V_0;
		NullCheck(L_65);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_66 = (&L_65->___SecureClientState_11);
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_67 = L_66->___ClientPtr_0;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_68 = V_5;
		void* L_69;
		L_69 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_68, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		uintptr_t L_70;
		memset((&L_70), 0, sizeof(L_70));
		UIntPtr__ctor_m5915109E3F198CA16FDFA9CF438FAAEBFB90DE27((&L_70), ((int32_t)1400), /*hidden argument*/NULL);
		uint32_t L_71;
		L_71 = Binding_unitytls_client_read_data_mF232A9B9C2DB17E25ACB540144CB2C4CD3D67C2F(L_67, (uint8_t*)L_69, L_70, (uintptr_t*)((uintptr_t)(&V_6)), NULL);
		// if (result == Binding.UNITYTLS_SUCCESS)
		if (L_71)
		{
			goto IL_0189;
		}
	}
	{
		// UnsafeUtility.MemCpy((void*)stream, buffer.GetUnsafePtr(), bytesRead.ToUInt32());
		intptr_t L_72 = ___0_stream;
		void* L_73;
		L_73 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_72, NULL);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_74 = V_5;
		void* L_75;
		L_75 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_74, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		uint32_t L_76;
		L_76 = UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965((&V_6), NULL);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_73, L_75, ((int64_t)(uint64_t)L_76), NULL);
		// if (ProcessRelayData(stream, ref endpoint, (int)bytesRead.ToUInt32(), ref sendInterface, ref queueHandle, ref command, protocolData))
		intptr_t L_77 = ___0_stream;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_78 = ___1_endpoint;
		uint32_t L_79;
		L_79 = UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965((&V_6), NULL);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_80 = ___3_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_81 = ___4_queueHandle;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_82 = ___6_command;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_83 = V_0;
		bool L_84;
		L_84 = RelayNetworkProtocol_ProcessRelayData_m7B1D94B8862612904AA706F6315B3299FFB3A68D(L_77, L_78, L_79, L_80, L_81, L_82, L_83, NULL);
		if (!L_84)
		{
			goto IL_0189;
		}
	}
	{
		// return;
		return;
	}

IL_0189:
	{
		// command.Type = ProcessPacketCommandType.Drop;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_85 = ___6_command;
		L_85->___Type_0 = 0;
		// return;
		return;
	}

IL_0192:
	{
		// if (ProcessRelayData(stream, ref endpoint, size, ref sendInterface, ref queueHandle, ref command, protocolData))
		intptr_t L_86 = ___0_stream;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_87 = ___1_endpoint;
		int32_t L_88 = ___2_size;
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_89 = ___3_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_90 = ___4_queueHandle;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_91 = ___6_command;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_92 = V_0;
		bool L_93;
		L_93 = RelayNetworkProtocol_ProcessRelayData_m7B1D94B8862612904AA706F6315B3299FFB3A68D(L_86, L_87, L_88, L_89, L_90, L_91, L_92, NULL);
		if (!L_93)
		{
			goto IL_01a3;
		}
	}
	{
		// return;
		return;
	}

IL_01a3:
	{
		// command.Type = ProcessPacketCommandType.Drop;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_94 = ___6_command;
		L_94->___Type_0 = 0;
		// }
		return;
	}
}
// System.Boolean Unity.Networking.Transport.Relay.RelayNetworkProtocol::ProcessRelayData(System.IntPtr,Unity.Networking.Transport.NetworkInterfaceEndPoint&,System.Int32,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,Unity.Networking.Transport.ProcessPacketCommand&,Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RelayNetworkProtocol_ProcessRelayData_m7B1D94B8862612904AA706F6315B3299FFB3A68D (intptr_t ___0_stream, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_endpoint, int32_t ___2_size, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___3_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* ___5_command, RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* ___6_protocolData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15731A1E06B7C86499C0009DA7A8F67F97266BAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3923B197E2543D7500C40D6B136438D9FFF7410A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7409A26ED449DE17C3414DC894FDD7C65BE6756F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5AD2CAF646824673D1C32E4BF28A1CE3DCC0B6B);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* V_2 = NULL;
	RelayMessageAccepted_t899EF667E1A400FA62FB35FF7F6AFA28087F16EB V_3;
	memset((&V_3), 0, sizeof(V_3));
	SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 V_4;
	memset((&V_4), 0, sizeof(V_4));
	RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49 V_5;
	memset((&V_5), 0, sizeof(V_5));
	uint8_t V_6 = 0;
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 V_7;
	memset((&V_7), 0, sizeof(V_7));
	uint8_t* V_8 = NULL;
	uint8_t V_9 = 0;
	{
		// var data = (byte*)stream;
		intptr_t L_0 = ___0_stream;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (uint8_t*)L_1;
		// var header = *(RelayMessageHeader*)data;
		uint8_t* L_2 = V_0;
		RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72 L_3 = (*(RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72*)L_2);
		V_1 = L_3;
		// if (size < RelayMessageHeader.Length || !header.IsValid())
		int32_t L_4 = ___2_size;
		if ((((int32_t)L_4) < ((int32_t)4)))
		{
			goto IL_001b;
		}
	}
	{
		bool L_5;
		L_5 = RelayMessageHeader_IsValid_m87A499AEA741893D3947B9648833443FC3383113((&V_1), NULL);
		if (L_5)
		{
			goto IL_0025;
		}
	}

IL_001b:
	{
		// command.Type = ProcessPacketCommandType.Drop;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_6 = ___5_command;
		L_6->___Type_0 = 0;
		// return true;
		return (bool)1;
	}

IL_0025:
	{
		// if (protocolData->ServerData.IsSecure == 1 &&
		//     (protocolData->SecureState == SecuredRelayConnectionState.Secured))
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_7 = ___6_protocolData;
		NullCheck(L_7);
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_8 = (&L_7->___ServerData_10);
		uint8_t L_9 = L_8->___IsSecure_7;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0061;
		}
	}
	{
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_10 = ___6_protocolData;
		NullCheck(L_10);
		uint8_t L_11 = L_10->___SecureState_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_0061;
		}
	}
	{
		// var secureUserData = (SecureUserData*)protocolData->SecureClientState.ClientConfig->transportUserData;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_12 = ___6_protocolData;
		NullCheck(L_12);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_13 = (&L_12->___SecureClientState_11);
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_14 = L_13->___ClientConfig_1;
		NullCheck(L_14);
		intptr_t L_15 = L_14->___transportUserData_11;
		void* L_16;
		L_16 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_15, NULL);
		V_2 = (SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B*)L_16;
		// SecureNetworkProtocol.SetSecureUserData(stream, size, ref endpoint, ref sendInterface, ref queueHandle, secureUserData);
		intptr_t L_17 = ___0_stream;
		int32_t L_18 = ___2_size;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_19 = ___1_endpoint;
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_20 = ___3_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_21 = ___4_queueHandle;
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_22 = V_2;
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		SecureNetworkProtocol_SetSecureUserData_m26108E90B1F178D279794549BC3435FE957E3542(L_17, L_18, L_19, L_20, L_21, L_22, NULL);
	}

IL_0061:
	{
		// switch (header.Type)
		RelayMessageHeader_t94DF4E7A91542041D9DE94FA1879477DCFBE3E72 L_23 = V_1;
		uint8_t L_24 = L_23.___Type_2;
		V_6 = L_24;
		uint8_t L_25 = V_6;
		if ((!(((uint32_t)L_25) <= ((uint32_t)6))))
		{
			goto IL_007d;
		}
	}
	{
		uint8_t L_26 = V_6;
		if ((((int32_t)L_26) == ((int32_t)1)))
		{
			goto IL_0094;
		}
	}
	{
		uint8_t L_27 = V_6;
		if ((((int32_t)L_27) == ((int32_t)6)))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02e0;
	}

IL_007d:
	{
		uint8_t L_28 = V_6;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)10))))
		{
			goto IL_01c2;
		}
	}
	{
		uint8_t L_29 = V_6;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)12))))
		{
			goto IL_02cd;
		}
	}
	{
		goto IL_02e0;
	}

IL_0094:
	{
		// command.Type = ProcessPacketCommandType.Drop;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_30 = ___5_command;
		L_30->___Type_0 = 0;
		// if (size != RelayMessageHeader.Length)
		int32_t L_31 = ___2_size;
		if ((((int32_t)L_31) == ((int32_t)4)))
		{
			goto IL_00ac;
		}
	}
	{
		// UnityEngine.Debug.LogError("Received an invalid Relay Bind Received message: Wrong length");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral7409A26ED449DE17C3414DC894FDD7C65BE6756F, NULL);
		// return true;
		return (bool)1;
	}

IL_00ac:
	{
		// protocolData->ConnectionState = RelayConnectionState.Bound;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_32 = ___6_protocolData;
		NullCheck(L_32);
		L_32->___ConnectionState_0 = 3;
		// if (protocolData->ConnectOnBind)
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_33 = ___6_protocolData;
		NullCheck(L_33);
		bool L_34 = L_33->___ConnectOnBind_12;
		if (!L_34)
		{
			goto IL_00c7;
		}
	}
	{
		// SendConnectionRequestToRelay(protocolData, ref sendInterface, ref queueHandle);
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_35 = ___6_protocolData;
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_36 = ___3_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_37 = ___4_queueHandle;
		RelayNetworkProtocol_SendConnectionRequestToRelay_mB5D30B668FC0962E5DF3A55404B8292CF53D613E(L_35, L_36, L_37, NULL);
	}

IL_00c7:
	{
		// command.Type = ProcessPacketCommandType.ProtocolStatusUpdate;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_38 = ___5_command;
		L_38->___Type_0 = ((int32_t)10);
		// command.As.ProtocolStatusUpdate.Status = (int)RelayConnectionStatus.Established;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_39 = ___5_command;
		ProcessPacketCommandAs_t3C67AC3B9A8B54418EC8E41F0A293F51026E6A78* L_40 = (&L_39->___As_3);
		AsProtocolStatusUpdate_t7D9E6F8F2D1D4DA7886545F8DEE54F4F0956746A* L_41 = (&L_40->___ProtocolStatusUpdate_4);
		L_41->___Status_0 = 1;
		// return true;
		return (bool)1;
	}

IL_00e4:
	{
		// command.Type = ProcessPacketCommandType.Drop;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_42 = ___5_command;
		L_42->___Type_0 = 0;
		// if (size != RelayMessageAccepted.Length)
		int32_t L_43 = ___2_size;
		if ((((int32_t)L_43) == ((int32_t)((int32_t)36))))
		{
			goto IL_00fd;
		}
	}
	{
		// UnityEngine.Debug.LogError("Received an invalid Relay Accepted message: Wrong length");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral15731A1E06B7C86499C0009DA7A8F67F97266BAE, NULL);
		// return true;
		return (bool)1;
	}

IL_00fd:
	{
		// if (protocolData->HostAllocationId != default)
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_44 = ___6_protocolData;
		NullCheck(L_44);
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_45 = L_44->___HostAllocationId_8;
		il2cpp_codegen_initobj((&V_7), sizeof(RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984));
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_46 = V_7;
		bool L_47;
		L_47 = RelayAllocationId_op_Inequality_m9FA8F02E88ECEC66668FC0EF8D7A4DE71D3DEB53(L_45, L_46, NULL);
		if (!L_47)
		{
			goto IL_0117;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0117:
	{
		// var acceptedMessage = *(RelayMessageAccepted*)data;
		uint8_t* L_48 = V_0;
		RelayMessageAccepted_t899EF667E1A400FA62FB35FF7F6AFA28087F16EB L_49 = (*(RelayMessageAccepted_t899EF667E1A400FA62FB35FF7F6AFA28087F16EB*)L_48);
		V_3 = L_49;
		// protocolData->HostAllocationId = acceptedMessage.FromAllocationId;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_50 = ___6_protocolData;
		RelayMessageAccepted_t899EF667E1A400FA62FB35FF7F6AFA28087F16EB L_51 = V_3;
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_52 = L_51.___FromAllocationId_1;
		NullCheck(L_50);
		L_50->___HostAllocationId_8 = L_52;
		// command.Type = ProcessPacketCommandType.AddressUpdate;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_53 = ___5_command;
		L_53->___Type_0 = 1;
		// command.Address = default;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_54 = ___5_command;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_55 = (&L_54->___Address_1);
		il2cpp_codegen_initobj(L_55, sizeof(NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686));
		// command.SessionId = protocolData->ConnectionReceiveToken;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_56 = ___5_command;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_57 = ___6_protocolData;
		NullCheck(L_57);
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_58 = L_57->___ConnectionReceiveToken_2;
		L_56->___SessionId_2 = L_58;
		// command.As.AddressUpdate.NewAddress = default;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_59 = ___5_command;
		ProcessPacketCommandAs_t3C67AC3B9A8B54418EC8E41F0A293F51026E6A78* L_60 = (&L_59->___As_3);
		AsAddressUpdate_tF9F7E0B706D3CB02AADB4946E23F9287B281CB52* L_61 = (&L_60->___AddressUpdate_0);
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_62 = (&L_61->___NewAddress_0);
		il2cpp_codegen_initobj(L_62, sizeof(NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686));
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_63 = ___5_command;
		ProcessPacketCommandAs_t3C67AC3B9A8B54418EC8E41F0A293F51026E6A78* L_64 = (&L_63->___As_3);
		AsAddressUpdate_tF9F7E0B706D3CB02AADB4946E23F9287B281CB52* L_65 = (&L_64->___AddressUpdate_0);
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_66 = (&L_65->___NewAddress_0);
		U3CdataU3Ee__FixedBuffer_tA444E672C5AB32F413A3235C5075E48F04008AA0* L_67 = (&L_66->___data_2);
		uint8_t* L_68 = (&L_67->___FixedElementField_0);
		V_8 = L_68;
		// fixed(byte* addressPtr = command.As.AddressUpdate.NewAddress.data)
		uint8_t* L_69 = V_8;
		// *(RelayAllocationId*)addressPtr = acceptedMessage.FromAllocationId;
		RelayMessageAccepted_t899EF667E1A400FA62FB35FF7F6AFA28087F16EB L_70 = V_3;
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_71 = L_70.___FromAllocationId_1;
		*(RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984*)((uintptr_t)L_69) = L_71;
		V_8 = (uint8_t*)((uintptr_t)0);
		// var type = UdpCProtocol.ConnectionRequest;
		// var token = protocolData->ConnectionReceiveToken;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_72 = ___6_protocolData;
		NullCheck(L_72);
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_73 = L_72->___ConnectionReceiveToken_2;
		V_4 = L_73;
		// var result = SendHeaderOnlyHostMessage(
		//     type, token, protocolData, ref acceptedMessage.FromAllocationId, ref sendInterface, ref queueHandle);
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_74 = V_4;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_75 = ___6_protocolData;
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* L_76 = (&(&V_3)->___FromAllocationId_1);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_77 = ___3_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_78 = ___4_queueHandle;
		int32_t L_79;
		L_79 = RelayNetworkProtocol_SendHeaderOnlyHostMessage_m88EFE5904D925CF2537A546691441FD9FA7D6D3F(0, L_74, L_75, L_76, L_77, L_78, NULL);
		// if (result < 0)
		if ((((int32_t)L_79) >= ((int32_t)0)))
		{
			goto IL_01c0;
		}
	}
	{
		// Debug.LogError("Failed to send Connection Request message to host.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralA5AD2CAF646824673D1C32E4BF28A1CE3DCC0B6B, NULL);
		// return false;
		return (bool)0;
	}

IL_01c0:
	{
		// return true;
		return (bool)1;
	}

IL_01c2:
	{
		// var relayMessage = *(RelayMessageRelay*)data;
		uint8_t* L_80 = V_0;
		RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49 L_81 = (*(RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49*)L_80);
		V_5 = L_81;
		// relayMessage.DataLength = RelayNetworkProtocol.SwitchEndianness(relayMessage.DataLength);
		RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49 L_82 = V_5;
		uint16_t L_83 = L_82.___DataLength_3;
		uint16_t L_84;
		L_84 = RelayNetworkProtocol_SwitchEndianness_m06F5B2C60C6F9A88468FA3F720977E2CF7CDD124(L_83, NULL);
		(&V_5)->___DataLength_3 = L_84;
		// if (size < RelayMessageRelay.Length || size != RelayMessageRelay.Length + relayMessage.DataLength)
		int32_t L_85 = ___2_size;
		if ((((int32_t)L_85) < ((int32_t)((int32_t)38))))
		{
			goto IL_01ef;
		}
	}
	{
		int32_t L_86 = ___2_size;
		RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49 L_87 = V_5;
		uint16_t L_88 = L_87.___DataLength_3;
		if ((((int32_t)L_86) == ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)38), (int32_t)L_88)))))
		{
			goto IL_0203;
		}
	}

IL_01ef:
	{
		// UnityEngine.Debug.LogError($"Received an invalid Relay Received message: Wrong length");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral3923B197E2543D7500C40D6B136438D9FFF7410A, NULL);
		// command.Type = ProcessPacketCommandType.Drop;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_89 = ___5_command;
		L_89->___Type_0 = 0;
		// return true;
		return (bool)1;
	}

IL_0203:
	{
		// UnityTransportProtocol.ProcessReceive(stream + RelayMessageRelay.Length, ref endpoint,
		//     size - RelayMessageRelay.Length, ref sendInterface, ref queueHandle, IntPtr.Zero, ref command);
		intptr_t L_90 = ___0_stream;
		intptr_t L_91;
		L_91 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_90, ((int32_t)38), NULL);
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_92 = ___1_endpoint;
		int32_t L_93 = ___2_size;
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_94 = ___3_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_95 = ___4_queueHandle;
		intptr_t L_96 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_97 = ___5_command;
		UnityTransportProtocol_ProcessReceive_m5157A3D3CAE03473F57E45490FEA106A4828281E(L_91, L_92, ((int32_t)il2cpp_codegen_subtract(L_93, ((int32_t)38))), L_94, L_95, L_96, L_97, NULL);
		// switch (command.Type)
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_98 = ___5_command;
		uint8_t L_99 = L_98->___Type_0;
		V_9 = L_99;
		uint8_t L_100 = V_9;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_100, 2)))
		{
			case 0:
			{
				goto IL_024b;
			}
			case 1:
			{
				goto IL_0298;
			}
			case 2:
			{
				goto IL_0298;
			}
			case 3:
			{
				goto IL_0255;
			}
			case 4:
			{
				goto IL_0287;
			}
			case 5:
			{
				goto IL_026e;
			}
		}
	}
	{
		goto IL_0298;
	}

IL_024b:
	{
		// protocolData->ConnectionState = RelayConnectionState.Connected;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_101 = ___6_protocolData;
		NullCheck(L_101);
		L_101->___ConnectionState_0 = 4;
		// break;
		goto IL_0298;
	}

IL_0255:
	{
		// command.As.Data.Offset += RelayMessageRelay.Length;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_102 = ___5_command;
		ProcessPacketCommandAs_t3C67AC3B9A8B54418EC8E41F0A293F51026E6A78* L_103 = (&L_102->___As_3);
		AsData_t8E59FF5C35A4A26CBC022D19744117E27B46609D* L_104 = (&L_103->___Data_2);
		int32_t* L_105 = (&L_104->___Offset_0);
		int32_t* L_106 = L_105;
		int32_t L_107 = *((int32_t*)L_106);
		*((int32_t*)L_106) = (int32_t)((int32_t)il2cpp_codegen_add(L_107, ((int32_t)38)));
		// break;
		goto IL_0298;
	}

IL_026e:
	{
		// command.As.DataWithImplicitConnectionAccept.Offset += RelayMessageRelay.Length;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_108 = ___5_command;
		ProcessPacketCommandAs_t3C67AC3B9A8B54418EC8E41F0A293F51026E6A78* L_109 = (&L_108->___As_3);
		AsDataWithImplicitConnectionAccept_t6D7E405008359118E0EEF160A655ECD30453FBA2* L_110 = (&L_109->___DataWithImplicitConnectionAccept_3);
		int32_t* L_111 = (&L_110->___Offset_0);
		int32_t* L_112 = L_111;
		int32_t L_113 = *((int32_t*)L_112);
		*((int32_t*)L_112) = (int32_t)((int32_t)il2cpp_codegen_add(L_113, ((int32_t)38)));
		// break;
		goto IL_0298;
	}

IL_0287:
	{
		// SendRelayDisconnect(
		//     protocolData, ref relayMessage.FromAllocationId, ref sendInterface, ref queueHandle);
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_114 = ___6_protocolData;
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* L_115 = (&(&V_5)->___FromAllocationId_1);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_116 = ___3_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_117 = ___4_queueHandle;
		RelayNetworkProtocol_SendRelayDisconnect_mCC1BE4666F8A5962180E487C7D774B88304748ED(L_114, L_115, L_116, L_117, NULL);
	}

IL_0298:
	{
		// command.Address = default;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_118 = ___5_command;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_119 = (&L_118->___Address_1);
		il2cpp_codegen_initobj(L_119, sizeof(NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686));
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_120 = ___5_command;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_121 = (&L_120->___Address_1);
		U3CdataU3Ee__FixedBuffer_tA444E672C5AB32F413A3235C5075E48F04008AA0* L_122 = (&L_121->___data_2);
		uint8_t* L_123 = (&L_122->___FixedElementField_0);
		V_8 = L_123;
		// fixed(byte* addressPtr = command.Address.data)
		uint8_t* L_124 = V_8;
		// *(RelayAllocationId*)addressPtr = relayMessage.FromAllocationId;
		RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49 L_125 = V_5;
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_126 = L_125.___FromAllocationId_1;
		*(RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984*)((uintptr_t)L_124) = L_126;
		V_8 = (uint8_t*)((uintptr_t)0);
		// return true;
		return (bool)1;
	}

IL_02cd:
	{
		// command.Type = ProcessPacketCommandType.Drop;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_127 = ___5_command;
		L_127->___Type_0 = 0;
		// ProcessRelayError(data, size, ref command);
		uint8_t* L_128 = V_0;
		int32_t L_129 = ___2_size;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_130 = ___5_command;
		RelayNetworkProtocol_ProcessRelayError_m01B304680E28DF2AE71E59C22F536154F1C274A5(L_128, L_129, L_130, NULL);
		// return true;
		return (bool)1;
	}

IL_02e0:
	{
		// command.Type = ProcessPacketCommandType.Drop;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_131 = ___5_command;
		L_131->___Type_0 = 0;
		// return true;
		return (bool)1;
	}
}
// System.Void Unity.Networking.Transport.Relay.RelayNetworkProtocol::ProcessRelayError(System.Byte*,System.Int32,Unity.Networking.Transport.ProcessPacketCommand&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayNetworkProtocol_ProcessRelayError_m01B304680E28DF2AE71E59C22F536154F1C274A5 (uint8_t* ___0_data, int32_t ___1_size, ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* ___2_command, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12869590008F9E98F38220AEFA20CD0DD2FDD039);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A35BA86ED5D68F83A947957F374F21F4B7BABFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral627166C3984891FD79CBB5C99BB57C0976E415DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6846726A783CA92C155937A094A4A92AF1B1F1D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87C590EDF60CC15EA7DCF5E869D4A9F2B9E06870);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral946EBBEF39FE8ACA7A5A3B7C38586A606D325445);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B3B46549FFE995F026B25C55B1EF47FD0363794);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DC6B64F9D0A542576B62FC5F44BEA41A5B44C55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAB4A74374277C4E346DF3DF02B2A80F8A9EFD21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDF0D21E4FC23BF065102DA0D2D2B80F0258F71B);
		s_Il2CppMethodInitialized = true;
	}
	RelayMessageError_tCDCB652879438DF82C173B436BAA9743065667BD V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0x0;
	{
		// if (size != RelayMessageError.Length)
		int32_t L_0 = ___1_size;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)21))))
		{
			goto IL_0010;
		}
	}
	{
		// Debug.LogError("Received an invalid Relay Error message (wrong length).");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralCAB4A74374277C4E346DF3DF02B2A80F8A9EFD21, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// var errorMessage = *(RelayMessageError*)data;
		uint8_t* L_1 = ___0_data;
		RelayMessageError_tCDCB652879438DF82C173B436BAA9743065667BD L_2 = (*(RelayMessageError_tCDCB652879438DF82C173B436BAA9743065667BD*)L_1);
		V_0 = L_2;
		// switch (errorMessage.ErrorCode)
		RelayMessageError_tCDCB652879438DF82C173B436BAA9743065667BD L_3 = V_0;
		uint8_t L_4 = L_3.___ErrorCode_2;
		V_1 = L_4;
		uint8_t L_5 = V_1;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_004e;
			}
			case 2:
			{
				goto IL_005a;
			}
			case 3:
			{
				goto IL_0066;
			}
			case 4:
			{
				goto IL_0072;
			}
			case 5:
			{
				goto IL_007e;
			}
			case 6:
			{
				goto IL_008a;
			}
		}
	}
	{
		goto IL_0096;
	}

IL_0042:
	{
		// Debug.LogError("Received error message from Relay: invalid protocol version. " +
		//     "Make sure your Unity Transport package is up to date.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral627166C3984891FD79CBB5C99BB57C0976E415DB, NULL);
		// break;
		goto IL_00b0;
	}

IL_004e:
	{
		// Debug.LogError("Received error message from Relay: player timed out due to inactivity.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral9B3B46549FFE995F026B25C55B1EF47FD0363794, NULL);
		// break;
		goto IL_00b0;
	}

IL_005a:
	{
		// Debug.LogError("Received error message from Relay: unauthorized.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral946EBBEF39FE8ACA7A5A3B7C38586A606D325445, NULL);
		// break;
		goto IL_00b0;
	}

IL_0066:
	{
		// Debug.LogError("Received error message from Relay: allocation ID client mismatch.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral9DC6B64F9D0A542576B62FC5F44BEA41A5B44C55, NULL);
		// break;
		goto IL_00b0;
	}

IL_0072:
	{
		// Debug.LogError("Received error message from Relay: allocation ID not found.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralDDF0D21E4FC23BF065102DA0D2D2B80F0258F71B, NULL);
		// break;
		goto IL_00b0;
	}

IL_007e:
	{
		// Debug.LogError("Received error message from Relay: not connected.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral87C590EDF60CC15EA7DCF5E869D4A9F2B9E06870, NULL);
		// break;
		goto IL_00b0;
	}

IL_008a:
	{
		// Debug.LogError("Received error message from Relay: self-connect not allowed.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral12869590008F9E98F38220AEFA20CD0DD2FDD039, NULL);
		// break;
		goto IL_00b0;
	}

IL_0096:
	{
		// Debug.LogError($"Received error message from Relay with unknown error code {errorMessage.ErrorCode}");
		RelayMessageError_tCDCB652879438DF82C173B436BAA9743065667BD L_6 = V_0;
		uint8_t L_7 = L_6.___ErrorCode_2;
		uint8_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral3A35BA86ED5D68F83A947957F374F21F4B7BABFD, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_10, NULL);
	}

IL_00b0:
	{
		// if (errorMessage.ErrorCode == 1 || errorMessage.ErrorCode == 4)
		RelayMessageError_tCDCB652879438DF82C173B436BAA9743065667BD L_11 = V_0;
		uint8_t L_12 = L_11.___ErrorCode_2;
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_00c2;
		}
	}
	{
		RelayMessageError_tCDCB652879438DF82C173B436BAA9743065667BD L_13 = V_0;
		uint8_t L_14 = L_13.___ErrorCode_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)4))))
		{
			goto IL_00e5;
		}
	}

IL_00c2:
	{
		// Debug.LogError("Relay allocation is invalid. See NetworkDriver.GetRelayConnectionStatus and " +
		//     "RelayConnectionStatus.AllocationInvalid for details on how to handle this situation.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral6846726A783CA92C155937A094A4A92AF1B1F1D4, NULL);
		// command.Type = ProcessPacketCommandType.ProtocolStatusUpdate;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_15 = ___2_command;
		L_15->___Type_0 = ((int32_t)10);
		// command.As.ProtocolStatusUpdate.Status = (int)RelayConnectionStatus.AllocationInvalid;
		ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* L_16 = ___2_command;
		ProcessPacketCommandAs_t3C67AC3B9A8B54418EC8E41F0A293F51026E6A78* L_17 = (&L_16->___As_3);
		AsProtocolStatusUpdate_t7D9E6F8F2D1D4DA7886545F8DEE54F4F0956746A* L_18 = (&L_17->___ProtocolStatusUpdate_4);
		L_18->___Status_0 = 2;
	}

IL_00e5:
	{
		// }
		return;
	}
}
// System.Int32 Unity.Networking.Transport.Relay.RelayNetworkProtocol::SendMessage(Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData*,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkInterfaceSendHandle&,Unity.Networking.Transport.NetworkSendQueueHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RelayNetworkProtocol_SendMessage_m90991C8E728497F7EEC594CE0478BA866B6BDBC2 (RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* ___0_protocolData, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___2_sendHandle, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___3_queueHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Invoke_mFEE8AD2F13BFB25522EFCA2233290EF5A4BBCE32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32637BB6E33DC700394FE380D62321C6F5ABF26F);
		s_Il2CppMethodInitialized = true;
	}
	SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* V_0 = NULL;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint32_t V_2 = 0;
	{
		// if (protocolData->ServerData.IsSecure == 1 && protocolData->SecureState == SecuredRelayConnectionState.Secured)
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_0 = ___0_protocolData;
		NullCheck(L_0);
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_1 = (&L_0->___ServerData_10);
		uint8_t L_2 = L_1->___IsSecure_7;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_00d5;
		}
	}
	{
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_3 = ___0_protocolData;
		NullCheck(L_3);
		uint8_t L_4 = L_3->___SecureState_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_00d5;
		}
	}
	{
		// var secureUserData = (SecureUserData*)protocolData->SecureClientState.ClientConfig->transportUserData;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_5 = ___0_protocolData;
		NullCheck(L_5);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_6 = (&L_5->___SecureClientState_11);
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_7 = L_6->___ClientConfig_1;
		NullCheck(L_7);
		intptr_t L_8 = L_7->___transportUserData_11;
		void* L_9;
		L_9 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_8, NULL);
		V_0 = (SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B*)L_9;
		// SecureNetworkProtocol.SetSecureUserData(
		//     IntPtr.Zero, 0, ref protocolData->ServerEndpoint, ref sendInterface, ref queueHandle, secureUserData);
		intptr_t L_10 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_11 = ___0_protocolData;
		NullCheck(L_11);
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_12 = (&L_11->___ServerEndpoint_9);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_13 = ___1_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_14 = ___3_queueHandle;
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		SecureNetworkProtocol_SetSecureUserData_m26108E90B1F178D279794549BC3435FE957E3542(L_10, 0, L_12, L_13, L_14, L_15, NULL);
		// var buffer = new NativeArray<byte>(sendHandle.size, Allocator.Temp);
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* L_16 = ___2_sendHandle;
		int32_t L_17 = L_16->___size_2;
		NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F((&V_1), L_17, 2, 1, NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		// UnsafeUtility.MemCpy(buffer.GetUnsafePtr(), (void*)sendHandle.data, sendHandle.size);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_18 = V_1;
		void* L_19;
		L_19 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_18, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* L_20 = ___2_sendHandle;
		intptr_t L_21 = L_20->___data_0;
		void* L_22;
		L_22 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_21, NULL);
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* L_23 = ___2_sendHandle;
		int32_t L_24 = L_23->___size_2;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_19, L_22, ((int64_t)L_24), NULL);
		// sendInterface.AbortSendMessage.Ptr.Invoke(ref sendHandle, sendInterface.UserData);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_25 = ___1_sendInterface;
		TransportFunctionPointer_1_t6BF0E9809FEF820449ED4B566281FFDB8B1F6807* L_26 = (&L_25->___AbortSendMessage_2);
		FunctionPointer_1_t605FCD8E1E05F041A75BCDAE5CE44D9A201BFAA1* L_27 = (&L_26->___Ptr_0);
		AbortSendMessageDelegate_t6FBF6C859A8E442AC6D2CC1FEF00CD4D9815FB0D* L_28;
		L_28 = FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904(L_27, FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904_RuntimeMethod_var);
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* L_29 = ___2_sendHandle;
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_30 = ___1_sendInterface;
		intptr_t L_31 = L_30->___UserData_3;
		NullCheck(L_28);
		AbortSendMessageDelegate_Invoke_m60B3BB8663C28583542B560731BE31828023A7CD_inline(L_28, L_29, L_31, NULL);
		// var result = Binding.unitytls_client_send_data(
		//     protocolData->SecureClientState.ClientPtr, (byte*)buffer.GetUnsafePtr(), new UIntPtr((uint)buffer.Length));
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_32 = ___0_protocolData;
		NullCheck(L_32);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_33 = (&L_32->___SecureClientState_11);
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_34 = L_33->___ClientPtr_0;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_35 = V_1;
		void* L_36;
		L_36 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_35, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		int32_t L_37;
		L_37 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_1))->___m_Length_1);
		uintptr_t L_38;
		memset((&L_38), 0, sizeof(L_38));
		UIntPtr__ctor_m5915109E3F198CA16FDFA9CF438FAAEBFB90DE27((&L_38), L_37, /*hidden argument*/NULL);
		uint32_t L_39;
		L_39 = Binding_unitytls_client_send_data_m5086C52FA8F5F51D6A764CDF277FFFBCBA6D1928(L_34, (uint8_t*)L_36, L_38, NULL);
		V_2 = L_39;
		// if (result != Binding.UNITYTLS_SUCCESS)
		uint32_t L_40 = V_2;
		if (!L_40)
		{
			goto IL_00cd;
		}
	}
	{
		// Debug.LogError($"Secure send failed with result: {result}.");
		uint32_t L_41 = V_2;
		uint32_t L_42 = L_41;
		RuntimeObject* L_43 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_42);
		String_t* L_44;
		L_44 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral32637BB6E33DC700394FE380D62321C6F5ABF26F, L_43, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_44, NULL);
		// return (int)Error.StatusCode.NetworkStateMismatch;
		return ((int32_t)-3);
	}

IL_00cd:
	{
		// return buffer.Length;
		int32_t L_45;
		L_45 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_1))->___m_Length_1);
		return L_45;
	}

IL_00d5:
	{
		// return sendInterface.EndSendMessage.Ptr.Invoke(
		//     ref sendHandle, ref protocolData->ServerEndpoint, sendInterface.UserData, ref queueHandle);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_46 = ___1_sendInterface;
		TransportFunctionPointer_1_t1933A8E5B03799A74CE910DB0A4F8FF67DD0405D* L_47 = (&L_46->___EndSendMessage_1);
		FunctionPointer_1_tD15B3870776AA5A42DBB36B9CCA6AA930B9628DE* L_48 = (&L_47->___Ptr_0);
		EndSendMessageDelegate_tCA4D3D136AE26FE2B671C22F4765E9B2C28025ED* L_49;
		L_49 = FunctionPointer_1_get_Invoke_mFEE8AD2F13BFB25522EFCA2233290EF5A4BBCE32(L_48, FunctionPointer_1_get_Invoke_mFEE8AD2F13BFB25522EFCA2233290EF5A4BBCE32_RuntimeMethod_var);
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* L_50 = ___2_sendHandle;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_51 = ___0_protocolData;
		NullCheck(L_51);
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_52 = (&L_51->___ServerEndpoint_9);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_53 = ___1_sendInterface;
		intptr_t L_54 = L_53->___UserData_3;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_55 = ___3_queueHandle;
		NullCheck(L_49);
		int32_t L_56;
		L_56 = EndSendMessageDelegate_Invoke_m13088C10AA0AD56CAD443B995E262A65BAC6C54F_inline(L_49, L_50, L_52, L_54, L_55, NULL);
		return L_56;
	}
}
// System.Void Unity.Networking.Transport.Relay.RelayNetworkProtocol::SendRelayDisconnect(Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData*,Unity.Networking.Transport.Relay.RelayAllocationId&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayNetworkProtocol_SendRelayDisconnect_mCC1BE4666F8A5962180E487C7D774B88304748ED (RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* ___0_protocolData, RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* ___1_hostAllocationId, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___2_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___3_queueHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Invoke_mB99A6DFFF953B5843576414230D5153BAD08925B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B94E8C31FB4C1691D0A4BACF5EC9BA99D534BA5);
		s_Il2CppMethodInitialized = true;
	}
	NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	RelayMessageDisconnect_t96DE3DA36403F2F6EABDF3624DE6F85888CC543D* V_2 = NULL;
	{
		// var result = sendInterface.BeginSendMessage.Ptr.Invoke(
		//     out var sendHandle, sendInterface.UserData, RelayMessageDisconnect.Length);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_0 = ___2_sendInterface;
		TransportFunctionPointer_1_t9F2FD24758ADF9E597DCA02A01D7972B74AF6736* L_1 = (&L_0->___BeginSendMessage_0);
		FunctionPointer_1_t5E2F5FC9CFE7FBBBECA6EB73BABFA0CD5F645155* L_2 = (&L_1->___Ptr_0);
		BeginSendMessageDelegate_t55D0469152EC11CCF544924363F1C12F13CF2FE1* L_3;
		L_3 = FunctionPointer_1_get_Invoke_mB99A6DFFF953B5843576414230D5153BAD08925B(L_2, FunctionPointer_1_get_Invoke_mB99A6DFFF953B5843576414230D5153BAD08925B_RuntimeMethod_var);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_4 = ___2_sendInterface;
		intptr_t L_5 = L_4->___UserData_3;
		NullCheck(L_3);
		int32_t L_6;
		L_6 = BeginSendMessageDelegate_Invoke_m616D28C5DFFFB30E1F1392F14F6C6EB3B7EC99CD_inline(L_3, (&V_0), L_5, ((int32_t)36), NULL);
		// if (result != 0)
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		// UnityEngine.Debug.LogError("Failed to send Disconnect message to relay.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral2B94E8C31FB4C1691D0A4BACF5EC9BA99D534BA5, NULL);
		// return;
		return;
	}

IL_002c:
	{
		// var packet = (byte*)sendHandle.data;
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3 L_7 = V_0;
		intptr_t L_8 = L_7.___data_0;
		void* L_9;
		L_9 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_8, NULL);
		V_1 = (uint8_t*)L_9;
		// sendHandle.size = RelayMessageDisconnect.Length;
		(&V_0)->___size_2 = ((int32_t)36);
		// if (sendHandle.size > sendHandle.capacity)
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3 L_10 = V_0;
		int32_t L_11 = L_10.___size_2;
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3 L_12 = V_0;
		int32_t L_13 = L_12.___capacity_1;
		if ((((int32_t)L_11) <= ((int32_t)L_13)))
		{
			goto IL_0077;
		}
	}
	{
		// sendInterface.AbortSendMessage.Ptr.Invoke(ref sendHandle, sendInterface.UserData);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_14 = ___2_sendInterface;
		TransportFunctionPointer_1_t6BF0E9809FEF820449ED4B566281FFDB8B1F6807* L_15 = (&L_14->___AbortSendMessage_2);
		FunctionPointer_1_t605FCD8E1E05F041A75BCDAE5CE44D9A201BFAA1* L_16 = (&L_15->___Ptr_0);
		AbortSendMessageDelegate_t6FBF6C859A8E442AC6D2CC1FEF00CD4D9815FB0D* L_17;
		L_17 = FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904(L_16, FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904_RuntimeMethod_var);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_18 = ___2_sendInterface;
		intptr_t L_19 = L_18->___UserData_3;
		NullCheck(L_17);
		AbortSendMessageDelegate_Invoke_m60B3BB8663C28583542B560731BE31828023A7CD_inline(L_17, (&V_0), L_19, NULL);
		// UnityEngine.Debug.LogError("Failed to send Disconnect message to relay.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral2B94E8C31FB4C1691D0A4BACF5EC9BA99D534BA5, NULL);
		// return;
		return;
	}

IL_0077:
	{
		// var disconnectMessage = (RelayMessageDisconnect*)packet;
		uint8_t* L_20 = V_1;
		V_2 = (RelayMessageDisconnect_t96DE3DA36403F2F6EABDF3624DE6F85888CC543D*)L_20;
		// *disconnectMessage = RelayMessageDisconnect.Create(protocolData->ServerData.AllocationId, hostAllocationId);
		RelayMessageDisconnect_t96DE3DA36403F2F6EABDF3624DE6F85888CC543D* L_21 = V_2;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_22 = ___0_protocolData;
		NullCheck(L_22);
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_23 = (&L_22->___ServerData_10);
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_24 = L_23->___AllocationId_4;
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* L_25 = ___1_hostAllocationId;
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_26 = (*(RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984*)L_25);
		RelayMessageDisconnect_t96DE3DA36403F2F6EABDF3624DE6F85888CC543D L_27;
		L_27 = RelayMessageDisconnect_Create_m1CDE7115330ADBD35069AAC2C9FDD662EC1D22FE(L_24, L_26, NULL);
		*(RelayMessageDisconnect_t96DE3DA36403F2F6EABDF3624DE6F85888CC543D*)L_21 = L_27;
		// if (SendMessage(protocolData, ref sendInterface, ref sendHandle, ref queueHandle) < 0)
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_28 = ___0_protocolData;
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_29 = ___2_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_30 = ___3_queueHandle;
		int32_t L_31;
		L_31 = RelayNetworkProtocol_SendMessage_m90991C8E728497F7EEC594CE0478BA866B6BDBC2(L_28, L_29, (&V_0), L_30, NULL);
		if ((((int32_t)L_31) >= ((int32_t)0)))
		{
			goto IL_00ad;
		}
	}
	{
		// Debug.LogError("Failed to send Disconnect message to relay.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral2B94E8C31FB4C1691D0A4BACF5EC9BA99D534BA5, NULL);
		// return;
		return;
	}

IL_00ad:
	{
		// }
		return;
	}
}
// System.Int32 Unity.Networking.Transport.Relay.RelayNetworkProtocol::ProcessSend(Unity.Networking.Transport.NetworkDriver/Connection&,System.Boolean,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkInterfaceSendHandle&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RelayNetworkProtocol_ProcessSend_m7575ABC041AB3CEF12A17815D0870773958B412C (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, bool ___1_hasPipeline, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___2_sendInterface, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___3_sendHandle, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, intptr_t ___5_userData, const RuntimeMethod* method) 
{
	RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* V_0 = NULL;
	uint16_t V_1 = 0;
	RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49* V_2 = NULL;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	{
		// var relayProtocolData = (RelayProtocolData*)userData;
		intptr_t L_0 = ___5_userData;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F*)L_1;
		// var dataLength = (ushort)UnityTransportProtocol.WriteSendMessageHeader(ref connection, hasPipeline, ref sendHandle, RelayMessageRelay.Length);
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_2 = ___0_connection;
		bool L_3 = ___1_hasPipeline;
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* L_4 = ___3_sendHandle;
		int32_t L_5;
		L_5 = UnityTransportProtocol_WriteSendMessageHeader_m17ABE04555AF690ECA01FB36C9F35BAA59299C97(L_2, L_3, L_4, ((int32_t)38), NULL);
		V_1 = (uint16_t)((int32_t)(uint16_t)L_5);
		// var relayMessage = (RelayMessageRelay*)sendHandle.data;
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* L_6 = ___3_sendHandle;
		intptr_t L_7 = L_6->___data_0;
		void* L_8;
		L_8 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_7, NULL);
		V_2 = (RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49*)L_8;
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_9 = ___0_connection;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_10 = (&L_9->___Address_0);
		U3CdataU3Ee__FixedBuffer_tA444E672C5AB32F413A3235C5075E48F04008AA0* L_11 = (&L_10->___data_2);
		uint8_t* L_12 = (&L_11->___FixedElementField_0);
		V_4 = L_12;
		// fixed(byte* addressPtr = connection.Address.data)
		uint8_t* L_13 = V_4;
		V_3 = (uint8_t*)((uintptr_t)L_13);
		// *relayMessage = RelayMessageRelay.Create(relayProtocolData->ServerData.AllocationId, *(RelayAllocationId*)addressPtr, dataLength);
		RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49* L_14 = V_2;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_15 = V_0;
		NullCheck(L_15);
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_16 = (&L_15->___ServerData_10);
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_17 = L_16->___AllocationId_4;
		uint8_t* L_18 = V_3;
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_19 = (*(RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984*)L_18);
		uint16_t L_20 = V_1;
		RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49 L_21;
		L_21 = RelayMessageRelay_Create_m654762D910C3744664149896D80B85205944772B(L_17, L_19, L_20, NULL);
		*(RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49*)L_14 = L_21;
		V_4 = (uint8_t*)((uintptr_t)0);
		// Interlocked.Exchange(ref relayProtocolData->LastSentTime, relayProtocolData->LastUpdateTime);
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_22 = V_0;
		NullCheck(L_22);
		int64_t* L_23 = (&L_22->___LastSentTime_5);
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_24 = V_0;
		NullCheck(L_24);
		int64_t L_25 = L_24->___LastUpdateTime_4;
		int64_t L_26;
		L_26 = Interlocked_Exchange_m723B7E02F99661E7576E204D8862757E12682961(L_23, L_25, NULL);
		// return SendMessage(relayProtocolData, ref sendInterface, ref sendHandle, ref queueHandle);
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_27 = V_0;
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_28 = ___2_sendInterface;
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* L_29 = ___3_sendHandle;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_30 = ___4_queueHandle;
		int32_t L_31;
		L_31 = RelayNetworkProtocol_SendMessage_m90991C8E728497F7EEC594CE0478BA866B6BDBC2(L_27, L_28, L_29, L_30, NULL);
		return L_31;
	}
}
// System.Void Unity.Networking.Transport.Relay.RelayNetworkProtocol::ProcessSendConnectionAccept(Unity.Networking.Transport.NetworkDriver/Connection&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayNetworkProtocol_ProcessSendConnectionAccept_mB019F49554DCD5FB156369B699D405AD567FA9AD (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Invoke_mB99A6DFFF953B5843576414230D5153BAD08925B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24A0CACB21015FAA463E07EB78B7EDCDFC64A265);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral306123149FDB6460DB923B080E134FA6CDCF748B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72078CA379BFF112FEA07E0A4B6B0DA1E9202CB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD46F14184980FD768C72EDABAD9D15C6D34B1045);
		s_Il2CppMethodInitialized = true;
	}
	RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* V_0 = NULL;
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint8_t* V_4 = NULL;
	int32_t V_5 = 0;
	RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49* V_6 = NULL;
	uint8_t* V_7 = NULL;
	{
		// var relayProtocolData = (RelayProtocolData*)userData;
		intptr_t L_0 = ___3_userData;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F*)L_1;
		// var toAllocationId = default(RelayAllocationId);
		il2cpp_codegen_initobj((&V_1), sizeof(RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984));
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_2 = ___0_connection;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_3 = (&L_2->___Address_0);
		U3CdataU3Ee__FixedBuffer_tA444E672C5AB32F413A3235C5075E48F04008AA0* L_4 = (&L_3->___data_2);
		uint8_t* L_5 = (&L_4->___FixedElementField_0);
		V_7 = L_5;
		// fixed(byte* addrPtr = connection.Address.data)
		uint8_t* L_6 = V_7;
		// toAllocationId = *(RelayAllocationId*)addrPtr;
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_7 = (*(RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984*)((uintptr_t)L_6));
		V_1 = L_7;
		V_7 = (uint8_t*)((uintptr_t)0);
		// var maxLengthNeeded = RelayMessageRelay.Length + UnityTransportProtocol.GetConnectionAcceptMessageMaxLength();
		int32_t L_8;
		L_8 = UnityTransportProtocol_GetConnectionAcceptMessageMaxLength_mBF0058AB7A48721C9F5B1F54B79C4B5995AEBF3D(NULL);
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)38), L_8));
		// if (sendInterface.BeginSendMessage.Ptr.Invoke(out var sendHandle, sendInterface.UserData, maxLengthNeeded) != 0)
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_9 = ___1_sendInterface;
		TransportFunctionPointer_1_t9F2FD24758ADF9E597DCA02A01D7972B74AF6736* L_10 = (&L_9->___BeginSendMessage_0);
		FunctionPointer_1_t5E2F5FC9CFE7FBBBECA6EB73BABFA0CD5F645155* L_11 = (&L_10->___Ptr_0);
		BeginSendMessageDelegate_t55D0469152EC11CCF544924363F1C12F13CF2FE1* L_12;
		L_12 = FunctionPointer_1_get_Invoke_mB99A6DFFF953B5843576414230D5153BAD08925B(L_11, FunctionPointer_1_get_Invoke_mB99A6DFFF953B5843576414230D5153BAD08925B_RuntimeMethod_var);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_13 = ___1_sendInterface;
		intptr_t L_14 = L_13->___UserData_3;
		int32_t L_15 = V_2;
		NullCheck(L_12);
		int32_t L_16;
		L_16 = BeginSendMessageDelegate_Invoke_m616D28C5DFFFB30E1F1392F14F6C6EB3B7EC99CD_inline(L_12, (&V_3), L_14, L_15, NULL);
		if (!L_16)
		{
			goto IL_0062;
		}
	}
	{
		// UnityEngine.Debug.LogError("Failed to send a ConnectionRequest packet");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral24A0CACB21015FAA463E07EB78B7EDCDFC64A265, NULL);
		// return;
		return;
	}

IL_0062:
	{
		// if (sendHandle.capacity < maxLengthNeeded)
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3 L_17 = V_3;
		int32_t L_18 = L_17.___capacity_1;
		int32_t L_19 = V_2;
		if ((((int32_t)L_18) >= ((int32_t)L_19)))
		{
			goto IL_0093;
		}
	}
	{
		// sendInterface.AbortSendMessage.Ptr.Invoke(ref sendHandle, sendInterface.UserData);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_20 = ___1_sendInterface;
		TransportFunctionPointer_1_t6BF0E9809FEF820449ED4B566281FFDB8B1F6807* L_21 = (&L_20->___AbortSendMessage_2);
		FunctionPointer_1_t605FCD8E1E05F041A75BCDAE5CE44D9A201BFAA1* L_22 = (&L_21->___Ptr_0);
		AbortSendMessageDelegate_t6FBF6C859A8E442AC6D2CC1FEF00CD4D9815FB0D* L_23;
		L_23 = FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904(L_22, FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904_RuntimeMethod_var);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_24 = ___1_sendInterface;
		intptr_t L_25 = L_24->___UserData_3;
		NullCheck(L_23);
		AbortSendMessageDelegate_Invoke_m60B3BB8663C28583542B560731BE31828023A7CD_inline(L_23, (&V_3), L_25, NULL);
		// UnityEngine.Debug.LogError("Failed to send a ConnectionAccept packet: size exceeds capacity");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralD46F14184980FD768C72EDABAD9D15C6D34B1045, NULL);
		// return;
		return;
	}

IL_0093:
	{
		// var packet = (byte*)sendHandle.data;
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3 L_26 = V_3;
		intptr_t L_27 = L_26.___data_0;
		void* L_28;
		L_28 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_27, NULL);
		V_4 = (uint8_t*)L_28;
		// var size = UnityTransportProtocol.WriteConnectionAcceptMessage(ref connection, packet + RelayMessageRelay.Length, sendHandle.capacity - RelayMessageRelay.Length);
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_29 = ___0_connection;
		uint8_t* L_30 = V_4;
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3 L_31 = V_3;
		int32_t L_32 = L_31.___capacity_1;
		int32_t L_33;
		L_33 = UnityTransportProtocol_WriteConnectionAcceptMessage_m4C9CBEE9735B6465540DF839BCBFE236EE01B6F9(L_29, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_30, ((int32_t)38))), ((int32_t)il2cpp_codegen_subtract(L_32, ((int32_t)38))), NULL);
		V_5 = L_33;
		// if (size < 0)
		int32_t L_34 = V_5;
		if ((((int32_t)L_34) >= ((int32_t)0)))
		{
			goto IL_00e3;
		}
	}
	{
		// sendInterface.AbortSendMessage.Ptr.Invoke(ref sendHandle, sendInterface.UserData);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_35 = ___1_sendInterface;
		TransportFunctionPointer_1_t6BF0E9809FEF820449ED4B566281FFDB8B1F6807* L_36 = (&L_35->___AbortSendMessage_2);
		FunctionPointer_1_t605FCD8E1E05F041A75BCDAE5CE44D9A201BFAA1* L_37 = (&L_36->___Ptr_0);
		AbortSendMessageDelegate_t6FBF6C859A8E442AC6D2CC1FEF00CD4D9815FB0D* L_38;
		L_38 = FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904(L_37, FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904_RuntimeMethod_var);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_39 = ___1_sendInterface;
		intptr_t L_40 = L_39->___UserData_3;
		NullCheck(L_38);
		AbortSendMessageDelegate_Invoke_m60B3BB8663C28583542B560731BE31828023A7CD_inline(L_38, (&V_3), L_40, NULL);
		// UnityEngine.Debug.LogError("Failed to send a ConnectionAccept packet");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral306123149FDB6460DB923B080E134FA6CDCF748B, NULL);
		// return;
		return;
	}

IL_00e3:
	{
		// sendHandle.size = RelayMessageRelay.Length + size;
		int32_t L_41 = V_5;
		(&V_3)->___size_2 = ((int32_t)il2cpp_codegen_add(((int32_t)38), L_41));
		// var relayMessage = (RelayMessageRelay*)packet;
		uint8_t* L_42 = V_4;
		V_6 = (RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49*)L_42;
		// *relayMessage = RelayMessageRelay.Create(relayProtocolData->ServerData.AllocationId, toAllocationId, (ushort)size);
		RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49* L_43 = V_6;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_44 = V_0;
		NullCheck(L_44);
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_45 = (&L_44->___ServerData_10);
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_46 = L_45->___AllocationId_4;
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_47 = V_1;
		int32_t L_48 = V_5;
		RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49 L_49;
		L_49 = RelayMessageRelay_Create_m654762D910C3744664149896D80B85205944772B(L_46, L_47, (uint16_t)((int32_t)(uint16_t)L_48), NULL);
		*(RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49*)L_43 = L_49;
		// if (SendMessage(relayProtocolData, ref sendInterface, ref sendHandle, ref queueHandle) < 0)
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_50 = V_0;
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_51 = ___1_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_52 = ___2_queueHandle;
		int32_t L_53;
		L_53 = RelayNetworkProtocol_SendMessage_m90991C8E728497F7EEC594CE0478BA866B6BDBC2(L_50, L_51, (&V_3), L_52, NULL);
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_0126;
		}
	}
	{
		// Debug.LogError("Failed to send Connection Accept message to host.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral72078CA379BFF112FEA07E0A4B6B0DA1E9202CB2, NULL);
		// return;
		return;
	}

IL_0126:
	{
		// }
		return;
	}
}
// System.Int32 Unity.Networking.Transport.Relay.RelayNetworkProtocol::SendHeaderOnlyHostMessage(Unity.Networking.Transport.Protocols.UdpCProtocol,Unity.Networking.Transport.SessionIdToken,Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData*,Unity.Networking.Transport.Relay.RelayAllocationId&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RelayNetworkProtocol_SendHeaderOnlyHostMessage_m88EFE5904D925CF2537A546691441FD9FA7D6D3F (int32_t ___0_type, SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 ___1_token, RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* ___2_relayProtocolData, RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* ___3_hostAllocationId, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___4_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___5_queueHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Invoke_mB99A6DFFF953B5843576414230D5153BAD08925B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49* V_2 = NULL;
	UdpCHeader_t603CBEC64367B86F59E725571C597885519A613B* V_3 = NULL;
	UdpCHeader_t603CBEC64367B86F59E725571C597885519A613B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var result = sendInterface.BeginSendMessage.Ptr.Invoke(
		//     out var sendHandle, sendInterface.UserData, RelayMessageRelay.Length + UdpCHeader.Length);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_0 = ___4_sendInterface;
		TransportFunctionPointer_1_t9F2FD24758ADF9E597DCA02A01D7972B74AF6736* L_1 = (&L_0->___BeginSendMessage_0);
		FunctionPointer_1_t5E2F5FC9CFE7FBBBECA6EB73BABFA0CD5F645155* L_2 = (&L_1->___Ptr_0);
		BeginSendMessageDelegate_t55D0469152EC11CCF544924363F1C12F13CF2FE1* L_3;
		L_3 = FunctionPointer_1_get_Invoke_mB99A6DFFF953B5843576414230D5153BAD08925B(L_2, FunctionPointer_1_get_Invoke_mB99A6DFFF953B5843576414230D5153BAD08925B_RuntimeMethod_var);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_4 = ___4_sendInterface;
		intptr_t L_5 = L_4->___UserData_3;
		NullCheck(L_3);
		int32_t L_6;
		L_6 = BeginSendMessageDelegate_Invoke_m616D28C5DFFFB30E1F1392F14F6C6EB3B7EC99CD_inline(L_3, (&V_0), L_5, ((int32_t)48), NULL);
		// if (result != 0)
		if (!L_6)
		{
			goto IL_0025;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0025:
	{
		// var packet = (byte*)sendHandle.data;
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3 L_7 = V_0;
		intptr_t L_8 = L_7.___data_0;
		void* L_9;
		L_9 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_8, NULL);
		V_1 = (uint8_t*)L_9;
		// sendHandle.size = RelayMessageRelay.Length + UdpCHeader.Length;
		(&V_0)->___size_2 = ((int32_t)48);
		// if (sendHandle.size > sendHandle.capacity)
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3 L_10 = V_0;
		int32_t L_11 = L_10.___size_2;
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3 L_12 = V_0;
		int32_t L_13 = L_12.___capacity_1;
		if ((((int32_t)L_11) <= ((int32_t)L_13)))
		{
			goto IL_0069;
		}
	}
	{
		// sendInterface.AbortSendMessage.Ptr.Invoke(ref sendHandle, sendInterface.UserData);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_14 = ___4_sendInterface;
		TransportFunctionPointer_1_t6BF0E9809FEF820449ED4B566281FFDB8B1F6807* L_15 = (&L_14->___AbortSendMessage_2);
		FunctionPointer_1_t605FCD8E1E05F041A75BCDAE5CE44D9A201BFAA1* L_16 = (&L_15->___Ptr_0);
		AbortSendMessageDelegate_t6FBF6C859A8E442AC6D2CC1FEF00CD4D9815FB0D* L_17;
		L_17 = FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904(L_16, FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904_RuntimeMethod_var);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_18 = ___4_sendInterface;
		intptr_t L_19 = L_18->___UserData_3;
		NullCheck(L_17);
		AbortSendMessageDelegate_Invoke_m60B3BB8663C28583542B560731BE31828023A7CD_inline(L_17, (&V_0), L_19, NULL);
		// return -1;
		return (-1);
	}

IL_0069:
	{
		// var relayMessage = (RelayMessageRelay*)packet;
		uint8_t* L_20 = V_1;
		V_2 = (RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49*)L_20;
		// *relayMessage = RelayMessageRelay.Create(
		//     relayProtocolData->ServerData.AllocationId, hostAllocationId, UdpCHeader.Length);
		RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49* L_21 = V_2;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_22 = ___2_relayProtocolData;
		NullCheck(L_22);
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_23 = (&L_22->___ServerData_10);
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_24 = L_23->___AllocationId_4;
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* L_25 = ___3_hostAllocationId;
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_26 = (*(RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984*)L_25);
		RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49 L_27;
		L_27 = RelayMessageRelay_Create_m654762D910C3744664149896D80B85205944772B(L_24, L_26, (uint16_t)((int32_t)10), NULL);
		*(RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49*)L_21 = L_27;
		// var header = (UdpCHeader*)(((byte*)relayMessage) + RelayMessageRelay.Length);
		RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49* L_28 = V_2;
		V_3 = (UdpCHeader_t603CBEC64367B86F59E725571C597885519A613B*)((RelayMessageRelay_tA2F2CEE70BE15F80ABF01A93E8330E9FF6BDAC49*)il2cpp_codegen_add((intptr_t)L_28, ((int32_t)38)));
		// *header = new UdpCHeader
		// {
		//     Type = (byte)type,
		//     SessionToken = token,
		//     Flags = 0
		// };
		UdpCHeader_t603CBEC64367B86F59E725571C597885519A613B* L_29 = V_3;
		il2cpp_codegen_initobj((&V_4), sizeof(UdpCHeader_t603CBEC64367B86F59E725571C597885519A613B));
		int32_t L_30 = ___0_type;
		(&V_4)->___Type_0 = (uint8_t)((int32_t)(uint8_t)L_30);
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_31 = ___1_token;
		(&V_4)->___SessionToken_2 = L_31;
		(&V_4)->___Flags_1 = 0;
		UdpCHeader_t603CBEC64367B86F59E725571C597885519A613B L_32 = V_4;
		*(UdpCHeader_t603CBEC64367B86F59E725571C597885519A613B*)L_29 = L_32;
		// return SendMessage(relayProtocolData, ref sendInterface, ref sendHandle, ref queueHandle);
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_33 = ___2_relayProtocolData;
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_34 = ___4_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_35 = ___5_queueHandle;
		int32_t L_36;
		L_36 = RelayNetworkProtocol_SendMessage_m90991C8E728497F7EEC594CE0478BA866B6BDBC2(L_33, L_34, (&V_0), L_35, NULL);
		return L_36;
	}
}
// System.Void Unity.Networking.Transport.Relay.RelayNetworkProtocol::SendConnectionRequestToRelay(Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData*,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayNetworkProtocol_SendConnectionRequestToRelay_mB5D30B668FC0962E5DF3A55404B8292CF53D613E (RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* ___0_relayProtocolData, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Invoke_mB99A6DFFF953B5843576414230D5153BAD08925B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09E6FDC5E9C59731315331FD0C8E854012398FC5);
		s_Il2CppMethodInitialized = true;
	}
	NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	RelayMessageConnectRequest_t35AB449CCDF5E31947A8D6CBC59BD62F8A3BEB3C* V_2 = NULL;
	{
		// var result = sendInterface.BeginSendMessage.Ptr.Invoke(
		//     out var sendHandle, sendInterface.UserData, RelayMessageConnectRequest.Length);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_0 = ___1_sendInterface;
		TransportFunctionPointer_1_t9F2FD24758ADF9E597DCA02A01D7972B74AF6736* L_1 = (&L_0->___BeginSendMessage_0);
		FunctionPointer_1_t5E2F5FC9CFE7FBBBECA6EB73BABFA0CD5F645155* L_2 = (&L_1->___Ptr_0);
		BeginSendMessageDelegate_t55D0469152EC11CCF544924363F1C12F13CF2FE1* L_3;
		L_3 = FunctionPointer_1_get_Invoke_mB99A6DFFF953B5843576414230D5153BAD08925B(L_2, FunctionPointer_1_get_Invoke_mB99A6DFFF953B5843576414230D5153BAD08925B_RuntimeMethod_var);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_4 = ___1_sendInterface;
		intptr_t L_5 = L_4->___UserData_3;
		NullCheck(L_3);
		int32_t L_6;
		L_6 = BeginSendMessageDelegate_Invoke_m616D28C5DFFFB30E1F1392F14F6C6EB3B7EC99CD_inline(L_3, (&V_0), L_5, ((int32_t)276), NULL);
		// if (result != 0)
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		// Debug.LogError("Failed to send ConnectRequest to relay.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral09E6FDC5E9C59731315331FD0C8E854012398FC5, NULL);
		// return;
		return;
	}

IL_002f:
	{
		// var packet = (byte*)sendHandle.data;
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3 L_7 = V_0;
		intptr_t L_8 = L_7.___data_0;
		void* L_9;
		L_9 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_8, NULL);
		V_1 = (uint8_t*)L_9;
		// sendHandle.size = RelayMessageConnectRequest.Length;
		(&V_0)->___size_2 = ((int32_t)276);
		// if (sendHandle.size > sendHandle.capacity)
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3 L_10 = V_0;
		int32_t L_11 = L_10.___size_2;
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3 L_12 = V_0;
		int32_t L_13 = L_12.___capacity_1;
		if ((((int32_t)L_11) <= ((int32_t)L_13)))
		{
			goto IL_007d;
		}
	}
	{
		// sendInterface.AbortSendMessage.Ptr.Invoke(ref sendHandle, sendInterface.UserData);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_14 = ___1_sendInterface;
		TransportFunctionPointer_1_t6BF0E9809FEF820449ED4B566281FFDB8B1F6807* L_15 = (&L_14->___AbortSendMessage_2);
		FunctionPointer_1_t605FCD8E1E05F041A75BCDAE5CE44D9A201BFAA1* L_16 = (&L_15->___Ptr_0);
		AbortSendMessageDelegate_t6FBF6C859A8E442AC6D2CC1FEF00CD4D9815FB0D* L_17;
		L_17 = FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904(L_16, FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904_RuntimeMethod_var);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_18 = ___1_sendInterface;
		intptr_t L_19 = L_18->___UserData_3;
		NullCheck(L_17);
		AbortSendMessageDelegate_Invoke_m60B3BB8663C28583542B560731BE31828023A7CD_inline(L_17, (&V_0), L_19, NULL);
		// Debug.LogError("Failed to send ConnectRequest to relay.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral09E6FDC5E9C59731315331FD0C8E854012398FC5, NULL);
		// return;
		return;
	}

IL_007d:
	{
		// var message = (RelayMessageConnectRequest*)packet;
		uint8_t* L_20 = V_1;
		V_2 = (RelayMessageConnectRequest_t35AB449CCDF5E31947A8D6CBC59BD62F8A3BEB3C*)L_20;
		// *message = RelayMessageConnectRequest.Create(
		//     relayProtocolData->ServerData.AllocationId, relayProtocolData->ServerData.HostConnectionData);
		RelayMessageConnectRequest_t35AB449CCDF5E31947A8D6CBC59BD62F8A3BEB3C* L_21 = V_2;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_22 = ___0_relayProtocolData;
		NullCheck(L_22);
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_23 = (&L_22->___ServerData_10);
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_24 = L_23->___AllocationId_4;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_25 = ___0_relayProtocolData;
		NullCheck(L_25);
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_26 = (&L_25->___ServerData_10);
		RelayConnectionData_tA5306A14AEB9FA72A119334CBE01CE0B1F7AC18D L_27 = L_26->___HostConnectionData_3;
		RelayMessageConnectRequest_t35AB449CCDF5E31947A8D6CBC59BD62F8A3BEB3C L_28;
		L_28 = RelayMessageConnectRequest_Create_mC778E243E6F1C1E5721E9483E6D610A80FDCF431(L_24, L_27, NULL);
		*(RelayMessageConnectRequest_t35AB449CCDF5E31947A8D6CBC59BD62F8A3BEB3C*)L_21 = L_28;
		// if (SendMessage(relayProtocolData, ref sendInterface, ref sendHandle, ref queueHandle) < 0)
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_29 = ___0_relayProtocolData;
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_30 = ___1_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_31 = ___2_queueHandle;
		int32_t L_32;
		L_32 = RelayNetworkProtocol_SendMessage_m90991C8E728497F7EEC594CE0478BA866B6BDBC2(L_29, L_30, (&V_0), L_31, NULL);
		if ((((int32_t)L_32) >= ((int32_t)0)))
		{
			goto IL_00b8;
		}
	}
	{
		// Debug.LogError("Failed to send ConnectRequest to relay.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral09E6FDC5E9C59731315331FD0C8E854012398FC5, NULL);
		// return;
		return;
	}

IL_00b8:
	{
		// }
		return;
	}
}
// System.Void Unity.Networking.Transport.Relay.RelayNetworkProtocol::Connect(Unity.Networking.Transport.NetworkDriver/Connection&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayNetworkProtocol_Connect_mF79B494839F2860E97A8001403E8E7B2F2D0BFFF (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5AD2CAF646824673D1C32E4BF28A1CE3DCC0B6B);
		s_Il2CppMethodInitialized = true;
	}
	RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* V_0 = NULL;
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var relayProtocolData = (RelayProtocolData*)userData;
		intptr_t L_0 = ___3_userData;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F*)L_1;
		// relayProtocolData->ConnectionReceiveToken = connection.ReceiveToken;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_2 = V_0;
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_3 = ___0_connection;
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_4 = L_3->___ReceiveToken_7;
		NullCheck(L_2);
		L_2->___ConnectionReceiveToken_2 = L_4;
		// if (relayProtocolData->ConnectionState != RelayConnectionState.Bound)
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_5 = V_0;
		NullCheck(L_5);
		uint8_t L_6 = L_5->___ConnectionState_0;
		if ((((int32_t)L_6) == ((int32_t)3)))
		{
			goto IL_0024;
		}
	}
	{
		// relayProtocolData->ConnectOnBind = true;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_7 = V_0;
		NullCheck(L_7);
		L_7->___ConnectOnBind_12 = (bool)1;
		// return;
		return;
	}

IL_0024:
	{
		// if (relayProtocolData->HostAllocationId == default)
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_8 = V_0;
		NullCheck(L_8);
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_9 = L_8->___HostAllocationId_8;
		il2cpp_codegen_initobj((&V_1), sizeof(RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984));
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_10 = V_1;
		bool L_11;
		L_11 = RelayAllocationId_op_Equality_m9AC1B0DC988A52B10DB8E3E48BE2EC6DF6B9C046(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_0043;
		}
	}
	{
		// SendConnectionRequestToRelay(relayProtocolData, ref sendInterface, ref queueHandle);
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_12 = V_0;
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_13 = ___1_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_14 = ___2_queueHandle;
		RelayNetworkProtocol_SendConnectionRequestToRelay_mB5D30B668FC0962E5DF3A55404B8292CF53D613E(L_12, L_13, L_14, NULL);
		return;
	}

IL_0043:
	{
		// var type = UdpCProtocol.ConnectionRequest;
		// var token = relayProtocolData->ConnectionReceiveToken;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_15 = V_0;
		NullCheck(L_15);
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_16 = L_15->___ConnectionReceiveToken_2;
		V_2 = L_16;
		// var result = SendHeaderOnlyHostMessage(
		//     type, token, relayProtocolData, ref relayProtocolData->HostAllocationId, ref sendInterface, ref queueHandle);
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_17 = V_2;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_18 = V_0;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_19 = V_0;
		NullCheck(L_19);
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* L_20 = (&L_19->___HostAllocationId_8);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_21 = ___1_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_22 = ___2_queueHandle;
		int32_t L_23;
		L_23 = RelayNetworkProtocol_SendHeaderOnlyHostMessage_m88EFE5904D925CF2537A546691441FD9FA7D6D3F(0, L_17, L_18, L_20, L_21, L_22, NULL);
		// if (result < 0)
		if ((((int32_t)L_23) >= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		// Debug.LogError("Failed to send Connection Request message to host.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralA5AD2CAF646824673D1C32E4BF28A1CE3DCC0B6B, NULL);
		// return;
		return;
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void Unity.Networking.Transport.Relay.RelayNetworkProtocol::Disconnect(Unity.Networking.Transport.NetworkDriver/Connection&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayNetworkProtocol_Disconnect_m2B817AF28256EEE336098E3654EE115825D9C766 (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B84F153196C1C9680F8F28196651975E192D9C5);
		s_Il2CppMethodInitialized = true;
	}
	RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* V_0 = NULL;
	SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var relayProtocolData = (RelayProtocolData*)userData;
		intptr_t L_0 = ___3_userData;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F*)L_1;
		// var type = UdpCProtocol.Disconnect;
		// var token = connection.SendToken;
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_2 = ___0_connection;
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_3 = L_2->___SendToken_8;
		V_1 = L_3;
		// var result = SendHeaderOnlyHostMessage(
		//     type, token, relayProtocolData, ref connection.Address.AsRelayAllocationId(), ref sendInterface, ref queueHandle);
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_4 = V_1;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_5 = V_0;
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_6 = ___0_connection;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_7 = (&L_6->___Address_0);
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* L_8;
		L_8 = ConnectionAddressExtensions_AsRelayAllocationId_mB760454368A28166B3FEAAAF75B03F2DD5B957BF(L_7, NULL);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_9 = ___1_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_10 = ___2_queueHandle;
		int32_t L_11;
		L_11 = RelayNetworkProtocol_SendHeaderOnlyHostMessage_m88EFE5904D925CF2537A546691441FD9FA7D6D3F(3, L_4, L_5, L_8, L_9, L_10, NULL);
		// if (result < 0)
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		// Debug.LogError("Failed to send Disconnect message to host.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral4B84F153196C1C9680F8F28196651975E192D9C5, NULL);
		// return;
		return;
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Unity.Networking.Transport.Relay.RelayNetworkProtocol::ProcessSendPing(Unity.Networking.Transport.NetworkDriver/Connection&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayNetworkProtocol_ProcessSendPing_m7CE90FC0007C848A69176703204B0EA13B7BE9ED (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DF2E672D96F651796627469CCE881D10B63F11E);
		s_Il2CppMethodInitialized = true;
	}
	RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* V_0 = NULL;
	SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var relayProtocolData = (RelayProtocolData*)userData;
		intptr_t L_0 = ___3_userData;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F*)L_1;
		// var type = UdpCProtocol.Ping;
		// var token = connection.SendToken;
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_2 = ___0_connection;
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_3 = L_2->___SendToken_8;
		V_1 = L_3;
		// var result = SendHeaderOnlyHostMessage(
		//     type, token, relayProtocolData, ref connection.Address.AsRelayAllocationId(), ref sendInterface, ref queueHandle);
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_4 = V_1;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_5 = V_0;
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_6 = ___0_connection;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_7 = (&L_6->___Address_0);
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* L_8;
		L_8 = ConnectionAddressExtensions_AsRelayAllocationId_mB760454368A28166B3FEAAAF75B03F2DD5B957BF(L_7, NULL);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_9 = ___1_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_10 = ___2_queueHandle;
		int32_t L_11;
		L_11 = RelayNetworkProtocol_SendHeaderOnlyHostMessage_m88EFE5904D925CF2537A546691441FD9FA7D6D3F(5, L_4, L_5, L_8, L_9, L_10, NULL);
		// if (result < 0)
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		// Debug.LogError("Failed to send Ping message to host.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral7DF2E672D96F651796627469CCE881D10B63F11E, NULL);
		// return;
		return;
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Unity.Networking.Transport.Relay.RelayNetworkProtocol::ProcessSendPong(Unity.Networking.Transport.NetworkDriver/Connection&,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayNetworkProtocol_ProcessSendPong_m0F98CD0FC19258C75C3DDA67D78E324C032AF6DC (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AC013E5710738AB162F5E4C7AFC454C21DDEF2F);
		s_Il2CppMethodInitialized = true;
	}
	RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* V_0 = NULL;
	SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var relayProtocolData = (RelayProtocolData*)userData;
		intptr_t L_0 = ___3_userData;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F*)L_1;
		// var type = UdpCProtocol.Pong;
		// var token = connection.SendToken;
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_2 = ___0_connection;
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_3 = L_2->___SendToken_8;
		V_1 = L_3;
		// var result = SendHeaderOnlyHostMessage(
		//     type, token, relayProtocolData, ref connection.Address.AsRelayAllocationId(), ref sendInterface, ref queueHandle);
		SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 L_4 = V_1;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_5 = V_0;
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* L_6 = ___0_connection;
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_7 = (&L_6->___Address_0);
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* L_8;
		L_8 = ConnectionAddressExtensions_AsRelayAllocationId_mB760454368A28166B3FEAAAF75B03F2DD5B957BF(L_7, NULL);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_9 = ___1_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_10 = ___2_queueHandle;
		int32_t L_11;
		L_11 = RelayNetworkProtocol_SendHeaderOnlyHostMessage_m88EFE5904D925CF2537A546691441FD9FA7D6D3F(6, L_4, L_5, L_8, L_9, L_10, NULL);
		// if (result < 0)
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		// Debug.LogError("Failed to send Pong message to host.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral7AC013E5710738AB162F5E4C7AFC454C21DDEF2F, NULL);
		// return;
		return;
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Unity.Networking.Transport.Relay.RelayNetworkProtocol::Update(System.Int64,Unity.Networking.Transport.NetworkSendInterface&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayNetworkProtocol_Update_m7A9E599807DE1BFFB74A44187363C8C6FA39B443 (int64_t ___0_updateTime, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Invoke_mB99A6DFFF953B5843576414230D5153BAD08925B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Value_m5016AF7AD65D91AA6D0456BEB6ED3A9D3AD8B9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Value_mD9253C9B8BD4ED226D78C76033424F14A1BFC366_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_get_Data_m0E24869D29188E83B6F4BF368F46108CFB1B6FB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_get_Data_m42E67BC10BCF19DA2EF4E13CEFBA6D7E4228F91C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_AlignOf_TisSecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B_m42E37113A90B5272BE314C380722580DEF3E96F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_AlignOf_Tisunitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F_m59D5E5DE33D7D644DA555FA3F7A1D8623361D326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisSecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B_m93E4445737BC86FE087B87E97CD00064A2CD9114_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_Tisunitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F_mB5C3FE2DC1AACE0DDBD3777316FBF67D9DED09BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00AA18F32EB3BC84C0946FC58668DDCA73648A1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B78DCE9FC648FDDEA9A82099B338C563041CBD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24A0CACB21015FAA463E07EB78B7EDCDFC64A265);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9470A01E1BA5F357A491D9D6EE453A71DCB6880F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9F5008AA90307FD7521614307E34133396662CA);
		s_Il2CppMethodInitialized = true;
	}
	RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* V_0 = NULL;
	uint8_t V_1 = 0;
	SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* V_2 = NULL;
	unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* V_3 = NULL;
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 V_4;
	memset((&V_4), 0, sizeof(V_4));
	intptr_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 V_6;
	memset((&V_6), 0, sizeof(V_6));
	SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B V_7;
	memset((&V_7), 0, sizeof(V_7));
	NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3 V_8;
	memset((&V_8), 0, sizeof(V_8));
	NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3 V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// var protocolData = (RelayProtocolData*)userData;
		intptr_t L_0 = ___3_userData;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F*)L_1;
		// switch (protocolData->ConnectionState)
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_2 = V_0;
		NullCheck(L_2);
		uint8_t L_3 = L_2->___ConnectionState_0;
		V_1 = L_3;
		uint8_t L_4 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 1)))
		{
			case 0:
			{
				goto IL_002b;
			}
			case 1:
			{
				goto IL_0265;
			}
			case 2:
			{
				goto IL_0308;
			}
			case 3:
			{
				goto IL_0308;
			}
		}
	}
	{
		goto IL_0393;
	}

IL_002b:
	{
		// if (protocolData->SecureClientState.ClientPtr == null)
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_5 = V_0;
		NullCheck(L_5);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_6 = (&L_5->___SecureClientState_11);
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_7 = L_6->___ClientPtr_0;
		if ((!(((uintptr_t)L_7) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0216;
		}
	}
	{
		// var config = (Binding.unitytls_client_config*)UnsafeUtility.Malloc(
		//     UnsafeUtility.SizeOf<Binding.unitytls_client_config>(),
		//     UnsafeUtility.AlignOf<Binding.unitytls_client_config>(), Allocator.Persistent);
		int32_t L_8;
		L_8 = UnsafeUtility_SizeOf_Tisunitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F_mB5C3FE2DC1AACE0DDBD3777316FBF67D9DED09BD(UnsafeUtility_SizeOf_Tisunitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F_mB5C3FE2DC1AACE0DDBD3777316FBF67D9DED09BD_RuntimeMethod_var);
		int32_t L_9;
		L_9 = UnsafeUtility_AlignOf_Tisunitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F_m59D5E5DE33D7D644DA555FA3F7A1D8623361D326(UnsafeUtility_AlignOf_Tisunitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F_m59D5E5DE33D7D644DA555FA3F7A1D8623361D326_RuntimeMethod_var);
		void* L_10;
		L_10 = UnsafeUtility_Malloc_mD7BD28D5AE7E4901B225B7DFFE2B568EE7BDC0C9(((int64_t)L_8), L_9, 4, NULL);
		V_3 = (unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F*)L_10;
		// *config = new Binding.unitytls_client_config();
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_11 = V_3;
		il2cpp_codegen_initobj(L_11, sizeof(unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F));
		// Binding.unitytls_client_init_config(config);
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_12 = V_3;
		Binding_unitytls_client_init_config_m82074495EA2A17758484F4A7FF1C6BB2EFE198B5(L_12, NULL);
		// config->dataSendCB = ManagedSecureFunctions.s_SendCallback.Data.Value;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_13 = V_3;
		il2cpp_codegen_runtime_class_init_inline(ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var);
		FunctionPointer_1_tF917A6CBC8E241E4F555974CCF4507F08B71041A* L_14;
		L_14 = SharedStatic_1_get_Data_m0E24869D29188E83B6F4BF368F46108CFB1B6FB1((&((ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_StaticFields*)il2cpp_codegen_static_fields_for(ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var))->___s_SendCallback_3), SharedStatic_1_get_Data_m0E24869D29188E83B6F4BF368F46108CFB1B6FB1_RuntimeMethod_var);
		intptr_t L_15;
		L_15 = FunctionPointer_1_get_Value_m5016AF7AD65D91AA6D0456BEB6ED3A9D3AD8B9A5_inline(L_14, FunctionPointer_1_get_Value_m5016AF7AD65D91AA6D0456BEB6ED3A9D3AD8B9A5_RuntimeMethod_var);
		NullCheck(L_13);
		L_13->___dataSendCB_8 = L_15;
		// config->dataReceiveCB = ManagedSecureFunctions.s_RecvMethod.Data.Value;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_16 = V_3;
		FunctionPointer_1_tA2FC39F25D07D293D943EDC747A8E0E7A70BDFC6* L_17;
		L_17 = SharedStatic_1_get_Data_m42E67BC10BCF19DA2EF4E13CEFBA6D7E4228F91C((&((ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_StaticFields*)il2cpp_codegen_static_fields_for(ManagedSecureFunctions_t483CDD82E3C6DC394E7D8AB2E5C79668A2059937_il2cpp_TypeInfo_var))->___s_RecvMethod_4), SharedStatic_1_get_Data_m42E67BC10BCF19DA2EF4E13CEFBA6D7E4228F91C_RuntimeMethod_var);
		intptr_t L_18;
		L_18 = FunctionPointer_1_get_Value_mD9253C9B8BD4ED226D78C76033424F14A1BFC366_inline(L_17, FunctionPointer_1_get_Value_mD9253C9B8BD4ED226D78C76033424F14A1BFC366_RuntimeMethod_var);
		NullCheck(L_16);
		L_16->___dataReceiveCB_9 = L_18;
		// config->clientAuth = Binding.UnityTLSRole_Client;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_19 = V_3;
		NullCheck(L_19);
		L_19->___clientAuth_3 = 2;
		// config->transportProtocol = Binding.UnityTLSTransportProtocol_Datagram;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_20 = V_3;
		NullCheck(L_20);
		L_20->___transportProtocol_4 = 1;
		// config->clientAuth = Binding.UnityTLSClientAuth_Optional;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_21 = V_3;
		NullCheck(L_21);
		L_21->___clientAuth_3 = 1;
		// config->ssl_read_timeout_ms = SecureNetworkProtocol.DefaultParameters.SSLReadTimeoutMs;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_22 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		uint32_t L_23 = (&((SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_StaticFields*)il2cpp_codegen_static_fields_for(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var))->___DefaultParameters_1)->___SSLReadTimeoutMs_6;
		NullCheck(L_22);
		L_22->___ssl_read_timeout_ms_15 = L_23;
		// config->ssl_handshake_timeout_min =
		//     SecureNetworkProtocol.DefaultParameters.SSLHandshakeTimeoutMin;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_24 = V_3;
		uint32_t L_25 = (&((SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_StaticFields*)il2cpp_codegen_static_fields_for(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var))->___DefaultParameters_1)->___SSLHandshakeTimeoutMin_8;
		NullCheck(L_24);
		L_24->___ssl_handshake_timeout_min_19 = L_25;
		// config->ssl_handshake_timeout_max =
		//     SecureNetworkProtocol.DefaultParameters.SSLHandshakeTimeoutMax;
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_26 = V_3;
		uint32_t L_27 = (&((SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_StaticFields*)il2cpp_codegen_static_fields_for(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var))->___DefaultParameters_1)->___SSLHandshakeTimeoutMax_7;
		NullCheck(L_26);
		L_26->___ssl_handshake_timeout_max_20 = L_27;
		// FixedString32Bytes hostname = "relay";
		FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 L_28;
		L_28 = FixedString32Bytes_op_Implicit_mD0ABB16ACC6621C61F924F70651403927DEACF9F(_stringLiteralA9F5008AA90307FD7521614307E34133396662CA, NULL);
		V_4 = L_28;
		// config->hostname = hostname.GetUnsafePtr();
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_29 = V_3;
		uint8_t* L_30;
		L_30 = FixedString32Bytes_GetUnsafePtr_mA653D9296813A2EA93C0D6FC501500008121C3A8_inline((&V_4), NULL);
		NullCheck(L_29);
		L_29->___hostname_16 = L_30;
		// config->psk = new Binding.unitytls_dataRef()
		// {
		//     dataPtr = protocolData->ServerData.HMACKey.Value,
		//     dataLen = new UIntPtr(64)
		// };
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_31 = V_3;
		il2cpp_codegen_initobj((&V_6), sizeof(unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8));
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_32 = V_0;
		NullCheck(L_32);
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_33 = (&L_32->___ServerData_10);
		RelayHMACKey_t8A1480D4E69892635FBA3B1408C094733613B844* L_34 = (&L_33->___HMACKey_5);
		U3CValueU3Ee__FixedBuffer_t3C8B36A587C8DE2573C0B7FD1CBD94E571B38A67* L_35 = (&L_34->___Value_0);
		uint8_t* L_36 = (&L_35->___FixedElementField_0);
		(&V_6)->___dataPtr_0 = (uint8_t*)((uintptr_t)L_36);
		uintptr_t L_37;
		memset((&L_37), 0, sizeof(L_37));
		UIntPtr__ctor_m5915109E3F198CA16FDFA9CF438FAAEBFB90DE27((&L_37), ((int32_t)64), /*hidden argument*/NULL);
		(&V_6)->___dataLen_1 = L_37;
		unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 L_38 = V_6;
		NullCheck(L_31);
		L_31->___psk_5 = L_38;
		// config->pskIdentity = new Binding.unitytls_dataRef()
		// {
		//     dataPtr = protocolData->ServerData.AllocationId.Value,
		//     dataLen = new UIntPtr((uint)16)
		// };
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_39 = V_3;
		il2cpp_codegen_initobj((&V_6), sizeof(unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8));
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_40 = V_0;
		NullCheck(L_40);
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_41 = (&L_40->___ServerData_10);
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984* L_42 = (&L_41->___AllocationId_4);
		U3CValueU3Ee__FixedBuffer_t0E279F5AD765D68C7D3ADB57B98FD471710955C8* L_43 = (&L_42->___Value_0);
		uint8_t* L_44 = (&L_43->___FixedElementField_0);
		(&V_6)->___dataPtr_0 = (uint8_t*)((uintptr_t)L_44);
		uintptr_t L_45;
		memset((&L_45), 0, sizeof(L_45));
		UIntPtr__ctor_m5915109E3F198CA16FDFA9CF438FAAEBFB90DE27((&L_45), ((int32_t)16), /*hidden argument*/NULL);
		(&V_6)->___dataLen_1 = L_45;
		unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 L_46 = V_6;
		NullCheck(L_39);
		L_39->___pskIdentity_6 = L_46;
		// protocolData->SecureClientState.ClientConfig = config;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_47 = V_0;
		NullCheck(L_47);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_48 = (&L_47->___SecureClientState_11);
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_49 = V_3;
		L_48->___ClientConfig_1 = L_49;
		// protocolData->SecureClientState.ClientPtr = Binding.unitytls_client_create(Binding.UnityTLSRole_Client, protocolData->SecureClientState.ClientConfig);
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_50 = V_0;
		NullCheck(L_50);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_51 = (&L_50->___SecureClientState_11);
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_52 = V_0;
		NullCheck(L_52);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_53 = (&L_52->___SecureClientState_11);
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_54 = L_53->___ClientConfig_1;
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_55;
		L_55 = Binding_unitytls_client_create_mA830787311EBD55A7ACAA925541EE3A28F398026(2, L_54, NULL);
		L_51->___ClientPtr_0 = L_55;
		// IntPtr secureUserData = (IntPtr)UnsafeUtility.Malloc(UnsafeUtility.SizeOf<SecureUserData>(),
		//     UnsafeUtility.AlignOf<SecureUserData>(), Allocator.Persistent);
		int32_t L_56;
		L_56 = UnsafeUtility_SizeOf_TisSecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B_m93E4445737BC86FE087B87E97CD00064A2CD9114(UnsafeUtility_SizeOf_TisSecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B_m93E4445737BC86FE087B87E97CD00064A2CD9114_RuntimeMethod_var);
		int32_t L_57;
		L_57 = UnsafeUtility_AlignOf_TisSecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B_m42E37113A90B5272BE314C380722580DEF3E96F8(UnsafeUtility_AlignOf_TisSecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B_m42E37113A90B5272BE314C380722580DEF3E96F8_RuntimeMethod_var);
		void* L_58;
		L_58 = UnsafeUtility_Malloc_mD7BD28D5AE7E4901B225B7DFFE2B568EE7BDC0C9(((int64_t)L_56), L_57, 4, NULL);
		intptr_t L_59;
		L_59 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_58, NULL);
		V_5 = L_59;
		// *(SecureUserData*)secureUserData = new SecureUserData
		// {
		//     Interface = default,
		//     Remote = default,
		//     QueueHandle = default,
		//     StreamData = IntPtr.Zero,
		//     Size = 0,
		//     BytesProcessed = 0
		// };
		intptr_t L_60 = V_5;
		void* L_61;
		L_61 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_60, NULL);
		il2cpp_codegen_initobj((&V_7), sizeof(SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B));
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_62 = (&(&V_7)->___Interface_1);
		il2cpp_codegen_initobj(L_62, sizeof(NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035));
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_63 = (&(&V_7)->___Remote_2);
		il2cpp_codegen_initobj(L_63, sizeof(NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686));
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_64 = (&(&V_7)->___QueueHandle_3);
		il2cpp_codegen_initobj(L_64, sizeof(NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090));
		intptr_t L_65 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		(&V_7)->___StreamData_0 = L_65;
		(&V_7)->___Size_4 = 0;
		(&V_7)->___BytesProcessed_5 = 0;
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B L_66 = V_7;
		*(SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B*)L_61 = L_66;
		// protocolData->SecureClientState.ClientConfig->transportUserData = secureUserData;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_67 = V_0;
		NullCheck(L_67);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_68 = (&L_67->___SecureClientState_11);
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_69 = L_68->___ClientConfig_1;
		intptr_t L_70 = V_5;
		NullCheck(L_69);
		L_69->___transportUserData_11 = L_70;
		// Binding.unitytls_client_init(protocolData->SecureClientState.ClientPtr);
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_71 = V_0;
		NullCheck(L_71);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_72 = (&L_71->___SecureClientState_11);
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_73 = L_72->___ClientPtr_0;
		int32_t L_74;
		L_74 = Binding_unitytls_client_init_m4A2D0AEC37B2EEAFFF7793ECE1C27B52E718C9AA(L_73, NULL);
	}

IL_0216:
	{
		// var currentState = Binding.unitytls_client_get_state(protocolData->SecureClientState.ClientPtr);
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_75 = V_0;
		NullCheck(L_75);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_76 = (&L_75->___SecureClientState_11);
		unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* L_77 = L_76->___ClientPtr_0;
		uint32_t L_78;
		L_78 = Binding_unitytls_client_get_state_mFA36FD1C48800D3B88D142ED9E1FFFC65F196B0F(L_77, NULL);
		// if (currentState == Binding.UnityTLSClientState_Handshake)
		if ((!(((uint32_t)L_78) == ((uint32_t)2))))
		{
			goto IL_022a;
		}
	}
	{
		// return;
		return;
	}

IL_022a:
	{
		// var data = (SecureUserData*)protocolData->SecureClientState.ClientConfig->transportUserData;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_79 = V_0;
		NullCheck(L_79);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_80 = (&L_79->___SecureClientState_11);
		unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* L_81 = L_80->___ClientConfig_1;
		NullCheck(L_81);
		intptr_t L_82 = L_81->___transportUserData_11;
		void* L_83;
		L_83 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_82, NULL);
		V_2 = (SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B*)L_83;
		// SecureNetworkProtocol.SetSecureUserData(IntPtr.Zero, 0, ref protocolData->ServerEndpoint, ref sendInterface, ref queueHandle, data);
		intptr_t L_84 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_85 = V_0;
		NullCheck(L_85);
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_86 = (&L_85->___ServerEndpoint_9);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_87 = ___1_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_88 = ___2_queueHandle;
		SecureUserData_t7AF182ED8C0BA05FC7AB70D34FB6F8DDB5BA7D1B* L_89 = V_2;
		il2cpp_codegen_runtime_class_init_inline(SecureNetworkProtocol_tDCD28385092B8A160046A42E8DA1E5C78A938581_il2cpp_TypeInfo_var);
		SecureNetworkProtocol_SetSecureUserData_m26108E90B1F178D279794549BC3435FE957E3542(L_84, 0, L_86, L_87, L_88, L_89, NULL);
		// var handshakeResult = SecureNetworkProtocol.SecureHandshakeStep(ref protocolData->SecureClientState);
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_90 = V_0;
		NullCheck(L_90);
		SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54* L_91 = (&L_90->___SecureClientState_11);
		uint32_t L_92;
		L_92 = SecureNetworkProtocol_SecureHandshakeStep_m28362FB06B2A4D53DBA0A066C7C3BB61FCD3C910(L_91, NULL);
		// break;
		goto IL_0393;
	}

IL_0265:
	{
		// if (updateTime - protocolData->LastConnectAttempt > protocolData->ConnectTimeoutMS || protocolData->LastUpdateTime == 0)
		int64_t L_93 = ___0_updateTime;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_94 = V_0;
		NullCheck(L_94);
		int64_t L_95 = L_94->___LastConnectAttempt_3;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_96 = V_0;
		NullCheck(L_96);
		int32_t L_97 = L_96->___ConnectTimeoutMS_6;
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract(L_93, L_95))) > ((int64_t)((int64_t)L_97))))
		{
			goto IL_0281;
		}
	}
	{
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_98 = V_0;
		NullCheck(L_98);
		int64_t L_99 = L_98->___LastUpdateTime_4;
		if (L_99)
		{
			goto IL_0393;
		}
	}

IL_0281:
	{
		// protocolData->LastConnectAttempt = updateTime;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_100 = V_0;
		int64_t L_101 = ___0_updateTime;
		NullCheck(L_100);
		L_100->___LastConnectAttempt_3 = L_101;
		// protocolData->LastSentTime = updateTime;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_102 = V_0;
		int64_t L_103 = ___0_updateTime;
		NullCheck(L_102);
		L_102->___LastSentTime_5 = L_103;
		// if (sendInterface.BeginSendMessage.Ptr.Invoke(out var sendHandle, sendInterface.UserData, requirePayloadSize) != 0)
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_104 = ___1_sendInterface;
		TransportFunctionPointer_1_t9F2FD24758ADF9E597DCA02A01D7972B74AF6736* L_105 = (&L_104->___BeginSendMessage_0);
		FunctionPointer_1_t5E2F5FC9CFE7FBBBECA6EB73BABFA0CD5F645155* L_106 = (&L_105->___Ptr_0);
		BeginSendMessageDelegate_t55D0469152EC11CCF544924363F1C12F13CF2FE1* L_107;
		L_107 = FunctionPointer_1_get_Invoke_mB99A6DFFF953B5843576414230D5153BAD08925B(L_106, FunctionPointer_1_get_Invoke_mB99A6DFFF953B5843576414230D5153BAD08925B_RuntimeMethod_var);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_108 = ___1_sendInterface;
		intptr_t L_109 = L_108->___UserData_3;
		NullCheck(L_107);
		int32_t L_110;
		L_110 = BeginSendMessageDelegate_Invoke_m616D28C5DFFFB30E1F1392F14F6C6EB3B7EC99CD_inline(L_107, (&V_8), L_109, ((int32_t)295), NULL);
		if (!L_110)
		{
			goto IL_02be;
		}
	}
	{
		// UnityEngine.Debug.LogError("Failed to send a ConnectionRequest packet");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral24A0CACB21015FAA463E07EB78B7EDCDFC64A265, NULL);
		// return;
		return;
	}

IL_02be:
	{
		// var writeResult = WriteBindMessage(ref protocolData->ServerEndpoint, ref sendHandle, ref queueHandle, userData);
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_111 = V_0;
		NullCheck(L_111);
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_112 = (&L_111->___ServerEndpoint_9);
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_113 = ___2_queueHandle;
		intptr_t L_114 = ___3_userData;
		bool L_115;
		L_115 = RelayNetworkProtocol_WriteBindMessage_mC25C43A384627ABC02C5EC0C4771E998779FA562(L_112, (&V_8), L_113, L_114, NULL);
		// if (!writeResult)
		if (L_115)
		{
			goto IL_02ed;
		}
	}
	{
		// sendInterface.AbortSendMessage.Ptr.Invoke(ref sendHandle, sendInterface.UserData);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_116 = ___1_sendInterface;
		TransportFunctionPointer_1_t6BF0E9809FEF820449ED4B566281FFDB8B1F6807* L_117 = (&L_116->___AbortSendMessage_2);
		FunctionPointer_1_t605FCD8E1E05F041A75BCDAE5CE44D9A201BFAA1* L_118 = (&L_117->___Ptr_0);
		AbortSendMessageDelegate_t6FBF6C859A8E442AC6D2CC1FEF00CD4D9815FB0D* L_119;
		L_119 = FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904(L_118, FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904_RuntimeMethod_var);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_120 = ___1_sendInterface;
		intptr_t L_121 = L_120->___UserData_3;
		NullCheck(L_119);
		AbortSendMessageDelegate_Invoke_m60B3BB8663C28583542B560731BE31828023A7CD_inline(L_119, (&V_8), L_121, NULL);
		// return;
		return;
	}

IL_02ed:
	{
		// if (SendMessage(protocolData, ref sendInterface, ref sendHandle, ref queueHandle) < 0)
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_122 = V_0;
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_123 = ___1_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_124 = ___2_queueHandle;
		int32_t L_125;
		L_125 = RelayNetworkProtocol_SendMessage_m90991C8E728497F7EEC594CE0478BA866B6BDBC2(L_122, L_123, (&V_8), L_124, NULL);
		if ((((int32_t)L_125) >= ((int32_t)0)))
		{
			goto IL_0393;
		}
	}
	{
		// Debug.LogError("Failed to send Bind message to relay.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral00AA18F32EB3BC84C0946FC58668DDCA73648A1C, NULL);
		// return;
		return;
	}

IL_0308:
	{
		// if (updateTime - protocolData->LastSentTime >= protocolData->RelayConnectionTimeMS)
		int64_t L_126 = ___0_updateTime;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_127 = V_0;
		NullCheck(L_127);
		int64_t L_128 = L_127->___LastSentTime_5;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_129 = V_0;
		NullCheck(L_129);
		int32_t L_130 = L_129->___RelayConnectionTimeMS_7;
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract(L_126, L_128))) < ((int64_t)((int64_t)L_130))))
		{
			goto IL_0393;
		}
	}
	{
		// if (sendInterface.BeginSendMessage.Ptr.Invoke(out var sendHandle, sendInterface.UserData, RelayMessagePing.Length) != 0)
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_131 = ___1_sendInterface;
		TransportFunctionPointer_1_t9F2FD24758ADF9E597DCA02A01D7972B74AF6736* L_132 = (&L_131->___BeginSendMessage_0);
		FunctionPointer_1_t5E2F5FC9CFE7FBBBECA6EB73BABFA0CD5F645155* L_133 = (&L_132->___Ptr_0);
		BeginSendMessageDelegate_t55D0469152EC11CCF544924363F1C12F13CF2FE1* L_134;
		L_134 = FunctionPointer_1_get_Invoke_mB99A6DFFF953B5843576414230D5153BAD08925B(L_133, FunctionPointer_1_get_Invoke_mB99A6DFFF953B5843576414230D5153BAD08925B_RuntimeMethod_var);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_135 = ___1_sendInterface;
		intptr_t L_136 = L_135->___UserData_3;
		NullCheck(L_134);
		int32_t L_137;
		L_137 = BeginSendMessageDelegate_Invoke_m616D28C5DFFFB30E1F1392F14F6C6EB3B7EC99CD_inline(L_134, (&V_9), L_136, ((int32_t)22), NULL);
		if (!L_137)
		{
			goto IL_0345;
		}
	}
	{
		// UnityEngine.Debug.LogError("Failed to send a RelayPingMessage packet");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral9470A01E1BA5F357A491D9D6EE453A71DCB6880F, NULL);
		// return;
		return;
	}

IL_0345:
	{
		// var writeResult = WriteRelayPingMessage(ref protocolData->ServerEndpoint, ref sendHandle, ref queueHandle, userData);
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_138 = V_0;
		NullCheck(L_138);
		NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* L_139 = (&L_138->___ServerEndpoint_9);
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_140 = ___2_queueHandle;
		intptr_t L_141 = ___3_userData;
		bool L_142;
		L_142 = RelayNetworkProtocol_WriteRelayPingMessage_m7D8A31AD76ACA7140B8DFCE0AA2BD525CD4E0163(L_139, (&V_9), L_140, L_141, NULL);
		// if (!writeResult)
		if (L_142)
		{
			goto IL_0374;
		}
	}
	{
		// sendInterface.AbortSendMessage.Ptr.Invoke(ref sendHandle, sendInterface.UserData);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_143 = ___1_sendInterface;
		TransportFunctionPointer_1_t6BF0E9809FEF820449ED4B566281FFDB8B1F6807* L_144 = (&L_143->___AbortSendMessage_2);
		FunctionPointer_1_t605FCD8E1E05F041A75BCDAE5CE44D9A201BFAA1* L_145 = (&L_144->___Ptr_0);
		AbortSendMessageDelegate_t6FBF6C859A8E442AC6D2CC1FEF00CD4D9815FB0D* L_146;
		L_146 = FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904(L_145, FunctionPointer_1_get_Invoke_m1965484420A5DD87DA5E45901A90553CB43CF904_RuntimeMethod_var);
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_147 = ___1_sendInterface;
		intptr_t L_148 = L_147->___UserData_3;
		NullCheck(L_146);
		AbortSendMessageDelegate_Invoke_m60B3BB8663C28583542B560731BE31828023A7CD_inline(L_146, (&V_9), L_148, NULL);
		// return;
		return;
	}

IL_0374:
	{
		// if (SendMessage(protocolData, ref sendInterface, ref sendHandle, ref queueHandle) < 0)
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_149 = V_0;
		NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* L_150 = ___1_sendInterface;
		NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* L_151 = ___2_queueHandle;
		int32_t L_152;
		L_152 = RelayNetworkProtocol_SendMessage_m90991C8E728497F7EEC594CE0478BA866B6BDBC2(L_149, L_150, (&V_9), L_151, NULL);
		if ((((int32_t)L_152) >= ((int32_t)0)))
		{
			goto IL_038c;
		}
	}
	{
		// Debug.LogError("Failed to send Ping message to relay.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral0B78DCE9FC648FDDEA9A82099B338C563041CBD5, NULL);
		// return;
		return;
	}

IL_038c:
	{
		// protocolData->LastSentTime = updateTime;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_153 = V_0;
		int64_t L_154 = ___0_updateTime;
		NullCheck(L_153);
		L_153->___LastSentTime_5 = L_154;
	}

IL_0393:
	{
		// protocolData->LastUpdateTime = updateTime;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_155 = V_0;
		int64_t L_156 = ___0_updateTime;
		NullCheck(L_155);
		L_155->___LastUpdateTime_4 = L_156;
		// }
		return;
	}
}
// System.Boolean Unity.Networking.Transport.Relay.RelayNetworkProtocol::WriteRelayPingMessage(Unity.Networking.Transport.NetworkInterfaceEndPoint&,Unity.Networking.Transport.NetworkInterfaceSendHandle&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RelayNetworkProtocol_WriteRelayPingMessage_m7D8A31AD76ACA7140B8DFCE0AA2BD525CD4E0163 (NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___0_serverEndpoint, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___1_sendHandle, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9470A01E1BA5F357A491D9D6EE453A71DCB6880F);
		s_Il2CppMethodInitialized = true;
	}
	RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* V_0 = NULL;
	uint8_t* V_1 = NULL;
	RelayMessagePing_t38F5F4C34944AE32ACC92EBDB4B86C33465CA2E2* V_2 = NULL;
	{
		// var protocolData = (RelayProtocolData*)userData;
		intptr_t L_0 = ___3_userData;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F*)L_1;
		// var packet = (byte*)sendHandle.data;
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* L_2 = ___1_sendHandle;
		intptr_t L_3 = L_2->___data_0;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		V_1 = (uint8_t*)L_4;
		// sendHandle.size = RelayMessagePing.Length;
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* L_5 = ___1_sendHandle;
		L_5->___size_2 = ((int32_t)22);
		// if (sendHandle.size > sendHandle.capacity)
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* L_6 = ___1_sendHandle;
		int32_t L_7 = L_6->___size_2;
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* L_8 = ___1_sendHandle;
		int32_t L_9 = L_8->___capacity_1;
		if ((((int32_t)L_7) <= ((int32_t)L_9)))
		{
			goto IL_0035;
		}
	}
	{
		// UnityEngine.Debug.LogError("Failed to send a RelayPingMessage packet");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral9470A01E1BA5F357A491D9D6EE453A71DCB6880F, NULL);
		// return false;
		return (bool)0;
	}

IL_0035:
	{
		// var message = (RelayMessagePing*)packet;
		uint8_t* L_10 = V_1;
		V_2 = (RelayMessagePing_t38F5F4C34944AE32ACC92EBDB4B86C33465CA2E2*)L_10;
		// *message = RelayMessagePing.Create(protocolData->ServerData.AllocationId, 0);
		RelayMessagePing_t38F5F4C34944AE32ACC92EBDB4B86C33465CA2E2* L_11 = V_2;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_12 = V_0;
		NullCheck(L_12);
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_13 = (&L_12->___ServerData_10);
		RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 L_14 = L_13->___AllocationId_4;
		RelayMessagePing_t38F5F4C34944AE32ACC92EBDB4B86C33465CA2E2 L_15;
		L_15 = RelayMessagePing_Create_m243B5A5AB0FB857278CC72CE0831BC229AB29D74(L_14, (uint16_t)0, NULL);
		*(RelayMessagePing_t38F5F4C34944AE32ACC92EBDB4B86C33465CA2E2*)L_11 = L_15;
		// return true;
		return (bool)1;
	}
}
// System.Boolean Unity.Networking.Transport.Relay.RelayNetworkProtocol::WriteBindMessage(Unity.Networking.Transport.NetworkInterfaceEndPoint&,Unity.Networking.Transport.NetworkInterfaceSendHandle&,Unity.Networking.Transport.NetworkSendQueueHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RelayNetworkProtocol_WriteBindMessage_mC25C43A384627ABC02C5EC0C4771E998779FA562 (NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___0_serverEndpoint, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___1_sendHandle, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10E84E98D744C26133C132C937EADCB43F4FB398);
		s_Il2CppMethodInitialized = true;
	}
	DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA V_0;
	memset((&V_0), 0, sizeof(V_0));
	RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* V_1 = NULL;
	{
		// var writer = WriterForSendBuffer(RelayMessageBind.Length, ref sendHandle);
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* L_0 = ___1_sendHandle;
		DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA L_1;
		L_1 = RelayNetworkProtocol_WriterForSendBuffer_m6BF6076BF31268B7C02D0DC9EE95F2E949F08349(((int32_t)295), L_0, NULL);
		V_0 = L_1;
		// if (writer.IsCreated == false)
		bool L_2;
		L_2 = DataStreamWriter_get_IsCreated_m11271E3EF88236DDD0C01BC571E304CCB1D47A00((&V_0), NULL);
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		// UnityEngine.Debug.LogError("Failed to send a RelayBindMessage packet");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral10E84E98D744C26133C132C937EADCB43F4FB398, NULL);
		// return false;
		return (bool)0;
	}

IL_0021:
	{
		// var protocolData = (RelayProtocolData*)userData;
		intptr_t L_3 = ___3_userData;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		V_1 = (RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F*)L_4;
		// RelayMessageBind.Write(writer, 0, protocolData->ServerData.Nonce, protocolData->ServerData.ConnectionData.Value, protocolData->ServerData.HMAC);
		DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA L_5 = V_0;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_6 = V_1;
		NullCheck(L_6);
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_7 = (&L_6->___ServerData_10);
		uint16_t L_8 = L_7->___Nonce_1;
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_9 = V_1;
		NullCheck(L_9);
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_10 = (&L_9->___ServerData_10);
		RelayConnectionData_tA5306A14AEB9FA72A119334CBE01CE0B1F7AC18D* L_11 = (&L_10->___ConnectionData_2);
		U3CValueU3Ee__FixedBuffer_t2EBBD6566B9DD8EF0CBC9EF9A9340955B5792054* L_12 = (&L_11->___Value_0);
		uint8_t* L_13 = (&L_12->___FixedElementField_0);
		RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F* L_14 = V_1;
		NullCheck(L_14);
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_15 = (&L_14->___ServerData_10);
		U3CHMACU3Ee__FixedBuffer_tEBE6EB5356C21D7CDAA77E2AB69381855EAD9816* L_16 = (&L_15->___HMAC_6);
		uint8_t* L_17 = (&L_16->___FixedElementField_0);
		RelayMessageBind_Write_mF2E171A35040AF34C9C02F90C81DD2D807BBE6BC(L_5, (uint8_t)0, L_8, (uint8_t*)((uintptr_t)L_13), (uint8_t*)((uintptr_t)L_17), NULL);
		// return true;
		return (bool)1;
	}
}
// Unity.Networking.Transport.DataStreamWriter Unity.Networking.Transport.Relay.RelayNetworkProtocol::WriterForSendBuffer(System.Int32,Unity.Networking.Transport.NetworkInterfaceSendHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA RelayNetworkProtocol_WriterForSendBuffer_m6BF6076BF31268B7C02D0DC9EE95F2E949F08349 (int32_t ___0_requestSize, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___1_sendHandle, const RuntimeMethod* method) 
{
	DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (requestSize <= sendHandle.capacity)
		int32_t L_0 = ___0_requestSize;
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* L_1 = ___1_sendHandle;
		int32_t L_2 = L_1->___capacity_1;
		if ((((int32_t)L_0) > ((int32_t)L_2)))
		{
			goto IL_0027;
		}
	}
	{
		// sendHandle.size = requestSize;
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* L_3 = ___1_sendHandle;
		int32_t L_4 = ___0_requestSize;
		L_3->___size_2 = L_4;
		// return new DataStreamWriter((byte*)sendHandle.data, sendHandle.size);
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* L_5 = ___1_sendHandle;
		intptr_t L_6 = L_5->___data_0;
		void* L_7;
		L_7 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_6, NULL);
		NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* L_8 = ___1_sendHandle;
		int32_t L_9 = L_8->___size_2;
		DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA L_10;
		memset((&L_10), 0, sizeof(L_10));
		DataStreamWriter__ctor_mE61DA857285F4FF4469253135FF3E8A40673EE62((&L_10), (uint8_t*)L_7, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0027:
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA));
		DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA L_11 = V_0;
		return L_11;
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
// Conversion methods for marshalling of: Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData
IL2CPP_EXTERN_C void RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_marshal_pinvoke(const RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F& unmarshaled, RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_marshaled_pinvoke& marshaled)
{
	marshaled.___ConnectionState_0 = unmarshaled.___ConnectionState_0;
	marshaled.___SecureState_1 = unmarshaled.___SecureState_1;
	marshaled.___ConnectionReceiveToken_2 = unmarshaled.___ConnectionReceiveToken_2;
	marshaled.___LastConnectAttempt_3 = unmarshaled.___LastConnectAttempt_3;
	marshaled.___LastUpdateTime_4 = unmarshaled.___LastUpdateTime_4;
	marshaled.___LastSentTime_5 = unmarshaled.___LastSentTime_5;
	marshaled.___ConnectTimeoutMS_6 = unmarshaled.___ConnectTimeoutMS_6;
	marshaled.___RelayConnectionTimeMS_7 = unmarshaled.___RelayConnectionTimeMS_7;
	marshaled.___HostAllocationId_8 = unmarshaled.___HostAllocationId_8;
	marshaled.___ServerEndpoint_9 = unmarshaled.___ServerEndpoint_9;
	marshaled.___ServerData_10 = unmarshaled.___ServerData_10;
	marshaled.___SecureClientState_11 = unmarshaled.___SecureClientState_11;
	marshaled.___ConnectOnBind_12 = static_cast<int32_t>(unmarshaled.___ConnectOnBind_12);
}
IL2CPP_EXTERN_C void RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_marshal_pinvoke_back(const RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_marshaled_pinvoke& marshaled, RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F& unmarshaled)
{
	uint8_t unmarshaledConnectionState_temp_0 = 0;
	unmarshaledConnectionState_temp_0 = marshaled.___ConnectionState_0;
	unmarshaled.___ConnectionState_0 = unmarshaledConnectionState_temp_0;
	uint8_t unmarshaledSecureState_temp_1 = 0;
	unmarshaledSecureState_temp_1 = marshaled.___SecureState_1;
	unmarshaled.___SecureState_1 = unmarshaledSecureState_temp_1;
	SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 unmarshaledConnectionReceiveToken_temp_2;
	memset((&unmarshaledConnectionReceiveToken_temp_2), 0, sizeof(unmarshaledConnectionReceiveToken_temp_2));
	unmarshaledConnectionReceiveToken_temp_2 = marshaled.___ConnectionReceiveToken_2;
	unmarshaled.___ConnectionReceiveToken_2 = unmarshaledConnectionReceiveToken_temp_2;
	int64_t unmarshaledLastConnectAttempt_temp_3 = 0;
	unmarshaledLastConnectAttempt_temp_3 = marshaled.___LastConnectAttempt_3;
	unmarshaled.___LastConnectAttempt_3 = unmarshaledLastConnectAttempt_temp_3;
	int64_t unmarshaledLastUpdateTime_temp_4 = 0;
	unmarshaledLastUpdateTime_temp_4 = marshaled.___LastUpdateTime_4;
	unmarshaled.___LastUpdateTime_4 = unmarshaledLastUpdateTime_temp_4;
	int64_t unmarshaledLastSentTime_temp_5 = 0;
	unmarshaledLastSentTime_temp_5 = marshaled.___LastSentTime_5;
	unmarshaled.___LastSentTime_5 = unmarshaledLastSentTime_temp_5;
	int32_t unmarshaledConnectTimeoutMS_temp_6 = 0;
	unmarshaledConnectTimeoutMS_temp_6 = marshaled.___ConnectTimeoutMS_6;
	unmarshaled.___ConnectTimeoutMS_6 = unmarshaledConnectTimeoutMS_temp_6;
	int32_t unmarshaledRelayConnectionTimeMS_temp_7 = 0;
	unmarshaledRelayConnectionTimeMS_temp_7 = marshaled.___RelayConnectionTimeMS_7;
	unmarshaled.___RelayConnectionTimeMS_7 = unmarshaledRelayConnectionTimeMS_temp_7;
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 unmarshaledHostAllocationId_temp_8;
	memset((&unmarshaledHostAllocationId_temp_8), 0, sizeof(unmarshaledHostAllocationId_temp_8));
	unmarshaledHostAllocationId_temp_8 = marshaled.___HostAllocationId_8;
	unmarshaled.___HostAllocationId_8 = unmarshaledHostAllocationId_temp_8;
	NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 unmarshaledServerEndpoint_temp_9;
	memset((&unmarshaledServerEndpoint_temp_9), 0, sizeof(unmarshaledServerEndpoint_temp_9));
	unmarshaledServerEndpoint_temp_9 = marshaled.___ServerEndpoint_9;
	unmarshaled.___ServerEndpoint_9 = unmarshaledServerEndpoint_temp_9;
	RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 unmarshaledServerData_temp_10;
	memset((&unmarshaledServerData_temp_10), 0, sizeof(unmarshaledServerData_temp_10));
	unmarshaledServerData_temp_10 = marshaled.___ServerData_10;
	unmarshaled.___ServerData_10 = unmarshaledServerData_temp_10;
	SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 unmarshaledSecureClientState_temp_11;
	memset((&unmarshaledSecureClientState_temp_11), 0, sizeof(unmarshaledSecureClientState_temp_11));
	unmarshaledSecureClientState_temp_11 = marshaled.___SecureClientState_11;
	unmarshaled.___SecureClientState_11 = unmarshaledSecureClientState_temp_11;
	bool unmarshaledConnectOnBind_temp_12 = false;
	unmarshaledConnectOnBind_temp_12 = static_cast<bool>(marshaled.___ConnectOnBind_12);
	unmarshaled.___ConnectOnBind_12 = unmarshaledConnectOnBind_temp_12;
}
// Conversion method for clean up from marshalling of: Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData
IL2CPP_EXTERN_C void RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_marshal_pinvoke_cleanup(RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData
IL2CPP_EXTERN_C void RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_marshal_com(const RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F& unmarshaled, RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_marshaled_com& marshaled)
{
	marshaled.___ConnectionState_0 = unmarshaled.___ConnectionState_0;
	marshaled.___SecureState_1 = unmarshaled.___SecureState_1;
	marshaled.___ConnectionReceiveToken_2 = unmarshaled.___ConnectionReceiveToken_2;
	marshaled.___LastConnectAttempt_3 = unmarshaled.___LastConnectAttempt_3;
	marshaled.___LastUpdateTime_4 = unmarshaled.___LastUpdateTime_4;
	marshaled.___LastSentTime_5 = unmarshaled.___LastSentTime_5;
	marshaled.___ConnectTimeoutMS_6 = unmarshaled.___ConnectTimeoutMS_6;
	marshaled.___RelayConnectionTimeMS_7 = unmarshaled.___RelayConnectionTimeMS_7;
	marshaled.___HostAllocationId_8 = unmarshaled.___HostAllocationId_8;
	marshaled.___ServerEndpoint_9 = unmarshaled.___ServerEndpoint_9;
	marshaled.___ServerData_10 = unmarshaled.___ServerData_10;
	marshaled.___SecureClientState_11 = unmarshaled.___SecureClientState_11;
	marshaled.___ConnectOnBind_12 = static_cast<int32_t>(unmarshaled.___ConnectOnBind_12);
}
IL2CPP_EXTERN_C void RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_marshal_com_back(const RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_marshaled_com& marshaled, RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F& unmarshaled)
{
	uint8_t unmarshaledConnectionState_temp_0 = 0;
	unmarshaledConnectionState_temp_0 = marshaled.___ConnectionState_0;
	unmarshaled.___ConnectionState_0 = unmarshaledConnectionState_temp_0;
	uint8_t unmarshaledSecureState_temp_1 = 0;
	unmarshaledSecureState_temp_1 = marshaled.___SecureState_1;
	unmarshaled.___SecureState_1 = unmarshaledSecureState_temp_1;
	SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 unmarshaledConnectionReceiveToken_temp_2;
	memset((&unmarshaledConnectionReceiveToken_temp_2), 0, sizeof(unmarshaledConnectionReceiveToken_temp_2));
	unmarshaledConnectionReceiveToken_temp_2 = marshaled.___ConnectionReceiveToken_2;
	unmarshaled.___ConnectionReceiveToken_2 = unmarshaledConnectionReceiveToken_temp_2;
	int64_t unmarshaledLastConnectAttempt_temp_3 = 0;
	unmarshaledLastConnectAttempt_temp_3 = marshaled.___LastConnectAttempt_3;
	unmarshaled.___LastConnectAttempt_3 = unmarshaledLastConnectAttempt_temp_3;
	int64_t unmarshaledLastUpdateTime_temp_4 = 0;
	unmarshaledLastUpdateTime_temp_4 = marshaled.___LastUpdateTime_4;
	unmarshaled.___LastUpdateTime_4 = unmarshaledLastUpdateTime_temp_4;
	int64_t unmarshaledLastSentTime_temp_5 = 0;
	unmarshaledLastSentTime_temp_5 = marshaled.___LastSentTime_5;
	unmarshaled.___LastSentTime_5 = unmarshaledLastSentTime_temp_5;
	int32_t unmarshaledConnectTimeoutMS_temp_6 = 0;
	unmarshaledConnectTimeoutMS_temp_6 = marshaled.___ConnectTimeoutMS_6;
	unmarshaled.___ConnectTimeoutMS_6 = unmarshaledConnectTimeoutMS_temp_6;
	int32_t unmarshaledRelayConnectionTimeMS_temp_7 = 0;
	unmarshaledRelayConnectionTimeMS_temp_7 = marshaled.___RelayConnectionTimeMS_7;
	unmarshaled.___RelayConnectionTimeMS_7 = unmarshaledRelayConnectionTimeMS_temp_7;
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 unmarshaledHostAllocationId_temp_8;
	memset((&unmarshaledHostAllocationId_temp_8), 0, sizeof(unmarshaledHostAllocationId_temp_8));
	unmarshaledHostAllocationId_temp_8 = marshaled.___HostAllocationId_8;
	unmarshaled.___HostAllocationId_8 = unmarshaledHostAllocationId_temp_8;
	NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 unmarshaledServerEndpoint_temp_9;
	memset((&unmarshaledServerEndpoint_temp_9), 0, sizeof(unmarshaledServerEndpoint_temp_9));
	unmarshaledServerEndpoint_temp_9 = marshaled.___ServerEndpoint_9;
	unmarshaled.___ServerEndpoint_9 = unmarshaledServerEndpoint_temp_9;
	RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 unmarshaledServerData_temp_10;
	memset((&unmarshaledServerData_temp_10), 0, sizeof(unmarshaledServerData_temp_10));
	unmarshaledServerData_temp_10 = marshaled.___ServerData_10;
	unmarshaled.___ServerData_10 = unmarshaledServerData_temp_10;
	SecureClientState_t347C5882049D4DC06AD28FFFC8C16ADD7D77EB54 unmarshaledSecureClientState_temp_11;
	memset((&unmarshaledSecureClientState_temp_11), 0, sizeof(unmarshaledSecureClientState_temp_11));
	unmarshaledSecureClientState_temp_11 = marshaled.___SecureClientState_11;
	unmarshaled.___SecureClientState_11 = unmarshaledSecureClientState_temp_11;
	bool unmarshaledConnectOnBind_temp_12 = false;
	unmarshaledConnectOnBind_temp_12 = static_cast<bool>(marshaled.___ConnectOnBind_12);
	unmarshaled.___ConnectOnBind_12 = unmarshaledConnectOnBind_temp_12;
}
// Conversion method for clean up from marshalling of: Unity.Networking.Transport.Relay.RelayNetworkProtocol/RelayProtocolData
IL2CPP_EXTERN_C void RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_marshal_com_cleanup(RelayProtocolData_tD57D421CA918D581F6E2314B53121386C617E66F_marshaled_com& marshaled)
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
// Unity.Networking.Transport.Utilities.FragmentationUtility/Parameters Unity.Networking.Transport.Utilities.FragmentationStageParameterExtensions::GetFragmentationStageParameters(Unity.Networking.Transport.NetworkSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Parameters_t59B022551E59FBC1EA11D32A22CF7C3457682BAE FragmentationStageParameterExtensions_GetFragmentationStageParameters_m3801B3FC4777676411E2E91A3669034166336BBD (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* ___0_settings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkSettings_TryGet_TisParameters_t59B022551E59FBC1EA11D32A22CF7C3457682BAE_mC5258ABE8D7C61CFE499332D7AEBE17451C38BA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Parameters_t59B022551E59FBC1EA11D32A22CF7C3457682BAE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!settings.TryGet<FragmentationUtility.Parameters>(out var parameters))
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_0 = ___0_settings;
		bool L_1;
		L_1 = NetworkSettings_TryGet_TisParameters_t59B022551E59FBC1EA11D32A22CF7C3457682BAE_mC5258ABE8D7C61CFE499332D7AEBE17451C38BA8(L_0, (&V_0), NetworkSettings_TryGet_TisParameters_t59B022551E59FBC1EA11D32A22CF7C3457682BAE_mC5258ABE8D7C61CFE499332D7AEBE17451C38BA8_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		// parameters.PayloadCapacity = FragmentationUtility.Parameters.k_DefaultPayloadCapacity;
		(&V_0)->___PayloadCapacity_0 = ((int32_t)4096);
	}

IL_0016:
	{
		// return parameters;
		Parameters_t59B022551E59FBC1EA11D32A22CF7C3457682BAE L_2 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Networking.Transport.Utilities.ReliableUtility/Parameters Unity.Networking.Transport.Utilities.ReliableStageParameterExtensions::GetReliableStageParameters(Unity.Networking.Transport.NetworkSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Parameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5 ReliableStageParameterExtensions_GetReliableStageParameters_mC76BF9B097D89C4507C70D100B8982E6F62E7C7D (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* ___0_settings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkSettings_TryGet_TisParameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5_m1265A0047017C7EE05689AA051CCD6EC15B4A67F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Parameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!settings.TryGet<ReliableUtility.Parameters>(out var parameters))
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_0 = ___0_settings;
		bool L_1;
		L_1 = NetworkSettings_TryGet_TisParameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5_m1265A0047017C7EE05689AA051CCD6EC15B4A67F(L_0, (&V_0), NetworkSettings_TryGet_TisParameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5_m1265A0047017C7EE05689AA051CCD6EC15B4A67F_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// parameters.WindowSize = ReliableUtility.ParameterConstants.WindowSize;
		(&V_0)->___WindowSize_0 = ((int32_t)32);
	}

IL_0013:
	{
		// return parameters;
		Parameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5 L_2 = V_0;
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
// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility::PacketHeaderWireSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReliableUtility_PacketHeaderWireSize_mAF098505D9DB52C30D3AB041DDC025CB1FDCC82A (int32_t ___0_windowSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01_mE682CCE1084DECD3C3F1EF2FFA2AB8BC799E35E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var fullHeaderSize = UnsafeUtility.SizeOf<ReliableHeader>();
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01_mE682CCE1084DECD3C3F1EF2FFA2AB8BC799E35E4(UnsafeUtility_SizeOf_TisReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01_mE682CCE1084DECD3C3F1EF2FFA2AB8BC799E35E4_RuntimeMethod_var);
		V_0 = L_0;
		// return windowSize > 32 ? fullHeaderSize : fullHeaderSize - sizeof(uint);
		int32_t L_1 = ___0_windowSize;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)32))))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = V_0;
		return ((int32_t)il2cpp_codegen_subtract(L_2, 4));
	}

IL_000f:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility::PacketHeaderWireSize(Unity.Networking.Transport.NetworkPipelineContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReliableUtility_PacketHeaderWireSize_mCA3DDAFACAA4EFCD3118D39F5CA0CA585FCB1BA4 (NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD ___0_ctx, const RuntimeMethod* method) 
{
	SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* V_0 = NULL;
	{
		// var reliable = (SharedContext*)ctx.internalSharedProcessBuffer;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_0 = ___0_ctx;
		uint8_t* L_1 = L_0.___internalSharedProcessBuffer_1;
		V_0 = (SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0*)L_1;
		// var windowSize = reliable->WindowSize;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___WindowSize_0;
		// return PacketHeaderWireSize(windowSize);
		int32_t L_4;
		L_4 = ReliableUtility_PacketHeaderWireSize_mAF098505D9DB52C30D3AB041DDC025CB1FDCC82A(L_3, NULL);
		return L_4;
	}
}
// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility::SharedCapacityNeeded(Unity.Networking.Transport.Utilities.ReliableUtility/Parameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReliableUtility_SharedCapacityNeeded_m96D0D85CF1F30F060CA45DA242F8FDD78A24D5A5 (Parameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5 ___0_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReliableUtility_AlignedSizeOf_TisPacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4_m9785E521127021B2207B6EF5E4B37CA3B3C2C617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReliableUtility_AlignedSizeOf_TisSharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0_mD98E333F02D354D9F0A02FA0C35C05AEE9B87739_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var timerDataSize = AlignedSizeOf<PacketTimers>() * param.WindowSize * 2;
		int32_t L_0;
		L_0 = ReliableUtility_AlignedSizeOf_TisPacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4_m9785E521127021B2207B6EF5E4B37CA3B3C2C617(ReliableUtility_AlignedSizeOf_TisPacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4_m9785E521127021B2207B6EF5E4B37CA3B3C2C617_RuntimeMethod_var);
		Parameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5 L_1 = ___0_param;
		int32_t L_2 = L_1.___WindowSize_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_0, L_2)), 2));
		// var capacityNeeded = AlignedSizeOf<SharedContext>() + timerDataSize;
		int32_t L_3;
		L_3 = ReliableUtility_AlignedSizeOf_TisSharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0_mD98E333F02D354D9F0A02FA0C35C05AEE9B87739(ReliableUtility_AlignedSizeOf_TisSharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0_mD98E333F02D354D9F0A02FA0C35C05AEE9B87739_RuntimeMethod_var);
		int32_t L_4 = V_0;
		// return capacityNeeded;
		return ((int32_t)il2cpp_codegen_add(L_3, L_4));
	}
}
// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility::ProcessCapacityNeeded(Unity.Networking.Transport.Utilities.ReliableUtility/Parameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReliableUtility_ProcessCapacityNeeded_mBB1217FF168816E29F164AF46A1AB866B306AA53 (Parameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5 ___0_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReliableUtility_AlignedSizeOf_TisContext_t99C75CF38B33BF89D1AF089C3466321489BEA99A_m7B68590F46CFFDE67D46991BA2B5EBB1C0AACF14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReliableUtility_AlignedSizeOf_TisPacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2_mD6EDD07DCBAB2FCA68CA5BB60625D06BD7D7F19E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var infoSize = AlignedSizeOf<PacketInformation>();
		int32_t L_0;
		L_0 = ReliableUtility_AlignedSizeOf_TisPacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2_mD6EDD07DCBAB2FCA68CA5BB60625D06BD7D7F19E(ReliableUtility_AlignedSizeOf_TisPacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2_mD6EDD07DCBAB2FCA68CA5BB60625D06BD7D7F19E_RuntimeMethod_var);
		V_0 = L_0;
		// var dataSize = (ReliablePacket.Length + NetworkPipelineProcessor.AlignmentMinusOne) & (~NetworkPipelineProcessor.AlignmentMinusOne);
		V_1 = ((int32_t)1408);
		// infoSize *= param.WindowSize;
		int32_t L_1 = V_0;
		Parameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5 L_2 = ___0_param;
		int32_t L_3 = L_2.___WindowSize_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_1, L_3));
		// dataSize *= param.WindowSize;
		int32_t L_4 = V_1;
		Parameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5 L_5 = ___0_param;
		int32_t L_6 = L_5.___WindowSize_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_4, L_6));
		// var capacityNeeded = AlignedSizeOf<Context>() + infoSize + dataSize;
		int32_t L_7;
		L_7 = ReliableUtility_AlignedSizeOf_TisContext_t99C75CF38B33BF89D1AF089C3466321489BEA99A_m7B68590F46CFFDE67D46991BA2B5EBB1C0AACF14(ReliableUtility_AlignedSizeOf_TisContext_t99C75CF38B33BF89D1AF089C3466321489BEA99A_m7B68590F46CFFDE67D46991BA2B5EBB1C0AACF14_RuntimeMethod_var);
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		// return capacityNeeded;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_7, L_8)), L_9));
	}
}
// Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext Unity.Networking.Transport.Utilities.ReliableUtility::InitializeContext(System.Byte*,System.Int32,System.Byte*,System.Int32,System.Byte*,System.Int32,Unity.Networking.Transport.Utilities.ReliableUtility/Parameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0 ReliableUtility_InitializeContext_m1A790A3BE71B137186D744E95ED336FC49476137 (uint8_t* ___0_sharedBuffer, int32_t ___1_sharedBufferLength, uint8_t* ___2_sendBuffer, int32_t ___3_sendBufferLength, uint8_t* ___4_recvBuffer, int32_t ___5_recvBufferLength, Parameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5 ___6_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReliableUtility_AlignedSizeOf_TisPacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4_m9785E521127021B2207B6EF5E4B37CA3B3C2C617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReliableUtility_AlignedSizeOf_TisSharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0_mD98E333F02D354D9F0A02FA0C35C05AEE9B87739_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* V_0 = NULL;
	SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RTTInfo_tAF1A100DBA67BD0367A9ABA6928B4E574CBE5518 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// InitializeProcessContext(sendBuffer, sendBufferLength, param);
		uint8_t* L_0 = ___2_sendBuffer;
		int32_t L_1 = ___3_sendBufferLength;
		Parameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5 L_2 = ___6_param;
		int32_t L_3;
		L_3 = ReliableUtility_InitializeProcessContext_mC2B15D02CD6EBDC10DDEF0BA297875B08BC3A7A0(L_0, L_1, L_2, NULL);
		// InitializeProcessContext(recvBuffer, recvBufferLength, param);
		uint8_t* L_4 = ___4_recvBuffer;
		int32_t L_5 = ___5_recvBufferLength;
		Parameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5 L_6 = ___6_param;
		int32_t L_7;
		L_7 = ReliableUtility_InitializeProcessContext_mC2B15D02CD6EBDC10DDEF0BA297875B08BC3A7A0(L_4, L_5, L_6, NULL);
		// SharedContext* notifier = (SharedContext*)sharedBuffer;
		uint8_t* L_8 = ___0_sharedBuffer;
		V_0 = (SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0*)L_8;
		// *notifier = new SharedContext
		// {
		//     WindowSize = param.WindowSize,
		//     SentPackets = new SequenceBufferContext { Acked = NullEntry, AckedMask = ~0ul, LastAckedMask = ~0ul },
		//     MinimumResendTime = DefaultMinimumResendTime,
		//     ReceivedPackets = new SequenceBufferContext { Sequence = NullEntry, AckedMask = ~0ul, LastAckedMask = ~0ul },
		//     RttInfo = new RTTInfo { SmoothedVariance = 5, SmoothedRtt = 50, ResendTimeout = 50, LastRtt = 50 },
		//     TimerDataOffset = AlignedSizeOf<SharedContext>(),
		//     TimerDataStride = AlignedSizeOf<PacketTimers>(),
		//     RemoteTimerDataOffset = AlignedSizeOf<SharedContext>() + AlignedSizeOf<PacketTimers>() * param.WindowSize,
		//     RemoteTimerDataStride = AlignedSizeOf<PacketTimers>()
		// };
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_9 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0));
		Parameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5 L_10 = ___6_param;
		int32_t L_11 = L_10.___WindowSize_0;
		(&V_1)->___WindowSize_0 = L_11;
		il2cpp_codegen_initobj((&V_2), sizeof(SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599));
		(&V_2)->___Acked_1 = (-1);
		(&V_2)->___AckedMask_2 = ((int64_t)(-1));
		(&V_2)->___LastAckedMask_3 = ((int64_t)(-1));
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599 L_12 = V_2;
		(&V_1)->___SentPackets_2 = L_12;
		(&V_1)->___MinimumResendTime_1 = ((int32_t)64);
		il2cpp_codegen_initobj((&V_2), sizeof(SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599));
		(&V_2)->___Sequence_0 = (-1);
		(&V_2)->___AckedMask_2 = ((int64_t)(-1));
		(&V_2)->___LastAckedMask_3 = ((int64_t)(-1));
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599 L_13 = V_2;
		(&V_1)->___ReceivedPackets_3 = L_13;
		il2cpp_codegen_initobj((&V_3), sizeof(RTTInfo_tAF1A100DBA67BD0367A9ABA6928B4E574CBE5518));
		(&V_3)->___SmoothedVariance_2 = (5.0f);
		(&V_3)->___SmoothedRtt_1 = (50.0f);
		(&V_3)->___ResendTimeout_3 = ((int32_t)50);
		(&V_3)->___LastRtt_0 = ((int32_t)50);
		RTTInfo_tAF1A100DBA67BD0367A9ABA6928B4E574CBE5518 L_14 = V_3;
		(&V_1)->___RttInfo_7 = L_14;
		int32_t L_15;
		L_15 = ReliableUtility_AlignedSizeOf_TisSharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0_mD98E333F02D354D9F0A02FA0C35C05AEE9B87739(ReliableUtility_AlignedSizeOf_TisSharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0_mD98E333F02D354D9F0A02FA0C35C05AEE9B87739_RuntimeMethod_var);
		(&V_1)->___TimerDataOffset_8 = L_15;
		int32_t L_16;
		L_16 = ReliableUtility_AlignedSizeOf_TisPacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4_m9785E521127021B2207B6EF5E4B37CA3B3C2C617(ReliableUtility_AlignedSizeOf_TisPacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4_m9785E521127021B2207B6EF5E4B37CA3B3C2C617_RuntimeMethod_var);
		(&V_1)->___TimerDataStride_9 = L_16;
		int32_t L_17;
		L_17 = ReliableUtility_AlignedSizeOf_TisSharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0_mD98E333F02D354D9F0A02FA0C35C05AEE9B87739(ReliableUtility_AlignedSizeOf_TisSharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0_mD98E333F02D354D9F0A02FA0C35C05AEE9B87739_RuntimeMethod_var);
		int32_t L_18;
		L_18 = ReliableUtility_AlignedSizeOf_TisPacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4_m9785E521127021B2207B6EF5E4B37CA3B3C2C617(ReliableUtility_AlignedSizeOf_TisPacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4_m9785E521127021B2207B6EF5E4B37CA3B3C2C617_RuntimeMethod_var);
		Parameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5 L_19 = ___6_param;
		int32_t L_20 = L_19.___WindowSize_0;
		(&V_1)->___RemoteTimerDataOffset_10 = ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)il2cpp_codegen_multiply(L_18, L_20))));
		int32_t L_21;
		L_21 = ReliableUtility_AlignedSizeOf_TisPacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4_m9785E521127021B2207B6EF5E4B37CA3B3C2C617(ReliableUtility_AlignedSizeOf_TisPacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4_m9785E521127021B2207B6EF5E4B37CA3B3C2C617_RuntimeMethod_var);
		(&V_1)->___RemoteTimerDataStride_11 = L_21;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0 L_22 = V_1;
		*(SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0*)L_9 = L_22;
		// return *notifier;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_23 = V_0;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0 L_24 = (*(SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0*)L_23);
		return L_24;
	}
}
// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility::InitializeProcessContext(System.Byte*,System.Int32,Unity.Networking.Transport.Utilities.ReliableUtility/Parameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReliableUtility_InitializeProcessContext_mC2B15D02CD6EBDC10DDEF0BA297875B08BC3A7A0 (uint8_t* ___0_buffer, int32_t ___1_bufferLength, Parameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5 ___2_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReliableUtility_AlignedSizeOf_TisContext_t99C75CF38B33BF89D1AF089C3466321489BEA99A_m7B68590F46CFFDE67D46991BA2B5EBB1C0AACF14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReliableUtility_AlignedSizeOf_TisPacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2_mD6EDD07DCBAB2FCA68CA5BB60625D06BD7D7F19E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* V_1 = NULL;
	{
		// int totalCapacity = ProcessCapacityNeeded(param);
		Parameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5 L_0 = ___2_param;
		int32_t L_1;
		L_1 = ReliableUtility_ProcessCapacityNeeded_mBB1217FF168816E29F164AF46A1AB866B306AA53(L_0, NULL);
		V_0 = L_1;
		// if (bufferLength != totalCapacity)
		int32_t L_2 = ___1_bufferLength;
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_000e;
		}
	}
	{
		// return (int)ErrorCodes.InsufficientMemory;
		return ((int32_t)-8);
	}

IL_000e:
	{
		// Context* ctx = (Context*)buffer;
		uint8_t* L_4 = ___0_buffer;
		V_1 = (Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A*)L_4;
		// ctx->Capacity = param.WindowSize;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_5 = V_1;
		Parameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5 L_6 = ___2_param;
		int32_t L_7 = L_6.___WindowSize_0;
		NullCheck(L_5);
		L_5->___Capacity_0 = L_7;
		// ctx->IndexStride = AlignedSizeOf<PacketInformation>();
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_8 = V_1;
		int32_t L_9;
		L_9 = ReliableUtility_AlignedSizeOf_TisPacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2_mD6EDD07DCBAB2FCA68CA5BB60625D06BD7D7F19E(ReliableUtility_AlignedSizeOf_TisPacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2_mD6EDD07DCBAB2FCA68CA5BB60625D06BD7D7F19E_RuntimeMethod_var);
		NullCheck(L_8);
		L_8->___IndexStride_3 = L_9;
		// ctx->IndexPtrOffset = AlignedSizeOf<Context>();
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_10 = V_1;
		int32_t L_11;
		L_11 = ReliableUtility_AlignedSizeOf_TisContext_t99C75CF38B33BF89D1AF089C3466321489BEA99A_m7B68590F46CFFDE67D46991BA2B5EBB1C0AACF14(ReliableUtility_AlignedSizeOf_TisContext_t99C75CF38B33BF89D1AF089C3466321489BEA99A_m7B68590F46CFFDE67D46991BA2B5EBB1C0AACF14_RuntimeMethod_var);
		NullCheck(L_10);
		L_10->___IndexPtrOffset_4 = L_11;
		// ctx->DataStride = (ReliablePacket.Length + NetworkPipelineProcessor.AlignmentMinusOne) & (~NetworkPipelineProcessor.AlignmentMinusOne);
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_12 = V_1;
		NullCheck(L_12);
		L_12->___DataStride_5 = ((int32_t)1408);
		// ctx->DataPtrOffset = ctx->IndexPtrOffset + (ctx->IndexStride * ctx->Capacity);
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_13 = V_1;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = L_14->___IndexPtrOffset_4;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = L_16->___IndexStride_3;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19 = L_18->___Capacity_0;
		NullCheck(L_13);
		L_13->___DataPtrOffset_6 = ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)il2cpp_codegen_multiply(L_17, L_19))));
		// ctx->Resume = NullEntry;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_20 = V_1;
		NullCheck(L_20);
		L_20->___Resume_1 = (-1);
		// ctx->Delivered = NullEntry;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_21 = V_1;
		NullCheck(L_21);
		L_21->___Delivered_2 = (-1);
		// Release(buffer, 0, param.WindowSize);
		uint8_t* L_22 = ___0_buffer;
		Parameters_tF86D75FA18B8304AD7743BB4ACA3DC712AD331C5 L_23 = ___2_param;
		int32_t L_24 = L_23.___WindowSize_0;
		ReliableUtility_Release_mA4044B7D5E9BAC7CE0E362CDAF088E8AC4FB4926(L_22, 0, L_24, NULL);
		// return 0;
		return 0;
	}
}
// System.Void Unity.Networking.Transport.Utilities.ReliableUtility::SetPacket(System.Byte*,System.Int32,Unity.Networking.Transport.InboundRecvBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableUtility_SetPacket_mE6B7E4B5BB34EB80B8575A91A65754C00241213E (uint8_t* ___0_self, int32_t ___1_sequence, InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB ___2_data, const RuntimeMethod* method) 
{
	{
		// SetPacket(self, sequence, data.buffer, data.bufferLength);
		uint8_t* L_0 = ___0_self;
		int32_t L_1 = ___1_sequence;
		InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB L_2 = ___2_data;
		uint8_t* L_3 = L_2.___buffer_0;
		InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB L_4 = ___2_data;
		int32_t L_5 = L_4.___bufferLength_1;
		ReliableUtility_SetPacket_m943290735B843FCDEA4C74D5051FD998983C0AAA(L_0, L_1, (void*)L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void Unity.Networking.Transport.Utilities.ReliableUtility::SetPacket(System.Byte*,System.Int32,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableUtility_SetPacket_m943290735B843FCDEA4C74D5051FD998983C0AAA (uint8_t* ___0_self, int32_t ___1_sequence, void* ___2_data, int32_t ___3_length, const RuntimeMethod* method) 
{
	Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	void* V_3 = NULL;
	{
		// Context* ctx = (Context*)self;
		uint8_t* L_0 = ___0_self;
		V_0 = (Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A*)L_0;
		// if (length > ctx->DataStride)
		int32_t L_1 = ___3_length;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___DataStride_5;
		if ((((int32_t)L_1) <= ((int32_t)L_3)))
		{
			goto IL_000c;
		}
	}
	{
		// return;
		return;
	}

IL_000c:
	{
		// var index = sequence % ctx->Capacity;
		int32_t L_4 = ___1_sequence;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___Capacity_0;
		V_1 = ((int32_t)(L_4%L_6));
		// PacketInformation* info = GetPacketInformation(self, sequence);
		uint8_t* L_7 = ___0_self;
		int32_t L_8 = ___1_sequence;
		PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* L_9;
		L_9 = ReliableUtility_GetPacketInformation_m9968D029D03346A7B0BA66F91F183EADC5ECA103(L_7, L_8, NULL);
		// info->SequenceId = sequence;
		PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* L_10 = L_9;
		int32_t L_11 = ___1_sequence;
		NullCheck(L_10);
		L_10->___SequenceId_0 = L_11;
		// info->Size = (ushort)length;
		PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* L_12 = L_10;
		int32_t L_13 = ___3_length;
		NullCheck(L_12);
		L_12->___Size_1 = (uint16_t)((int32_t)(uint16_t)L_13);
		// info->HeaderPadding = 0;      // Not used for packets queued for resume receive
		PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* L_14 = L_12;
		NullCheck(L_14);
		L_14->___HeaderPadding_2 = (uint16_t)0;
		// info->SendTime = -1;          // Not used for packets queued for resume receive
		NullCheck(L_14);
		L_14->___SendTime_3 = ((int64_t)(-1));
		// var offset = ctx->DataPtrOffset + (index * ctx->DataStride);
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = L_15->___DataPtrOffset_6;
		int32_t L_17 = V_1;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = L_18->___DataStride_5;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, ((int32_t)il2cpp_codegen_multiply(L_17, L_19))));
		// void* dataPtr = (self + offset);
		uint8_t* L_20 = ___0_self;
		int32_t L_21 = V_2;
		V_3 = (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, L_21));
		// UnsafeUtility.MemCpy(dataPtr, data, length);
		void* L_22 = V_3;
		void* L_23 = ___2_data;
		int32_t L_24 = ___3_length;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_22, L_23, ((int64_t)L_24), NULL);
		// }
		return;
	}
}
// System.Void Unity.Networking.Transport.Utilities.ReliableUtility::SetHeaderAndPacket(System.Byte*,System.Int32,Unity.Networking.Transport.Utilities.ReliableUtility/ReliableHeader,Unity.Networking.Transport.InboundSendBuffer,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableUtility_SetHeaderAndPacket_m3E50ED0B90006FCE97882C54F3C169C7DFC06920 (uint8_t* ___0_self, int32_t ___1_sequence, ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 ___2_header, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2 ___3_data, int64_t ___4_timestamp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01_mE682CCE1084DECD3C3F1EF2FFA2AB8BC799E35E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	void* V_4 = NULL;
	{
		// Context* ctx = (Context*)self;
		uint8_t* L_0 = ___0_self;
		V_0 = (Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A*)L_0;
		// int totalSize = data.bufferLength + data.headerPadding;
		InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2 L_1 = ___3_data;
		int32_t L_2 = L_1.___bufferLength_2;
		InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2 L_3 = ___3_data;
		int32_t L_4 = L_3.___headerPadding_4;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, L_4));
		// if (totalSize > ctx->DataStride)
		int32_t L_5 = V_1;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___DataStride_5;
		if ((((int32_t)L_5) <= ((int32_t)L_7)))
		{
			goto IL_001a;
		}
	}
	{
		// return;
		return;
	}

IL_001a:
	{
		// var index = sequence % ctx->Capacity;
		int32_t L_8 = ___1_sequence;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___Capacity_0;
		V_2 = ((int32_t)(L_8%L_10));
		// PacketInformation* info = GetPacketInformation(self, sequence);
		uint8_t* L_11 = ___0_self;
		int32_t L_12 = ___1_sequence;
		PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* L_13;
		L_13 = ReliableUtility_GetPacketInformation_m9968D029D03346A7B0BA66F91F183EADC5ECA103(L_11, L_12, NULL);
		// info->SequenceId = sequence;
		PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* L_14 = L_13;
		int32_t L_15 = ___1_sequence;
		NullCheck(L_14);
		L_14->___SequenceId_0 = L_15;
		// info->Size = (ushort)totalSize;
		PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* L_16 = L_14;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		L_16->___Size_1 = (uint16_t)((int32_t)(uint16_t)L_17);
		// info->HeaderPadding = (ushort)data.headerPadding;
		PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* L_18 = L_16;
		InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2 L_19 = ___3_data;
		int32_t L_20 = L_19.___headerPadding_4;
		NullCheck(L_18);
		L_18->___HeaderPadding_2 = (uint16_t)((int32_t)(uint16_t)L_20);
		// info->SendTime = timestamp;
		int64_t L_21 = ___4_timestamp;
		NullCheck(L_18);
		L_18->___SendTime_3 = L_21;
		// ReliablePacket* packet = GetReliablePacket(self, sequence);
		uint8_t* L_22 = ___0_self;
		int32_t L_23 = ___1_sequence;
		ReliablePacket_t338CE432D688A8C732B0705415F25B05A2AD3D04* L_24;
		L_24 = ReliableUtility_GetReliablePacket_m5D93BC69A8272050BD5CBDD907178A723FEE232A(L_22, L_23, NULL);
		// packet->Header = header;
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 L_25 = ___2_header;
		NullCheck(L_24);
		L_24->___Header_0 = L_25;
		// var offset = (ctx->DataPtrOffset + (index * ctx->DataStride)) + UnsafeUtility.SizeOf<ReliableHeader>();
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = L_26->___DataPtrOffset_6;
		int32_t L_28 = V_2;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = L_29->___DataStride_5;
		int32_t L_31;
		L_31 = UnsafeUtility_SizeOf_TisReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01_mE682CCE1084DECD3C3F1EF2FFA2AB8BC799E35E4(UnsafeUtility_SizeOf_TisReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01_mE682CCE1084DECD3C3F1EF2FFA2AB8BC799E35E4_RuntimeMethod_var);
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_27, ((int32_t)il2cpp_codegen_multiply(L_28, L_30)))), L_31));
		// void* dataPtr = (self + offset);
		uint8_t* L_32 = ___0_self;
		int32_t L_33 = V_3;
		V_4 = (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_32, L_33));
		// if (data.bufferLength > 0)
		InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2 L_34 = ___3_data;
		int32_t L_35 = L_34.___bufferLength_2;
		if ((((int32_t)L_35) <= ((int32_t)0)))
		{
			goto IL_0099;
		}
	}
	{
		// UnsafeUtility.MemCpy((byte*)dataPtr + data.headerPadding, data.buffer, data.bufferLength);
		void* L_36 = V_4;
		InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2 L_37 = ___3_data;
		int32_t L_38 = L_37.___headerPadding_4;
		InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2 L_39 = ___3_data;
		uint8_t* L_40 = L_39.___buffer_0;
		InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2 L_41 = ___3_data;
		int32_t L_42 = L_41.___bufferLength_2;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(((void*)il2cpp_codegen_add((intptr_t)L_36, L_38)), (void*)L_40, ((int64_t)L_42), NULL);
	}

IL_0099:
	{
		// }
		return;
	}
}
// Unity.Networking.Transport.Utilities.ReliableUtility/PacketInformation* Unity.Networking.Transport.Utilities.ReliableUtility::GetPacketInformation(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* ReliableUtility_GetPacketInformation_m9968D029D03346A7B0BA66F91F183EADC5ECA103 (uint8_t* ___0_self, int32_t ___1_sequence, const RuntimeMethod* method) 
{
	Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Context* ctx = (Context*)self;
		uint8_t* L_0 = ___0_self;
		V_0 = (Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A*)L_0;
		// var index = sequence % ctx->Capacity;
		int32_t L_1 = ___1_sequence;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Capacity_0;
		V_1 = ((int32_t)(L_1%L_3));
		// return (PacketInformation*)((self + ctx->IndexPtrOffset) + (index * ctx->IndexStride));
		uint8_t* L_4 = ___0_self;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___IndexPtrOffset_4;
		int32_t L_7 = V_1;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___IndexStride_3;
		return (PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2*)(((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, L_6)), ((int32_t)il2cpp_codegen_multiply(L_7, L_9)))));
	}
}
// Unity.Networking.Transport.Utilities.ReliableUtility/ReliablePacket* Unity.Networking.Transport.Utilities.ReliableUtility::GetReliablePacket(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReliablePacket_t338CE432D688A8C732B0705415F25B05A2AD3D04* ReliableUtility_GetReliablePacket_m5D93BC69A8272050BD5CBDD907178A723FEE232A (uint8_t* ___0_self, int32_t ___1_sequence, const RuntimeMethod* method) 
{
	Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Context* ctx = (Context*)self;
		uint8_t* L_0 = ___0_self;
		V_0 = (Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A*)L_0;
		// var index = sequence % ctx->Capacity;
		int32_t L_1 = ___1_sequence;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Capacity_0;
		V_1 = ((int32_t)(L_1%L_3));
		// var offset = ctx->DataPtrOffset + (index * ctx->DataStride);
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___DataPtrOffset_6;
		int32_t L_6 = V_1;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___DataStride_5;
		V_2 = ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)il2cpp_codegen_multiply(L_6, L_8))));
		// return (ReliablePacket*)(self + offset);
		uint8_t* L_9 = ___0_self;
		int32_t L_10 = V_2;
		return (ReliablePacket_t338CE432D688A8C732B0705415F25B05A2AD3D04*)(((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10)));
	}
}
// System.Boolean Unity.Networking.Transport.Utilities.ReliableUtility::TryAquire(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReliableUtility_TryAquire_m32DD237DEB8FC7722570AD65EEC71EAA24912ACE (uint8_t* ___0_self, int32_t ___1_sequence, const RuntimeMethod* method) 
{
	Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Context* ctx = (Context*)self;
		uint8_t* L_0 = ___0_self;
		V_0 = (Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A*)L_0;
		// var index = sequence % ctx->Capacity;
		int32_t L_1 = ___1_sequence;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Capacity_0;
		V_1 = ((int32_t)(L_1%L_3));
		// var currentSequenceId = GetIndex(self, index);
		uint8_t* L_4 = ___0_self;
		int32_t L_5 = V_1;
		int32_t L_6;
		L_6 = ReliableUtility_GetIndex_m3B9D65DE3DF43A2AE496EBBD70378D82008EEE10(L_4, L_5, NULL);
		// if (currentSequenceId == NullEntry)
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		// SetIndex(self, index, sequence);
		uint8_t* L_7 = ___0_self;
		int32_t L_8 = V_1;
		int32_t L_9 = ___1_sequence;
		ReliableUtility_SetIndex_mB3D120D218F8FE0948B6FAE10C2B0DC1A2B81557(L_7, L_8, L_9, NULL);
		// return true;
		return (bool)1;
	}

IL_001f:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Unity.Networking.Transport.Utilities.ReliableUtility::Release(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableUtility_Release_mA2409AE91C98C8CE716EC6DB32673DBAFD52299A (uint8_t* ___0_self, int32_t ___1_sequence, const RuntimeMethod* method) 
{
	{
		// Release(self, sequence, 1);
		uint8_t* L_0 = ___0_self;
		int32_t L_1 = ___1_sequence;
		ReliableUtility_Release_mA4044B7D5E9BAC7CE0E362CDAF088E8AC4FB4926(L_0, L_1, 1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Networking.Transport.Utilities.ReliableUtility::Release(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableUtility_Release_mA4044B7D5E9BAC7CE0E362CDAF088E8AC4FB4926 (uint8_t* ___0_self, int32_t ___1_start_sequence, int32_t ___2_count, const RuntimeMethod* method) 
{
	Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Context* ctx = (Context*)self;
		uint8_t* L_0 = ___0_self;
		V_0 = (Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A*)L_0;
		// for (int i = 0; i < count; i++)
		V_1 = 0;
		goto IL_001b;
	}

IL_0006:
	{
		// SetIndex(self, (start_sequence + i) % ctx->Capacity, NullEntry);
		uint8_t* L_1 = ___0_self;
		int32_t L_2 = ___1_start_sequence;
		int32_t L_3 = V_1;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Capacity_0;
		ReliableUtility_SetIndex_mB3D120D218F8FE0948B6FAE10C2B0DC1A2B81557(L_1, ((int32_t)(((int32_t)il2cpp_codegen_add(L_2, L_3))%L_5)), (-1), NULL);
		// for (int i = 0; i < count; i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001b:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_7 = V_1;
		int32_t L_8 = ___2_count;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Networking.Transport.Utilities.ReliableUtility::SetIndex(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableUtility_SetIndex_mB3D120D218F8FE0948B6FAE10C2B0DC1A2B81557 (uint8_t* ___0_self, int32_t ___1_index, int32_t ___2_sequence, const RuntimeMethod* method) 
{
	Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* V_0 = NULL;
	int32_t* V_1 = NULL;
	{
		// Context* ctx = (Context*)self;
		uint8_t* L_0 = ___0_self;
		V_0 = (Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A*)L_0;
		// int* value = (int*)((self + ctx->IndexPtrOffset) + (index * ctx->IndexStride));
		uint8_t* L_1 = ___0_self;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___IndexPtrOffset_4;
		int32_t L_4 = ___1_index;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___IndexStride_3;
		V_1 = (int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_3)), ((int32_t)il2cpp_codegen_multiply(L_4, L_6))));
		// *value = sequence;
		int32_t* L_7 = V_1;
		int32_t L_8 = ___2_sequence;
		*((int32_t*)L_7) = (int32_t)L_8;
		// }
		return;
	}
}
// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility::GetIndex(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReliableUtility_GetIndex_m3B9D65DE3DF43A2AE496EBBD70378D82008EEE10 (uint8_t* ___0_self, int32_t ___1_index, const RuntimeMethod* method) 
{
	Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* V_0 = NULL;
	int32_t* V_1 = NULL;
	{
		// Context* ctx = (Context*)self;
		uint8_t* L_0 = ___0_self;
		V_0 = (Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A*)L_0;
		// int* value = (int*)((self + ctx->IndexPtrOffset) + (index * ctx->IndexStride));
		uint8_t* L_1 = ___0_self;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___IndexPtrOffset_4;
		int32_t L_4 = ___1_index;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___IndexStride_3;
		V_1 = (int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_3)), ((int32_t)il2cpp_codegen_multiply(L_4, L_6))));
		// return *value;
		int32_t* L_7 = V_1;
		int32_t L_8 = *((int32_t*)L_7);
		return L_8;
	}
}
// System.UInt16 Unity.Networking.Transport.Utilities.ReliableUtility::GetNonWrappingLastAckedSequenceNumber(Unity.Networking.Transport.NetworkPipelineContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ReliableUtility_GetNonWrappingLastAckedSequenceNumber_mEB65A7F6EAEAB76DFF14F2DBE89ADE8591354C52 (NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD ___0_context, const RuntimeMethod* method) 
{
	SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* V_0 = NULL;
	uint16_t V_1 = 0;
	{
		// SharedContext* reliable = (SharedContext*)context.internalSharedProcessBuffer;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_0 = ___0_context;
		uint8_t* L_1 = L_0.___internalSharedProcessBuffer_1;
		V_0 = (SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0*)L_1;
		// var lastOwnSequenceIdAckedByRemote = (ushort)reliable->SentPackets.Acked;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_2 = V_0;
		NullCheck(L_2);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_3 = (&L_2->___SentPackets_2);
		int32_t L_4 = L_3->___Acked_1;
		V_1 = (uint16_t)((int32_t)(uint16_t)L_4);
		// return (ushort)(reliable->WindowSize * ((1 - lastOwnSequenceIdAckedByRemote) >> 15));
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___WindowSize_0;
		uint16_t L_7 = V_1;
		return (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_multiply(L_6, ((int32_t)(((int32_t)il2cpp_codegen_subtract(1, (int32_t)L_7))>>((int32_t)15))))));
	}
}
// System.Void Unity.Networking.Transport.Utilities.ReliableUtility::ReleaseAcknowledgedPackets(Unity.Networking.Transport.NetworkPipelineContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableUtility_ReleaseAcknowledgedPackets_m87BE09A93DE91E57AC4DDBD74C1138BB319CA018 (NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD ___0_context, const RuntimeMethod* method) 
{
	SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* V_0 = NULL;
	uint64_t V_1 = 0;
	uint16_t V_2 = 0;
	uint16_t V_3 = 0;
	int32_t V_4 = 0;
	PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* V_5 = NULL;
	uint64_t V_6 = 0;
	{
		// SharedContext* reliable = (SharedContext*)context.internalSharedProcessBuffer;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_0 = ___0_context;
		uint8_t* L_1 = L_0.___internalSharedProcessBuffer_1;
		V_0 = (SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0*)L_1;
		// var lastReceivedAckedMask = reliable->SentPackets.AckedMask;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_2 = V_0;
		NullCheck(L_2);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_3 = (&L_2->___SentPackets_2);
		uint64_t L_4 = L_3->___AckedMask_2;
		V_1 = L_4;
		// var lastOwnSequenceIdAckedByRemote = (ushort)reliable->SentPackets.Acked;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_5 = V_0;
		NullCheck(L_5);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_6 = (&L_5->___SentPackets_2);
		int32_t L_7 = L_6->___Acked_1;
		V_2 = (uint16_t)((int32_t)(uint16_t)L_7);
		// var sequence = GetNonWrappingLastAckedSequenceNumber(context);
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_8 = ___0_context;
		uint16_t L_9;
		L_9 = ReliableUtility_GetNonWrappingLastAckedSequenceNumber_mEB65A7F6EAEAB76DFF14F2DBE89ADE8591354C52(L_8, NULL);
		V_3 = L_9;
		// for (int i = 0; i < reliable->WindowSize; i++)
		V_4 = 0;
		goto IL_0097;
	}

IL_002c:
	{
		// var info = GetPacketInformation(context.internalProcessBuffer, sequence);
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_10 = ___0_context;
		uint8_t* L_11 = L_10.___internalProcessBuffer_2;
		uint16_t L_12 = V_3;
		PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* L_13;
		L_13 = ReliableUtility_GetPacketInformation_m9968D029D03346A7B0BA66F91F183EADC5ECA103(L_11, L_12, NULL);
		V_5 = L_13;
		// if (info->SequenceId >= 0)
		PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* L_14 = V_5;
		NullCheck(L_14);
		int32_t L_15 = L_14->___SequenceId_0;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		// var ackBits = 1ul << (lastOwnSequenceIdAckedByRemote - info->SequenceId);
		uint16_t L_16 = V_2;
		PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* L_17 = V_5;
		NullCheck(L_17);
		int32_t L_18 = L_17->___SequenceId_0;
		V_6 = ((int64_t)(((int64_t)1)<<((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_16, L_18))&((int32_t)63)))));
		// var distance = SequenceHelpers.AbsDistance(lastOwnSequenceIdAckedByRemote, (ushort)info->SequenceId);
		uint16_t L_19 = V_2;
		PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* L_20 = V_5;
		NullCheck(L_20);
		int32_t L_21 = L_20->___SequenceId_0;
		int32_t L_22;
		L_22 = SequenceHelpers_AbsDistance_m35554BEFC1196304E6DA535D075E70B33F070C52(L_19, (uint16_t)((int32_t)(uint16_t)L_21), NULL);
		// if (distance < reliable->WindowSize && (ackBits & lastReceivedAckedMask) != 0)
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_23 = V_0;
		NullCheck(L_23);
		int32_t L_24 = L_23->___WindowSize_0;
		if ((((int32_t)L_22) >= ((int32_t)L_24)))
		{
			goto IL_008c;
		}
	}
	{
		uint64_t L_25 = V_6;
		uint64_t L_26 = V_1;
		if (!((int64_t)((int64_t)L_25&(int64_t)L_26)))
		{
			goto IL_008c;
		}
	}
	{
		// Release(context.internalProcessBuffer, info->SequenceId);
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_27 = ___0_context;
		uint8_t* L_28 = L_27.___internalProcessBuffer_2;
		PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* L_29 = V_5;
		NullCheck(L_29);
		int32_t L_30 = L_29->___SequenceId_0;
		ReliableUtility_Release_mA2409AE91C98C8CE716EC6DB32673DBAFD52299A(L_28, L_30, NULL);
		// info->SendTime = -1;
		PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* L_31 = V_5;
		NullCheck(L_31);
		L_31->___SendTime_3 = ((int64_t)(-1));
	}

IL_008c:
	{
		// sequence = (ushort)(sequence - 1);
		uint16_t L_32 = V_3;
		V_3 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_32, 1)));
		// for (int i = 0; i < reliable->WindowSize; i++)
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		// for (int i = 0; i < reliable->WindowSize; i++)
		int32_t L_34 = V_4;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_35 = V_0;
		NullCheck(L_35);
		int32_t L_36 = L_35->___WindowSize_0;
		if ((((int32_t)L_34) < ((int32_t)L_36)))
		{
			goto IL_002c;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility::GetNextSendResumeSequence(Unity.Networking.Transport.NetworkPipelineContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReliableUtility_GetNextSendResumeSequence_m22EDBE4AB3FF6D1F1FFC1D7F58E2F79A9F340900 (NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD ___0_context, const RuntimeMethod* method) 
{
	SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* V_0 = NULL;
	uint16_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// SharedContext* reliable = (SharedContext*)context.internalSharedProcessBuffer;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_0 = ___0_context;
		uint8_t* L_1 = L_0.___internalSharedProcessBuffer_1;
		V_0 = (SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0*)L_1;
		// var sequence = GetNonWrappingLastAckedSequenceNumber(context);
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_2 = ___0_context;
		uint16_t L_3;
		L_3 = ReliableUtility_GetNonWrappingLastAckedSequenceNumber_mEB65A7F6EAEAB76DFF14F2DBE89ADE8591354C52(L_2, NULL);
		V_1 = L_3;
		// var resume = NullEntry;
		V_2 = (-1);
		// for (int i = 0; i < reliable->WindowSize; i++)
		V_3 = 0;
		goto IL_005d;
	}

IL_0014:
	{
		// var info = GetPacketInformation(context.internalProcessBuffer, sequence);
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_4 = ___0_context;
		uint8_t* L_5 = L_4.___internalProcessBuffer_2;
		uint16_t L_6 = V_1;
		PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* L_7;
		L_7 = ReliableUtility_GetPacketInformation_m9968D029D03346A7B0BA66F91F183EADC5ECA103(L_5, L_6, NULL);
		V_4 = L_7;
		// if (info->SequenceId >= 0)
		PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* L_8 = V_4;
		NullCheck(L_8);
		int32_t L_9 = L_8->___SequenceId_0;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0054;
		}
	}
	{
		// var timeToResend = CurrentResendTime(context.internalSharedProcessBuffer);
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_10 = ___0_context;
		uint8_t* L_11 = L_10.___internalSharedProcessBuffer_1;
		int32_t L_12;
		L_12 = ReliableUtility_CurrentResendTime_m57B142B68943887C63A093A67B45C74778F6F38C(L_11, NULL);
		V_5 = L_12;
		// if (context.timestamp > info->SendTime + timeToResend)
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_13 = ___0_context;
		int64_t L_14 = L_13.___timestamp_4;
		PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* L_15 = V_4;
		NullCheck(L_15);
		int64_t L_16 = L_15->___SendTime_3;
		int32_t L_17 = V_5;
		if ((((int64_t)L_14) <= ((int64_t)((int64_t)il2cpp_codegen_add(L_16, ((int64_t)L_17))))))
		{
			goto IL_0054;
		}
	}
	{
		// resume = info->SequenceId;
		PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* L_18 = V_4;
		NullCheck(L_18);
		int32_t L_19 = L_18->___SequenceId_0;
		V_2 = L_19;
	}

IL_0054:
	{
		// sequence = (ushort)(sequence - 1);
		uint16_t L_20 = V_1;
		V_1 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, 1)));
		// for (int i = 0; i < reliable->WindowSize; i++)
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_005d:
	{
		// for (int i = 0; i < reliable->WindowSize; i++)
		int32_t L_22 = V_3;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_23 = V_0;
		NullCheck(L_23);
		int32_t L_24 = L_23->___WindowSize_0;
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0014;
		}
	}
	{
		// return resume;
		int32_t L_25 = V_2;
		return L_25;
	}
}
// Unity.Networking.Transport.InboundRecvBuffer Unity.Networking.Transport.Utilities.ReliableUtility::ResumeReceive(Unity.Networking.Transport.NetworkPipelineContext,System.Int32,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB ReliableUtility_ResumeReceive_m22F0C58298C2BCA83EF9D153C1B60B3B3ADB4C54 (NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD ___0_context, int32_t ___1_startSequence, bool* ___2_needsResume, const RuntimeMethod* method) 
{
	SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* V_0 = NULL;
	Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* V_1 = NULL;
	PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* V_2 = NULL;
	int32_t V_3 = 0;
	InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if (startSequence == NullEntry) return default;
		int32_t L_0 = ___1_startSequence;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000f;
		}
	}
	{
		// if (startSequence == NullEntry) return default;
		il2cpp_codegen_initobj((&V_4), sizeof(InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB));
		InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB L_1 = V_4;
		return L_1;
	}

IL_000f:
	{
		// SharedContext* shared = (SharedContext*)context.internalSharedProcessBuffer;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_2 = ___0_context;
		uint8_t* L_3 = L_2.___internalSharedProcessBuffer_1;
		V_0 = (SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0*)L_3;
		// Context* reliable = (Context*)context.internalProcessBuffer;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_4 = ___0_context;
		uint8_t* L_5 = L_4.___internalProcessBuffer_2;
		V_1 = (Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A*)L_5;
		// reliable->Resume = NullEntry;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_6 = V_1;
		NullCheck(L_6);
		L_6->___Resume_1 = (-1);
		// PacketInformation* info = GetPacketInformation(context.internalProcessBuffer, startSequence);
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_7 = ___0_context;
		uint8_t* L_8 = L_7.___internalProcessBuffer_2;
		int32_t L_9 = ___1_startSequence;
		PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* L_10;
		L_10 = ReliableUtility_GetPacketInformation_m9968D029D03346A7B0BA66F91F183EADC5ECA103(L_8, L_9, NULL);
		V_2 = L_10;
		// var latestReceivedPacket = shared->ReceivedPackets.Sequence;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_11 = V_0;
		NullCheck(L_11);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_12 = (&L_11->___ReceivedPackets_3);
		int32_t L_13 = L_12->___Sequence_0;
		V_3 = L_13;
		// if (info->SequenceId == startSequence)
		PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15 = L_14->___SequenceId_0;
		int32_t L_16 = ___1_startSequence;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_009d;
		}
	}
	{
		// var offset = reliable->DataPtrOffset + ((startSequence % reliable->Capacity) * reliable->DataStride);
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18 = L_17->___DataPtrOffset_6;
		int32_t L_19 = ___1_startSequence;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = L_20->___Capacity_0;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = L_22->___DataStride_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_19%L_21)), L_23))));
		// inBuffer.buffer = context.internalProcessBuffer + offset;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_24 = ___0_context;
		uint8_t* L_25 = L_24.___internalProcessBuffer_2;
		int32_t L_26 = V_5;
		(&V_6)->___buffer_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_25, L_26));
		// inBuffer.bufferLength = info->Size;
		PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* L_27 = V_2;
		NullCheck(L_27);
		uint16_t L_28 = L_27->___Size_1;
		(&V_6)->___bufferLength_1 = L_28;
		// reliable->Delivered = startSequence;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_29 = V_1;
		int32_t L_30 = ___1_startSequence;
		NullCheck(L_29);
		L_29->___Delivered_2 = L_30;
		// if (SequenceHelpers.LessThan16((ushort)startSequence, (ushort)latestReceivedPacket))
		int32_t L_31 = ___1_startSequence;
		int32_t L_32 = V_3;
		bool L_33;
		L_33 = SequenceHelpers_LessThan16_m00415C30EFDD7D790BFCE5BEDD7C7DF89C6D3F34((uint16_t)((int32_t)(uint16_t)L_31), (uint16_t)((int32_t)(uint16_t)L_32), NULL);
		if (!L_33)
		{
			goto IL_009a;
		}
	}
	{
		// reliable->Resume = (ushort)(startSequence + 1);
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_34 = V_1;
		int32_t L_35 = ___1_startSequence;
		NullCheck(L_34);
		L_34->___Resume_1 = ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_35, 1)));
		// needsResume = true;
		bool* L_36 = ___2_needsResume;
		*((int8_t*)L_36) = (int8_t)1;
	}

IL_009a:
	{
		// return inBuffer;
		InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB L_37 = V_6;
		return L_37;
	}

IL_009d:
	{
		// return default;
		il2cpp_codegen_initobj((&V_4), sizeof(InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB));
		InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB L_38 = V_4;
		return L_38;
	}
}
// Unity.Networking.Transport.InboundSendBuffer Unity.Networking.Transport.Utilities.ReliableUtility::ResumeSend(Unity.Networking.Transport.NetworkPipelineContext,Unity.Networking.Transport.Utilities.ReliableUtility/ReliableHeader&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2 ReliableUtility_ResumeSend_m0E61E023F95C1ABCBC9AC4F9A948114F6E9E7F20 (NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD ___0_context, ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01* ___1_header, bool* ___2_needsResume, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01_mE682CCE1084DECD3C3F1EF2FFA2AB8BC799E35E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* V_0 = NULL;
	Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* V_1 = NULL;
	uint16_t V_2 = 0;
	PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* V_3 = NULL;
	ReliablePacket_t338CE432D688A8C732B0705415F25B05A2AD3D04* V_4 = NULL;
	int32_t V_5 = 0;
	InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// SharedContext* reliable = (SharedContext*)context.internalSharedProcessBuffer;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_0 = ___0_context;
		uint8_t* L_1 = L_0.___internalSharedProcessBuffer_1;
		V_0 = (SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0*)L_1;
		// Context* ctx = (Context*)context.internalProcessBuffer;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_2 = ___0_context;
		uint8_t* L_3 = L_2.___internalProcessBuffer_2;
		V_1 = (Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A*)L_3;
		// var sequence = (ushort)ctx->Resume;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Resume_1;
		V_2 = (uint16_t)((int32_t)(uint16_t)L_5);
		// information = GetPacketInformation(context.internalProcessBuffer, sequence);
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_6 = ___0_context;
		uint8_t* L_7 = L_6.___internalProcessBuffer_2;
		uint16_t L_8 = V_2;
		PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* L_9;
		L_9 = ReliableUtility_GetPacketInformation_m9968D029D03346A7B0BA66F91F183EADC5ECA103(L_7, L_8, NULL);
		V_3 = L_9;
		// information->SendTime = context.timestamp;
		PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* L_10 = V_3;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_11 = ___0_context;
		int64_t L_12 = L_11.___timestamp_4;
		NullCheck(L_10);
		L_10->___SendTime_3 = L_12;
		// ReliablePacket *packet = GetReliablePacket(context.internalProcessBuffer, sequence);
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_13 = ___0_context;
		uint8_t* L_14 = L_13.___internalProcessBuffer_2;
		uint16_t L_15 = V_2;
		ReliablePacket_t338CE432D688A8C732B0705415F25B05A2AD3D04* L_16;
		L_16 = ReliableUtility_GetReliablePacket_m5D93BC69A8272050BD5CBDD907178A723FEE232A(L_14, L_15, NULL);
		V_4 = L_16;
		// header = packet->Header;
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01* L_17 = ___1_header;
		ReliablePacket_t338CE432D688A8C732B0705415F25B05A2AD3D04* L_18 = V_4;
		NullCheck(L_18);
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 L_19 = L_18->___Header_0;
		*(ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01*)L_17 = L_19;
		// header.AckedSequenceId = (ushort)reliable->ReceivedPackets.Sequence;
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01* L_20 = ___1_header;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_21 = V_0;
		NullCheck(L_21);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_22 = (&L_21->___ReceivedPackets_3);
		int32_t L_23 = L_22->___Sequence_0;
		L_20->___AckedSequenceId_3 = (uint16_t)((int32_t)(uint16_t)L_23);
		// header.AckedMask = reliable->ReceivedPackets.AckedMask;
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01* L_24 = ___1_header;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_25 = V_0;
		NullCheck(L_25);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_26 = (&L_25->___ReceivedPackets_3);
		uint64_t L_27 = L_26->___AckedMask_2;
		L_24->___AckedMask_4 = L_27;
		// var offset = (ctx->DataPtrOffset + ((sequence % ctx->Capacity) * ctx->DataStride)) + UnsafeUtility.SizeOf<ReliableHeader>();
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = L_28->___DataPtrOffset_6;
		uint16_t L_30 = V_2;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_31 = V_1;
		NullCheck(L_31);
		int32_t L_32 = L_31->___Capacity_0;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_33 = V_1;
		NullCheck(L_33);
		int32_t L_34 = L_33->___DataStride_5;
		int32_t L_35;
		L_35 = UnsafeUtility_SizeOf_TisReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01_mE682CCE1084DECD3C3F1EF2FFA2AB8BC799E35E4(UnsafeUtility_SizeOf_TisReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01_mE682CCE1084DECD3C3F1EF2FFA2AB8BC799E35E4_RuntimeMethod_var);
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_30%L_32)), L_34)))), L_35));
		// var inbound = default(InboundSendBuffer);
		il2cpp_codegen_initobj((&V_6), sizeof(InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2));
		// inbound.bufferWithHeaders = context.internalProcessBuffer + offset;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_36 = ___0_context;
		uint8_t* L_37 = L_36.___internalProcessBuffer_2;
		int32_t L_38 = V_5;
		(&V_6)->___bufferWithHeaders_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_37, L_38));
		// inbound.bufferWithHeadersLength = information->Size;
		PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* L_39 = V_3;
		NullCheck(L_39);
		uint16_t L_40 = L_39->___Size_1;
		(&V_6)->___bufferWithHeadersLength_3 = L_40;
		// inbound.headerPadding = information->HeaderPadding;
		PacketInformation_t604624EEEDC7462F9A195751BEDA870DA1868BA2* L_41 = V_3;
		NullCheck(L_41);
		uint16_t L_42 = L_41->___HeaderPadding_2;
		(&V_6)->___headerPadding_4 = L_42;
		// inbound.SetBufferFrombufferWithHeaders();
		InboundSendBuffer_SetBufferFrombufferWithHeaders_m6C284E52DA10F7889A53C82BB4B422A6A349E7B1((&V_6), NULL);
		// reliable->stats.PacketsResent++;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_43 = V_0;
		NullCheck(L_43);
		Statistics_t11CF93D4C83ABFDDFD0BBAD848B752181939A2E5* L_44 = (&L_43->___stats_5);
		int32_t* L_45 = (&L_44->___PacketsResent_6);
		int32_t* L_46 = L_45;
		int32_t L_47 = *((int32_t*)L_46);
		*((int32_t*)L_46) = (int32_t)((int32_t)il2cpp_codegen_add(L_47, 1));
		// return inbound;
		InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2 L_48 = V_6;
		return L_48;
	}
}
// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility::Write(Unity.Networking.Transport.NetworkPipelineContext,Unity.Networking.Transport.InboundSendBuffer,Unity.Networking.Transport.Utilities.ReliableUtility/ReliableHeader&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReliableUtility_Write_mAC0AED5DC52A08F6AEBBEDFAE1FC111559EBC8D2 (NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD ___0_context, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2 ___1_inboundBuffer, ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01* ___2_header, const RuntimeMethod* method) 
{
	SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* V_0 = NULL;
	uint16_t V_1 = 0;
	{
		// SharedContext* reliable = (SharedContext*)context.internalSharedProcessBuffer;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_0 = ___0_context;
		uint8_t* L_1 = L_0.___internalSharedProcessBuffer_1;
		V_0 = (SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0*)L_1;
		// var sequence = (ushort)reliable->SentPackets.Sequence;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_2 = V_0;
		NullCheck(L_2);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_3 = (&L_2->___SentPackets_2);
		int32_t L_4 = L_3->___Sequence_0;
		V_1 = (uint16_t)((int32_t)(uint16_t)L_4);
		// if (!TryAquire(context.internalProcessBuffer, sequence))
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_5 = ___0_context;
		uint8_t* L_6 = L_5.___internalProcessBuffer_2;
		uint16_t L_7 = V_1;
		bool L_8;
		L_8 = ReliableUtility_TryAquire_m32DD237DEB8FC7722570AD65EEC71EAA24912ACE(L_6, L_7, NULL);
		if (L_8)
		{
			goto IL_002d;
		}
	}
	{
		// reliable->errorCode = ErrorCodes.OutgoingQueueIsFull;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_9 = V_0;
		NullCheck(L_9);
		L_9->___errorCode_6 = ((int32_t)-7);
		// return (int)ErrorCodes.OutgoingQueueIsFull;
		return ((int32_t)-7);
	}

IL_002d:
	{
		// reliable->stats.PacketsSent++;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_10 = V_0;
		NullCheck(L_10);
		Statistics_t11CF93D4C83ABFDDFD0BBAD848B752181939A2E5* L_11 = (&L_10->___stats_5);
		int32_t* L_12 = (&L_11->___PacketsSent_1);
		int32_t* L_13 = L_12;
		int32_t L_14 = *((int32_t*)L_13);
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add(L_14, 1));
		// header.SequenceId = sequence;
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01* L_15 = ___2_header;
		uint16_t L_16 = V_1;
		L_15->___SequenceId_2 = L_16;
		// header.AckedSequenceId = (ushort)reliable->ReceivedPackets.Sequence;
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01* L_17 = ___2_header;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_18 = V_0;
		NullCheck(L_18);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_19 = (&L_18->___ReceivedPackets_3);
		int32_t L_20 = L_19->___Sequence_0;
		L_17->___AckedSequenceId_3 = (uint16_t)((int32_t)(uint16_t)L_20);
		// header.AckedMask = reliable->ReceivedPackets.AckedMask;
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01* L_21 = ___2_header;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_22 = V_0;
		NullCheck(L_22);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_23 = (&L_22->___ReceivedPackets_3);
		uint64_t L_24 = L_23->___AckedMask_2;
		L_21->___AckedMask_4 = L_24;
		// reliable->ReceivedPackets.Acked = reliable->ReceivedPackets.Sequence;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_25 = V_0;
		NullCheck(L_25);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_26 = (&L_25->___ReceivedPackets_3);
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_27 = V_0;
		NullCheck(L_27);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_28 = (&L_27->___ReceivedPackets_3);
		int32_t L_29 = L_28->___Sequence_0;
		L_26->___Acked_1 = L_29;
		// reliable->ReceivedPackets.LastAckedMask = header.AckedMask;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_30 = V_0;
		NullCheck(L_30);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_31 = (&L_30->___ReceivedPackets_3);
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01* L_32 = ___2_header;
		uint64_t L_33 = L_32->___AckedMask_4;
		L_31->___LastAckedMask_3 = L_33;
		// reliable->DuplicatesSinceLastAck = 0;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_34 = V_0;
		NullCheck(L_34);
		L_34->___DuplicatesSinceLastAck_4 = 0;
		// header.ProcessingTime =
		//     CalculateProcessingTime(context.internalSharedProcessBuffer, header.AckedSequenceId, context.timestamp);
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01* L_35 = ___2_header;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_36 = ___0_context;
		uint8_t* L_37 = L_36.___internalSharedProcessBuffer_1;
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01* L_38 = ___2_header;
		uint16_t L_39 = L_38->___AckedSequenceId_3;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_40 = ___0_context;
		int64_t L_41 = L_40.___timestamp_4;
		uint16_t L_42;
		L_42 = ReliableUtility_CalculateProcessingTime_mC47ABB3E9C1BEE78BCF1CFFB185BAB143F0394D6(L_37, L_39, L_41, NULL);
		L_35->___ProcessingTime_1 = L_42;
		// reliable->SentPackets.Sequence = (ushort)(reliable->SentPackets.Sequence + 1);
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_43 = V_0;
		NullCheck(L_43);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_44 = (&L_43->___SentPackets_2);
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_45 = V_0;
		NullCheck(L_45);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_46 = (&L_45->___SentPackets_2);
		int32_t L_47 = L_46->___Sequence_0;
		L_44->___Sequence_0 = ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_47, 1)));
		// SetHeaderAndPacket(context.internalProcessBuffer, sequence, header, inboundBuffer, context.timestamp);
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_48 = ___0_context;
		uint8_t* L_49 = L_48.___internalProcessBuffer_2;
		uint16_t L_50 = V_1;
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01* L_51 = ___2_header;
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 L_52 = (*(ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01*)L_51);
		InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2 L_53 = ___1_inboundBuffer;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_54 = ___0_context;
		int64_t L_55 = L_54.___timestamp_4;
		ReliableUtility_SetHeaderAndPacket_m3E50ED0B90006FCE97882C54F3C169C7DFC06920(L_49, L_50, L_52, L_53, L_55, NULL);
		// StoreTimestamp(context.internalSharedProcessBuffer, sequence, context.timestamp);
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_56 = ___0_context;
		uint8_t* L_57 = L_56.___internalSharedProcessBuffer_1;
		uint16_t L_58 = V_1;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_59 = ___0_context;
		int64_t L_60 = L_59.___timestamp_4;
		ReliableUtility_StoreTimestamp_mD1D266A4E280396725145A6FB9FC0C71741BA3A5(L_57, L_58, L_60, NULL);
		// return sequence;
		uint16_t L_61 = V_1;
		return L_61;
	}
}
// System.Void Unity.Networking.Transport.Utilities.ReliableUtility::WriteAckPacket(Unity.Networking.Transport.NetworkPipelineContext,Unity.Networking.Transport.Utilities.ReliableUtility/ReliableHeader&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableUtility_WriteAckPacket_m312D99C250A1B1C5ADB8D794B6FC18EC7616AE8C (NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD ___0_context, ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01* ___1_header, const RuntimeMethod* method) 
{
	SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* V_0 = NULL;
	{
		// SharedContext* reliable = (SharedContext*)context.internalSharedProcessBuffer;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_0 = ___0_context;
		uint8_t* L_1 = L_0.___internalSharedProcessBuffer_1;
		V_0 = (SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0*)L_1;
		// header.Type = (ushort)PacketType.Ack;
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01* L_2 = ___1_header;
		L_2->___Type_0 = (uint16_t)1;
		// header.AckedSequenceId = (ushort)reliable->ReceivedPackets.Sequence;
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01* L_3 = ___1_header;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_4 = V_0;
		NullCheck(L_4);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_5 = (&L_4->___ReceivedPackets_3);
		int32_t L_6 = L_5->___Sequence_0;
		L_3->___AckedSequenceId_3 = (uint16_t)((int32_t)(uint16_t)L_6);
		// header.AckedMask = reliable->ReceivedPackets.AckedMask;
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01* L_7 = ___1_header;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_8 = V_0;
		NullCheck(L_8);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_9 = (&L_8->___ReceivedPackets_3);
		uint64_t L_10 = L_9->___AckedMask_2;
		L_7->___AckedMask_4 = L_10;
		// header.ProcessingTime =
		//     CalculateProcessingTime(context.internalSharedProcessBuffer, header.AckedSequenceId, context.timestamp);
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01* L_11 = ___1_header;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_12 = ___0_context;
		uint8_t* L_13 = L_12.___internalSharedProcessBuffer_1;
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01* L_14 = ___1_header;
		uint16_t L_15 = L_14->___AckedSequenceId_3;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_16 = ___0_context;
		int64_t L_17 = L_16.___timestamp_4;
		uint16_t L_18;
		L_18 = ReliableUtility_CalculateProcessingTime_mC47ABB3E9C1BEE78BCF1CFFB185BAB143F0394D6(L_13, L_15, L_17, NULL);
		L_11->___ProcessingTime_1 = L_18;
		// reliable->ReceivedPackets.Acked = reliable->ReceivedPackets.Sequence;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_19 = V_0;
		NullCheck(L_19);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_20 = (&L_19->___ReceivedPackets_3);
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_21 = V_0;
		NullCheck(L_21);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_22 = (&L_21->___ReceivedPackets_3);
		int32_t L_23 = L_22->___Sequence_0;
		L_20->___Acked_1 = L_23;
		// reliable->ReceivedPackets.LastAckedMask = header.AckedMask;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_24 = V_0;
		NullCheck(L_24);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_25 = (&L_24->___ReceivedPackets_3);
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01* L_26 = ___1_header;
		uint64_t L_27 = L_26->___AckedMask_4;
		L_25->___LastAckedMask_3 = L_27;
		// reliable->DuplicatesSinceLastAck = 0;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_28 = V_0;
		NullCheck(L_28);
		L_28->___DuplicatesSinceLastAck_4 = 0;
		// }
		return;
	}
}
// System.Void Unity.Networking.Transport.Utilities.ReliableUtility::StoreTimestamp(System.Byte*,System.UInt16,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableUtility_StoreTimestamp_mD1D266A4E280396725145A6FB9FC0C71741BA3A5 (uint8_t* ___0_sharedBuffer, uint16_t ___1_sequenceId, int64_t ___2_timestamp, const RuntimeMethod* method) 
{
	{
		// var timerData = GetLocalPacketTimer(sharedBuffer, sequenceId);
		uint8_t* L_0 = ___0_sharedBuffer;
		uint16_t L_1 = ___1_sequenceId;
		PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4* L_2;
		L_2 = ReliableUtility_GetLocalPacketTimer_m34EDCCB24CAE223C05EC1BF7B725FD98F7F174F8(L_0, L_1, NULL);
		// timerData->SequenceId = sequenceId;
		PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4* L_3 = L_2;
		uint16_t L_4 = ___1_sequenceId;
		NullCheck(L_3);
		L_3->___SequenceId_2 = L_4;
		// timerData->SentTime = timestamp;
		PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4* L_5 = L_3;
		int64_t L_6 = ___2_timestamp;
		NullCheck(L_5);
		L_5->___SentTime_3 = L_6;
		// timerData->ProcessingTime = 0;
		PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4* L_7 = L_5;
		NullCheck(L_7);
		L_7->___ProcessingTime_0 = (uint16_t)0;
		// timerData->ReceiveTime = 0;
		NullCheck(L_7);
		L_7->___ReceiveTime_4 = ((int64_t)0);
		// }
		return;
	}
}
// System.Void Unity.Networking.Transport.Utilities.ReliableUtility::StoreReceiveTimestamp(System.Byte*,System.UInt16,System.Int64,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableUtility_StoreReceiveTimestamp_mF4199125BAF9CB1F49E00F0F1CDA037FFDC9418A (uint8_t* ___0_sharedBuffer, uint16_t ___1_sequenceId, int64_t ___2_timestamp, uint16_t ___3_processingTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* V_0 = NULL;
	RTTInfo_tAF1A100DBA67BD0367A9ABA6928B4E574CBE5518 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4* V_2 = NULL;
	float V_3 = 0.0f;
	{
		// var sharedCtx = (SharedContext*)sharedBuffer;
		uint8_t* L_0 = ___0_sharedBuffer;
		V_0 = (SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0*)L_0;
		// var rttInfo = sharedCtx->RttInfo;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_1 = V_0;
		NullCheck(L_1);
		RTTInfo_tAF1A100DBA67BD0367A9ABA6928B4E574CBE5518 L_2 = L_1->___RttInfo_7;
		V_1 = L_2;
		// var timerData = GetLocalPacketTimer(sharedBuffer, sequenceId);
		uint8_t* L_3 = ___0_sharedBuffer;
		uint16_t L_4 = ___1_sequenceId;
		PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4* L_5;
		L_5 = ReliableUtility_GetLocalPacketTimer_m34EDCCB24CAE223C05EC1BF7B725FD98F7F174F8(L_3, L_4, NULL);
		V_2 = L_5;
		// if (timerData != null && timerData->SequenceId == sequenceId)
		PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4* L_6 = V_2;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_00c3;
		}
	}
	{
		PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4* L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->___SequenceId_2;
		uint16_t L_9 = ___1_sequenceId;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_00c3;
		}
	}
	{
		// if (timerData->ReceiveTime > 0)
		PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4* L_10 = V_2;
		NullCheck(L_10);
		int64_t L_11 = L_10->___ReceiveTime_4;
		if ((((int64_t)L_11) <= ((int64_t)((int64_t)0))))
		{
			goto IL_0030;
		}
	}
	{
		// return;
		return;
	}

IL_0030:
	{
		// timerData->ReceiveTime = timestamp;
		PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4* L_12 = V_2;
		int64_t L_13 = ___2_timestamp;
		NullCheck(L_12);
		L_12->___ReceiveTime_4 = L_13;
		// timerData->ProcessingTime = processingTime;
		PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4* L_14 = V_2;
		uint16_t L_15 = ___3_processingTime;
		NullCheck(L_14);
		L_14->___ProcessingTime_0 = L_15;
		// rttInfo.LastRtt = (int)Math.Max(timerData->ReceiveTime - timerData->SentTime - timerData->ProcessingTime, 1);
		PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4* L_16 = V_2;
		NullCheck(L_16);
		int64_t L_17 = L_16->___ReceiveTime_4;
		PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4* L_18 = V_2;
		NullCheck(L_18);
		int64_t L_19 = L_18->___SentTime_3;
		PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4* L_20 = V_2;
		NullCheck(L_20);
		uint16_t L_21 = L_20->___ProcessingTime_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int64_t L_22;
		L_22 = Math_Max_mD37411571F0547F04F280D5A8D1F044819AFA597(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(L_17, L_19)), ((int64_t)(uint64_t)L_21))), ((int64_t)1), NULL);
		(&V_1)->___LastRtt_0 = ((int32_t)L_22);
		// var delta = rttInfo.LastRtt - rttInfo.SmoothedRtt;
		RTTInfo_tAF1A100DBA67BD0367A9ABA6928B4E574CBE5518 L_23 = V_1;
		int32_t L_24 = L_23.___LastRtt_0;
		RTTInfo_tAF1A100DBA67BD0367A9ABA6928B4E574CBE5518 L_25 = V_1;
		float L_26 = L_25.___SmoothedRtt_1;
		V_3 = ((float)il2cpp_codegen_subtract(((float)L_24), L_26));
		// rttInfo.SmoothedRtt += delta / 8;
		float* L_27 = (&(&V_1)->___SmoothedRtt_1);
		float* L_28 = L_27;
		float L_29 = *((float*)L_28);
		float L_30 = V_3;
		*((float*)L_28) = (float)((float)il2cpp_codegen_add(L_29, ((float)(L_30/(8.0f)))));
		// rttInfo.SmoothedVariance += (math.abs(delta) - rttInfo.SmoothedVariance) / 4;
		float* L_31 = (&(&V_1)->___SmoothedVariance_2);
		float* L_32 = L_31;
		float L_33 = *((float*)L_32);
		float L_34 = V_3;
		float L_35;
		L_35 = math_abs_m3D9508B36B045BFE7B89C6C69AD34596264E4FE1_inline(L_34, NULL);
		RTTInfo_tAF1A100DBA67BD0367A9ABA6928B4E574CBE5518 L_36 = V_1;
		float L_37 = L_36.___SmoothedVariance_2;
		*((float*)L_32) = (float)((float)il2cpp_codegen_add(L_33, ((float)(((float)il2cpp_codegen_subtract(L_35, L_37))/(4.0f)))));
		// rttInfo.ResendTimeout = (int)(rttInfo.SmoothedRtt + 4 * rttInfo.SmoothedVariance);
		RTTInfo_tAF1A100DBA67BD0367A9ABA6928B4E574CBE5518 L_38 = V_1;
		float L_39 = L_38.___SmoothedRtt_1;
		RTTInfo_tAF1A100DBA67BD0367A9ABA6928B4E574CBE5518 L_40 = V_1;
		float L_41 = L_40.___SmoothedVariance_2;
		(&V_1)->___ResendTimeout_3 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_add(L_39, ((float)il2cpp_codegen_multiply((4.0f), L_41)))));
		// sharedCtx->RttInfo = rttInfo;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_42 = V_0;
		RTTInfo_tAF1A100DBA67BD0367A9ABA6928B4E574CBE5518 L_43 = V_1;
		NullCheck(L_42);
		L_42->___RttInfo_7 = L_43;
	}

IL_00c3:
	{
		// }
		return;
	}
}
// System.Void Unity.Networking.Transport.Utilities.ReliableUtility::StoreRemoteReceiveTimestamp(System.Byte*,System.UInt16,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableUtility_StoreRemoteReceiveTimestamp_mECCC46C7B95636F1D0DCEE6297B7CC73EA4AFC56 (uint8_t* ___0_sharedBuffer, uint16_t ___1_sequenceId, int64_t ___2_timestamp, const RuntimeMethod* method) 
{
	{
		// var timerData = GetRemotePacketTimer(sharedBuffer, sequenceId);
		uint8_t* L_0 = ___0_sharedBuffer;
		uint16_t L_1 = ___1_sequenceId;
		PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4* L_2;
		L_2 = ReliableUtility_GetRemotePacketTimer_mF50EE904AF2D83AAD21081044F431475585D88D8(L_0, L_1, NULL);
		// timerData->SequenceId = sequenceId;
		PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4* L_3 = L_2;
		uint16_t L_4 = ___1_sequenceId;
		NullCheck(L_3);
		L_3->___SequenceId_2 = L_4;
		// timerData->ReceiveTime = timestamp;
		int64_t L_5 = ___2_timestamp;
		NullCheck(L_3);
		L_3->___ReceiveTime_4 = L_5;
		// }
		return;
	}
}
// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility::CurrentResendTime(System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReliableUtility_CurrentResendTime_m57B142B68943887C63A093A67B45C74778F6F38C (uint8_t* ___0_sharedBuffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* V_0 = NULL;
	{
		// var sharedCtx = (SharedContext*)sharedBuffer;
		uint8_t* L_0 = ___0_sharedBuffer;
		V_0 = (SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0*)L_0;
		// if (sharedCtx->RttInfo.ResendTimeout > MaximumResendTime)
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_1 = V_0;
		NullCheck(L_1);
		RTTInfo_tAF1A100DBA67BD0367A9ABA6928B4E574CBE5518* L_2 = (&L_1->___RttInfo_7);
		int32_t L_3 = L_2->___ResendTimeout_3;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)200))))
		{
			goto IL_001a;
		}
	}
	{
		// return MaximumResendTime;
		return ((int32_t)200);
	}

IL_001a:
	{
		// return Math.Max(sharedCtx->RttInfo.ResendTimeout, sharedCtx->MinimumResendTime);
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_4 = V_0;
		NullCheck(L_4);
		RTTInfo_tAF1A100DBA67BD0367A9ABA6928B4E574CBE5518* L_5 = (&L_4->___RttInfo_7);
		int32_t L_6 = L_5->___ResendTimeout_3;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___MinimumResendTime_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_6, L_8, NULL);
		return L_9;
	}
}
// System.UInt16 Unity.Networking.Transport.Utilities.ReliableUtility::CalculateProcessingTime(System.Byte*,System.UInt16,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ReliableUtility_CalculateProcessingTime_mC47ABB3E9C1BEE78BCF1CFFB185BAB143F0394D6 (uint8_t* ___0_sharedBuffer, uint16_t ___1_sequenceId, int64_t ___2_timestamp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4* V_0 = NULL;
	{
		// var timerData = GetRemotePacketTimer(sharedBuffer, sequenceId);
		uint8_t* L_0 = ___0_sharedBuffer;
		uint16_t L_1 = ___1_sequenceId;
		PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4* L_2;
		L_2 = ReliableUtility_GetRemotePacketTimer_mF50EE904AF2D83AAD21081044F431475585D88D8(L_0, L_1, NULL);
		V_0 = L_2;
		// if (timerData != null && timerData->SequenceId == sequenceId)
		PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4* L_3 = V_0;
		if ((((intptr_t)L_3) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_002a;
		}
	}
	{
		PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___SequenceId_2;
		uint16_t L_6 = ___1_sequenceId;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_002a;
		}
	}
	{
		// return Math.Min((ushort)(timestamp - timerData->ReceiveTime), ushort.MaxValue);
		int64_t L_7 = ___2_timestamp;
		PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4* L_8 = V_0;
		NullCheck(L_8);
		int64_t L_9 = L_8->___ReceiveTime_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint16_t L_10;
		L_10 = Math_Min_mA7BFF48067FBED606414C9937B00BE496B2696D7((uint16_t)((int32_t)(uint16_t)((int64_t)il2cpp_codegen_subtract(L_7, L_9))), (uint16_t)((int32_t)65535), NULL);
		return L_10;
	}

IL_002a:
	{
		// return 0;
		return (uint16_t)0;
	}
}
// Unity.Networking.Transport.Utilities.ReliableUtility/PacketTimers* Unity.Networking.Transport.Utilities.ReliableUtility::GetLocalPacketTimer(System.Byte*,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4* ReliableUtility_GetLocalPacketTimer_m34EDCCB24CAE223C05EC1BF7B725FD98F7F174F8 (uint8_t* ___0_sharedBuffer, uint16_t ___1_sequenceId, const RuntimeMethod* method) 
{
	SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var sharedCtx = (SharedContext*)sharedBuffer;
		uint8_t* L_0 = ___0_sharedBuffer;
		V_0 = (SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0*)L_0;
		// var index = sequenceId % sharedCtx->WindowSize;
		uint16_t L_1 = ___1_sequenceId;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___WindowSize_0;
		V_1 = ((int32_t)((int32_t)L_1%L_3));
		// var timerPtr = (long)sharedBuffer + sharedCtx->TimerDataOffset + sharedCtx->TimerDataStride * index;
		uint8_t* L_4 = ___0_sharedBuffer;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___TimerDataOffset_8;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___TimerDataStride_9;
		int32_t L_9 = V_1;
		// return (PacketTimers*)timerPtr;
		return (PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4*)(((uintptr_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)(intptr_t)L_4), ((int64_t)L_6))), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_8, L_9)))))));
	}
}
// Unity.Networking.Transport.Utilities.ReliableUtility/PacketTimers* Unity.Networking.Transport.Utilities.ReliableUtility::GetRemotePacketTimer(System.Byte*,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4* ReliableUtility_GetRemotePacketTimer_mF50EE904AF2D83AAD21081044F431475585D88D8 (uint8_t* ___0_sharedBuffer, uint16_t ___1_sequenceId, const RuntimeMethod* method) 
{
	SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var sharedCtx = (SharedContext*)sharedBuffer;
		uint8_t* L_0 = ___0_sharedBuffer;
		V_0 = (SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0*)L_0;
		// var index = sequenceId % sharedCtx->WindowSize;
		uint16_t L_1 = ___1_sequenceId;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___WindowSize_0;
		V_1 = ((int32_t)((int32_t)L_1%L_3));
		// var timerPtr = (long)sharedBuffer + sharedCtx->RemoteTimerDataOffset + sharedCtx->RemoteTimerDataStride * index;
		uint8_t* L_4 = ___0_sharedBuffer;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___RemoteTimerDataOffset_10;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___RemoteTimerDataStride_11;
		int32_t L_9 = V_1;
		// return (PacketTimers*)timerPtr;
		return (PacketTimers_tE7D87EC02DA5C97DD3C39677ADFDFE7BB2BAB3D4*)(((uintptr_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)(intptr_t)L_4), ((int64_t)L_6))), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_8, L_9)))))));
	}
}
// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility::Read(Unity.Networking.Transport.NetworkPipelineContext,Unity.Networking.Transport.Utilities.ReliableUtility/ReliableHeader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReliableUtility_Read_m33F5424CE96AD267A413C80E4618E4EF08CB1062 (NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD ___0_context, ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 ___1_header, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	{
		// SharedContext* reliable = (SharedContext*)context.internalSharedProcessBuffer;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_0 = ___0_context;
		uint8_t* L_1 = L_0.___internalSharedProcessBuffer_1;
		V_0 = (SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0*)L_1;
		// reliable->stats.PacketsReceived++;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_2 = V_0;
		NullCheck(L_2);
		Statistics_t11CF93D4C83ABFDDFD0BBAD848B752181939A2E5* L_3 = (&L_2->___stats_5);
		int32_t* L_4 = (&L_3->___PacketsReceived_0);
		int32_t* L_5 = L_4;
		int32_t L_6 = *((int32_t*)L_5);
		*((int32_t*)L_5) = (int32_t)((int32_t)il2cpp_codegen_add(L_6, 1));
		// if (SequenceHelpers.StalePacket(
		//     header.SequenceId,
		//     (ushort)(reliable->ReceivedPackets.Sequence + 1),
		//     (ushort)reliable->WindowSize))
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 L_7 = ___1_header;
		uint16_t L_8 = L_7.___SequenceId_2;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_9 = V_0;
		NullCheck(L_9);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_10 = (&L_9->___ReceivedPackets_3);
		int32_t L_11 = L_10->___Sequence_0;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___WindowSize_0;
		bool L_14;
		L_14 = SequenceHelpers_StalePacket_m5415DDC5B4A6EAEFB981E5B1F4A8A7D1C34DC779(L_8, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_11, 1))), (uint16_t)((int32_t)(uint16_t)L_13), NULL);
		if (!L_14)
		{
			goto IL_004b;
		}
	}
	{
		// reliable->stats.PacketsStale++;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_15 = V_0;
		NullCheck(L_15);
		Statistics_t11CF93D4C83ABFDDFD0BBAD848B752181939A2E5* L_16 = (&L_15->___stats_5);
		int32_t* L_17 = (&L_16->___PacketsStale_5);
		int32_t* L_18 = L_17;
		int32_t L_19 = *((int32_t*)L_18);
		*((int32_t*)L_18) = (int32_t)((int32_t)il2cpp_codegen_add(L_19, 1));
		// return (int)ErrorCodes.Stale_Packet;
		return (-1);
	}

IL_004b:
	{
		// var window = reliable->WindowSize - 1;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->___WindowSize_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
		// if (SequenceHelpers.GreaterThan16(header.SequenceId, (ushort)reliable->ReceivedPackets.Sequence))
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 L_22 = ___1_header;
		uint16_t L_23 = L_22.___SequenceId_2;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_24 = V_0;
		NullCheck(L_24);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_25 = (&L_24->___ReceivedPackets_3);
		int32_t L_26 = L_25->___Sequence_0;
		bool L_27;
		L_27 = SequenceHelpers_GreaterThan16_m3DF2C81C6DF22575EB63E8A206D3FA740A5BA58B(L_23, (uint16_t)((int32_t)(uint16_t)L_26), NULL);
		if (!L_27)
		{
			goto IL_011e;
		}
	}
	{
		// int distance = SequenceHelpers.AbsDistance(header.SequenceId, (ushort)reliable->ReceivedPackets.Sequence);
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 L_28 = ___1_header;
		uint16_t L_29 = L_28.___SequenceId_2;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_30 = V_0;
		NullCheck(L_30);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_31 = (&L_30->___ReceivedPackets_3);
		int32_t L_32 = L_31->___Sequence_0;
		int32_t L_33;
		L_33 = SequenceHelpers_AbsDistance_m35554BEFC1196304E6DA535D075E70B33F070C52(L_29, (uint16_t)((int32_t)(uint16_t)L_32), NULL);
		V_2 = L_33;
		// if (distance > window)
		int32_t L_34 = V_2;
		int32_t L_35 = V_1;
		if ((((int32_t)L_34) <= ((int32_t)L_35)))
		{
			goto IL_00ad;
		}
	}
	{
		// reliable->stats.PacketsDropped += distance - 1;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_36 = V_0;
		NullCheck(L_36);
		Statistics_t11CF93D4C83ABFDDFD0BBAD848B752181939A2E5* L_37 = (&L_36->___stats_5);
		int32_t* L_38 = (&L_37->___PacketsDropped_2);
		int32_t* L_39 = L_38;
		int32_t L_40 = *((int32_t*)L_39);
		int32_t L_41 = V_2;
		*((int32_t*)L_39) = (int32_t)((int32_t)il2cpp_codegen_add(L_40, ((int32_t)il2cpp_codegen_subtract(L_41, 1))));
		// reliable->ReceivedPackets.AckedMask = 1;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_42 = V_0;
		NullCheck(L_42);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_43 = (&L_42->___ReceivedPackets_3);
		L_43->___AckedMask_2 = ((int64_t)1);
		goto IL_0108;
	}

IL_00ad:
	{
		// reliable->ReceivedPackets.AckedMask <<= distance;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_44 = V_0;
		NullCheck(L_44);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_45 = (&L_44->___ReceivedPackets_3);
		uint64_t* L_46 = (&L_45->___AckedMask_2);
		uint64_t* L_47 = L_46;
		int64_t L_48 = *((int64_t*)L_47);
		int32_t L_49 = V_2;
		*((int64_t*)L_47) = (int64_t)((int64_t)(L_48<<((int32_t)(L_49&((int32_t)63)))));
		// reliable->ReceivedPackets.AckedMask |= 1;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_50 = V_0;
		NullCheck(L_50);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_51 = (&L_50->___ReceivedPackets_3);
		uint64_t* L_52 = (&L_51->___AckedMask_2);
		uint64_t* L_53 = L_52;
		int64_t L_54 = *((int64_t*)L_53);
		*((int64_t*)L_53) = (int64_t)((int64_t)(L_54|((int64_t)1)));
		// for (var i = 0; i < Math.Min(distance, window); ++i)
		V_3 = 0;
		goto IL_00fe;
	}

IL_00d5:
	{
		// if ((reliable->ReceivedPackets.AckedMask & 1ul << i) == 0)
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_55 = V_0;
		NullCheck(L_55);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_56 = (&L_55->___ReceivedPackets_3);
		uint64_t L_57 = L_56->___AckedMask_2;
		int32_t L_58 = V_3;
		if (((int64_t)((int64_t)L_57&((int64_t)(((int64_t)1)<<((int32_t)(L_58&((int32_t)63))))))))
		{
			goto IL_00fa;
		}
	}
	{
		// reliable->stats.PacketsDropped++;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_59 = V_0;
		NullCheck(L_59);
		Statistics_t11CF93D4C83ABFDDFD0BBAD848B752181939A2E5* L_60 = (&L_59->___stats_5);
		int32_t* L_61 = (&L_60->___PacketsDropped_2);
		int32_t* L_62 = L_61;
		int32_t L_63 = *((int32_t*)L_62);
		*((int32_t*)L_62) = (int32_t)((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_00fa:
	{
		// for (var i = 0; i < Math.Min(distance, window); ++i)
		int32_t L_64 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_00fe:
	{
		// for (var i = 0; i < Math.Min(distance, window); ++i)
		int32_t L_65 = V_3;
		int32_t L_66 = V_2;
		int32_t L_67 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_68;
		L_68 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_66, L_67, NULL);
		if ((((int32_t)L_65) < ((int32_t)L_68)))
		{
			goto IL_00d5;
		}
	}

IL_0108:
	{
		// reliable->ReceivedPackets.Sequence = header.SequenceId;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_69 = V_0;
		NullCheck(L_69);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_70 = (&L_69->___ReceivedPackets_3);
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 L_71 = ___1_header;
		uint16_t L_72 = L_71.___SequenceId_2;
		L_70->___Sequence_0 = L_72;
		goto IL_01b0;
	}

IL_011e:
	{
		// int distance = SequenceHelpers.AbsDistance(header.SequenceId, (ushort)reliable->ReceivedPackets.Sequence);
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 L_73 = ___1_header;
		uint16_t L_74 = L_73.___SequenceId_2;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_75 = V_0;
		NullCheck(L_75);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_76 = (&L_75->___ReceivedPackets_3);
		int32_t L_77 = L_76->___Sequence_0;
		int32_t L_78;
		L_78 = SequenceHelpers_AbsDistance_m35554BEFC1196304E6DA535D075E70B33F070C52(L_74, (uint16_t)((int32_t)(uint16_t)L_77), NULL);
		V_4 = L_78;
		// if (distance >= ushort.MaxValue - reliable->WindowSize)
		int32_t L_79 = V_4;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_80 = V_0;
		NullCheck(L_80);
		int32_t L_81 = L_80->___WindowSize_0;
		if ((((int32_t)L_79) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)65535), L_81)))))
		{
			goto IL_015b;
		}
	}
	{
		// distance = reliable->ReceivedPackets.Sequence - header.SequenceId;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_82 = V_0;
		NullCheck(L_82);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_83 = (&L_82->___ReceivedPackets_3);
		int32_t L_84 = L_83->___Sequence_0;
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 L_85 = ___1_header;
		uint16_t L_86 = L_85.___SequenceId_2;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_84, (int32_t)L_86));
	}

IL_015b:
	{
		// var ackBit = 1ul << distance;
		int32_t L_87 = V_4;
		V_5 = ((int64_t)(((int64_t)1)<<((int32_t)(L_87&((int32_t)63)))));
		// if ((ackBit & reliable->ReceivedPackets.AckedMask) != 0)
		uint64_t L_88 = V_5;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_89 = V_0;
		NullCheck(L_89);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_90 = (&L_89->___ReceivedPackets_3);
		uint64_t L_91 = L_90->___AckedMask_2;
		if (!((int64_t)((int64_t)L_88&(int64_t)L_91)))
		{
			goto IL_018f;
		}
	}
	{
		// ReadAckPacket(context, header);
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_92 = ___0_context;
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 L_93 = ___1_header;
		ReliableUtility_ReadAckPacket_m59A5D13E6B09CA561974D97696477772990BD8E4(L_92, L_93, NULL);
		// reliable->stats.PacketsDuplicated++;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_94 = V_0;
		NullCheck(L_94);
		Statistics_t11CF93D4C83ABFDDFD0BBAD848B752181939A2E5* L_95 = (&L_94->___stats_5);
		int32_t* L_96 = (&L_95->___PacketsDuplicated_4);
		int32_t* L_97 = L_96;
		int32_t L_98 = *((int32_t*)L_97);
		*((int32_t*)L_97) = (int32_t)((int32_t)il2cpp_codegen_add(L_98, 1));
		// return (int)ErrorCodes.Duplicated_Packet;
		return ((int32_t)-2);
	}

IL_018f:
	{
		// reliable->stats.PacketsOutOfOrder++;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_99 = V_0;
		NullCheck(L_99);
		Statistics_t11CF93D4C83ABFDDFD0BBAD848B752181939A2E5* L_100 = (&L_99->___stats_5);
		int32_t* L_101 = (&L_100->___PacketsOutOfOrder_3);
		int32_t* L_102 = L_101;
		int32_t L_103 = *((int32_t*)L_102);
		*((int32_t*)L_102) = (int32_t)((int32_t)il2cpp_codegen_add(L_103, 1));
		// reliable->ReceivedPackets.AckedMask |= (ulong)ackBit;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_104 = V_0;
		NullCheck(L_104);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_105 = (&L_104->___ReceivedPackets_3);
		uint64_t* L_106 = (&L_105->___AckedMask_2);
		uint64_t* L_107 = L_106;
		int64_t L_108 = *((int64_t*)L_107);
		uint64_t L_109 = V_5;
		*((int64_t*)L_107) = (int64_t)((int64_t)(L_108|(int64_t)L_109));
	}

IL_01b0:
	{
		// StoreRemoteReceiveTimestamp(context.internalSharedProcessBuffer, header.SequenceId, context.timestamp);
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_110 = ___0_context;
		uint8_t* L_111 = L_110.___internalSharedProcessBuffer_1;
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 L_112 = ___1_header;
		uint16_t L_113 = L_112.___SequenceId_2;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_114 = ___0_context;
		int64_t L_115 = L_114.___timestamp_4;
		ReliableUtility_StoreRemoteReceiveTimestamp_mECCC46C7B95636F1D0DCEE6297B7CC73EA4AFC56(L_111, L_113, L_115, NULL);
		// ReadAckPacket(context, header);
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_116 = ___0_context;
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 L_117 = ___1_header;
		ReliableUtility_ReadAckPacket_m59A5D13E6B09CA561974D97696477772990BD8E4(L_116, L_117, NULL);
		// return header.SequenceId;
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 L_118 = ___1_header;
		uint16_t L_119 = L_118.___SequenceId_2;
		return L_119;
	}
}
// System.Void Unity.Networking.Transport.Utilities.ReliableUtility::ReadAckPacket(Unity.Networking.Transport.NetworkPipelineContext,Unity.Networking.Transport.Utilities.ReliableUtility/ReliableHeader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableUtility_ReadAckPacket_m59A5D13E6B09CA561974D97696477772990BD8E4 (NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD ___0_context, ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 ___1_header, const RuntimeMethod* method) 
{
	SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* V_0 = NULL;
	{
		// SharedContext* reliable = (SharedContext*)context.internalSharedProcessBuffer;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_0 = ___0_context;
		uint8_t* L_1 = L_0.___internalSharedProcessBuffer_1;
		V_0 = (SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0*)L_1;
		// StoreReceiveTimestamp(context.internalSharedProcessBuffer, header.AckedSequenceId, context.timestamp, header.ProcessingTime);
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_2 = ___0_context;
		uint8_t* L_3 = L_2.___internalSharedProcessBuffer_1;
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 L_4 = ___1_header;
		uint16_t L_5 = L_4.___AckedSequenceId_3;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_6 = ___0_context;
		int64_t L_7 = L_6.___timestamp_4;
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 L_8 = ___1_header;
		uint16_t L_9 = L_8.___ProcessingTime_1;
		ReliableUtility_StoreReceiveTimestamp_mF4199125BAF9CB1F49E00F0F1CDA037FFDC9418A(L_3, L_5, L_7, L_9, NULL);
		// if (SequenceHelpers.GreaterThan16((ushort)reliable->SentPackets.Acked, header.AckedSequenceId))
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_10 = V_0;
		NullCheck(L_10);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_11 = (&L_10->___SentPackets_2);
		int32_t L_12 = L_11->___Acked_1;
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 L_13 = ___1_header;
		uint16_t L_14 = L_13.___AckedSequenceId_3;
		bool L_15;
		L_15 = SequenceHelpers_GreaterThan16_m3DF2C81C6DF22575EB63E8A206D3FA740A5BA58B((uint16_t)((int32_t)(uint16_t)L_12), L_14, NULL);
		if (!L_15)
		{
			goto IL_003e;
		}
	}
	{
		// return;
		return;
	}

IL_003e:
	{
		// if (reliable->SentPackets.Acked == header.AckedSequenceId)
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_16 = V_0;
		NullCheck(L_16);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_17 = (&L_16->___SentPackets_2);
		int32_t L_18 = L_17->___Acked_1;
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 L_19 = ___1_header;
		uint16_t L_20 = L_19.___AckedSequenceId_3;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_20))))
		{
			goto IL_0067;
		}
	}
	{
		// reliable->SentPackets.AckedMask |= header.AckedMask;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_21 = V_0;
		NullCheck(L_21);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_22 = (&L_21->___SentPackets_2);
		uint64_t* L_23 = (&L_22->___AckedMask_2);
		uint64_t* L_24 = L_23;
		int64_t L_25 = *((int64_t*)L_24);
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 L_26 = ___1_header;
		uint64_t L_27 = L_26.___AckedMask_4;
		*((int64_t*)L_24) = (int64_t)((int64_t)(L_25|(int64_t)L_27));
		return;
	}

IL_0067:
	{
		// reliable->SentPackets.Acked = header.AckedSequenceId;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_28 = V_0;
		NullCheck(L_28);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_29 = (&L_28->___SentPackets_2);
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 L_30 = ___1_header;
		uint16_t L_31 = L_30.___AckedSequenceId_3;
		L_29->___Acked_1 = L_31;
		// reliable->SentPackets.AckedMask = header.AckedMask;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_32 = V_0;
		NullCheck(L_32);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_33 = (&L_32->___SentPackets_2);
		ReliableHeader_tB2BEB555DAEFAB96036FC24000A8AB1698D46F01 L_34 = ___1_header;
		uint64_t L_35 = L_34.___AckedMask_4;
		L_33->___AckedMask_2 = L_35;
		// }
		return;
	}
}
// System.Boolean Unity.Networking.Transport.Utilities.ReliableUtility::ShouldSendAck(Unity.Networking.Transport.NetworkPipelineContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReliableUtility_ShouldSendAck_mEBE9AAB46D74B873EA0489DDC82B3A2EF6D652B9 (NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD ___0_ctx, const RuntimeMethod* method) 
{
	Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* V_0 = NULL;
	SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* V_1 = NULL;
	{
		// var reliable = (Context*)ctx.internalProcessBuffer;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_0 = ___0_ctx;
		uint8_t* L_1 = L_0.___internalProcessBuffer_2;
		V_0 = (Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A*)L_1;
		// var shared = (SharedContext*)ctx.internalSharedProcessBuffer;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD L_2 = ___0_ctx;
		uint8_t* L_3 = L_2.___internalSharedProcessBuffer_1;
		V_1 = (SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0*)L_3;
		// if (reliable->LastSentTime < reliable->PreviousTimestamp &&
		//     (SequenceHelpers.LessThan16((ushort)shared->ReceivedPackets.Acked, (ushort)shared->ReceivedPackets.Sequence) ||
		//      shared->ReceivedPackets.AckedMask != shared->ReceivedPackets.LastAckedMask ||
		//      shared->DuplicatesSinceLastAck >= MaxDuplicatesSinceLastAck))
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_4 = V_0;
		NullCheck(L_4);
		int64_t L_5 = L_4->___LastSentTime_7;
		Context_t99C75CF38B33BF89D1AF089C3466321489BEA99A* L_6 = V_0;
		NullCheck(L_6);
		int64_t L_7 = L_6->___PreviousTimestamp_8;
		if ((((int64_t)L_5) >= ((int64_t)L_7)))
		{
			goto IL_005e;
		}
	}
	{
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_8 = V_1;
		NullCheck(L_8);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_9 = (&L_8->___ReceivedPackets_3);
		int32_t L_10 = L_9->___Acked_1;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_11 = V_1;
		NullCheck(L_11);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_12 = (&L_11->___ReceivedPackets_3);
		int32_t L_13 = L_12->___Sequence_0;
		bool L_14;
		L_14 = SequenceHelpers_LessThan16_m00415C30EFDD7D790BFCE5BEDD7C7DF89C6D3F34((uint16_t)((int32_t)(uint16_t)L_10), (uint16_t)((int32_t)(uint16_t)L_13), NULL);
		if (L_14)
		{
			goto IL_005c;
		}
	}
	{
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_15 = V_1;
		NullCheck(L_15);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_16 = (&L_15->___ReceivedPackets_3);
		uint64_t L_17 = L_16->___AckedMask_2;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_18 = V_1;
		NullCheck(L_18);
		SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599* L_19 = (&L_18->___ReceivedPackets_3);
		uint64_t L_20 = L_19->___LastAckedMask_3;
		if ((!(((uint64_t)L_17) == ((uint64_t)L_20))))
		{
			goto IL_005c;
		}
	}
	{
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22 = L_21->___DuplicatesSinceLastAck_4;
		if ((((int32_t)L_22) < ((int32_t)3)))
		{
			goto IL_005e;
		}
	}

IL_005c:
	{
		// return true;
		return (bool)1;
	}

IL_005e:
	{
		// return false;
		return (bool)0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Networking.Transport.Utilities.SimulatorUtility/Parameters Unity.Networking.Transport.Utilities.SimulatorStageParameterExtensions::GetSimulatorStageParameters(Unity.Networking.Transport.NetworkSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Parameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0 SimulatorStageParameterExtensions_GetSimulatorStageParameters_mE911E8529CFECC8CDACE44155A27B13E37E095D4 (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* ___0_settings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkSettings_TryGet_TisParameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0_m25BF9D875AB182834BBE5DD10FB021D046288E5E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Parameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// settings.TryGet<SimulatorUtility.Parameters>(out var parameters);
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_0 = ___0_settings;
		bool L_1;
		L_1 = NetworkSettings_TryGet_TisParameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0_m25BF9D875AB182834BBE5DD10FB021D046288E5E(L_0, (&V_0), NetworkSettings_TryGet_TisParameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0_m25BF9D875AB182834BBE5DD10FB021D046288E5E_RuntimeMethod_var);
		// return parameters;
		Parameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0 L_2 = V_0;
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
// System.Void Unity.Networking.Transport.Utilities.SimulatorUtility::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatorUtility__ctor_m40AA100EC0E3200EC7AFA8CD4A16C8F74DB2EBED (SimulatorUtility_t6B9B7C22FA101BDB50654F105BA143BFCD297F06* __this, int32_t ___0_packetCount, int32_t ___1_maxPacketSize, int32_t ___2_packetDelayMs, int32_t ___3_packetJitterMs, const RuntimeMethod* method) 
{
	{
		// m_PacketCount = packetCount;
		int32_t L_0 = ___0_packetCount;
		__this->___m_PacketCount_0 = L_0;
		// m_MaxPacketSize = maxPacketSize;
		int32_t L_1 = ___1_maxPacketSize;
		__this->___m_MaxPacketSize_1 = L_1;
		// m_PacketDelayMs = packetDelayMs;
		int32_t L_2 = ___2_packetDelayMs;
		__this->___m_PacketDelayMs_2 = L_2;
		// m_PacketJitterMs = packetJitterMs;
		int32_t L_3 = ___3_packetJitterMs;
		__this->___m_PacketJitterMs_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SimulatorUtility__ctor_m40AA100EC0E3200EC7AFA8CD4A16C8F74DB2EBED_AdjustorThunk (RuntimeObject* __this, int32_t ___0_packetCount, int32_t ___1_maxPacketSize, int32_t ___2_packetDelayMs, int32_t ___3_packetJitterMs, const RuntimeMethod* method)
{
	SimulatorUtility_t6B9B7C22FA101BDB50654F105BA143BFCD297F06* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SimulatorUtility_t6B9B7C22FA101BDB50654F105BA143BFCD297F06*>(__this + _offset);
	SimulatorUtility__ctor_m40AA100EC0E3200EC7AFA8CD4A16C8F74DB2EBED(_thisAdjusted, ___0_packetCount, ___1_maxPacketSize, ___2_packetDelayMs, ___3_packetJitterMs, method);
}
// System.Void Unity.Networking.Transport.Utilities.SimulatorUtility::InitializeContext(Unity.Networking.Transport.Utilities.SimulatorUtility/Parameters,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatorUtility_InitializeContext_m090794236751A461AFE660FB662AAD639FFBE249 (Parameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0 ___0_param, uint8_t* ___1_sharedProcessBuffer, const RuntimeMethod* method) 
{
	Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* V_0 = NULL;
	{
		// Context* ctx = (Context*)sharedProcessBuffer;
		uint8_t* L_0 = ___1_sharedProcessBuffer;
		V_0 = (Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24*)L_0;
		// ctx->MaxPacketCount = param.MaxPacketCount;
		Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* L_1 = V_0;
		Parameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0 L_2 = ___0_param;
		int32_t L_3 = L_2.___MaxPacketCount_0;
		NullCheck(L_1);
		L_1->___MaxPacketCount_0 = L_3;
		// ctx->MaxPacketSize = param.MaxPacketSize;
		Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* L_4 = V_0;
		Parameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0 L_5 = ___0_param;
		int32_t L_6 = L_5.___MaxPacketSize_1;
		NullCheck(L_4);
		L_4->___MaxPacketSize_1 = L_6;
		// ctx->PacketDelayMs = param.PacketDelayMs;
		Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* L_7 = V_0;
		Parameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0 L_8 = ___0_param;
		int32_t L_9 = L_8.___PacketDelayMs_2;
		NullCheck(L_7);
		L_7->___PacketDelayMs_2 = L_9;
		// ctx->PacketJitterMs = param.PacketJitterMs;
		Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* L_10 = V_0;
		Parameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0 L_11 = ___0_param;
		int32_t L_12 = L_11.___PacketJitterMs_3;
		NullCheck(L_10);
		L_10->___PacketJitterMs_3 = L_12;
		// ctx->PacketDrop = param.PacketDropInterval;
		Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* L_13 = V_0;
		Parameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0 L_14 = ___0_param;
		int32_t L_15 = L_14.___PacketDropInterval_4;
		NullCheck(L_13);
		L_13->___PacketDrop_4 = L_15;
		// ctx->FuzzFactor = param.FuzzFactor;
		Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* L_16 = V_0;
		Parameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0 L_17 = ___0_param;
		int32_t L_18 = L_17.___FuzzFactor_6;
		NullCheck(L_16);
		L_16->___FuzzFactor_6 = L_18;
		// ctx->FuzzOffset = param.FuzzOffset;
		Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* L_19 = V_0;
		Parameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0 L_20 = ___0_param;
		int32_t L_21 = L_20.___FuzzOffset_7;
		NullCheck(L_19);
		L_19->___FuzzOffset_5 = L_21;
		// ctx->PacketCount = 0;
		Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* L_22 = V_0;
		NullCheck(L_22);
		L_22->___PacketCount_9 = 0;
		// ctx->PacketDropCount = 0;
		Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* L_23 = V_0;
		NullCheck(L_23);
		L_23->___PacketDropCount_10 = 0;
		// ctx->Random = new Random();
		Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* L_24 = V_0;
		NullCheck(L_24);
		Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37* L_25 = (&L_24->___Random_8);
		il2cpp_codegen_initobj(L_25, sizeof(Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37));
		// if (param.RandomSeed > 0)
		Parameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0 L_26 = ___0_param;
		uint32_t L_27 = L_26.___RandomSeed_8;
		if ((!(((uint32_t)L_27) > ((uint32_t)0))))
		{
			goto IL_0097;
		}
	}
	{
		// ctx->Random.InitState(param.RandomSeed);
		Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* L_28 = V_0;
		NullCheck(L_28);
		Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37* L_29 = (&L_28->___Random_8);
		Parameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0 L_30 = ___0_param;
		uint32_t L_31 = L_30.___RandomSeed_8;
		Random_InitState_mCDAC36582272DAF59478FEA71F1307CF0E58716D_inline(L_29, L_31, NULL);
		// ctx->RandomSeed = param.RandomSeed;
		Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* L_32 = V_0;
		Parameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0 L_33 = ___0_param;
		uint32_t L_34 = L_33.___RandomSeed_8;
		NullCheck(L_32);
		L_32->___RandomSeed_7 = L_34;
		return;
	}

IL_0097:
	{
		// ctx->Random.InitState();
		Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* L_35 = V_0;
		NullCheck(L_35);
		Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37* L_36 = (&L_35->___Random_8);
		Random_InitState_mCDAC36582272DAF59478FEA71F1307CF0E58716D_inline(L_36, ((int32_t)1851936439), NULL);
		// }
		return;
	}
}
// System.Boolean Unity.Networking.Transport.Utilities.SimulatorUtility::GetEmptyDataSlot(System.Byte*,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatorUtility_GetEmptyDataSlot_m1EB029D68D6ADA9318ABFC9BE5265E7FCB408062 (SimulatorUtility_t6B9B7C22FA101BDB50654F105BA143BFCD297F06* __this, uint8_t* ___0_processBufferPtr, int32_t* ___1_packetPayloadOffset, int32_t* ___2_packetDataOffset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisDelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81_m74D2F275F08D06BCB3E55494D0BCA36ED3D06BF0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	DelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81* V_4 = NULL;
	{
		// var dataSize = UnsafeUtility.SizeOf<DelayedPacket>();
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisDelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81_m74D2F275F08D06BCB3E55494D0BCA36ED3D06BF0(UnsafeUtility_SizeOf_TisDelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81_m74D2F275F08D06BCB3E55494D0BCA36ED3D06BF0_RuntimeMethod_var);
		V_0 = L_0;
		// var packetPayloadStartOffset = m_PacketCount * dataSize;
		int32_t L_1 = __this->___m_PacketCount_0;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		// bool foundSlot = false;
		V_2 = (bool)0;
		// for (int i = 0; i < m_PacketCount; i++)
		V_3 = 0;
		goto IL_003d;
	}

IL_0015:
	{
		// packetDataOffset = dataSize * i;
		int32_t* L_3 = ___2_packetDataOffset;
		int32_t L_4 = V_0;
		int32_t L_5 = V_3;
		*((int32_t*)L_3) = (int32_t)((int32_t)il2cpp_codegen_multiply(L_4, L_5));
		// DelayedPacket* packetData = (DelayedPacket*)(processBufferPtr + packetDataOffset);
		uint8_t* L_6 = ___0_processBufferPtr;
		int32_t* L_7 = ___2_packetDataOffset;
		int32_t L_8 = *((int32_t*)L_7);
		V_4 = (DelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, L_8));
		// if (packetData->delayUntil == 0)
		DelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81* L_9 = V_4;
		NullCheck(L_9);
		int64_t L_10 = L_9->___delayUntil_3;
		if (L_10)
		{
			goto IL_0039;
		}
	}
	{
		// foundSlot = true;
		V_2 = (bool)1;
		// packetPayloadOffset = packetPayloadStartOffset + m_MaxPacketSize * i;
		int32_t* L_11 = ___1_packetPayloadOffset;
		int32_t L_12 = V_1;
		int32_t L_13 = __this->___m_MaxPacketSize_1;
		int32_t L_14 = V_3;
		*((int32_t*)L_11) = (int32_t)((int32_t)il2cpp_codegen_add(L_12, ((int32_t)il2cpp_codegen_multiply(L_13, L_14))));
		// break;
		goto IL_0046;
	}

IL_0039:
	{
		// for (int i = 0; i < m_PacketCount; i++)
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003d:
	{
		// for (int i = 0; i < m_PacketCount; i++)
		int32_t L_16 = V_3;
		int32_t L_17 = __this->___m_PacketCount_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0015;
		}
	}

IL_0046:
	{
		// return foundSlot;
		bool L_18 = V_2;
		return L_18;
	}
}
IL2CPP_EXTERN_C  bool SimulatorUtility_GetEmptyDataSlot_m1EB029D68D6ADA9318ABFC9BE5265E7FCB408062_AdjustorThunk (RuntimeObject* __this, uint8_t* ___0_processBufferPtr, int32_t* ___1_packetPayloadOffset, int32_t* ___2_packetDataOffset, const RuntimeMethod* method)
{
	SimulatorUtility_t6B9B7C22FA101BDB50654F105BA143BFCD297F06* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SimulatorUtility_t6B9B7C22FA101BDB50654F105BA143BFCD297F06*>(__this + _offset);
	bool _returnValue;
	_returnValue = SimulatorUtility_GetEmptyDataSlot_m1EB029D68D6ADA9318ABFC9BE5265E7FCB408062(_thisAdjusted, ___0_processBufferPtr, ___1_packetPayloadOffset, ___2_packetDataOffset, method);
	return _returnValue;
}
// System.Boolean Unity.Networking.Transport.Utilities.SimulatorUtility::GetDelayedPacket(Unity.Networking.Transport.NetworkPipelineContext&,Unity.Networking.Transport.InboundSendBuffer&,Unity.Networking.Transport.NetworkPipelineStage/Requests&,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatorUtility_GetDelayedPacket_m2EDDFD26BA1F67AA80F1E28C14094FC4CC29FD44 (SimulatorUtility_t6B9B7C22FA101BDB50654F105BA143BFCD297F06* __this, NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* ___1_delayedPacket, int32_t* ___2_requests, int64_t ___3_currentTimestamp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisDelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81_m74D2F275F08D06BCB3E55494D0BCA36ED3D06BF0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* V_2 = NULL;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	DelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81* V_8 = NULL;
	DelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81* V_9 = NULL;
	{
		// requests = NetworkPipelineStage.Requests.None;
		int32_t* L_0 = ___2_requests;
		*((int32_t*)L_0) = (int32_t)0;
		// var dataSize = UnsafeUtility.SizeOf<DelayedPacket>();
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisDelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81_m74D2F275F08D06BCB3E55494D0BCA36ED3D06BF0(UnsafeUtility_SizeOf_TisDelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81_m74D2F275F08D06BCB3E55494D0BCA36ED3D06BF0_RuntimeMethod_var);
		V_0 = L_1;
		// byte* processBufferPtr = (byte*)ctx.internalProcessBuffer;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* L_2 = ___0_ctx;
		uint8_t* L_3 = L_2->___internalProcessBuffer_2;
		V_1 = L_3;
		// var simCtx = (Context*)ctx.internalSharedProcessBuffer;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* L_4 = ___0_ctx;
		uint8_t* L_5 = L_4->___internalSharedProcessBuffer_1;
		V_2 = (Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24*)L_5;
		// int oldestPacketIndex = -1;
		V_3 = (-1);
		// long oldestTime = long.MaxValue;
		V_4 = ((int64_t)(std::numeric_limits<int64_t>::max)());
		// int readyPackets = 0;
		V_5 = 0;
		// int packetsInQueue = 0;
		V_6 = 0;
		// for (int i = 0; i < m_PacketCount; i++)
		V_7 = 0;
		goto IL_0075;
	}

IL_002f:
	{
		// DelayedPacket* packet = (DelayedPacket*)(processBufferPtr + dataSize * i);
		uint8_t* L_6 = V_1;
		int32_t L_7 = V_0;
		int32_t L_8 = V_7;
		V_8 = (DelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, ((int32_t)il2cpp_codegen_multiply(L_7, L_8))));
		// if ((int)packet->delayUntil == 0) continue;
		DelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81* L_9 = V_8;
		NullCheck(L_9);
		int64_t L_10 = L_9->___delayUntil_3;
		if (!((int32_t)L_10))
		{
			goto IL_006f;
		}
	}
	{
		// packetsInQueue++;
		int32_t L_11 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		// if (packet->delayUntil > currentTimestamp) continue;
		DelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81* L_12 = V_8;
		NullCheck(L_12);
		int64_t L_13 = L_12->___delayUntil_3;
		int64_t L_14 = ___3_currentTimestamp;
		if ((((int64_t)L_13) > ((int64_t)L_14)))
		{
			goto IL_006f;
		}
	}
	{
		// readyPackets++;
		int32_t L_15 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		// if (oldestTime <= packet->delayUntil) continue;
		int64_t L_16 = V_4;
		DelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81* L_17 = V_8;
		NullCheck(L_17);
		int64_t L_18 = L_17->___delayUntil_3;
		if ((((int64_t)L_16) <= ((int64_t)L_18)))
		{
			goto IL_006f;
		}
	}
	{
		// oldestPacketIndex = i;
		int32_t L_19 = V_7;
		V_3 = L_19;
		// oldestTime = packet->delayUntil;
		DelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81* L_20 = V_8;
		NullCheck(L_20);
		int64_t L_21 = L_20->___delayUntil_3;
		V_4 = L_21;
	}

IL_006f:
	{
		// for (int i = 0; i < m_PacketCount; i++)
		int32_t L_22 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0075:
	{
		// for (int i = 0; i < m_PacketCount; i++)
		int32_t L_23 = V_7;
		int32_t L_24 = __this->___m_PacketCount_0;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_002f;
		}
	}
	{
		// simCtx->ReadyPackets = readyPackets;
		Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* L_25 = V_2;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		L_25->___ReadyPackets_11 = L_26;
		// simCtx->WaitingPackets = packetsInQueue;
		Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* L_27 = V_2;
		int32_t L_28 = V_6;
		NullCheck(L_27);
		L_27->___WaitingPackets_12 = L_28;
		// simCtx->NextPacketTime = oldestTime;
		Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* L_29 = V_2;
		int64_t L_30 = V_4;
		NullCheck(L_29);
		L_29->___NextPacketTime_13 = L_30;
		// simCtx->StatsTime = currentTimestamp;
		Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* L_31 = V_2;
		int64_t L_32 = ___3_currentTimestamp;
		NullCheck(L_31);
		L_31->___StatsTime_14 = L_32;
		// if (readyPackets > 1)
		int32_t L_33 = V_5;
		if ((((int32_t)L_33) <= ((int32_t)1)))
		{
			goto IL_00ac;
		}
	}
	{
		// requests |= NetworkPipelineStage.Requests.Resume;
		int32_t* L_34 = ___2_requests;
		int32_t* L_35 = ___2_requests;
		int32_t L_36 = *((int32_t*)L_35);
		*((int32_t*)L_34) = (int32_t)((int32_t)(L_36|1));
		goto IL_00b7;
	}

IL_00ac:
	{
		// else if (packetsInQueue > 0)
		int32_t L_37 = V_6;
		if ((((int32_t)L_37) <= ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		// requests |= NetworkPipelineStage.Requests.Update;
		int32_t* L_38 = ___2_requests;
		int32_t* L_39 = ___2_requests;
		int32_t L_40 = *((int32_t*)L_39);
		*((int32_t*)L_38) = (int32_t)((int32_t)(L_40|2));
	}

IL_00b7:
	{
		// if (oldestPacketIndex >= 0)
		int32_t L_41 = V_3;
		if ((((int32_t)L_41) < ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		// DelayedPacket* packet = (DelayedPacket*)(processBufferPtr + dataSize * oldestPacketIndex);
		uint8_t* L_42 = V_1;
		int32_t L_43 = V_0;
		int32_t L_44 = V_3;
		V_9 = (DelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_42, ((int32_t)il2cpp_codegen_multiply(L_43, L_44))));
		// packet->delayUntil = 0;
		DelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81* L_45 = V_9;
		NullCheck(L_45);
		L_45->___delayUntil_3 = ((int64_t)0);
		// delayedPacket.bufferWithHeaders = ctx.internalProcessBuffer + packet->processBufferOffset;
		InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* L_46 = ___1_delayedPacket;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* L_47 = ___0_ctx;
		uint8_t* L_48 = L_47->___internalProcessBuffer_2;
		DelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81* L_49 = V_9;
		NullCheck(L_49);
		int32_t L_50 = L_49->___processBufferOffset_0;
		L_46->___bufferWithHeaders_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_48, L_50));
		// delayedPacket.bufferWithHeadersLength = packet->packetSize;
		InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* L_51 = ___1_delayedPacket;
		DelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81* L_52 = V_9;
		NullCheck(L_52);
		uint16_t L_53 = L_52->___packetSize_1;
		L_51->___bufferWithHeadersLength_3 = L_53;
		// delayedPacket.headerPadding = packet->packetHeaderPadding;
		InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* L_54 = ___1_delayedPacket;
		DelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81* L_55 = V_9;
		NullCheck(L_55);
		uint16_t L_56 = L_55->___packetHeaderPadding_2;
		L_54->___headerPadding_4 = L_56;
		// delayedPacket.SetBufferFrombufferWithHeaders();
		InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* L_57 = ___1_delayedPacket;
		InboundSendBuffer_SetBufferFrombufferWithHeaders_m6C284E52DA10F7889A53C82BB4B422A6A349E7B1(L_57, NULL);
		// return true;
		return (bool)1;
	}

IL_0101:
	{
		// return false;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool SimulatorUtility_GetDelayedPacket_m2EDDFD26BA1F67AA80F1E28C14094FC4CC29FD44_AdjustorThunk (RuntimeObject* __this, NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* ___1_delayedPacket, int32_t* ___2_requests, int64_t ___3_currentTimestamp, const RuntimeMethod* method)
{
	SimulatorUtility_t6B9B7C22FA101BDB50654F105BA143BFCD297F06* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SimulatorUtility_t6B9B7C22FA101BDB50654F105BA143BFCD297F06*>(__this + _offset);
	bool _returnValue;
	_returnValue = SimulatorUtility_GetDelayedPacket_m2EDDFD26BA1F67AA80F1E28C14094FC4CC29FD44(_thisAdjusted, ___0_ctx, ___1_delayedPacket, ___2_requests, ___3_currentTimestamp, method);
	return _returnValue;
}
// System.Void Unity.Networking.Transport.Utilities.SimulatorUtility::FuzzPacket(Unity.Networking.Transport.Utilities.SimulatorUtility/Context*,Unity.Networking.Transport.InboundSendBuffer&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatorUtility_FuzzPacket_m49047E4E67A8301EF88DA802C8D60AC72F36544B (SimulatorUtility_t6B9B7C22FA101BDB50654F105BA143BFCD297F06* __this, Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* ___0_ctx, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* ___1_inboundBuffer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// int fuzzFactor = ctx->FuzzFactor;
		Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* L_0 = ___0_ctx;
		NullCheck(L_0);
		int32_t L_1 = L_0->___FuzzFactor_6;
		V_0 = L_1;
		// int fuzzOffset = ctx->FuzzOffset;
		Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* L_2 = ___0_ctx;
		NullCheck(L_2);
		int32_t L_3 = L_2->___FuzzOffset_5;
		V_1 = L_3;
		// int rand = ctx->Random.NextInt(0, 100);
		Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* L_4 = ___0_ctx;
		NullCheck(L_4);
		Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37* L_5 = (&L_4->___Random_8);
		int32_t L_6;
		L_6 = Random_NextInt_m794218A3A149A97A6276B37A546E381D44E0222B_inline(L_5, 0, ((int32_t)100), NULL);
		// if (rand > fuzzFactor)
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0020;
		}
	}
	{
		// return;
		return;
	}

IL_0020:
	{
		// var length = inboundBuffer.bufferLength;
		InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* L_8 = ___1_inboundBuffer;
		int32_t L_9 = L_8->___bufferLength_2;
		V_2 = L_9;
		// for (int i = fuzzOffset; i < length; ++i)
		int32_t L_10 = V_1;
		V_3 = L_10;
		goto IL_0065;
	}

IL_002b:
	{
		// for (int j = 0; j < 8; ++j)
		V_4 = 0;
		goto IL_005c;
	}

IL_0030:
	{
		// if (fuzzFactor > ctx->Random.NextInt(0, 100))
		int32_t L_11 = V_0;
		Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* L_12 = ___0_ctx;
		NullCheck(L_12);
		Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37* L_13 = (&L_12->___Random_8);
		int32_t L_14;
		L_14 = Random_NextInt_m794218A3A149A97A6276B37A546E381D44E0222B_inline(L_13, 0, ((int32_t)100), NULL);
		if ((((int32_t)L_11) <= ((int32_t)L_14)))
		{
			goto IL_0056;
		}
	}
	{
		// inboundBuffer.buffer[i] ^= (byte)(1 << j);
		InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* L_15 = ___1_inboundBuffer;
		uint8_t* L_16 = L_15->___buffer_0;
		int32_t L_17 = V_3;
		uint8_t* L_18 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, L_17));
		int32_t L_19 = *((uint8_t*)L_18);
		int32_t L_20 = V_4;
		*((int8_t*)L_18) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_19^((int32_t)(uint8_t)((int32_t)(1<<((int32_t)(L_20&((int32_t)31)))))))));
	}

IL_0056:
	{
		// for (int j = 0; j < 8; ++j)
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_005c:
	{
		// for (int j = 0; j < 8; ++j)
		int32_t L_22 = V_4;
		if ((((int32_t)L_22) < ((int32_t)8)))
		{
			goto IL_0030;
		}
	}
	{
		// for (int i = fuzzOffset; i < length; ++i)
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0065:
	{
		// for (int i = fuzzOffset; i < length; ++i)
		int32_t L_24 = V_3;
		int32_t L_25 = V_2;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_002b;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SimulatorUtility_FuzzPacket_m49047E4E67A8301EF88DA802C8D60AC72F36544B_AdjustorThunk (RuntimeObject* __this, Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* ___0_ctx, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* ___1_inboundBuffer, const RuntimeMethod* method)
{
	SimulatorUtility_t6B9B7C22FA101BDB50654F105BA143BFCD297F06* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SimulatorUtility_t6B9B7C22FA101BDB50654F105BA143BFCD297F06*>(__this + _offset);
	SimulatorUtility_FuzzPacket_m49047E4E67A8301EF88DA802C8D60AC72F36544B(_thisAdjusted, ___0_ctx, ___1_inboundBuffer, method);
}
// System.Boolean Unity.Networking.Transport.Utilities.SimulatorUtility::DelayPacket(Unity.Networking.Transport.NetworkPipelineContext&,Unity.Networking.Transport.InboundSendBuffer,Unity.Networking.Transport.NetworkPipelineStage/Requests&,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatorUtility_DelayPacket_m8E1B868B275E5AE31E94D457158A048CF0ACA814 (SimulatorUtility_t6B9B7C22FA101BDB50654F105BA143BFCD297F06* __this, NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2 ___1_inboundBuffer, int32_t* ___2_requests, int64_t ___3_timestamp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisDelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81_m74D2F275F08D06BCB3E55494D0BCA36ED3D06BF0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t* V_2 = NULL;
	Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* V_3 = NULL;
	DelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81 V_4;
	memset((&V_4), 0, sizeof(V_4));
	uint8_t* V_5 = NULL;
	{
		// int packetPayloadOffset = 0;
		V_0 = 0;
		// int packetDataOffset = 0;
		V_1 = 0;
		// var processBufferPtr = (byte*)ctx.internalProcessBuffer;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* L_0 = ___0_ctx;
		uint8_t* L_1 = L_0->___internalProcessBuffer_2;
		V_2 = L_1;
		// bool foundSlot = GetEmptyDataSlot(processBufferPtr, ref packetPayloadOffset, ref packetDataOffset);
		uint8_t* L_2 = V_2;
		bool L_3;
		L_3 = SimulatorUtility_GetEmptyDataSlot_m1EB029D68D6ADA9318ABFC9BE5265E7FCB408062(__this, L_2, (&V_0), (&V_1), NULL);
		// if (!foundSlot)
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001a:
	{
		// UnsafeUtility.MemCpy(ctx.internalProcessBuffer + packetPayloadOffset + inboundBuffer.headerPadding, inboundBuffer.buffer, inboundBuffer.bufferLength);
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* L_4 = ___0_ctx;
		uint8_t* L_5 = L_4->___internalProcessBuffer_2;
		int32_t L_6 = V_0;
		InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2 L_7 = ___1_inboundBuffer;
		int32_t L_8 = L_7.___headerPadding_4;
		InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2 L_9 = ___1_inboundBuffer;
		uint8_t* L_10 = L_9.___buffer_0;
		InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2 L_11 = ___1_inboundBuffer;
		int32_t L_12 = L_11.___bufferLength_2;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6)), L_8)), (void*)L_10, ((int64_t)L_12), NULL);
		// var param = (SimulatorUtility.Context*)ctx.internalSharedProcessBuffer;
		NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* L_13 = ___0_ctx;
		uint8_t* L_14 = L_13->___internalSharedProcessBuffer_1;
		V_3 = (Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24*)L_14;
		// packet.delayUntil = timestamp + m_PacketDelayMs + param->Random.NextInt(m_PacketJitterMs * 2) - m_PacketJitterMs;
		int64_t L_15 = ___3_timestamp;
		int32_t L_16 = __this->___m_PacketDelayMs_2;
		Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* L_17 = V_3;
		NullCheck(L_17);
		Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37* L_18 = (&L_17->___Random_8);
		int32_t L_19 = __this->___m_PacketJitterMs_3;
		int32_t L_20;
		L_20 = Random_NextInt_m8D466D37B7144CBE66EFDE4A8A5C32EE8A19D4AE_inline(L_18, ((int32_t)il2cpp_codegen_multiply(L_19, 2)), NULL);
		int32_t L_21 = __this->___m_PacketJitterMs_3;
		(&V_4)->___delayUntil_3 = ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_15, ((int64_t)L_16))), ((int64_t)L_20))), ((int64_t)L_21)));
		// packet.processBufferOffset = packetPayloadOffset;
		int32_t L_22 = V_0;
		(&V_4)->___processBufferOffset_0 = L_22;
		// packet.packetSize = (ushort)(inboundBuffer.headerPadding + inboundBuffer.bufferLength);
		InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2 L_23 = ___1_inboundBuffer;
		int32_t L_24 = L_23.___headerPadding_4;
		InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2 L_25 = ___1_inboundBuffer;
		int32_t L_26 = L_25.___bufferLength_2;
		(&V_4)->___packetSize_1 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_24, L_26)));
		// packet.packetHeaderPadding = (ushort)inboundBuffer.headerPadding;
		InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2 L_27 = ___1_inboundBuffer;
		int32_t L_28 = L_27.___headerPadding_4;
		(&V_4)->___packetHeaderPadding_2 = (uint16_t)((int32_t)(uint16_t)L_28);
		// byte* packetPtr = (byte*)&packet;
		V_5 = (uint8_t*)((uintptr_t)(&V_4));
		// UnsafeUtility.MemCpy(processBufferPtr + packetDataOffset, packetPtr, UnsafeUtility.SizeOf<DelayedPacket>());
		uint8_t* L_29 = V_2;
		int32_t L_30 = V_1;
		uint8_t* L_31 = V_5;
		int32_t L_32;
		L_32 = UnsafeUtility_SizeOf_TisDelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81_m74D2F275F08D06BCB3E55494D0BCA36ED3D06BF0(UnsafeUtility_SizeOf_TisDelayedPacket_t7AFEA508A61E8A02F06A3A81775436D15BEEFB81_m74D2F275F08D06BCB3E55494D0BCA36ED3D06BF0_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_29, L_30)), (void*)L_31, ((int64_t)L_32), NULL);
		// requests |= NetworkPipelineStage.Requests.Update;
		int32_t* L_33 = ___2_requests;
		int32_t* L_34 = ___2_requests;
		int32_t L_35 = *((int32_t*)L_34);
		*((int32_t*)L_33) = (int32_t)((int32_t)(L_35|2));
		// return true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool SimulatorUtility_DelayPacket_m8E1B868B275E5AE31E94D457158A048CF0ACA814_AdjustorThunk (RuntimeObject* __this, NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2 ___1_inboundBuffer, int32_t* ___2_requests, int64_t ___3_timestamp, const RuntimeMethod* method)
{
	SimulatorUtility_t6B9B7C22FA101BDB50654F105BA143BFCD297F06* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SimulatorUtility_t6B9B7C22FA101BDB50654F105BA143BFCD297F06*>(__this + _offset);
	bool _returnValue;
	_returnValue = SimulatorUtility_DelayPacket_m8E1B868B275E5AE31E94D457158A048CF0ACA814(_thisAdjusted, ___0_ctx, ___1_inboundBuffer, ___2_requests, ___3_timestamp, method);
	return _returnValue;
}
// System.Boolean Unity.Networking.Transport.Utilities.SimulatorUtility::ShouldDropPacket(Unity.Networking.Transport.Utilities.SimulatorUtility/Context*,Unity.Networking.Transport.Utilities.SimulatorUtility/Parameters,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatorUtility_ShouldDropPacket_mB84B41425FEE0EF6D91376E88357DAC457FACE47 (SimulatorUtility_t6B9B7C22FA101BDB50654F105BA143BFCD297F06* __this, Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* ___0_ctx, Parameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0 ___1_param, int64_t ___2_timestamp, const RuntimeMethod* method) 
{
	{
		// if (param.PacketDropInterval > 0 && ((ctx->PacketCount - 1) % param.PacketDropInterval) == 0)
		Parameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0 L_0 = ___1_param;
		int32_t L_1 = L_0.___PacketDropInterval_4;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* L_2 = ___0_ctx;
		NullCheck(L_2);
		int32_t L_3 = L_2->___PacketCount_9;
		Parameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0 L_4 = ___1_param;
		int32_t L_5 = L_4.___PacketDropInterval_4;
		if (((int32_t)(((int32_t)il2cpp_codegen_subtract(L_3, 1))%L_5)))
		{
			goto IL_001c;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_001c:
	{
		// if (param.PacketDropPercentage > 0)
		Parameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0 L_6 = ___1_param;
		int32_t L_7 = L_6.___PacketDropPercentage_5;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		// var packetLoss = ctx->Random.NextInt(0, 100);
		Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* L_8 = ___0_ctx;
		NullCheck(L_8);
		Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37* L_9 = (&L_8->___Random_8);
		int32_t L_10;
		L_10 = Random_NextInt_m794218A3A149A97A6276B37A546E381D44E0222B_inline(L_9, 0, ((int32_t)100), NULL);
		// if (packetLoss < param.PacketDropPercentage)
		Parameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0 L_11 = ___1_param;
		int32_t L_12 = L_11.___PacketDropPercentage_5;
		if ((((int32_t)L_10) >= ((int32_t)L_12)))
		{
			goto IL_003d;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_003d:
	{
		// return false;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool SimulatorUtility_ShouldDropPacket_mB84B41425FEE0EF6D91376E88357DAC457FACE47_AdjustorThunk (RuntimeObject* __this, Context_tE4EEAFC2FF451B45661D71813B703BB66C43AD24* ___0_ctx, Parameters_tA3860843BBE2D4923FE6901E43ABC3E1697F99F0 ___1_param, int64_t ___2_timestamp, const RuntimeMethod* method)
{
	SimulatorUtility_t6B9B7C22FA101BDB50654F105BA143BFCD297F06* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SimulatorUtility_t6B9B7C22FA101BDB50654F105BA143BFCD297F06*>(__this + _offset);
	bool _returnValue;
	_returnValue = SimulatorUtility_ShouldDropPacket_mB84B41425FEE0EF6D91376E88357DAC457FACE47(_thisAdjusted, ___0_ctx, ___1_param, ___2_timestamp, method);
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
// System.Int32 Unity.Networking.Transport.Utilities.SequenceHelpers::AbsDistance(System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SequenceHelpers_AbsDistance_m35554BEFC1196304E6DA535D075E70B33F070C52 (uint16_t ___0_lhs, uint16_t ___1_rhs, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (lhs < rhs)
		uint16_t L_0 = ___0_lhs;
		uint16_t L_1 = ___1_rhs;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		// distance = lhs + ushort.MaxValue + 1 - rhs;
		uint16_t L_2 = ___0_lhs;
		uint16_t L_3 = ___1_rhs;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_2, ((int32_t)65535))), 1)), (int32_t)L_3));
		goto IL_0016;
	}

IL_0012:
	{
		// distance = lhs - rhs;
		uint16_t L_4 = ___0_lhs;
		uint16_t L_5 = ___1_rhs;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5));
	}

IL_0016:
	{
		// return distance;
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean Unity.Networking.Transport.Utilities.SequenceHelpers::GreaterThan16(System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequenceHelpers_GreaterThan16_m3DF2C81C6DF22575EB63E8A206D3FA740A5BA58B (uint16_t ___0_lhs, uint16_t ___1_rhs, const RuntimeMethod* method) 
{
	{
		// return lhs > rhs && lhs - rhs <= (ushort)max_sequence_divide_2 ||
		//     lhs < rhs && rhs - lhs > (ushort)max_sequence_divide_2;
		uint16_t L_0 = ___0_lhs;
		uint16_t L_1 = ___1_rhs;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		uint16_t L_2 = ___0_lhs;
		uint16_t L_3 = ___1_rhs;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3))) <= ((int32_t)((int32_t)32767))))
		{
			goto IL_001f;
		}
	}

IL_000e:
	{
		uint16_t L_4 = ___0_lhs;
		uint16_t L_5 = ___1_rhs;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_001d;
		}
	}
	{
		uint16_t L_6 = ___1_rhs;
		uint16_t L_7 = ___0_lhs;
		return (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7))) > ((int32_t)((int32_t)32767)))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// System.Boolean Unity.Networking.Transport.Utilities.SequenceHelpers::LessThan16(System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequenceHelpers_LessThan16_m00415C30EFDD7D790BFCE5BEDD7C7DF89C6D3F34 (uint16_t ___0_lhs, uint16_t ___1_rhs, const RuntimeMethod* method) 
{
	{
		// return GreaterThan16(rhs, lhs);
		uint16_t L_0 = ___1_rhs;
		uint16_t L_1 = ___0_lhs;
		bool L_2;
		L_2 = SequenceHelpers_GreaterThan16_m3DF2C81C6DF22575EB63E8A206D3FA740A5BA58B(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Unity.Networking.Transport.Utilities.SequenceHelpers::StalePacket(System.UInt16,System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequenceHelpers_StalePacket_m5415DDC5B4A6EAEFB981E5B1F4A8A7D1C34DC779 (uint16_t ___0_sequence, uint16_t ___1_oldSequence, uint16_t ___2_windowSize, const RuntimeMethod* method) 
{
	{
		// return LessThan16(sequence, (ushort)(oldSequence - windowSize));
		uint16_t L_0 = ___0_sequence;
		uint16_t L_1 = ___1_oldSequence;
		uint16_t L_2 = ___2_windowSize;
		bool L_3;
		L_3 = SequenceHelpers_LessThan16_m00415C30EFDD7D790BFCE5BEDD7C7DF89C6D3F34(L_0, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2))), NULL);
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
// System.Int32 Unity.Networking.Transport.Utilities.LowLevel.Unsafe.UnsafeAtomicFreeList::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeAtomicFreeList_get_Capacity_mBD400529FFA9B31195958D74B4FF1BB75CE0715D (UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04* __this, const RuntimeMethod* method) 
{
	{
		// public int Capacity => m_Length;
		int32_t L_0 = __this->___m_Length_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t UnsafeAtomicFreeList_get_Capacity_mBD400529FFA9B31195958D74B4FF1BB75CE0715D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UnsafeAtomicFreeList_get_Capacity_mBD400529FFA9B31195958D74B4FF1BB75CE0715D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Networking.Transport.Utilities.LowLevel.Unsafe.UnsafeAtomicFreeList::get_InUse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeAtomicFreeList_get_InUse_m153B8AF0414DF281E62C7856B37B86400197AC7E (UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04* __this, const RuntimeMethod* method) 
{
	{
		// public int InUse => m_Buffer[0] - m_Buffer[1];
		int32_t* L_0 = __this->___m_Buffer_0;
		int32_t L_1 = *((int32_t*)L_0);
		int32_t* L_2 = __this->___m_Buffer_0;
		int32_t L_3 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2, 4)));
		return ((int32_t)il2cpp_codegen_subtract(L_1, L_3));
	}
}
IL2CPP_EXTERN_C  int32_t UnsafeAtomicFreeList_get_InUse_m153B8AF0414DF281E62C7856B37B86400197AC7E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UnsafeAtomicFreeList_get_InUse_m153B8AF0414DF281E62C7856B37B86400197AC7E(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Networking.Transport.Utilities.LowLevel.Unsafe.UnsafeAtomicFreeList::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeAtomicFreeList_get_IsCreated_mBAE6D394FA1338D9A07DE998C9A9CB802681FB3F (UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCreated => m_Buffer != null;
		int32_t* L_0 = __this->___m_Buffer_0;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool UnsafeAtomicFreeList_get_IsCreated_mBAE6D394FA1338D9A07DE998C9A9CB802681FB3F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeAtomicFreeList_get_IsCreated_mBAE6D394FA1338D9A07DE998C9A9CB802681FB3F(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Networking.Transport.Utilities.LowLevel.Unsafe.UnsafeAtomicFreeList::.ctor(System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeAtomicFreeList__ctor_mB4498E5EFBE5ECBEA211EA9F773ADFF1333C0D8C (UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04* __this, int32_t ___0_capacity, int32_t ___1_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// m_Allocator = allocator;
		int32_t L_0 = ___1_allocator;
		__this->___m_Allocator_2 = L_0;
		// m_Length = capacity;
		int32_t L_1 = ___0_capacity;
		__this->___m_Length_1 = L_1;
		// var size = UnsafeUtility.SizeOf<int>() * (capacity + 2);
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		int32_t L_3 = ___0_capacity;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)il2cpp_codegen_add(L_3, 2))));
		// m_Buffer = (int*)UnsafeUtility.Malloc(size, UnsafeUtility.AlignOf<int>(), allocator);
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF(UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF_RuntimeMethod_var);
		int32_t L_6 = ___1_allocator;
		void* L_7;
		L_7 = UnsafeUtility_Malloc_mD7BD28D5AE7E4901B225B7DFFE2B568EE7BDC0C9(((int64_t)L_4), L_5, L_6, NULL);
		__this->___m_Buffer_0 = (int32_t*)L_7;
		// UnsafeUtility.MemClear(m_Buffer, size);
		int32_t* L_8 = __this->___m_Buffer_0;
		int32_t L_9 = V_0;
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1((void*)L_8, ((int64_t)L_9), NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeAtomicFreeList__ctor_mB4498E5EFBE5ECBEA211EA9F773ADFF1333C0D8C_AdjustorThunk (RuntimeObject* __this, int32_t ___0_capacity, int32_t ___1_allocator, const RuntimeMethod* method)
{
	UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04*>(__this + _offset);
	UnsafeAtomicFreeList__ctor_mB4498E5EFBE5ECBEA211EA9F773ADFF1333C0D8C(_thisAdjusted, ___0_capacity, ___1_allocator, method);
}
// System.Void Unity.Networking.Transport.Utilities.LowLevel.Unsafe.UnsafeAtomicFreeList::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeAtomicFreeList_Dispose_m3E8AA8784068C96EF8CFDF19A369DA2CF303CD5A (UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04* __this, const RuntimeMethod* method) 
{
	{
		// if (IsCreated)
		bool L_0;
		L_0 = UnsafeAtomicFreeList_get_IsCreated_mBAE6D394FA1338D9A07DE998C9A9CB802681FB3F(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// UnsafeUtility.Free(m_Buffer, m_Allocator);
		int32_t* L_1 = __this->___m_Buffer_0;
		int32_t L_2 = __this->___m_Allocator_2;
		UnsafeUtility_Free_mFF99F4F02FE7F735AB30D8987D6953E55A2B23E1((void*)L_1, L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeAtomicFreeList_Dispose_m3E8AA8784068C96EF8CFDF19A369DA2CF303CD5A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04*>(__this + _offset);
	UnsafeAtomicFreeList_Dispose_m3E8AA8784068C96EF8CFDF19A369DA2CF303CD5A(_thisAdjusted, method);
}
// System.Void Unity.Networking.Transport.Utilities.LowLevel.Unsafe.UnsafeAtomicFreeList::Push(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeAtomicFreeList_Push_m44B366C036D6872928DE3AA26B488022F6D003A3 (UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// int* buffer = m_Buffer;
		int32_t* L_0 = __this->___m_Buffer_0;
		V_0 = L_0;
		// int idx = Interlocked.Increment(ref buffer[1]) - 1;
		int32_t* L_1 = V_0;
		int32_t L_2;
		L_2 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1, 4)), NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
	}

IL_0012:
	{
		// while (Interlocked.CompareExchange(ref buffer[idx + 2], item + 1, 0) != 0)
		int32_t* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = ___0_item;
		int32_t L_6;
		L_6 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_4, 2))), 4)))), ((int32_t)il2cpp_codegen_add(L_5, 1)), 0, NULL);
		if (L_6)
		{
			goto IL_0012;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeAtomicFreeList_Push_m44B366C036D6872928DE3AA26B488022F6D003A3_AdjustorThunk (RuntimeObject* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04*>(__this + _offset);
	UnsafeAtomicFreeList_Push_m44B366C036D6872928DE3AA26B488022F6D003A3(_thisAdjusted, ___0_item, method);
}
// System.Int32 Unity.Networking.Transport.Utilities.LowLevel.Unsafe.UnsafeAtomicFreeList::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeAtomicFreeList_Pop_mD84373612AA7D40AC717CFBDB46AC73C576D0B28 (UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04* __this, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int* buffer = m_Buffer;
		int32_t* L_0 = __this->___m_Buffer_0;
		V_0 = L_0;
		// int idx = buffer[1] - 1;
		int32_t* L_1 = V_0;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1, 4)));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		goto IL_0017;
	}

IL_0010:
	{
		// idx = buffer[1] - 1;
		int32_t* L_3 = V_0;
		int32_t L_4 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, 4)));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
	}

IL_0017:
	{
		// while (idx >= 0 && Interlocked.CompareExchange(ref buffer[1], idx, idx + 1) != idx + 1)
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = V_1;
		int32_t L_9;
		L_9 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_6, 4)), L_7, ((int32_t)il2cpp_codegen_add(L_8, 1)), NULL);
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)il2cpp_codegen_add(L_10, 1))))))
		{
			goto IL_0010;
		}
	}

IL_002c:
	{
		// if (idx >= 0)
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		// int val = 0;
		V_2 = 0;
		goto IL_0043;
	}

IL_0034:
	{
		// val = Interlocked.Exchange(ref buffer[2 + idx], 0);
		int32_t* L_12 = V_0;
		int32_t L_13 = V_1;
		int32_t L_14;
		L_14 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(2, L_13))), 4)))), 0, NULL);
		V_2 = L_14;
	}

IL_0043:
	{
		// while (val == 0)
		int32_t L_15 = V_2;
		if (!L_15)
		{
			goto IL_0034;
		}
	}
	{
		// return val - 1;
		int32_t L_16 = V_2;
		return ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_004a:
	{
		// idx = Interlocked.Increment(ref buffer[0]) - 1;
		int32_t* L_17 = V_0;
		int32_t L_18;
		L_18 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((int32_t*)L_17, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		// if (idx >= Capacity)
		int32_t L_19 = V_1;
		int32_t L_20;
		L_20 = UnsafeAtomicFreeList_get_Capacity_mBD400529FFA9B31195958D74B4FF1BB75CE0715D_inline(__this, NULL);
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0065;
		}
	}
	{
		// Interlocked.Decrement(ref buffer[0]);
		int32_t* L_21 = V_0;
		int32_t L_22;
		L_22 = Interlocked_Decrement_m6AFAD2E874CBDA373B1EF7572F11D6E91813E75D((int32_t*)L_21, NULL);
		// return -1;
		return (-1);
	}

IL_0065:
	{
		// return idx;
		int32_t L_23 = V_1;
		return L_23;
	}
}
IL2CPP_EXTERN_C  int32_t UnsafeAtomicFreeList_Pop_mD84373612AA7D40AC717CFBDB46AC73C576D0B28_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UnsafeAtomicFreeList_Pop_mD84373612AA7D40AC717CFBDB46AC73C576D0B28(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BeginSendMessageDelegate_Invoke_m616D28C5DFFFB30E1F1392F14F6C6EB3B7EC99CD_inline (BeginSendMessageDelegate_t55D0469152EC11CCF544924363F1C12F13CF2FE1* __this, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___0_handle, intptr_t ___1_userData, int32_t ___2_requiredPayloadSize, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3*, intptr_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_handle, ___1_userData, ___2_requiredPayloadSize, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EndSendMessageDelegate_Invoke_m13088C10AA0AD56CAD443B995E262A65BAC6C54F_inline (EndSendMessageDelegate_tCA4D3D136AE26FE2B671C22F4765E9B2C28025ED* __this, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___0_handle, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_address, intptr_t ___2_userData, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___3_sendQueue, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3*, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686*, intptr_t, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_handle, ___1_address, ___2_userData, ___3_sendQueue, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedString32Bytes_GetUnsafePtr_mA653D9296813A2EA93C0D6FC501500008121C3A8_inline (FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824* __this, const RuntimeMethod* method) 
{
	{
		// return (byte*) UnsafeUtility.AddressOf(ref bytes);
		FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2* L_0 = (&__this->___bytes_1);
		void* L_1;
		L_1 = il2cpp_codegen_unsafe_cast(L_0);
		return (uint8_t*)(L_1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedString4096Bytes_GetUnsafePtr_mE1DB42C2C0EEA7D6E1B5D0366A4727125D916EEB_inline (FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21* __this, const RuntimeMethod* method) 
{
	{
		// return (byte*) UnsafeUtility.AddressOf(ref bytes);
		FixedBytes4094_t8611441D8BDC6A677C2D9E551086F59EFBFCBBE5* L_0 = (&__this->___bytes_1);
		void* L_1;
		L_1 = il2cpp_codegen_unsafe_cast(L_0);
		return (uint8_t*)(L_1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FixedString4096Bytes_get_Length_mC2A80F2813739852F0675DA8D2AB68AA92BFC36F_inline (FixedString4096Bytes_t0F6BC703C749C343D1A18E09973BEE0AF0CDFC21* __this, const RuntimeMethod* method) 
{
	{
		// return utf8LengthInBytes;
		uint16_t L_0 = __this->___utf8LengthInBytes_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AbortSendMessageDelegate_Invoke_m60B3BB8663C28583542B560731BE31828023A7CD_inline (AbortSendMessageDelegate_t6FBF6C859A8E442AC6D2CC1FEF00CD4D9815FB0D* __this, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___0_handle, intptr_t ___1_userData, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_handle, ___1_userData, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_abs_m3D9508B36B045BFE7B89C6C69AD34596264E4FE1_inline (float ___0_x, const RuntimeMethod* method) 
{
	{
		// public static float abs(float x) { return asfloat(asuint(x) & 0x7FFFFFFF); }
		float L_0 = ___0_x;
		uint32_t L_1;
		L_1 = math_asuint_m503D1ABF19E4BA615FD8AE1BF1A2E103BBED6139_inline(L_0, NULL);
		float L_2;
		L_2 = math_asfloat_m20D259DAAB46464B59BD8BF5678F9D59800F70A9_inline(((int32_t)((int32_t)L_1&((int32_t)2147483647LL))), NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Random_InitState_mCDAC36582272DAF59478FEA71F1307CF0E58716D_inline (Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37* __this, uint32_t ___0_seed, const RuntimeMethod* method) 
{
	{
		// state = seed;
		uint32_t L_0 = ___0_seed;
		__this->___state_0 = L_0;
		// NextState();
		uint32_t L_1;
		L_1 = Random_NextState_m3C669E9C9DBB958FABE0879335C0732A91DA02F7_inline(__this, NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Random_NextInt_m794218A3A149A97A6276B37A546E381D44E0222B_inline (Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37* __this, int32_t ___0_min, int32_t ___1_max, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		// uint range = (uint)(max - min);
		int32_t L_0 = ___1_max;
		int32_t L_1 = ___0_min;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// return (int)(NextState() * (ulong)range >> 32) + min;
		uint32_t L_2;
		L_2 = Random_NextState_m3C669E9C9DBB958FABE0879335C0732A91DA02F7_inline(__this, NULL);
		uint32_t L_3 = V_0;
		int32_t L_4 = ___0_min;
		return ((int32_t)il2cpp_codegen_add(((int32_t)((int64_t)((uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_2), ((int64_t)(uint64_t)L_3)))>>((int32_t)32)))), L_4));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Random_NextInt_m8D466D37B7144CBE66EFDE4A8A5C32EE8A19D4AE_inline (Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37* __this, int32_t ___0_max, const RuntimeMethod* method) 
{
	{
		// return (int)((NextState() * (ulong)max) >> 32);
		uint32_t L_0;
		L_0 = Random_NextState_m3C669E9C9DBB958FABE0879335C0732A91DA02F7_inline(__this, NULL);
		int32_t L_1 = ___0_max;
		return ((int32_t)((int64_t)((uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_0), ((int64_t)L_1)))>>((int32_t)32))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeAtomicFreeList_get_Capacity_mBD400529FFA9B31195958D74B4FF1BB75CE0715D_inline (UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04* __this, const RuntimeMethod* method) 
{
	{
		// public int Capacity => m_Length;
		int32_t L_0 = __this->___m_Length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FunctionPointer_1__ctor_mE2BD136AA4DB860E4183D3293D3AE1A04B978DA3_gshared_inline (FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2* __this, intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	{
		// _ptr = ptr;
		intptr_t L_0 = ___0_ptr;
		__this->____ptr_0 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t FunctionPointer_1_get_Value_m71D7FF781C694A7C4EE28362DFC78D8DDFE9A105_gshared_inline (FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr Value => _ptr;
		intptr_t L_0 = (intptr_t)__this->____ptr_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t math_asuint_m503D1ABF19E4BA615FD8AE1BF1A2E103BBED6139_inline (float ___0_x, const RuntimeMethod* method) 
{
	{
		// public static uint asuint(float x) { return (uint)asint(x); }
		float L_0 = ___0_x;
		int32_t L_1;
		L_1 = math_asint_mBDED7FE966CA65F6A8ACEAEF8FD779B1B8998288_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_asfloat_m20D259DAAB46464B59BD8BF5678F9D59800F70A9_inline (uint32_t ___0_x, const RuntimeMethod* method) 
{
	{
		// public static float  asfloat(uint x) { return asfloat((int)x); }
		uint32_t L_0 = ___0_x;
		float L_1;
		L_1 = math_asfloat_m9FA56DE5C61FCEF3DCD0675252D40DFD9C9B712F_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Random_NextState_m3C669E9C9DBB958FABE0879335C0732A91DA02F7_inline (Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37* __this, const RuntimeMethod* method) 
{
	{
		// uint t = state;
		uint32_t L_0 = __this->___state_0;
		// state ^= state << 13;
		uint32_t L_1 = __this->___state_0;
		uint32_t L_2 = __this->___state_0;
		__this->___state_0 = ((int32_t)((int32_t)L_1^((int32_t)((int32_t)L_2<<((int32_t)13)))));
		// state ^= state >> 17;
		uint32_t L_3 = __this->___state_0;
		uint32_t L_4 = __this->___state_0;
		__this->___state_0 = ((int32_t)((int32_t)L_3^((int32_t)((uint32_t)L_4>>((int32_t)17)))));
		// state ^= state << 5;
		uint32_t L_5 = __this->___state_0;
		uint32_t L_6 = __this->___state_0;
		__this->___state_0 = ((int32_t)((int32_t)L_5^((int32_t)((int32_t)L_6<<5))));
		// return t;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_asint_mBDED7FE966CA65F6A8ACEAEF8FD779B1B8998288_inline (float ___0_x, const RuntimeMethod* method) 
{
	IntFloatUnion_t549256A9DD754252DD18383D9CE7EA55EBBD6D96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// u.intValue = 0;
		(&V_0)->___intValue_0 = 0;
		// u.floatValue = x;
		float L_0 = ___0_x;
		(&V_0)->___floatValue_1 = L_0;
		// return u.intValue;
		IntFloatUnion_t549256A9DD754252DD18383D9CE7EA55EBBD6D96 L_1 = V_0;
		int32_t L_2 = L_1.___intValue_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_asfloat_m9FA56DE5C61FCEF3DCD0675252D40DFD9C9B712F_inline (int32_t ___0_x, const RuntimeMethod* method) 
{
	IntFloatUnion_t549256A9DD754252DD18383D9CE7EA55EBBD6D96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// u.floatValue = 0;
		(&V_0)->___floatValue_1 = (0.0f);
		// u.intValue = x;
		int32_t L_0 = ___0_x;
		(&V_0)->___intValue_0 = L_0;
		// return u.floatValue;
		IntFloatUnion_t549256A9DD754252DD18383D9CE7EA55EBBD6D96 L_1 = V_0;
		float L_2 = L_1.___floatValue_1;
		return L_2;
	}
}