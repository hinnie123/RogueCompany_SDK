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

// DynamicClass Sub_Hero_ABP_Face.Sub_Hero_ABP_Face_C
// 0x0AA0 (0x19B0 - 0x0F10)
class USub_Hero_ABP_Face_C : public UKSFaceAnimInst
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0F10(0x0018) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4D79D682404460443C420E8140F235B2;// 0x0F28(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11EAD99C4B3A1EB44142F382232FE01A;// 0x0F50(0x0028)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_9C83F27549F6D84DF5E42191282BABDD;// 0x0F78(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_D2EA9A9744F516EDEB6C80B7CD09A9EB;// 0x0FC0(0x0020)
	struct FAnimNode_SeqEvalSkinned                    AnimGraphNode_SeqEvalSkinned_EE0B5C954F1A6873549FEAAEA209B609;// 0x0FE0(0x0160)
	struct FAnimNode_SeqEvalSkinned                    AnimGraphNode_SeqEvalSkinned_CD7EF69E4D2DC62544064584057D0C93;// 0x1140(0x0160)
	struct FAnimNode_SeqEvalSkinned                    AnimGraphNode_SeqEvalSkinned_1DF796BE40D2D0479F98B4BA34AEBD63;// 0x12A0(0x0160)
	struct FAnimNode_SeqEvalSkinned                    AnimGraphNode_SeqEvalSkinned_F110683E4B2A05B13167B88609963745;// 0x1400(0x0160)
	struct FAnimNode_SeqEvalSkinned                    AnimGraphNode_SeqEvalSkinned_A864A1D3480955DDADFFEDAE8A32A9CF;// 0x1560(0x0160)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_BED1301645B78BBC49D66581A325AC9F;// 0x16C0(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_25AD62704D03F87159B8F4B01BE578BA;// 0x1708(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_187A24114B4ED1188C3642B7AE29B850;// 0x1750(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_5176B17C4A16E32E78B921ABD98FCC31;// 0x1798(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_95A837F243C5BAE9A74245AD79CC035B;// 0x17E0(0x0048)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_EDBAF6ED44DBD6129971F48AD461853A;// 0x1828(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_CED3F5B246750C111A7508B6A1DE34A9;// 0x18D8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C0D5CC874D095AF4264178A0580C5C31;// 0x18F8(0x00B0)
	EKSEmotion                                         emotionTest;                                              // 0x19A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x19A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Sub_Hero_ABP_Face.Sub_Hero_ABP_Face_C");
		return ptr;
	}


	void ExecuteUbergraph_Sub_Hero_ABP_Face(int* bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
