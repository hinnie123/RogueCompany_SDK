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

// AnimBlueprintGeneratedClass ABP_GAD_ZiplineDevice.ABP_GAD_ZiplineDevice_C
// 0x2960 (0x38A0 - 0x0F40)
class UABP_GAD_ZiplineDevice_C : public UKSZiplineAnimInst
{
public:
	struct FPointerToUberGraphFrame                    _UberGraphFrame;                                          // 0x0F40(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7C1AE441428085EA1F42DFB46612F8DA;      // 0x0F48(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7CEDEA8140508F2195275BB58C7B7F7B;// 0x0F68(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2351671D4D214B8E8D1205A9C12225C9;// 0x1070(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C305EC0F4ACB349A6D3F498103C2A72E;// 0x1178(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_661B4C6B4C52FDB0745CC095D2DAB754;// 0x1280(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2E6A4CA04A7EAB81E4EF1AB10EC00C25;// 0x12A0(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A0FC1F4E4CF6A4734360FDA8CCB478B8;// 0x12C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D4BFA441450E9D8841F994851FFACFF4;// 0x12E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0A7A1D7C4811C6106E9CAC90F55F4BE0;// 0x1310(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6B73AE3C4BA928CC0A3EF0A783B33B91;// 0x1338(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_EC47FD704A9AE094F8897FBC426A5F0E;// 0x1418(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9E30037C493CDA244B14B6AE2DAC9322;// 0x1438(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2B27F459432BD477ECDBD0A8BAA07AA1;// 0x14D8(0x0078)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_26D9B86942D7F0559F43BBB26F7B2FAE;// 0x1550(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_09A05EFA4FB3FA9ED8F5BABD0276DCC7;// 0x1630(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C711981145A5501948A739B480CFF244;// 0x1650(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2B27F5484C5B76BED3A77D8224313EC3;// 0x16F0(0x0078)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_67EBFD6C4CE7937C93B7579571D42DEC;// 0x1768(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_622D08AC45570AE962A206BD5DD9FE15;// 0x1848(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_BF7E1B564A90C1C14A9BA69FE9AB9D2F;// 0x1868(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8F5649874F60F9C01FAD6A9142288C3E;// 0x1948(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1370FF404C3B75D987DCE3B0D23184DD;// 0x1968(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BA0971E245FEBA3CFBA27F9DA33A1A6D;// 0x1A18(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0D70AB4C42050166D5E2CC836FB0C892;// 0x1AB8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B480E1B046B6CF890403769078BEF028;// 0x1B30(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_AF9EEEB549903C57304D65885F819FC3;// 0x1B50(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E6691F8949750B71E7FC92892BB69D84;// 0x1C00(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_EB2D3B6E431F94633F7697AAA846A955;// 0x1CB8(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1BD1A90D424210C5199F4687A118FB4D;// 0x1CE0(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8FC7EDFB4EEE4030933EF5BF22945F04;// 0x1D80(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_514E9E8D49721D26A9545EB9559A8818;// 0x1E38(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B5E8BF454ABA07D4788AF98DD235D785;// 0x1E60(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B22DF92C4E35F75D5E48E391BD866D2D;// 0x1F18(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2665B92241B3F873FCA75EAC3386EB91;// 0x1F40(0x0028)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_CDA6D87D4E172EB32C737082A3075E48;// 0x1F68(0x00C8)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_9B6B7ECC44C04125F2494980A8F79F27;// 0x2030(0x01B0)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_83E9A8CD4DE7688998FB63A9BCD6BE52;// 0x21E0(0x01B0)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_3013B1B848D8964AB4A56E9EC820CA51;// 0x2390(0x00C8)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_6255A2604354A988084A9EB7A2B605F0;// 0x2458(0x01B0)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_A7E808DD4DE1A3EDB6FD9794304CFA7B;// 0x2608(0x01B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_99F50DAB493056C1CB99C7BB9FAA8BEB;// 0x27B8(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E571D41D494E09F6F7DE30B54E0AA39A;// 0x2870(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AC8778894B608EC373795396DF0D47CC;// 0x2928(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D5FD9BBA47FB73C5FD2760B666C99BFB;// 0x29C8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1C708CDB42DA3CA037ED32ABF39100D9;// 0x2A80(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_31AC00314AB41DE2E77D7C9B44133E7D;// 0x2AA8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A7098BD94E242B2049D13FAA9CC546E3;// 0x2AD0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1E52E49E4C6F53F84A457DBECAAA9EDD;// 0x2AF8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7E21574946634B37C3B21888A4F3F7C1;// 0x2B20(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3F88B0F04A4A662B0D93948127D342A2;// 0x2B48(0x0028)
	struct FKSAnimNode_Mirror                          KSAnimGraphNode_Mirror_A97B1ECE4C926EEF8D82E6980DB1DD58;  // 0x2B70(0x0110)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_60C0BD214FA740B4FBEEB8A3B4DBD3BC;// 0x2C80(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8203A7E948EE023745A1AA909E308E42;// 0x2CA0(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_856F876447401CDDF214E3A74A30F356;// 0x2CC0(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A8E35B964B6CDE8A5A36DB925C3C6E12;// 0x2CE8(0x00A0)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_CA04CC354906AB249E5166B5D27A75C6;// 0x2D88(0x00C8)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_DF90B1734F6B3E991711AF800CA940BE;// 0x2E50(0x01B0)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_DF5EE371415AC9444AE8FB98162E14B1;// 0x3000(0x01B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_305FA4B949FEBBA07F49B5A1A457EF3F;// 0x31B0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4F9ACD0641BF79A51193349D84F0C921;// 0x31D8(0x0028)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_BDD1C1A143DF967D6041D5BECA6D6967;// 0x3200(0x00C8)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_B74BE153420789F3FD2FDDA70B1C2459;// 0x32C8(0x01B0)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_619507964CE6BAD6149561B378B7C9AA;// 0x3478(0x01B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7D454552483B89F811CCFB8FD0007A46;// 0x3628(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9B3E55EC45A5E8B7869713AE4C88CA5C;// 0x3650(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_ED44853D4B814B994200D8BE36B1AE4F;// 0x3678(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1C3318904140ABC5C5855AB79729FFB4;// 0x3718(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_DCDA45BF4BA7DF594E4175BCBC124345;// 0x37B8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A76812E74DC7CBA48DE2A395D95FA2F4;// 0x3870(0x0028)
	class UPCM_Hero_ABP_C*                             HeroABP;                                                  // 0x3898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_GAD_ZiplineDevice.ABP_GAD_ZiplineDevice_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GAD_ZiplineDevice_AnimGraphNode_TwoWayBlend_CDA6D87D4E172EB32C737082A3075E48();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GAD_ZiplineDevice_AnimGraphNode_AimOffsetSkinned_9B6B7ECC44C04125F2494980A8F79F27();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GAD_ZiplineDevice_AnimGraphNode_TwoWayBlend_3013B1B848D8964AB4A56E9EC820CA51();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GAD_ZiplineDevice_AnimGraphNode_BlendListByBool_1C3318904140ABC5C5855AB79729FFB4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GAD_ZiplineDevice_AnimGraphNode_BlendListByBool_ED44853D4B814B994200D8BE36B1AE4F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GAD_ZiplineDevice_AnimGraphNode_AimOffsetSkinned_619507964CE6BAD6149561B378B7C9AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GAD_ZiplineDevice_AnimGraphNode_TransitionResult_0A7A1D7C4811C6106E9CAC90F55F4BE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GAD_ZiplineDevice_AnimGraphNode_AimOffsetSkinned_B74BE153420789F3FD2FDDA70B1C2459();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GAD_ZiplineDevice_AnimGraphNode_TwoWayBlend_BDD1C1A143DF967D6041D5BECA6D6967();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GAD_ZiplineDevice_AnimGraphNode_AimOffsetSkinned_DF5EE371415AC9444AE8FB98162E14B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GAD_ZiplineDevice_AnimGraphNode_AimOffsetSkinned_DF90B1734F6B3E991711AF800CA940BE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GAD_ZiplineDevice_AnimGraphNode_TransitionResult_A0FC1F4E4CF6A4734360FDA8CCB478B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GAD_ZiplineDevice_AnimGraphNode_TwoWayBlend_CA04CC354906AB249E5166B5D27A75C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GAD_ZiplineDevice_AnimGraphNode_AimOffsetSkinned_6255A2604354A988084A9EB7A2B605F0();
	void ExecuteUbergraph_ABP_GAD_ZiplineDevice(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
