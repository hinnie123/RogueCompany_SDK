#pragma once

// RogueCompany (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass PCM_Hero_ABP.PCM_Hero_ABP_C
// 0x179F8 (0x18908 - 0x0F10)
class UPCM_Hero_ABP_C : public UKSCharacterAnimInst
{
public:
	struct FPointerToUberGraphFrame                    _UberGraphFrame;                                          // 0x0F10(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_29E2049A43BAD0E9CF3BE8AE61CBC731;      // 0x0F18(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2365227C482463003C5FD8BEFA0F99C5;// 0x0F60(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_89993AE948A96485ADCD62A8CE725A2D;// 0x1068(0x0108)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_38106FED442FBC2120B47088D02A2ED3;// 0x1170(0x0078)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_11BD21EB4B7C26D6C080FBAA65F0AB67;// 0x11E8(0x0150)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8DCD240748432AF093C9E8A3DD2C65BB;// 0x1338(0x0078)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_A086FC894E85644B9E106AB29ECC046D;// 0x13B0(0x0150)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0A6249304CF1FACAE5B5BB97E4F919F6;// 0x1500(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_99FE26E348744C512A87A581F1F7FD7A;// 0x15A0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D00705934833EF8A13C38E804C5309FC;// 0x15C0(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_F25FDA794D37C8F04ECDB6BB1168C91A;// 0x1670(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_132C9D4E4E4BEA57EBD34D89B6C995E6;// 0x1728(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0CC6A1EE4D182B373791B99375E82EB6;// 0x17E0(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_59646A3144259EB71B344199F22C2D24;// 0x1808(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_AC2DDAFA4C9CF29A4987419A10C62352;// 0x18A8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CEC5F4B04B3CA0DB6ABA909A461C6EEC;// 0x1960(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1F2D9786461CBD37AFBCCAA755AFE449;// 0x1A68(0x0108)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8D5EE8EC4C803F16912B23B44E284AC4;// 0x1B70(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_788F9BBE49C6A5276A3B919AF65A8E28;// 0x1BE8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DE6D61304941FCBBA1989B919D2CBC93;// 0x1C08(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7CC0A3B247A76ACDB9EF1B9C6482E6A6;// 0x1CB8(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5F88B93C4FF7420AB162B38E035FBC3F;// 0x1D58(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_893C18184F552184C3B0B28EECBC6517;// 0x1D80(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_17B61A5A4C26F6791298C29059178A3A;// 0x1E38(0x0108)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2F45D03B44EBE9BEC868879280AAEE95;// 0x1F40(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6DA0BB3C457990D02E54D488053159AD;      // 0x1F68(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B655D0364C7E96BF92BAF9B7545615EF;// 0x1FB0(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_818EBBD845F49A3F6E3DEB855CEEB88B;// 0x1FD8(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3F31134D42293E02F15D2EBEEB3746E8;// 0x2090(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_10039EB244652322F5AF92866A0196F1;// 0x2130(0x00A0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_90B5E1F24530EBA9DB77BCA9FF80E0A8;      // 0x21D0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C7A0EE7442111D1B9883B89CD838490E;      // 0x2218(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5175617043F742D75A66D2ADEFA784E9;// 0x2260(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0D496CDD47326C64AD79A5B1DEBBEAD7;// 0x2318(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2EB3A27E41AE7D6EF724A8ADA26EEB37;// 0x2340(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2D49006941328BC0DB05228B7ACD566E;// 0x2368(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_619E3DB54050291D82E0B391C90C058E;// 0x2408(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_640792D1459CD76390D1F6974BB3D028;// 0x24C0(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7B6C8429408B648B7718BF9C6721AFC0;// 0x24E0(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_77196D11474B57ECE060028591CAA3B5;// 0x25E8(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6F700D894897643F16C963B513C3671C;// 0x2608(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2FECFF854DD03FC7AF87669E6618453D;// 0x2630(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_72B25BA04C1057786BD47EA1325407D4;// 0x2738(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8D9F5E8E444380B955AD369ED3543163;// 0x2840(0x0108)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6F34BD91427109435035E388CB35F15A;// 0x2948(0x00A0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E989E4B14946762752903FB8FFA64F92;// 0x29E8(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_EA60BACD49835DE178968C9E864EF146;// 0x2A08(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C1B55F204FD17E11F83857BBA9202821;// 0x2A28(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7AA08AE048F9D12719930A8EEB96E94F;// 0x2AC8(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B435396A4C7845A22D1DE5A7E6DA8940;// 0x2AE8(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_23DB87334A5B7D99A2FB028091C7E25A;// 0x2B08(0x00A0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E9D202664C14A460D625E094CFA3FD19;// 0x2BA8(0x0028)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_66061EAB4DF2E8DEF5394DAA78AA2AB0;// 0x2BD0(0x0090)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4F1E733A44ED52BEB638F894E6B445FC;// 0x2C60(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C9FB0C184909107565CB8E9F8CCBF328;// 0x2C80(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_624ED0644BA425836D7298B6BDBD6AD0;// 0x2CF8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9891860C4B9AA4AE3FA4D8868CC8BC9D;// 0x2D18(0x00B0)
	bool                                               __SUBINSTANCE_StringMantlesTogether_461224144FFC5A148A9487A371F95429;// 0x2DC8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2DC9(0x0003) MISSED OFFSET
	float                                              __SUBINSTANCE_Max2StoryMantleHt_461224144FFC5A148A9487A371F95429;// 0x2DCC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              __SUBINSTANCE_MaxMantleHt_461224144FFC5A148A9487A371F95429;// 0x2DD0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2DD4(0x0004) MISSED OFFSET
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_461224144FFC5A148A9487A371F95429;// 0x2DD8(0x0098)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_87AF3B5D4F11A0D60147EAB267C57878;// 0x2E70(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_35CE09E44BB6C7CFA5730C9A6A61B2BF;// 0x2F20(0x00B8)
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_E3950B524F93AEA4F112E2B3A71E8E86;// 0x2FD8(0x0098)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_2EE53FDB46219F3919D39F8A7650D406;// 0x3070(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7F7D082E429C11B2F298D1B267DE244C;// 0x30B8(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_89DBB1664BB217CEAC488BBD398CA0BC;      // 0x30E0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4B3470EF41A7F3E8DBBBD9ACC726D741;// 0x3128(0x0078)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_054730384BD51E3E23F6F1B0952A33CB;// 0x31A0(0x01B0)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_3E2AA5EA4C7A1498994071B2C4727CFF;// 0x3350(0x01B0)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_26DE6FF0456E15FEAB6926B72AF6BD7E;// 0x3500(0x01B0)
	EKSMovementDirection                               __SUBINSTANCE_MeleeLowerBodyDirection_3741820D49F2DBC1518975A785322FAF;// 0x36B0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               __SUBINSTANCE_bEnableMeleeLowerBody_3741820D49F2DBC1518975A785322FAF;// 0x36B1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x36B2(0x0002) MISSED OFFSET
	float                                              __SUBINSTANCE_Pose_Mirror_Alpha_BP_3741820D49F2DBC1518975A785322FAF;// 0x36B4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               __SUBINSTANCE_WantsMirrorPoseBP_3741820D49F2DBC1518975A785322FAF;// 0x36B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x36B9(0x0003) MISSED OFFSET
	float                                              __SUBINSTANCE_CachedPivotAngle_3741820D49F2DBC1518975A785322FAF;// 0x36BC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              __SUBINSTANCE_Cached_Stop_Angle_3741820D49F2DBC1518975A785322FAF;// 0x36C0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               __SUBINSTANCE_Dodge_Rolling_BP_3741820D49F2DBC1518975A785322FAF;// 0x36C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x36C5(0x0003) MISSED OFFSET
	float                                              __SUBINSTANCE_Cached_Angle_3741820D49F2DBC1518975A785322FAF;// 0x36C8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               __SUBINSTANCE_Starting_a_Pivot_3741820D49F2DBC1518975A785322FAF;// 0x36CC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               __SUBINSTANCE_StringMantlesTogether_3741820D49F2DBC1518975A785322FAF;// 0x36CD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x36CE(0x0002) MISSED OFFSET
	float                                              __SUBINSTANCE_MaxMantleHt_3741820D49F2DBC1518975A785322FAF;// 0x36D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x36D4(0x0004) MISSED OFFSET
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_3741820D49F2DBC1518975A785322FAF;// 0x36D8(0x0098)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EF41D913441B65C8AA1F9AA0269E00F6;// 0x3770(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3A15FF364DEFCA6808F9AC8583835D04;// 0x3810(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_91DD480E4A737FF01CF8A9820066C60F;      // 0x3838(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_49BE09A34BE5E900BC0A188E899A354D;      // 0x3880(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0FF6A8584E1A7EAD37AB819811EF3F8D;// 0x38C8(0x0028)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_A5DA58914CC046537FED968C26F8DE9A;// 0x38F0(0x00C8)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_885438D342B7435FCF6EF794926B4C05;// 0x39B8(0x01B0)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_F18DF7724351A369DBE6A4951309A278;// 0x3B68(0x01B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E153E4304E657577893FE096E50F9FBF;// 0x3D18(0x0108)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_FD27A6D74F8D2B7D1CA20E840BC80C91;// 0x3E20(0x00C8)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_D9E2F130439D23E30B95FD8B3BFAF94D;// 0x3EE8(0x01B0)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_522F3748413FF2AC5070628B9512E389;// 0x4098(0x01B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_F092B1064A0E80F11E70FCB59E52E0C2;// 0x4248(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3C75FB5946441438BBC5298F808723A4;// 0x4300(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_15DB7D434CF9A89C3816ABB4FBE0220C;// 0x43A0(0x00A0)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_3DA8AC1F420E7BD0E7D5A596A7E125FF;// 0x4440(0x0150)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16E324154A6B1BCAEC69CF8C20707B6F;// 0x4590(0x0078)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_5F04D38B4834F4A3089673AC1DAFB987;// 0x4608(0x0150)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_098C8E034DA357A4C273AE8806BEF8DB;// 0x4758(0x0078)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_E38B6B1840708C5FB0CF61B7A86D87C9;// 0x47D0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9AA9328A458229310FE96BA5274A4971;// 0x4818(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C4150468459416CD7BEEB1A7E4A6B62F;// 0x4840(0x00B8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_180F119043495BA605E9569F868AF236;// 0x48F8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D3538DA741A6E2DC5F2C2B83B8CB2EAF;// 0x49B0(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1216805F4C5B39E5F22818BF1FABF314;// 0x49D8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3B205DF848B76438C04309A572EA2FB3;// 0x49F8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6664D4DC49B1375C5B1A5A9A8E461B00;// 0x4B00(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DDFDCB904C3D3F2A3C011B8F9F9609D1;// 0x4C08(0x0108)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_508DA5314031B0515F9C27BB0E996343;// 0x4D10(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AD4D32C348D8ACB1471CC38EE304A927;// 0x4D38(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F57FE60B4E951C86C53ABB882B998CC8;// 0x4D60(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_792988884C48FF32578DF1A60C1F730A;// 0x4D88(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9223EB7F4AFD88D35AC6C2AD0CC7A442;// 0x4DB0(0x0078)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_E6CEDD2941ABF822CB9015BB697D9852;// 0x4E28(0x00C8)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_F7601B9C463E5B090D8D6AB5AD4C26DF;// 0x4EF0(0x0188)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1F33DBB147460908BBFBFDB56D477CC0;// 0x5078(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_9509E735476D1EEB754EF18FAED6AF7D;// 0x5118(0x0188)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BD80B9F441424C05C53378B8580C23BB;// 0x52A0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7FD3B5BA44A5E798219B9781AFB69826;// 0x5318(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7B5295F24B8F16283280FF8304A6016D;// 0x5338(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6F3ED6D64FE1C0D3C564B7A26A1E2FA1;// 0x5418(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_224BC0364BB2E29B436086A19CD2F354;// 0x54B8(0x0188)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FBA578F64C9B1067BC8564BF79C00CB3;// 0x5640(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6E5E4B4643E4C5916AA78F99A19C3962;// 0x5720(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5986A8D04B07607389132A869B3088FE;// 0x5740(0x0078)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_15D9F1CE48F5DA893903FE8F9DA54992;// 0x57B8(0x00C8)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_8DCF901A4FEDFB0A93265EA4891110F0;// 0x5880(0x0188)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DA25B7CC4E06096789EE109F8230C737;// 0x5A08(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_3FB843504A565FF84EA8DDA3F68421A1;// 0x5AA8(0x0188)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E841094643B0C654D22EA69828BBACCD;// 0x5C30(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B6A77D4B43B985732E1EB68EADFFFB19;// 0x5CA8(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_467923CC47F78052457A47831ABFFAE3;// 0x5CC8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1032473B488C7976F72307B563DAF64E;// 0x5D68(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2AC1A6414A9579054398889F211C6AF2;// 0x5DE0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_D84189A44E1F78F52C6340A98E271BCF;// 0x5E58(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_873ABD634A4E4F1ADBA0F2A9A7FD249E;// 0x5E78(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9A426A9E48368B5851831888254B2AC8;// 0x5F58(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B6386606414BF4CF83F7AD9FFE907213;// 0x5FF8(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4190F3D6483E9DEE7565E6AC0DCC9D17;// 0x60D8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F2F6DCF4404FBE9008B130B798A1AD0F;// 0x60F8(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D59ED8924181803666F7DDBA2A8CF839;// 0x61A8(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FE1EA3904FA959B652BC218ED852DC2D;// 0x6248(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6AC20A88452A4964BA3687B2BDF12C61;// 0x6300(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A6DD79CA4481392E45082FBE8F4E9150;// 0x6408(0x0020)
	unsigned char                                      UnknownData07[0x8];                                       // 0x6428(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_1436704B48BE66DB5976AFBED60673E6;    // 0x6430(0x0190)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0A5E0EF8427E2F05CAC17AAA0C78A949;// 0x65C0(0x0108)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AE79B6CC46A31B2A7D73498874087E05;// 0x66C8(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E607D2A24E7D3932066CE0922F2693B7;// 0x6768(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6341F63F465B59B0AFA6E59E1CC655B1;// 0x6790(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_72640BAF4E1BA30E6914C3B9C3DE123A;// 0x6848(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_0D7BD11C45AEF5BBE8F1A4944507B77F;// 0x68E8(0x00B8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_438E682F404B89D6F5AD888DC1DB57F9;      // 0x69A0(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DCE23BCD428E874E10AA00B42369D5D4;// 0x69E8(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C1507CDE436DEEE3649829996777A1B2;// 0x6A88(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B8D90FC441F94F87E27CBEBB6D55E7F8;// 0x6AB0(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E6683639464813E271E7029B2683D2B3;// 0x6BB8(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_EB5B6FFB48B241984F91D4AA9BBE4EA1;// 0x6BD8(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F081B20E4E1B6F66718CEDBC863D2E56;// 0x6BF8(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_34BFF85B4471EA967F4E26A117ACF87A;// 0x6C98(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E406F9A147C947EE628A7E8A3F83F5D7;// 0x6D50(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_D9D560AE410A2BAFA6EC01B2BA50C00C;// 0x6D78(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EBB941F744EC4662FC80F5970ED7372D;// 0x6E30(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_EA9DC57347F93678427634B3549D6D75;// 0x6ED0(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1909CEBF4B5A33217878DE92F67E7840;// 0x6EF8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B936A4D6406EF3C59E707298456F9DB5;// 0x6FB0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_36D1F325435D494F77126A860A09D6D1;// 0x6FD8(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9EF5277744514CEFD88A2A853EDC2F0C;      // 0x7000(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AACEB334450C70B9AB59B383B05D38F7;// 0x7048(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A51DEFB24D1E03CBD47687AB20DE37FA;// 0x7070(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0AECAB1B4C7C4EBE62D196846EE6DE6B;// 0x7128(0x00A0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_73D785DB4ABE1311BEF5A69B1EE3D871;// 0x71C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_233C356842DB534CD453E29390007BA8;// 0x71F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_897086894750D35614505B985BA4FA44;// 0x7218(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EF9DE76E43DA1FFA5323C29FE06381CE;// 0x7240(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_023CF2F941E7169C74D4FA837321FD0A;// 0x7268(0x0028)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_D7EA3D694B1BFBA145DE8693177F72D4;// 0x7290(0x0150)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_41B0FF584194330F79BD59A106A3C60F;// 0x73E0(0x0078)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_E8C8E1D74974C2C1D32EF2A5EAE75E21;// 0x7458(0x0150)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C9FB23AF49844E085798448816090985;// 0x75A8(0x0078)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_003CE12C46565505086242829C780158;// 0x7620(0x0150)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FE10121643055D23ECCD2782F2D9226B;// 0x7770(0x0078)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_1EAD763243CA2CF1C07EE0BFB8646F40;// 0x77E8(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_81970E1A40510EEB6642F48CB5642B6E;// 0x7898(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C0FD37DE455F7A03BBDCDA9E2A7FB3C9;// 0x78B8(0x0078)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_DC2E5C3349E48C88101138B1AB9BE3D9;// 0x7930(0x0150)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_702ABEE740F02A25EBB7B694CA775D8A;// 0x7A80(0x0078)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_B60EDA4048C183A85CA1CBB5B71879CC;// 0x7AF8(0x0150)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_BCA36A86484C69955D6641AC68F6FAB7;// 0x7C48(0x0150)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_4DE4E723403DF30878849A8154BEBBD7;// 0x7D98(0x0150)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_82BF57624A3651DAD9EADC9F79C7D006;// 0x7EE8(0x0078)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_06C2B97E49A97E200D04ACA033D93E03;// 0x7F60(0x0150)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_70764EF943611A52EB35F0878351E1CD;// 0x80B0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_03A4CB834A30052DBF53049A61E015F1;// 0x8128(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3A2CD5454C5E78F5A0C73095B86AB416;// 0x81A0(0x0078)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_92A0A85F469A01382D849EB3B5519A19;// 0x8218(0x0150)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E5E8A17C426D31F3B25F5A9E553E8B58;// 0x8368(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_293410244DE8C9AD102CA5B8391160BE;// 0x8408(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D2D7636D41718949BE42D19C44AC6BDD;// 0x84A8(0x00A0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_55D7D1DA4159F785E13017882BDDAE4E;// 0x8548(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_50D56CF34EE9EA46CC3DD3A915A139CA;// 0x85F8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BA83EF2C4F91BCFAA60061B92C56863E;// 0x8698(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_53FCC6C2403A8154178FC8B9E97ABA6C;// 0x8710(0x00B8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_23132280445C24F02084CDA662A56669;// 0x87C8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_069620E74FAAC7295808F9B1A9CB29E1;// 0x87E8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_AE0F91F840C90027E1DCD18EBAE305B3;// 0x8860(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B28BE1074CEF82735C698A93B3E5EA63;// 0x8880(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_D17FE29B4A776D49967BD883FEDD2112;// 0x88F8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7ECF346E4F68943016733C8160991786;// 0x8918(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9485B79D4F2163D309379D93FE837B24;// 0x89C8(0x0108)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_519537504E7F068A94D465B5579FCC77;// 0x8AD0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23C8CA564AF5E80469A0928398573754;// 0x8AF8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5EFBC2234D188CEEB4C6CC8F0B5C300C;// 0x8B20(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_235330B148C463A52BBEADBB3334BD9C;// 0x8B48(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F29ACFE44E09AA30EB95BAA1D2FCC174;// 0x8B70(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7F37B5C9432AC17748DCC48AB35CCE3A;// 0x8B98(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BEB6C58A42EF239509BC208CC8E5DC6B;// 0x8BC0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DE4045664144E3F5731E89BFF2830544;// 0x8BE8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_298A8B91461F3704A5CD968634024FC4;// 0x8C10(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_247B92A1445C4BA59D2C2489EB885C50;// 0x8C38(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0AA28A8642BFC6195FE0659BEDBCE288;// 0x8C60(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BCF1A52E4186F60B4E2E5ABCCA5955B8;// 0x8C88(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_47529EDF430B1594C51877ABC5668AD8;// 0x8CB0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5BC0184E4C52FEA5C17D559F35155358;// 0x8CD8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A8A53E414A98099752E8209325BA2038;// 0x8D00(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F929E7F04FA56EDE2222A1965B5BDA8E;// 0x8D28(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CC80040E4767FEB07299938BB669DDDF;// 0x8D50(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F2B6A20546F9C455DC2117A4E789B458;// 0x8D78(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AC99E87443CF5ED26F9740A1D62A6B51;// 0x8DA0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3C711A964035B92CFC598AB773471D40;// 0x8E18(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17C38D9A4D2D3481698080B9DDF771AD;// 0x8E90(0x0078)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4E3591DB40F4A63B14CC13A0C3629818;// 0x8F08(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2360DBD64D5711FA10CB358B61A5312A;// 0x8F28(0x0020)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_F987F21D4A8274E042FE2B895A377829;// 0x8F48(0x00C8)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_0119F298418921D7E64D41B81691F46F;// 0x9010(0x00C8)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp_CC1FA4F14471964F83FFDEB1FC2329B4;// 0x90D8(0x0110)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2C7A9EA04F7F9AB5FFD038A93EB3C28C;// 0x91E8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7210D1324CBE49CC8671D2AF02E7021E;// 0x9208(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F05BA02F451254EF3B95458CD8EE64DE;// 0x9310(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2ACA388C4055766B76039BAEAAFE76FA;// 0x9330(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_91C39B9840C051C23135748CC502022B;// 0x9350(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9FC47DD64EEB3B58B4E618B5CD16177D;// 0x9370(0x0020)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_6C895BB242EF46327C9B3088B8575902;// 0x9390(0x00C8)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_9572087D45DD37F3C68A129BFC0BD1CC;// 0x9458(0x00C8)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp_2B554E61422E33C22A45E0BC61B85D64;// 0x9520(0x0110)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_A1B7FEF64372CB5E8BB9E98EBB612A42;// 0x9630(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_73FA3CC94B851D1B012CCEBE50F127F6;// 0x9678(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_E333098C418B5FF82A8E07BEAA8370EC;// 0x96C0(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6F8844014EF18764D702A2A046A0CA2A;// 0x9708(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7EBDCFB846DA4647453A57B234C4EF90;// 0x9728(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_FA926DC84C62A6401B9C21B3E6AF5F99;// 0x97A0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A8FCB7254A9241E9702830AC517C52B2;// 0x97C0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8DF6E35F47C84421618AC1ACA305F345;// 0x9838(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3B5D2A674193514DAE87E596B88B5F5C;// 0x9858(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_52B63A994A3631E82EBBF6958EA6C545;// 0x98D0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_71D7B9BE459B65FDBA02AEB75E38AC40;// 0x98F0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_57AB6C4C442822473A72C3ADE0C35AE0;// 0x9968(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E5E66B9D4BD06E911DD25EA4134009E7;// 0x99E0(0x0078)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_E7BB9F8F4BDAB42CEE55B1B7F33EB210;// 0x9A58(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F253C57F4E93D7E6EF561192DAE9B12C;// 0x9B08(0x0078)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp_B593564F45BF8E8FA58571A38E094CC4;// 0x9B80(0x0110)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp_9DBA9A2A431EBCB8C37971A09DA2E29D;// 0x9C90(0x0110)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp_FB3C4FEA4B43E014178D61903837B7C4;// 0x9DA0(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C550B0804C8A4234A45E85B7715CEFAF;// 0x9EB0(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_10CC21FA431B69971B665C8C174489D4;// 0x9FB8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C2BC267A40DFCAC56CC20A836EF4E13C;// 0x9FD8(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_AE1D39B84F2CFF881C9CB6BE8C78FA90;// 0xA0E0(0x0020)
	struct FKSAnimNode_OrientationWarp                 KSAnimGraphNode_OrientationWarp_D71843EF4D5D384F2A4E6C8EC318F988;// 0xA100(0x0110)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7EBE30CE4A80553A72C4A68043256A5D;// 0xA210(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_AF3B2A4B4285009BB4264AB15CD66D33;// 0xA230(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0A8B861E45C25DE94E459A90BD6EEE90;// 0xA250(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_64EE2A8C44960A2FFCDA71908FCC5030;// 0xA270(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E4704060472F4B179EDC14A190B29CAA;// 0xA290(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B32E93064CB07216FADC499C3FB9B089;// 0xA398(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F88EEC804A1B3E0F2B22F6AC88F1250F;// 0xA3B8(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1870DE51426BBC377FD623B7E7E7D712;// 0xA4C0(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_F59C18104CD63F7F294E1680BF38F66F;// 0xA4E0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F1618C2F41C9077C6E0A54BB3C0A93EB;// 0xA500(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_32514AA449EDA07AA60A7CBBE8A15148;// 0xA578(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DC5855D0454E6621F8993BA42BEF3229;// 0xA598(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_532054124B9CF6116D0DFF963493B50E;// 0xA648(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5438012E4C22B3B26773E39B2FFC3788;// 0xA6E8(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1529B96044D451E2CBD065A619192B18;// 0xA7A0(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_295AD7914831E153F615DA94506DD4B4;// 0xA840(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_647D8AE845B6AF987D7987BF9813CD6A;// 0xA868(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_0363619B43D78FB463FCEC870CD8EB18;// 0xA890(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_396DFE014C2F6F59C4A7A0825F6AFC9C;// 0xA948(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B95880D747E0C2F110A336B26A2C92C4;// 0xAA00(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_96C205944D27E2CF34DAF4BF954134DF;// 0xAA28(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_89E86A4C4FA8CF9AD3A107BD03FE09C8;// 0xAA50(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AB6C918D47DCB2508B6B73ADF4CB906C;// 0xAAF0(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_435D8B9048934378B07C02ABFDA9142B;      // 0xAB18(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C1A2AF4A448E575C6454078FA956AB4B;// 0xAB60(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_87449EBD4C66B261F74F52A179647847;// 0xAC00(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_69B82020447E2AB23E7E3E87CE5918AF;// 0xACB8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_13F3A65D43CE12E3EC21F7A198F9372F;// 0xACE0(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3E5729FA4C30601B4EA872AA477A9AF6;// 0xAD08(0x0108)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_55D62979448985CC1E52EBB3E6DA293F;// 0xAE10(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_EF12421D4946E44E8BAF5EA103DFFD4B;// 0xAEB0(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A5C11986460FED22ADC7799DE68958A2;// 0xAED0(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_83E447864B6836DB1F86698C6B61E534;// 0xAF88(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1AA552A24611A69B53D0D9BE9433A275;// 0xAFA8(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_546EEB534233720A18EDA986ABDF4A05;// 0xB048(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_08FBD69A410A73299FB44D8C2271DF87;// 0xB150(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5E554EE141DB3C9468523A8ADB917DCE;// 0xB170(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_82AC29034F1051D120BB8B8E31CE6FBC;// 0xB190(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8AAB05E44B076B34F426419E30D8A94E;// 0xB1B8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_616C0E5D4D0B3DFDF473B2B5F1ABAD47;// 0xB2C0(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5254C6B848532CA5CB71FDB49597E135;// 0xB3C8(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6ABA6B1C45F8A7901310DB9A072C500C;// 0xB3E8(0x0020)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_483032354357A1D93B9AA6A6272C6FD5;// 0xB408(0x01B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F21A158A4EF9C8358FB56CA54AFA145C;// 0xB5B8(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_100CC6B8424C6156C57722B5B7553249;// 0xB5E0(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BBF52B5E4841D084ED8B1E87EC2E43A0;// 0xB698(0x0028)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_6B1CA0A4403368401EC827B2F431EE2F;// 0xB6C0(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_35A006464D881424EB8CA28074704DA4;// 0xB708(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_8DAE8D3D4C4EE1A9367E8894EBAEEA5F;// 0xB7C0(0x00B8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_418FB4E14541BA7156D903A4490D1C62;      // 0xB878(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5491CA5A4C73A2DB3629D1BB2263E1AF;// 0xB8C0(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1DF9B3B34126F8131DE0E194BA485C87;// 0xB960(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E21770C84E9A8214383E7B8D4D111EC3;// 0xB988(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E3B4D7FD40CD96177D9321827374F0CC;// 0xB9B0(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7CC065534F858FFFC398FAAF1A020850;// 0xBA68(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5C23E7F54BE60C0221BE7EA5F70C3513;// 0xBA90(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_00BECD874E41F271132FF690E604CE23;// 0xBAB8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_466F92B64E596F064FE78895424008FC;// 0xBB70(0x0028)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_8B079BB447A793E01951BB91F3572632;// 0xBB98(0x0150)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_594FF7C841EB99BB25899F9CED9E6943;// 0xBCE8(0x0078)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A1ABD003434CC8A78ABD0F9356BE0B93;// 0xBD60(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7AE8C24845B931317D805D8FA7B3EA9B;// 0xBD88(0x00A0)
	unsigned char                                      UnknownData08[0x8];                                       // 0xBE28(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_BE627B164DBA8E38BA2A58B6E8D68874;    // 0xBE30(0x0190)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_A4AFAC1D49380A40A17F2186DB57831F;    // 0xBFC0(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C6F784D24DC9834B5E790BB95267B6C2;// 0xC150(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F54B02D041A7DE073D70EEAC050F034F;// 0xC178(0x00B8)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_F7B0A0C04AF43A05D6F4A5A78F524232;  // 0xC230(0x01B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F8B6B5944EA74625ABF672A62734437B;// 0xC3E0(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9C6753634E501CE31627B9B1456DD389;// 0xC498(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F232C7DC4310583724E3F1A6797C99F8;// 0xC4C0(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_8D50DF9042E0039C3E23B58EFBFF2CB0;// 0xC4E8(0x0188)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9296DBDA455E2393EDDB5C8058554032;// 0xC670(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A760CD104ED5575D963F38918812F2DD;// 0xC728(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_47343112452AF642651C5FB002C64B84;// 0xC750(0x00B8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BCF2DB91420FF51A128D68A999F0BE1B;// 0xC808(0x0078)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_39CD710D487379CDBC27A39B57289FA5;// 0xC880(0x0188)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_BED93A0C44BD6D206E1DC084F9DF8354;// 0xCA08(0x00B0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_E98A07AD4B614D514B072EB8CF4A846A;// 0xCAB8(0x0188)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_70C3734F407F1F526F31CDAD292DA169;// 0xCC40(0x0188)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_C15902EA4E1F93C3E1DD28A6F847A151;// 0xCDC8(0x00C8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_E41A5E064D7B9CEE603D3989B5481D3E;  // 0xCE90(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_CCA0ECB6484936DE57A9EF9DA4B62B68;  // 0xCF80(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_095B4A2F43BCEDA4F797F38FDABFB478;  // 0xD070(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_E5C6E047422E18EDCA1145AE60D8C96B;  // 0xD160(0x00F0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_8BEFFA054046E694EBD1A091FF1C8A83;// 0xD250(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FC82123D40B78689DEF0D4B6AF66E290;// 0xD308(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_609E0FAD43E7D303C584D89C4119D730;// 0xD330(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_28DC02674A065F6DC987A29995F55D17;// 0xD358(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A119C4E84DE1F48A8A04F8B33F29E80D;// 0xD410(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_49BCC8ED42F103C118A8748018426116;// 0xD430(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_972152654D22576C46C1D49BC2C0F59A;// 0xD458(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_58A78D804741B72909B0798FEF81701A;// 0xD480(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A5F510524A38B24AACF2C6920C7D73B6;// 0xD4A0(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5456ED604608FE1683176B90E846E025;// 0xD558(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4AC649C94D9CA0384478F38B9984233B;// 0xD610(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9A7F40574FC55C484D04EE82337CF468;// 0xD638(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7812BEF64CD56B3903BA80B919EE97BB;// 0xD6F0(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3AB1BBE547504AFFE2BB9082131B7251;// 0xD710(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7EB98B1E4A43A93873ED81B836EF7636;// 0xD738(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D4F3963E4BDECFDEBE6701935A128E2F;// 0xD760(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3F16E4F44BB13DF8122740942360FF9B;// 0xD780(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FD1C2C424A2DCDCA188E6A80C0200BE5;// 0xD838(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CA60CEA14DAE14F02D7529A87A641169;// 0xD8F0(0x00A0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FB952A3747B8EBAA8E56269CBB6E9766;// 0xD990(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AF0EF89A4286983028A699A69099EA6F;// 0xD9B8(0x0028)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_2EAF378841549288A8BAD3A08B276F9E;// 0xD9E0(0x0150)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_23E107AC4491392FA43CCF889B30D451;// 0xDB30(0x0078)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_8092D11542DE42A7AC414B990EF5D0E6;// 0xDBA8(0x0150)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5CC2F25445459A6E187A9B9A25AB9C44;// 0xDCF8(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C63A6A17497A7183F47833A615E5CFB4;// 0xDD70(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_FB275CA04D4C1D9F283DB3A70AF05704;// 0xDE10(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3146B8614C881FCDF1313798C666F3C6;// 0xDE30(0x00E0)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_85D1FF3A432A34DF540046AB5ADA6D7D;// 0xDF10(0x01F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0ABD63B84EF06F7BDFE1909A576E5F68;// 0xE100(0x00E0)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned_A1ECF41E4FBE7BE8DE8A56B2505C5873;// 0xE1E0(0x01F0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_16C4A8254671655AFF0CC3A2EB232115;// 0xE3D0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7F64602044ED88F4FF369795E78A03D3;// 0xE470(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F9613108402A43D01E7AF3879A06FBE3;// 0xE490(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F6299F1A43C04A30DE69B8A53B070E53;// 0xE540(0x00B8)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_6A33A0B8496B91B761212BB245C8A8C5;// 0xE5F8(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_674AFE7C40E37E3A07AACB90EC5BF223;// 0xE640(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8E62C3744F62F00D571DF68D4AB563A5;// 0xE668(0x0028)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_E9C4746F4D47188105203FB76F5CCEE6;// 0xE690(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3E549B554E2740DD071F6A9D2AE2B6FC;// 0xE6D8(0x00B8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3794035C4BAD5DE3903A65A064CEFEF5;// 0xE790(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_72BDCC1F4A1B409BE0020299BA8CBB9F;// 0xE848(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_67E8D29746DB8E89C3CA8387E805E9F2;// 0xE900(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1A1E130C42ED8B35221502BB4AC4AE77;// 0xE9B8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8A8ADE254DD5771510F90BBF24DF8C36;// 0xE9E0(0x0028)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_2EEC3AB84FA93F2AF8A63FA07E629FA6;  // 0xEA08(0x01B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4FCD5765415D05B41266F19E3FF1FEA3;// 0xEBB8(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E9B1F7564515827256875AB5FD3AD87E;// 0xEBD8(0x0020)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_FBFFF82F42A344B2BCE739A91A3AFE28;  // 0xEBF8(0x01B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D3C0D6C641B0CF7009A695B28F55C8CE;// 0xEDA8(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_54F3E23E49100814A8110086D667DA0A;// 0xEE48(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8DAEC7A54B8EF93ACB7EEAADD6691BF9;// 0xEF00(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B2FEBBEB4BC1E9F044033FA853A13F2B;// 0xEF28(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0BB1A05D47D1E7650426FD91DD9199CE;// 0xEF50(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BDEE1F0B4A040C50F51F6190780B40C0;// 0xEF78(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DD11D9A641EEDCE1CB611D83B3F07F36;// 0xF080(0x0108)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_EC85EE9741194347630692B39D663998;// 0xF188(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CACE35F04F4EFDD393F4FC954C788015;// 0xF1B0(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2A5D7BE7401091A7517AF7A1B2D31491;// 0xF250(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A36983564349A4E10E0715B562DCB7A2;// 0xF278(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0AD6B8734992C6511C24F7BDA146C82D;// 0xF330(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B1824116479B04217BC2169CDA3EB0BF;      // 0xF358(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8F3E94EA414799D9EE3451B3C00ED9C7;      // 0xF3A0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_66ABD91E43861D29F085B7A47CE911C1;// 0xF3E8(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_167DBF7043772AE51E044B9D12420127;// 0xF410(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0D031F434EECC5C946CC4E885A63769F;// 0xF4C8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A366C59948D0C1028639A89977D96A76;// 0xF4F0(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_42245E8840231EAA1FA9BA963916E0FF;// 0xF518(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4F48809B4A017DD90BD976B66F05A7B2;// 0xF5B8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_00892BD44C63050236FBDA8A365449EF;// 0xF5E0(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6391226944968A4D58CF40BA1FA20CD5;// 0xF608(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_6417D7484E76FBE66BFD509410D8CCDD;// 0xF6A8(0x0188)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B1A9D63E44CBC0CDC475B796D58F314B;// 0xF830(0x0028)
	struct FKSAnimNode_Mirror                          KSAnimGraphNode_Mirror_239E648B428399781C61AEA4C3EB2E30;  // 0xF858(0x0110)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_0E3DBA2F4E726E0245CD3D98F8E30D6B;// 0xF968(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4680E557432A495E093223A0035E00DA;// 0xF988(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BAE9A17D40662CAF9E691E83B4482E5D;// 0xF9A8(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B47E3085474A0939D79B328993595F59;// 0xFA48(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D0EB186A466945BF397FA7AD0864A5EE;// 0xFA70(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A0F9872444331B64354BF3BC2CC67B1E;// 0xFA98(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8CD68CBE4AE8DA46F91561BF99726EBA;// 0xFB50(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B0DC4B504DE90081C9629B8702963127;      // 0xFB78(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_6DAC72DF48F3F10286074AAA135EF40F;// 0xFBC0(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D7A271234B3F2A33788DD78D4464CCE6;// 0xFC78(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9381936246B36104ED162FB4E9ED3434;// 0xFCA0(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4369C5FB4FF050166BAE70B21016366A;// 0xFD40(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8283E5CC4D50FD3C715BBFB105C05AAE;      // 0xFD68(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5829E23348B72201A3F1E19AB4C78443;// 0xFDB0(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4B847CCC454A672261B9249B039D226F;// 0xFE68(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_57BD7F374E6626B5D56E41828298241C;// 0xFE90(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_155D5C8542A8F7E3083717983E4AF7F9;// 0xFEB8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D78526F94BC0504524088FA237789743;// 0xFF70(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_61D7DF374D776BCD5B03E893D5A3EE8D;// 0xFF98(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_969430C44D6F6B5B81063B97E1EBEDB4;// 0xFFC0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CD2697B04C44F6AA0C46FEA79582FD7D;// 0xFFE8(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_FD783E074E79C7C9E7D7478716122FEA;// 0x10010(0x0020)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_981A6D344DFB8C506B66B29AA2EFDC59;  // 0x10030(0x01B0)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_A73B1C72497EF9486CC58984434E4263;  // 0x101E0(0x01B0)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_0B3F24974CDBFBE8D9ABFA92A6B11503;  // 0x10390(0x01B0)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_8D64C0ED46EDD23FCC5F39A7EC2682E5;  // 0x10540(0x01B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_CA57C8FC46815E4FFEC3B8BD22B16BBD;// 0x106F0(0x00B8)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_E4AB965E4736FA8507E6D6BF55EFE76D;  // 0x107A8(0x01B0)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_1840D5D54F057B4F8086CEAD7334F792;  // 0x10958(0x01B0)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_FD7D9CE7461C3754665931BE071B1140;  // 0x10B08(0x01B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_86525AA14966F4D06FEA9C82B5DC6C30;// 0x10CB8(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_15BC312E48C785CFACBF85ACB94818D6;// 0x10D58(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C8FF764741C8C1801B633D927AAA1C99;// 0x10D78(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_072EA56E4BD90328F2B356B62EE90E7F;      // 0x10DA0(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_BDB779644F4A0FE3065FB48535D18069;// 0x10DE8(0x00B8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_1EA8A6524789048FEBAB0CA19C91EB96;// 0x10EA0(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_37EADC11402B3073BEF5C7B1E5141800;// 0x10F50(0x00A0)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_2CD2B74F48DCF22F74C8BFB4007DF3DA;// 0x10FF0(0x0150)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_148343F843BE8FC21C8EBCA865FC581E;// 0x11140(0x0078)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_B1A3D0524F11D2C5A4FD3CA880D32AB5;// 0x111B8(0x0150)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B9621EA84D2B5EE47F56B9BA21DCE843;// 0x11308(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A4AA7F024522E5F45C9319A0DDBAE0F4;      // 0x11380(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_85C530D2459D624FE87C15BFD83A3FEA;      // 0x113C8(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_084D938944E50A9B138D3688EAA71FBE;// 0x11410(0x00B8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_545679D84A67FFEB664C26AF30901890;// 0x114C8(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_28C7CAEE4444AEDB5C5144BEA9AA40BD;// 0x11590(0x0078)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_FC90AC3A4F8F324293B348BED0DFB85B;// 0x11608(0x0150)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C0C107A24C2E4D79C95E72B8F7D013BE;// 0x11758(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_86B67A25407DDA9FDC579FA3799E9C0F;// 0x117F8(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B7331B2F4EA75ECC81B7109CF13FC21B;// 0x118C0(0x0078)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_64EE9B224ACFDC850A941895B9566A1F;// 0x11938(0x0150)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6290EE5D446D3628ED9972809C2AD310;// 0x11A88(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F5A6F6F64FDB3568AE5963AC8D916310;// 0x11B40(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A32B92304041C10C94E029BBBFB324A8;// 0x11B68(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CEFFAC554F8F0DE95BB913876CE1F191;// 0x11B90(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_EF33D357412E1C963A1EBDA7341F6861;// 0x11BB8(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_692BBD8D4768E323966D879C64057C17;// 0x11BE0(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AF9E891C4192C91A37F290A6A1029D80;// 0x11C80(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_927387FC4244647544506A912615A306;// 0x11D20(0x00B8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_AE3B57BE4B0EAC0DFB7F60A592E978C6;// 0x11DD8(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_349E69E94AB578E14F8D98A87C53EB12;// 0x11EA0(0x0078)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_1402D3A340975D93A8C10FBECC32538D;// 0x11F18(0x0150)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B6A9EFEB4B5B1404C5ECECAA56BA89DB;// 0x12068(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_BA4C57954B7D3FBD7EEC018A7B471AD7;// 0x12108(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AC4008E5475D8137CDC860B41AEBC9B6;// 0x121D0(0x0078)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_F6A3C3A54BA12DB5772DE0B9F65CA063;// 0x12248(0x0150)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F41EBA004CC4EACFCBD40AAECF288BA4;// 0x12398(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A02AE4024E728B76178E3086E351D6FE;// 0x12450(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7A9E18DB4B95047329912CB3F7197C4A;// 0x124F0(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_78F2DE1F459C8D9694C7CD8BCC5E8508;// 0x12590(0x00B8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_C9125F3944C04480DB4139872B99A2F3;// 0x12648(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A8BA69934E0C2D05D3E99D8A03381B9E;// 0x12710(0x0078)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_47DFE3A748ABF4374D46A3BAE244EE9B;// 0x12788(0x0150)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_33AF996348C2C101C5B31EA20A1DA24D;// 0x128D8(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_441E37394D8E911A6E419183E58F4C21;// 0x12978(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_44EFB3754A7E657B5583B59F0089AF4C;// 0x12A40(0x0078)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_29C76E7A4C520E957DE1F0A30EC539A8;// 0x12AB8(0x0150)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_73ADA39B42A51904770A7A921B65D2B2;// 0x12C08(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_19F22F864B0FA7B75B0C6E81B25B077E;// 0x12CC0(0x00A0)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_F7F6EDAB407C4D447BB39CAE4188735B;// 0x12D60(0x0150)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_517345B549A7ECFFE38A71A3D331B28D;// 0x12EB0(0x0078)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_C304C3764DC6738CB21DB1B419AD4758;// 0x12F28(0x0150)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_191A901D4889D85F8AB9E2B20DFD4672;// 0x13078(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4B8C906D4D0B61F40899C48AF0721E00;      // 0x130F0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DABC599444A160D21B5739BB034876D5;      // 0x13138(0x0048)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_9658C4D844EF19690822F498563FCAF7;// 0x13180(0x0150)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E7ACA1B24EAB9BFA928DB395A3E1D9D6;// 0x132D0(0x0078)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_45C244F340C63778610F06B037BF896A;// 0x13348(0x0150)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9CD083CB4BED33EA8323D495E8089FF2;// 0x13498(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BC56D0AF4B4C2ED0803643B7162DB38D;      // 0x13510(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_75C3C27E40E625E02421C6B09DAD4493;      // 0x13558(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F0F4FC324999149B794750990ABBEA73;// 0x135A0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_73228E1840A9C7F05B89AA9A00B0695C;// 0x135C8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BA13FD8F40F569D6B72BE09C194040B6;// 0x135F0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AF9718BD4EDE8ACEF55D69A177E7A4AE;// 0x13618(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_398F7E81427F4AC733998A9BD5ACF1C6;// 0x13640(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_87DF01DF45984399EEB1D7A5231C36DE;// 0x13668(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_485E210B4E069AEA2287C3B224BD1534;// 0x13690(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CC23307F45716E41FCD38B9640E6F3DD;// 0x136B8(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C48A122246E3F9380233909F31564CB2;// 0x136E0(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6B8067234FA44B21A136808FD452798E;// 0x13798(0x0028)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_3C6688FA49517059917AADADBE9FACD6;    // 0x137C0(0x0190)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_D5AACB724B4D68DB61948095BD730F4E;    // 0x13950(0x0190)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AF252B4F4CBE3C400AEB8AB4400253DE;// 0x13AE0(0x00A0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_53AC59AB4DC9E8E7376B91824228A49A;// 0x13B80(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_13D35E9548DCC8AA0F765B859F085BF6;// 0x13BA0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E12CF8614C7DF1AE08918288ED352492;// 0x13BC0(0x0020)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_50FA8F9B460C17132C2E20B2DAFC4F21;  // 0x13BE0(0x01B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B6EB5C1F47D7F2852A1F249E4EDAFE1C;// 0x13D90(0x00A0)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_9B672A3348DD8740A99A05AEE2A565B0;// 0x13E30(0x01B0)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_EE4A73C7450BD5BCB353929FDCD11EC6;// 0x13FE0(0x01B0)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_1634DF54473225F6882FF28A43115686;// 0x14190(0x01B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B67B09D04E18C3737AF11CA093C0D512;// 0x14340(0x0028)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_5B0A0C424AE4E010B486E3A57FA0B89E;// 0x14368(0x00B0)
	struct FKSAnimNode_Recoil                          KSAnimGraphNode_Recoil_6BD0C233490D1BFEC2BB7BA1BE26073A;  // 0x14418(0x01B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4DAC0ADB4DED25F57E539699C08E7875;// 0x145C8(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5BE4C7A54306B27FE50057A44EFE885E;// 0x14668(0x0020)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_0B7D946C4F2AD31BB0EF28B76D3519D3;// 0x14688(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_75175DD64323C459FC38999FB41F2CD6;// 0x14740(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AF44A8B84A9569A1A28906BE15E555CC;// 0x147F8(0x0028)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_B8C31F2A4D4864DBBC585DB5FD8C6CFA;// 0x14820(0x0150)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_0F751E6540C9289E4B77DA8F2E70D176;// 0x14970(0x00C8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_BE84A33C45C42AD6DFBA86A55F437303;// 0x14A38(0x00B8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3C86F8B7434017908D1B22A90146FE83;// 0x14AF0(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2B595A1C417E62E30026CD99DBB7A615;// 0x14B68(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_96C3D1CD4667CEE77290C2A26E5410CE;// 0x14C20(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A0DA7D924E5CA5052ADAC6918FFB772A;// 0x14C48(0x0028)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_B34F4DC247E5292025DF26BB015DAF7D;// 0x14C70(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9F4F329240B6C23894194DAF247117B0;// 0x14D20(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3EFD00F846963B003CDB4AA2A03F6B33;// 0x14D48(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3E4CDD5A4DF1DE38C9DBF2B95F464A89;// 0x14D70(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FD71A0C14E35227DC9DB638007258E89;// 0x14E28(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F8ECE71E40034351F2C0959828503444;// 0x14EC8(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9E89D5C245459D674ABAA5AD32C16D11;// 0x14F80(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4A1D7116410F7918837F3F879842BD36;// 0x14FA0(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_EF913C464DAA9DD46AE1BCB20E851471;// 0x14FC8(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_EA364A2A4E22FAA55D683E9CF4CBAA1D;// 0x14FE8(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2A2ADC99485DB767647E49B2EBE0829E;// 0x15010(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_BA9AC0354132D43AEAC07CA6DD8F4AE4;// 0x15030(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A34EF15942AB3FDB403AB18588ACCE14;// 0x150E8(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2867EB964341FA8A652D1DA877ED782E;// 0x15108(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9A7DE0434358B7EC58B4ADAA04DD1F95;// 0x15130(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F574DC5C4A1356CF92B78E9641477CE2;// 0x15150(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_767564F14531A429F54DC097BDEDC11B;// 0x15178(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_45CB47FE4C3AB48BD540A599101D7625;// 0x15198(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B411E6184176C6154417FC8DAFB49D35;// 0x151C0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0D43E57A4E053331CFB8749165859FF7;// 0x151E8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_20739F3C40130018C7929B9CC7095B48;// 0x15210(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_AA08429D416E45AFBF28A88AA8C10ED1;// 0x15238(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_48B722A643413B022EDB62B5568FD5DF;// 0x152F0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_464B14D04B163A36BE57F9BC53DB272E;// 0x15318(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CCE0008643FB55F60BA04D85B43AF3E9;// 0x15340(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B1FDCEBB47D864054B948ABAC846690F;// 0x15368(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5512E176436EB9E5CCEB52B4C5EE5110;// 0x15390(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1E6DF04C4DE191968A68C490E240D328;// 0x153B8(0x00B8)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_106FE8CB4E6BE0DB7F595E9A8966BF48;// 0x15470(0x00C8)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_A4F77848485D2E6C0D7D26881DF004BF;// 0x15538(0x01B0)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_D3E939DE488E632566F579A789E2E023;// 0x156E8(0x01B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C159763243FB3C04E67CD1B1E63A3B34;// 0x15898(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_36A600824F97F3724DA944ABEF586BBF;// 0x15950(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5DDFA59D45C90F5EE2CD76989049C429;// 0x15978(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5C694D7D4FC06C541A3F4FB7F23361FA;// 0x159A0(0x00A0)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_FFFF50DE418F4F11D4A771A6474B263A;// 0x15A40(0x01B0)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_7AB648004B417D3DC595E8B5B8B47AA7;// 0x15BF0(0x01B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_259A5B5C4DE01F9F1E6CF09628819871;// 0x15DA0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_07AC3E3E45DF7D059CD64BAA7C8DE781;// 0x15DC8(0x0028)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_D7D17C8F49FC7C08F977C4AE3EC7DC49;// 0x15DF0(0x00C8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A704005F4EBABBFCE838FE9894E323A6;// 0x15EB8(0x00A0)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_FDE428A64A8600FDBAFD86897B050116;// 0x15F58(0x01B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8304FA78437041B659F64AA3CA71D474;// 0x16108(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2EABD23546F58F3739210C982F9702FC;// 0x16130(0x00A0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_92F80AE9484A5C14C4E75EB862811C61;// 0x161D0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CC3404844DA1D3C1322762AE219F6D75;// 0x16280(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0D0D882F4D8B4968E40DE58D85883275;// 0x162F8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F48B7FA846725D0C6CEE44A0F3CFF268;// 0x16370(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3E20A9AC4CD75644B9FFF79A67A77879;// 0x163E8(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8746FEEA43980FC2F65C9DA47BD6C683;// 0x16488(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0B8FD2D64DEA37A39BF510A97F6DDAB2;// 0x16528(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_49B12C564F17AB334FC320879918BDB8;// 0x165C8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_76890FF74A153F91795638852D54A70E;// 0x16640(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7A321E6647AD00023F8013AC2102F39E;// 0x166B8(0x0078)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5BE8C05A4EA4C35E26AB26A58E948E5C;// 0x16730(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5A2258D943F9D18ABFF11E93E62E97F2;// 0x16758(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_67EBD58F48694571EFBC75A3A90301EE;// 0x16810(0x0028)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_85C418BD4D92AD0019A359A680FBEC0D;// 0x16838(0x0150)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_D9A8F02445BEC14ED37363AF601148CE;// 0x16988(0x0150)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_72044BF0499E98A30B2519A8FB9856E3;// 0x16AD8(0x0150)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_2D7A52FD423B6695DB97DC83165DA60C;// 0x16C28(0x0150)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_E50367584DD287BD70EEE080290E9755;// 0x16D78(0x0150)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_E9BB61B140A3E46CF1F4A69E598C88E6;// 0x16EC8(0x0150)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6B36B4354E2E401E1646478D7C02DBC5;// 0x17018(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_41118B9646B72DBDF6D8F9B7A292086E;// 0x170D0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_AF84DBE345D2527904FDB6819611BB25;// 0x170F8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BB46D32C46AAC14EFF5A6D986B3C5584;// 0x171B0(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BA1929D54B3B09856192B4B7A4D3B8A5;// 0x171D8(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6F772F0A440E8216A0467DBF72093D9E;// 0x17278(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1659FC45484D536FE4E7ABBEDD774F33;// 0x172A0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_86EEABEC4BA634AF6F4BEBB1337D702D;// 0x172C8(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_D8225E354E5AAFBD6D01499A06EF65D3;// 0x172F0(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9D10D90146BDA6AA7201B88FC93EE65E;// 0x173A8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_702C3C4F40247984E2D2268AD71D43A3;// 0x173D0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_19EDAC7F4F6D36F8DD27C0A2766B7AFA;// 0x173F8(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A938F5BC408FD65CCF08839C504F2B64;// 0x17420(0x0108)
	struct FAnimNode_LegIK                             AnimGraphNode_LegIK_8F96F94C492D9E1441BE43BC4176CEB3;     // 0x17528(0x00F8)
	struct FAnimNode_Root                              AnimGraphNode_Root_6EC7A15E42462121EA5BD3B86CE5B10E;      // 0x17620(0x0020)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_CC6BB8114B89F4044829939794387FB5;// 0x17640(0x00C8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E06D160748A0690CA1789395FB77E201;// 0x17708(0x00B8)
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_9FDD1A7146055937A755E6ACD99BC318;// 0x177C0(0x0098)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6170204F42B734AD3FDB68AEC1503E43;// 0x17858(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_348DA81841DADB70AC95CE88CB149880;// 0x17910(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_93397FA14993F58A7B9128AFEB8C3690;// 0x17938(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E03731734634634992EAE59E5CBE0A1C;// 0x17960(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_324BE7CD437C0C09CC6DADB2E7E8D835;// 0x17A18(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1289CEB142693090D4B915BA3FB44373;// 0x17AD0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AABA7ADA4260B7DDD65628A5F9496BD8;// 0x17AF8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F8E90D624D191AF89DE5BEA8AF30C631;// 0x17B20(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_AA36776F4E43A43E8EFC8ABE442510AA;// 0x17B48(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8F0F87EF4AB2AA6ECC6F74882B7876DF;// 0x17C00(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DC5EB4404BC6F91BF7850083D3A55936;// 0x17C28(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_618F49334AEBB11A37279796B17CD209;// 0x17CC8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6CEAFD8540FD164BB27659BE155C715E;// 0x17D80(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C1E5A142489BB88894113EA39DB3501F;// 0x17DA8(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7214FDCA4CDEA158F0337F9698959B84;// 0x17DD0(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CA659A42476334C02EC60E8F55F23F60;// 0x17E70(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C0E3FDCA4D5AD2CB79A4D5B8AEF5EB57;// 0x17E98(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0D4CAABE478F3DE1FBAACD9211DE01E7;// 0x17EC0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6346CF4F450910D84095FDA1F0BDA3AE;// 0x17EE8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7D8550034AA518B8183F1B81F9DC4531;// 0x17F10(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7ADD039E489BC0E4E50BAD8810E458D4;// 0x17F38(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CBDAD4144F3B873DA92F00A5883EC5DE;// 0x17F60(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D36E80F54668A7F9FDC9828944674215;// 0x17F88(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_90C15C0340194A546EC56CAE3524BB18;// 0x17FB0(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2D0495E346BF84CB86C094AF0C885E0D;// 0x18050(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3E6F029D4FD67D57CF2B0EAA3F67385D;// 0x180F0(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A2E420E4446461433C6633AAEBB1C539;// 0x18190(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_62D967A34B93EFAFA144BD8858C88007;// 0x18230(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_109CDFF74B14EC9E0C536499ECE574B6;// 0x182D0(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B8A6958C46461C3ECC337C87B95DD63D;// 0x18370(0x00A0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FE1F7AEB47396C7282EC9BBAC301BBDA;      // 0x18410(0x0048)
	float                                              Time;                                                     // 0x18458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Movement_Direction;                                       // 0x1845C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Aim_Pitch;                                                // 0x18460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Aim_Yaw;                                                  // 0x18464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Save_Last_Yaw;                                            // 0x18468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Turn_Value;                                               // 0x1846C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AKSCharacter*                                _Character;                                               // 0x18470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ADS_Rotator;                                              // 0x18478(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _1P_Aim_Pitch;                                            // 0x18484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _1P_Aim_Yaw;                                              // 0x18488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Step_Type;                                                // 0x1848C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Material_Type;                                            // 0x18494(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Shoe_Type;                                                // 0x1849C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Clothing_Type;                                            // 0x184A4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _1p_Pitch_Offset;                                         // 0x184AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Turning_the_Character;                                    // 0x184B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Turn_Left;                                                // 0x184B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Turn_Right;                                               // 0x184B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1];                                       // 0x184B3(0x0001) MISSED OFFSET
	struct FName                                       Roll_Direction;                                           // 0x184B4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x184BC(0x0004) MISSED OFFSET
	class UAnimMontage*                                Cached_Dodge_Roll;                                        // 0x184C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Desired_Component_Yaw_Old;                                // 0x184C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Turn_In_Place_Recovery_Speed;                             // 0x184CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              World_Space_Aim_Yaw;                                      // 0x184D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Turn_In_Place_Active;                                     // 0x184D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x184D5(0x0003) MISSED OFFSET
	struct FRotator                                    Applied_Turn_In_Place_Rotator_Old;                        // 0x184D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    World_Turn_In_Place_Rotator_Old;                          // 0x184E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MantleTimer;                                              // 0x184F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MantleTimerMax;                                           // 0x184F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Control_Rotation;                                         // 0x184F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x18504(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           Start_Moving_A;                                           // 0x18508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Stop_Moving_A;                                            // 0x18510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Pivot;                                                    // 0x18518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Current_Direction_Pivot;                                  // 0x18520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               TurnWounded;                                              // 0x18528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnInPlaceMinThreshold_1;                                // 0x18530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnValue;                                                // 0x18534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Current_Stop_Moving_Crouch;                               // 0x18538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           current_direction_Pivot_crouch;                           // 0x18540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Pivot_crouch;                                             // 0x18548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponADSSpeedModifier;                                   // 0x18550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponWalkSpeedModifier;                                  // 0x18554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentMaxSpeed;                                          // 0x18558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _3PADS;                                                   // 0x1855C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x1855D(0x0003) MISSED OFFSET
	class UAnimSequenceBase*                           Current_Stop_Moving;                                      // 0x18560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Start_moving_Crouch_B;                                    // 0x18568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Start_Moving_B;                                           // 0x18570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cached_Angle;                                             // 0x18578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x1857C(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           Start_moving_Crouch_A;                                    // 0x18580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimYawInterpSpeed;                                        // 0x18588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanResetAimYaw;                                          // 0x1858C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x1858D(0x0003) MISSED OFFSET
	float                                              AimYawInterpSpeedTarget;                                  // 0x18590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x18594(0x0004) MISSED OFFSET
	struct FTimerHandle                                AimYawResetTimer;                                         // 0x18598(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Cached_Stop_Angle;                                        // 0x185A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x185A4(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           Stop_Moving_B;                                            // 0x185A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Stop_Moving_Crouch_A;                                     // 0x185B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Stop_Moving_Crouch_B;                                     // 0x185B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              World_Height;                                             // 0x185C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharZatStart;                                             // 0x185C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnMagThrow;                                               // 0x185C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              Turn_in_place_Error_Tolerance;                            // 0x185D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimYawCache;                                              // 0x185DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsAdjustingAimYaw;                                       // 0x185E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Dodge_Rolling_BP;                                         // 0x185E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Left_PropB_Scale;                                         // 0x185E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Right_PropB_Scale;                                        // 0x185E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TabletScaleAlpha;                                         // 0x185E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UKSWeaponComponent*                          Master_Weapon_Ref;                                        // 0x185E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                Randomized_Int;                                           // 0x185F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x185F4(0x0004) MISSED OFFSET
	TArray<class UMaster_WeaponComponent_C*>           Back_Holster_Inventory;                                   // 0x185F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bInteraction;                                             // 0x18608(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x18609(0x0003) MISSED OFFSET
	float                                              Weapon_Vs_World_Alpha;                                    // 0x1860C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EKSMovementDirection                               locoStartDir;                                             // 0x18610(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x7];                                       // 0x18611(0x0007) MISSED OFFSET
	class UAnimSequenceBase*                           Start_Disable_Moving_A;                                   // 0x18618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Start_Disable_Moving_B;                                   // 0x18620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Start_Disable_Moving;                                     // 0x18628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Stop_Disable_Moving_A;                                    // 0x18630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Stop_Disable_Moving_B;                                    // 0x18638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Current_Stop_Disable_Moving;                              // 0x18640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           CurrentDisablePivot;                                      // 0x18648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           DisablePivot;                                             // 0x18650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimYawDelta;                                              // 0x18658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x1865C(0x0004) MISSED OFFSET
	class UAnimMontage*                                InteractionMontage;                                       // 0x18660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialDistanceFromJumpLand;                              // 0x18668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EKSMovementDirection                               locoStopDir;                                              // 0x1866C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x1866D(0x0003) MISSED OFFSET
	class UAnimSequenceBase*                           Post_Pivot;                                               // 0x18670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Post_Pivot_Crouch;                                        // 0x18678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Post_Disable_Pivot_;                                      // 0x18680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Starting_a_Pivot;                                         // 0x18688(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x18689(0x0003) MISSED OFFSET
	float                                              IKHandOffsetL;                                            // 0x1868C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               Vault_Anim;                                               // 0x18690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinMantleHt;                                              // 0x18698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxMantleHt;                                              // 0x1869C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Min2StoryMantleHt;                                        // 0x186A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Max2StoryMantleHt;                                        // 0x186A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIgnoreIdleWeaponUnhide;                                  // 0x186A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x7];                                       // 0x186A9(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               Cached_Pickup_Sound;                                      // 0x186B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StringMantlesTogether;                                    // 0x186B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x7];                                       // 0x186B9(0x0007) MISSED OFFSET
	class UAnimSequenceBase*                           Start_Moving_Melee_Lower_Body_A;                          // 0x186C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Start_Moving_Melee_Lower_Body_B;                          // 0x186C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeleeLowerBodyStartTwist;                                 // 0x186D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKHandOffsetR;                                            // 0x186D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKFootOffsetL;                                            // 0x186D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKFootOffsetR;                                            // 0x186DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKRootOffset;                                             // 0x186E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableIKRootFix;                                          // 0x186E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMartialArtistTarget;                                    // 0x186E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x2];                                       // 0x186E6(0x0002) MISSED OFFSET
	struct FVector                                     LHand_MantlePoleVector;                                   // 0x186E8(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RHand_MantlePoleVector;                                   // 0x186F4(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableAimArray;                                          // 0x18700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CatchingWeapon;                                           // 0x18701(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x2];                                       // 0x18702(0x0002) MISSED OFFSET
	struct FRotator                                    StoppedRootRotation;                                      // 0x18704(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StoppedRootLocation;                                      // 0x18710(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RagdollToMontageTime;                                     // 0x1871C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               GetUpSequence;                                            // 0x18720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                GetUpMontage;                                             // 0x18728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  RagdollPelvisTransform;                                   // 0x18730(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              RagdollPelvisTransformAlpha;                              // 0x18760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableRagdollPelvisTransform;                             // 0x18764(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x18765(0x0003) MISSED OFFSET
	float                                              MartialArtistChargeTime;                                  // 0x18768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x4];                                       // 0x1876C(0x0004) MISSED OFFSET
	class UAnimMontage*                                DownedMontage;                                            // 0x18770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Start_Walking_B;                                          // 0x18778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Start_Walking_A;                                          // 0x18780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Disable_upper_body_lands;                                 // 0x18788(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x7];                                       // 0x18789(0x0007) MISSED OFFSET
	class UAnimSequenceBase*                           Start_Eng_Stand_A;                                        // 0x18790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Start_Eng_Stand_B;                                        // 0x18798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Stop_Eng_Stand_A;                                         // 0x187A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Stop_Eng_Stand_B;                                         // 0x187A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Stop_Eng_Stand;                                           // 0x187B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Start_Eng_Crouch_A;                                       // 0x187B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Start_Eng_Crouch_B;                                       // 0x187C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Stop_Eng_Crouch_A;                                        // 0x187C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Stop_Eng_Crouch_B;                                        // 0x187D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Stop_Eng_Crouch;                                          // 0x187D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsToNoseDive;                                         // 0x187E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanChangeNoseDiveState;                                  // 0x187E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFreeFallIntroComplete;                                   // 0x187E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x1];                                       // 0x187E3(0x0001) MISSED OFFSET
	float                                              FreeFallDiveAlpha;                                        // 0x187E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Turn_Eng;                                                 // 0x187E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Turn_Eng_Crouch;                                          // 0x187F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCrouchingTransitioned1P;                                 // 0x187F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableTurnInPlaceCounterRotate;                          // 0x187F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsStill_OLD;                                             // 0x187FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData32[0x1];                                       // 0x187FB(0x0001) MISSED OFFSET
	struct FRotator                                    Spine_rot;                                                // 0x187FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Neck_rot;                                                 // 0x18808(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Arm_rot;                                                  // 0x18814(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ForeArm_rot;                                              // 0x18820(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Clav_rot;                                                 // 0x1882C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldSplitUpperBody_1;                                  // 0x18838(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData33[0x3];                                       // 0x18839(0x0003) MISSED OFFSET
	float                                              AdditiveLandsAlphaOLD;                                    // 0x1883C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInPowerSlideBP;                                        // 0x18840(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData34[0x3];                                       // 0x18841(0x0003) MISSED OFFSET
	float                                              ExitPowerSlideBlendTime;                                  // 0x18844(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RootMantleWallFacing;                                     // 0x18848(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsUsingBruteStrength;                                    // 0x18854(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData35[0x3];                                       // 0x18855(0x0003) MISSED OFFSET
	float                                              HitDirectionPrimary_Fwd;                                  // 0x18858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitDirectionPrimary_Right;                                // 0x1885C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitDirectionSecondary_Fwd;                                // 0x18860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitDirectionSecondary_Right;                              // 0x18864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CachedPivotAngle;                                         // 0x18868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRecoilInfo                                 Melee_Recoil;                                             // 0x1886C(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Melee_Recoil_Counter;                                     // 0x188CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitReactionAlpha;                                         // 0x188D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanPlayEmote;                                            // 0x188D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanSpray;                                                // 0x188D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSpraying;                                              // 0x188D6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData36[0x1];                                       // 0x188D7(0x0001) MISSED OFFSET
	float                                              SprayBlendTime;                                           // 0x188D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Any_Grip_Override_Active;                                 // 0x188DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Left_Hand_Grip_Override;                                  // 0x188DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Right_Hand_Grip_Override;                                 // 0x188DE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData37[0x1];                                       // 0x188DF(0x0001) MISSED OFFSET
	class UAnimMontage*                                CurrentEmote;                                             // 0x188E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EngClavOffset;                                            // 0x188E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableEngHandOffset;                                      // 0x188F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData38[0x3];                                       // 0x188F5(0x0003) MISSED OFFSET
	struct FVector                                     EngHandOffset;                                            // 0x188F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AnimMirrorDelay;                                          // 0x18904(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ECameraShoulder                                    CurrentShoulderBP;                                        // 0x18905(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsHitReacting;                                           // 0x18906(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsServer;                                                // 0x18907(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass PCM_Hero_ABP.PCM_Hero_ABP_C");
		return ptr;
	}


	void AnimMIrrorDelayEnd();
	void UpdateIKHandRuleset(class UKSWeaponComponent** InWeaponComponent);
	void UpdateCustomPivot(bool* bNewValue);
	void TickHitReacts();
	void RemoveExpiredHitReact(struct FHitReaction* ExpiredHitReact);
	void SetPoseDrivenHitReactParams(struct FVector* Impact_Normal, float* Damage);
	void DetermineAutoEquip();
	void LocalAccelerationToMovementDirection(struct FVector* Local_Acceleration, bool* GetOppositeDirection, EKSMovementDirection* AccelerationDirection);
	void SetStartMeleeLowerBodyAnim(EKSMovementDirection* Direction);
	void AfterInteraction(struct FName* New_Interact_State);
	void SetStopAnim(EKSMovementDirection* Direction);
	void SetStartAnim(EKSMovementDirection* Direction);
	void SetMovementDirection(EKSMovementDirection* Direction, EKSMovementDirection* OldMoveDirection);
	void SetTransitionAnims(class UAnimSequenceBase** StartMoving, class UAnimSequenceBase** CurrentStopMovingA, class UAnimSequenceBase** CurrentDirectionPivot, class UAnimSequenceBase** StartMovingCrouch, class UAnimSequenceBase** CurrentStopMovingCrouch, class UAnimSequenceBase** CurrentDirectionPivotCrouch, class UAnimSequenceBase** StartDisableMoving, class UAnimSequenceBase** StopDisableMoving, class UAnimSequenceBase** CurrentDisablePivot);
	void SetMaxSpeedValues_2(class UKSWeaponAsset** WeaponAsset);
	void SetHitReactParams(struct FVector* RelativeImpactLocation, EKSMovementDirection* HitDirection);
	void SwitchWeaponIK(class UKSWeaponComponent** WeaponRef);
	void SwitchWeapon(class UKSWeaponComponent** WeaponRef);
	void Stop_Turn_In_Place();
	void Start_Turn_In_Place();
	void Should_Turn_In_Place_Be_Active(bool* Return_Value);
	void Should_Update_Component_Rotation(float* Delta_Time, bool* Return_Value, float* New_Compoent_Yaw);
	void Set_Desired_Component_Yaw();
	void Get_Roll_Directions(struct FVector2D* RollDirectionInput);
	void TurnInPlace(bool* Turn_Over);
	void Set_Clothing_SFX_Switch(struct FName* Clothing_Type, class AActor** Actor_Return);
	void Get_Footstep_SFX_Material(struct FName* BoneName, struct FName* Material_Return, class AActor** Actor_Return);
	void Set_Footstep_SFX_Switches(struct FName* Shoe_Name, struct FName* Step_Name, struct FName* Material_Name, class AActor** Actor, class AActor** Actor_Return);
	void Set_Aims();
	void Set_ADS_1p_Aims();
	void Set_Turn_Value(float* Yaw);
	void OnNotifyEnd_4DE3C6AE469BE13DC02A7AB80E924B7B(struct FName* NotifyName, int* MontageInstanceID);
	void OnNotifyBegin_4DE3C6AE469BE13DC02A7AB80E924B7B(struct FName* NotifyName, int* MontageInstanceID);
	void OnInterrupted_4DE3C6AE469BE13DC02A7AB80E924B7B(struct FName* NotifyName, int* MontageInstanceID);
	void OnBlendOut_4DE3C6AE469BE13DC02A7AB80E924B7B(struct FName* NotifyName, int* MontageInstanceID);
	void OnCompleted_4DE3C6AE469BE13DC02A7AB80E924B7B(struct FName* NotifyName, int* MontageInstanceID);
	void OnNotifyEnd_F55321C648B813A33A06BF926330EB4F(struct FName* NotifyName, int* MontageInstanceID);
	void OnNotifyBegin_F55321C648B813A33A06BF926330EB4F(struct FName* NotifyName, int* MontageInstanceID);
	void OnInterrupted_F55321C648B813A33A06BF926330EB4F(struct FName* NotifyName, int* MontageInstanceID);
	void OnBlendOut_F55321C648B813A33A06BF926330EB4F(struct FName* NotifyName, int* MontageInstanceID);
	void OnCompleted_F55321C648B813A33A06BF926330EB4F(struct FName* NotifyName, int* MontageInstanceID);
	void OnNotifyEnd_68DE575241BD5D31439A859E850392A2(struct FName* NotifyName, int* MontageInstanceID);
	void OnNotifyBegin_68DE575241BD5D31439A859E850392A2(struct FName* NotifyName, int* MontageInstanceID);
	void OnInterrupted_68DE575241BD5D31439A859E850392A2(struct FName* NotifyName, int* MontageInstanceID);
	void OnBlendOut_68DE575241BD5D31439A859E850392A2(struct FName* NotifyName, int* MontageInstanceID);
	void OnCompleted_68DE575241BD5D31439A859E850392A2(struct FName* NotifyName, int* MontageInstanceID);
	void OnNotifyEnd_143632A9488E9A82D17492B8710C0540(struct FName* NotifyName, int* MontageInstanceID);
	void OnNotifyBegin_143632A9488E9A82D17492B8710C0540(struct FName* NotifyName, int* MontageInstanceID);
	void OnInterrupted_143632A9488E9A82D17492B8710C0540(struct FName* NotifyName, int* MontageInstanceID);
	void OnBlendOut_143632A9488E9A82D17492B8710C0540(struct FName* NotifyName, int* MontageInstanceID);
	void OnCompleted_143632A9488E9A82D17492B8710C0540(struct FName* NotifyName, int* MontageInstanceID);
	void OnNotifyEnd_B5B16ACD4F176963194D6B8527E16FBB(struct FName* NotifyName, int* MontageInstanceID);
	void OnNotifyBegin_B5B16ACD4F176963194D6B8527E16FBB(struct FName* NotifyName, int* MontageInstanceID);
	void OnInterrupted_B5B16ACD4F176963194D6B8527E16FBB(struct FName* NotifyName, int* MontageInstanceID);
	void OnBlendOut_B5B16ACD4F176963194D6B8527E16FBB(struct FName* NotifyName, int* MontageInstanceID);
	void OnCompleted_B5B16ACD4F176963194D6B8527E16FBB(struct FName* NotifyName, int* MontageInstanceID);
	void OnNotifyEnd_1BE19CEA4A7E760561F3419034A02FE3(struct FName* NotifyName, int* MontageInstanceID);
	void OnNotifyBegin_1BE19CEA4A7E760561F3419034A02FE3(struct FName* NotifyName, int* MontageInstanceID);
	void OnInterrupted_1BE19CEA4A7E760561F3419034A02FE3(struct FName* NotifyName, int* MontageInstanceID);
	void OnBlendOut_1BE19CEA4A7E760561F3419034A02FE3(struct FName* NotifyName, int* MontageInstanceID);
	void OnCompleted_1BE19CEA4A7E760561F3419034A02FE3(struct FName* NotifyName, int* MontageInstanceID);
	void OnNotifyEnd_C78BE1F74ADCCB255C1BCD9E6240104B(struct FName* NotifyName, int* MontageInstanceID);
	void OnNotifyBegin_C78BE1F74ADCCB255C1BCD9E6240104B(struct FName* NotifyName, int* MontageInstanceID);
	void OnInterrupted_C78BE1F74ADCCB255C1BCD9E6240104B(struct FName* NotifyName, int* MontageInstanceID);
	void OnBlendOut_C78BE1F74ADCCB255C1BCD9E6240104B(struct FName* NotifyName, int* MontageInstanceID);
	void OnCompleted_C78BE1F74ADCCB255C1BCD9E6240104B(struct FName* NotifyName, int* MontageInstanceID);
	void OnNotifyEnd_D02C034A4EB0D0E596D903B8DBD4801B(struct FName* NotifyName, int* MontageInstanceID);
	void OnNotifyBegin_D02C034A4EB0D0E596D903B8DBD4801B(struct FName* NotifyName, int* MontageInstanceID);
	void OnInterrupted_D02C034A4EB0D0E596D903B8DBD4801B(struct FName* NotifyName, int* MontageInstanceID);
	void OnBlendOut_D02C034A4EB0D0E596D903B8DBD4801B(struct FName* NotifyName, int* MontageInstanceID);
	void OnCompleted_D02C034A4EB0D0E596D903B8DBD4801B(struct FName* NotifyName, int* MontageInstanceID);
	void OnNotifyEnd_9E6BC1B74A4D30EF4551EDBB637F89EE(struct FName* NotifyName, int* MontageInstanceID);
	void OnNotifyBegin_9E6BC1B74A4D30EF4551EDBB637F89EE(struct FName* NotifyName, int* MontageInstanceID);
	void OnInterrupted_9E6BC1B74A4D30EF4551EDBB637F89EE(struct FName* NotifyName, int* MontageInstanceID);
	void OnBlendOut_9E6BC1B74A4D30EF4551EDBB637F89EE(struct FName* NotifyName, int* MontageInstanceID);
	void OnCompleted_9E6BC1B74A4D30EF4551EDBB637F89EE(struct FName* NotifyName, int* MontageInstanceID);
	void OnNotifyEnd_D0E2AA7A43FF94C946DDED97889E22B1(struct FName* NotifyName, int* MontageInstanceID);
	void OnNotifyBegin_D0E2AA7A43FF94C946DDED97889E22B1(struct FName* NotifyName, int* MontageInstanceID);
	void OnInterrupted_D0E2AA7A43FF94C946DDED97889E22B1(struct FName* NotifyName, int* MontageInstanceID);
	void OnBlendOut_D0E2AA7A43FF94C946DDED97889E22B1(struct FName* NotifyName, int* MontageInstanceID);
	void OnCompleted_D0E2AA7A43FF94C946DDED97889E22B1(struct FName* NotifyName, int* MontageInstanceID);
	void OnNotifyEnd_EF8A596E40E8D98E573038A6F2873FEB(struct FName* NotifyName, int* MontageInstanceID);
	void OnNotifyBegin_EF8A596E40E8D98E573038A6F2873FEB(struct FName* NotifyName, int* MontageInstanceID);
	void OnInterrupted_EF8A596E40E8D98E573038A6F2873FEB(struct FName* NotifyName, int* MontageInstanceID);
	void OnBlendOut_EF8A596E40E8D98E573038A6F2873FEB(struct FName* NotifyName, int* MontageInstanceID);
	void OnCompleted_EF8A596E40E8D98E573038A6F2873FEB(struct FName* NotifyName, int* MontageInstanceID);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_519537504E7F068A94D465B5579FCC77();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_EF9DE76E43DA1FFA5323C29FE06381CE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_5EFBC2234D188CEEB4C6CC8F0B5C300C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_897086894750D35614505B985BA4FA44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_235330B148C463A52BBEADBB3334BD9C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_F29ACFE44E09AA30EB95BAA1D2FCC174();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_7F37B5C9432AC17748DCC48AB35CCE3A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_233C356842DB534CD453E29390007BA8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_73D785DB4ABE1311BEF5A69B1EE3D871();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_EBB941F744EC4662FC80F5970ED7372D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_F081B20E4E1B6F66718CEDBC863D2E56();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_ModifyBone_B8D90FC441F94F87E27CBEBB6D55E7F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_72640BAF4E1BA30E6914C3B9C3DE123A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_BEB6C58A42EF239509BC208CC8E5DC6B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_298A8B91461F3704A5CD968634024FC4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_247B92A1445C4BA59D2C2489EB885C50();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_15D9F1CE48F5DA893903FE8F9DA54992();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_0AA28A8642BFC6195FE0659BEDBCE288();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_E6CEDD2941ABF822CB9015BB697D9852();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_792988884C48FF32578DF1A60C1F730A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_AD4D32C348D8ACB1471CC38EE304A927();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_508DA5314031B0515F9C27BB0E996343();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_D9E2F130439D23E30B95FD8B3BFAF94D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_FD27A6D74F8D2B7D1CA20E840BC80C91();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_885438D342B7435FCF6EF794926B4C05();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_A5DA58914CC046537FED968C26F8DE9A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_SubInstance_3741820D49F2DBC1518975A785322FAF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_47529EDF430B1594C51877ABC5668AD8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_SubInstance_461224144FFC5A148A9487A371F95429();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_5BC0184E4C52FEA5C17D559F35155358();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_E9D202664C14A460D625E094CFA3FD19();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_F929E7F04FA56EDE2222A1965B5BDA8E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_CC80040E4767FEB07299938BB669DDDF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_SequencePlayer_AC99E87443CF5ED26F9740A1D62A6B51();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_SequencePlayer_3C711A964035B92CFC598AB773471D40();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_SequencePlayer_17C38D9A4D2D3481698080B9DDF771AD();
	void BlueprintInitializeAnimation();
	void AnimNotify_Fire_End();
	void AnimNotify_Hide_Weapon();
	void AnimNotify_UnHide_Weapon();
	void EventDoDodgeRoll(float* Duration, struct FVector2D* Direction);
	void EventStartInteraction(struct FName* NewInteractState, float* NewInteractHeight, float* NewInteractTime);
	void EventEndInteraction(struct FName* OldInteractState);
	void EventDoZipLine();
	void EventEndZipLine();
	void LocomotionPivot(struct FVector* PivotLocation);
	void AnimNotify_RetrieveEnd();
	void AnimNotify_RetrieveBegin();
	void ZipLineTurnReset();
	void AnimNotify_MagThrow();
	void AnimNotify_Hide_Gadget();
	void AnimNotify_UnHide_Gadget();
	void AnimNotify_Hide_Mag();
	void AnimNotify_Unhide_Mag();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_SequenceEvaluator_A1B7FEF64372CB5E8BB9E98EBB612A42();
	void IsPlayerRagdoll();
	void CacheRootRagdollState(struct FVector* RootLocation, struct FRotator* RootRotation);
	void AnimNotify_CanStand();
	void EventDoGoDown();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_SequenceEvaluator_73FA3CC94B851D1B012CCEBE50F127F6();
	void AnimNotify_UnHide_Tablet();
	void AnimNotify_Hide_Tablet();
	void LocomotionStop(struct FVector* StopLocation);
	void LocomotionStart(struct FVector* StartLocation);
	void AnimNotify_ExitCustomPivot();
	void AnimNotify_BeginLocomotionStartExit();
	void AnimNotify_BeginLocomotionLoopExit();
	void AnimNotify_EndLocomotionStartEnter();
	void AnimNotify_BeginLocomotionStartEnter();
	void AnimNotify_InterruptStartExit();
	void AnimNotify_InterruptStopExit();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_SequenceEvaluator_E333098C418B5FF82A8E07BEAA8370EC();
	void OnMovementDirectionChanged(EKSMovementDirection* OldDirection, EKSMovementDirection* NewDirection);
	void EventDoStun();
	void LocomotionPivotCheckpoint();
	void EventDoVault(float* InMantleHeight, bool* bInVault, float* InVaultDrop, float* InUpDuration, float* InAcrossDuration, float* InDownDuration, struct FName* InMantleName);
	void EventDoAbilityMovement();
	void EventStartSwimming();
	void EventStopSwimming();
	void AnimNotify_Plant_Left_Hand();
	void AnimNotify_Plant_Right_Hand();
	void AnimNotify_Unplant_Left_Hand();
	void AnimNotify_Unplant_Right_Hand();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_DisableAims();
	void AnimNotify_EnableAims();
	void EventStartSubmerge();
	void EventStopSubmerge();
	void EventEndVault();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_FDE428A64A8600FDBAFD86897B050116();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_D7D17C8F49FC7C08F977C4AE3EC7DC49();
	void UpdateRagdollPelvis();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_FFFF50DE418F4F11D4A771A6474B263A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_D3E939DE488E632566F579A789E2E023();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_A4F77848485D2E6C0D7D26881DF004BF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_106FE8CB4E6BE0DB7F595E9A8966BF48();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_9381936246B36104ED162FB4E9ED3434();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_BAE9A17D40662CAF9E691E83B4482E5D();
	void LocomotionPrePivot();
	void AnimNotify_UpdateCrouchTransition1P();
	void AnimNotify_EndLocomotionStartExit();
	void EventEndPowerSlide(EKSPowerSlideEndReason* EndReason);
	void EventDoPowerSlide();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_FB952A3747B8EBAA8E56269CBB6E9766();
	void EventEndAbilityMovement();
	void SetUpStartAnims(EKSMovementDirection* NewMoveDirection);
	void SetUpStopAnims(EKSMovementDirection* NewMoveDirection);
	void RequestNewCombatState(ECombatState* NewCombatState, bool* bBlockCooldown, bool* bForce);
	void HideMag();
	void UnhideMag();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_7AE8C24845B931317D805D8FA7B3EA9B();
	void ShoulderCharge();
	void ReviveMesh(class UAnimMontage** ReviveMontage, bool* bIsInAir);
	void SwitchWeaponNative(class UKSWeaponComponent** Weapon);
	void SwitchWeaponIKNative(class UKSWeaponComponent** Weapon);
	void Do_Bind_Hit_React_Event_New(class AKSCharacter** In_Character);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_5491CA5A4C73A2DB3629D1BB2263E1AF();
	void Hit_React_Event_New(class AKSCharacter** Character, struct FDamageEffect* Response);
	void AnimNotify_HackingBegin();
	void AnimNotify_HackingEnd();
	void TriggerCustomPivot();
	void DoResetCustomPivot();
	void TryToTriggerTurnInPlaceAnimation(EKSTurnInPlaceAnimationVariant* AnimationVariant, float* DelayTime);
	void OnShoulderChanged();
	void StopEmote();
	void Set_Skinned_Local_Parameters();
	void ExecuteUbergraph_PCM_Hero_ABP(int* EntryPoint);
	void OnMagThrow__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
