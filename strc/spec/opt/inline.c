#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Cons_1;
Symbol sym_Nil_0;
Symbol sym_Some_1;
Symbol sym_RDecT_3;
Symbol sym_DynRuleId_1;
Symbol sym_AddDynRule_2;
Symbol sym_SetDynRule_2;
Symbol sym_UndefineDynRule_2;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_As_2;
Symbol sym_App_2;
Symbol sym_Op_2;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_SVar_1;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_GenDynRules_1;
Symbol sym_AM_2;
Symbol sym_Choice_2;
Symbol sym_LRule_1;
Symbol sym_All_1;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_Path_2;
Symbol sym_PrimT_3;
Symbol sym_Test_1;
Symbol sym_Where_1;
Symbol sym_Not_1;
Symbol sym_Rec_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_LChoice_2;
Symbol sym_Seq_2;
Symbol sym_BA_2;
Symbol sym_Scope_2;
Symbol sym_Build_1;
Symbol sym_Match_1;
Symbol sym_CallT_3;
Symbol sym_Let_2;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_ExtSDefInl_4;
Symbol sym_SDefT_4;
Symbol sym_SDef_3;
Symbol sym_FunType_2;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_DynamicRules_1;
Symbol sym_Cons_1;
Symbol sym_Nil_0;
Symbol sym_Some_1;
Symbol sym_RDecT_3;
Symbol sym_DynRuleId_1;
Symbol sym_AddDynRule_2;
Symbol sym_SetDynRule_2;
Symbol sym_UndefineDynRule_2;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_As_2;
Symbol sym_App_2;
Symbol sym_Op_2;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_SVar_1;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_GenDynRules_1;
Symbol sym_AM_2;
Symbol sym_Choice_2;
Symbol sym_LRule_1;
Symbol sym_All_1;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_Path_2;
Symbol sym_PrimT_3;
Symbol sym_Test_1;
Symbol sym_Where_1;
Symbol sym_Not_1;
Symbol sym_Rec_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_LChoice_2;
Symbol sym_Seq_2;
Symbol sym_BA_2;
Symbol sym_Scope_2;
Symbol sym_Build_1;
Symbol sym_Match_1;
Symbol sym_CallT_3;
Symbol sym_Let_2;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_ExtSDefInl_4;
Symbol sym_SDefT_4;
Symbol sym_SDef_3;
Symbol sym_FunType_2;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_Some_1;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_Hashtable_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_Cong_2;
static void init_module_constructors (void)
{
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_DynRuleId_1 = ATmakeSymbol("DynRuleId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleId_1);
  sym_AddDynRule_2 = ATmakeSymbol("AddDynRule", 2, ATfalse);
  ATprotectSymbol(sym_AddDynRule_2);
  sym_SetDynRule_2 = ATmakeSymbol("SetDynRule", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRule_2);
  sym_UndefineDynRule_2 = ATmakeSymbol("UndefineDynRule", 2, ATfalse);
  ATprotectSymbol(sym_UndefineDynRule_2);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_GenDynRules_1 = ATmakeSymbol("GenDynRules", 1, ATfalse);
  ATprotectSymbol(sym_GenDynRules_1);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_DynRuleId_1 = ATmakeSymbol("DynRuleId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleId_1);
  sym_AddDynRule_2 = ATmakeSymbol("AddDynRule", 2, ATfalse);
  ATprotectSymbol(sym_AddDynRule_2);
  sym_SetDynRule_2 = ATmakeSymbol("SetDynRule", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRule_2);
  sym_UndefineDynRule_2 = ATmakeSymbol("UndefineDynRule", 2, ATfalse);
  ATprotectSymbol(sym_UndefineDynRule_2);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_GenDynRules_1 = ATmakeSymbol("GenDynRules", 1, ATfalse);
  ATprotectSymbol(sym_GenDynRules_1);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  sym__1 = ATmakeSymbol("", 1, ATfalse);
  ATprotectSymbol(sym__1);
  sym__2 = ATmakeSymbol("", 2, ATfalse);
  ATprotectSymbol(sym__2);
  sym__3 = ATmakeSymbol("", 3, ATfalse);
  ATprotectSymbol(sym__3);
  sym__4 = ATmakeSymbol("", 4, ATfalse);
  ATprotectSymbol(sym__4);
  sym__5 = ATmakeSymbol("", 5, ATfalse);
  ATprotectSymbol(sym__5);
  sym__6 = ATmakeSymbol("", 6, ATfalse);
  ATprotectSymbol(sym__6);
  sym__7 = ATmakeSymbol("", 7, ATfalse);
  ATprotectSymbol(sym__7);
  sym__8 = ATmakeSymbol("", 8, ATfalse);
  ATprotectSymbol(sym__8);
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
  ATprotectSymbol(sym_Binary_0);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
  sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
  ATprotectSymbol(sym_Seqs_1);
  sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
  ATprotectSymbol(sym_Choices_1);
  sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
  ATprotectSymbol(sym_LChoices_1);
  sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
  ATprotectSymbol(sym_Lets_2);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
}
ATerm term_z_74;
ATerm term_v_74;
ATerm term_u_74;
ATerm term_i_74;
ATerm term_h_74;
ATerm term_g_74;
ATerm term_d_74;
ATerm term_c_74;
ATerm term_q_73;
ATerm term_p_73;
ATerm term_o_73;
ATerm term_n_73;
ATerm term_m_73;
ATerm term_h_73;
ATerm term_c_73;
ATerm term_b_73;
ATerm term_a_73;
ATerm term_z_72;
ATerm term_y_72;
ATerm term_x_72;
ATerm term_w_72;
ATerm term_t_72;
ATerm term_s_72;
ATerm term_p_72;
ATerm term_o_72;
ATerm term_n_72;
ATerm term_a_72;
ATerm term_z_71;
ATerm term_y_71;
ATerm term_t_71;
ATerm term_f_71;
ATerm term_z_70;
ATerm term_y_70;
ATerm term_w_70;
ATerm term_v_70;
ATerm term_l_70;
ATerm term_k_70;
ATerm term_i_70;
ATerm term_f_70;
ATerm term_a_70;
ATerm term_v_69;
ATerm term_m_69;
ATerm term_i_69;
ATerm term_h_69;
ATerm term_f_69;
ATerm term_b_69;
ATerm term_r_68;
ATerm term_l_68;
ATerm term_d_68;
ATerm term_c_68;
ATerm term_s_67;
ATerm term_r_67;
ATerm term_q_67;
ATerm term_n_67;
ATerm term_k_67;
ATerm term_d_66;
ATerm term_c_66;
ATerm term_w_65;
ATerm term_u_65;
ATerm term_t_65;
ATerm term_s_65;
ATerm term_o_65;
ATerm term_b_65;
ATerm term_r_58;
ATerm term_b_58;
ATerm term_q_57;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_m_39;
ATerm term_b_39;
ATerm term_d_38;
ATerm term_m_20;
ATerm term_y_19;
ATerm term_y_17;
ATerm term_o_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_f_17;
ATerm term_e_17;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(50);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_b_58));
  term_b_58 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_58));
  term_r_58 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_65));
  term_b_65 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_65));
  term_o_65 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_65));
  term_s_65 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_65));
  term_t_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_65));
  term_u_65 = (ATerm) ATmakeAppl(sym__2, term_s_65, term_t_65);
  ATprotect(&(term_w_65));
  term_w_65 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_66));
  term_c_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_66));
  term_d_66 = (ATerm) ATmakeAppl(sym__2, term_s_65, term_c_66);
  ATprotect(&(term_k_67));
  term_k_67 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_67));
  term_n_67 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_q_67));
  term_q_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_67));
  term_r_67 = (ATerm) ATmakeAppl(sym__2, term_s_65, term_q_67);
  ATprotect(&(term_s_67));
  term_s_67 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_68));
  term_c_68 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_68));
  term_d_68 = (ATerm) ATmakeAppl(sym__2, term_s_65, term_c_68);
  ATprotect(&(term_l_68));
  term_l_68 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_68));
  term_r_68 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_69));
  term_b_69 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_69));
  term_f_69 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_69));
  term_h_69 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_69));
  term_i_69 = (ATerm) ATmakeAppl(sym__2, term_f_69, term_h_69);
  ATprotect(&(term_m_69));
  term_m_69 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_v_69));
  term_v_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_70));
  term_a_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_70));
  term_f_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_70));
  term_i_70 = (ATerm) ATmakeAppl(sym__2, term_f_70, term_b_58);
  ATprotect(&(term_k_70));
  term_k_70 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_58);
  ATprotect(&(term_l_70));
  term_l_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_70));
  term_v_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_70));
  term_w_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_70));
  term_y_70 = (ATerm) ATmakeAppl(sym__2, term_w_70, term_l_68);
  ATprotect(&(term_z_70));
  term_z_70 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_71));
  term_f_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_71));
  term_t_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_71));
  term_y_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_71));
  term_z_71 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_72));
  term_a_72 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_72));
  term_n_72 = (ATerm) ATmakeAppl(sym__2, term_s_65, term_f_70);
  ATprotect(&(term_o_72));
  term_o_72 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_72));
  term_p_72 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_72));
  term_s_72 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_t_72));
  term_t_72 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_w_72));
  term_w_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_72));
  term_x_72 = (ATerm) ATmakeAppl(sym__2, term_w_72, term_l_68);
  ATprotect(&(term_y_72));
  term_y_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_72));
  term_z_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_73));
  term_a_73 = (ATerm) ATmakeAppl(sym__2, term_z_72, term_l_68);
  ATprotect(&(term_b_73));
  term_b_73 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_73));
  term_c_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_73));
  term_h_73 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_73));
  term_m_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_73));
  term_n_73 = (ATerm) ATmakeAppl(sym__2, term_m_73, term_l_68);
  ATprotect(&(term_o_73));
  term_o_73 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_73));
  term_p_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_73));
  term_q_73 = (ATerm) ATmakeAppl(sym__3, term_f_69, term_h_69, (ATerm) ATempty);
  ATprotect(&(term_c_74));
  term_c_74 = (ATerm) ATmakeAppl(sym__2, term_s_65, term_m_73);
  ATprotect(&(term_d_74));
  term_d_74 = (ATerm) ATmakeAppl(sym__2, term_s_65, term_w_72);
  ATprotect(&(term_g_74));
  term_g_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_74));
  term_h_74 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_74));
  term_i_74 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_74));
  term_u_74 = (ATerm) ATmakeAppl(sym__2, term_c_66, term_l_68);
  ATprotect(&(term_v_74));
  term_v_74 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_74));
  term_z_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm AddSDef_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm term_size_0_0 (ATerm t);
ATerm Seq_2_0 (ATerm j_115 (ATerm), ATerm k_115 (ATerm), ATerm t);
static ATerm g_1 (ATerm t);
ATerm body_to_inline_0_0 (ATerm t);
ATerm inlineable_0_0 (ATerm t);
static ATerm i_7 (ATerm k_39, ATerm l_39, ATerm t);
ATerm bottomup_1_0 (ATerm d_135 (ATerm), ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm simplify_0_0 (ATerm t);
ATerm SubsArgCall2_0_0 (ATerm t);
ATerm SubsArgCall1_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm substitute_arg_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm substitute_args_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm spaste_1_0 (ATerm v_133 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm w_133 (ATerm), ATerm x_133 (ATerm), ATerm y_133 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm a_134 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm c_13 (ATerm g_28, ATerm f_28, ATerm t);
ATerm SVar_1_0 (ATerm f_112 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm srename_0_0 (ATerm t);
ATerm dynrule_cong_6_0 (ATerm c_134 (ATerm), ATerm d_134 (ATerm), ATerm e_134 (ATerm), ATerm f_134 (ATerm), ATerm g_134 (ATerm), ATerm h_134 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm tpaste_1_0 (ATerm r_133 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm s_133 (ATerm), ATerm t_133 (ATerm), ATerm u_133 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm b_134 (ATerm), ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm f_13 (ATerm n_150 (ATerm), ATerm m_59, ATerm l_59, ATerm t);
static ATerm h_13 (ATerm q_150 (ATerm), ATerm r_150 (ATerm), ATerm q_59, ATerm p_59, ATerm t);
static ATerm i_13 (ATerm i_150 (ATerm), ATerm k_59, ATerm j_59, ATerm t);
static ATerm s_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm k_13 (ATerm t_818, ATerm y_818, ATerm y_80, ATerm t);
ATerm while_not_2_0 (ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm t);
ATerm for_3_0 (ATerm w_141 (ATerm), ATerm x_141 (ATerm), ATerm y_141 (ATerm), ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm m_139 (ATerm e_138, ATerm f_138, ATerm g_138, ATerm t);
static ATerm b_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
ATerm free_vars_3_0 (ATerm k_157 (ATerm), ATerm l_157 (ATerm), ATerm m_157 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm b_10 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm b_112 (ATerm), ATerm t);
static ATerm m_13 (ATerm s_155 (ATerm), ATerm t_155 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm v_62, ATerm u_62, ATerm t_62, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm n_13 (ATerm m_155 (ATerm), ATerm n_155 (ATerm (ATerm), ATerm), ATerm n_62, ATerm q_62, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm a_156 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm h_155 (ATerm (ATerm), ATerm), ATerm i_155 (ATerm), ATerm j_155 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_155 (ATerm (ATerm), ATerm), ATerm t);
static ATerm y_10 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm l_11 (ATerm t);
ATerm InlineCall_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm s_153 (ATerm), ATerm t_153 (ATerm), ATerm u_153 (ATerm), ATerm t);
static ATerm m_11 (ATerm t);
static ATerm n_11 (ATerm t);
ATerm occurrences_1_0 (ATerm u_150 (ATerm), ATerm t);
static ATerm s_13 (ATerm w_132 (ATerm), ATerm j_27, ATerm i_27, ATerm t);
static ATerm u_13 (ATerm d_143 (ATerm), ATerm v_37, ATerm t_37, ATerm t);
static ATerm w_13 (ATerm e_39, ATerm f_39, ATerm t);
ATerm end_scope_1_0 (ATerm a_143 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm n_138 (ATerm), ATerm o_138 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm z_142 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm b_143 (ATerm), ATerm c_143 (ATerm), ATerm t);
static ATerm v_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm a_12 (ATerm t);
ATerm inline_sdef_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm c_135 (ATerm), ATerm t);
static ATerm h_12 (ATerm t);
static ATerm y_13 (ATerm j_101, ATerm i_101, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm t_139 (ATerm), ATerm u_139 (ATerm), ATerm v_139 (ATerm), ATerm w_139 (ATerm), ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm g_136 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm k_148 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm b_160 (ATerm t_159, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm u_12 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm c_141 (ATerm), ATerm d_141 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm e_135 (ATerm), ATerm t);
static ATerm x_12 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
ATerm inline_sdefs_0_0 (ATerm t);
static ATerm e_15 (ATerm n_70, ATerm o_70, ATerm t);
static ATerm f_15 (ATerm y_34, ATerm z_34, ATerm t);
static ATerm h_15 (ATerm r_142 (ATerm), ATerm j_271, ATerm e_35, ATerm t);
static ATerm g_15 (ATerm u_34, ATerm v_34, ATerm t);
static ATerm g_13 (ATerm t);
static ATerm j_13 (ATerm t);
ATerm output_1_0 (ATerm o_165 (ATerm), ATerm t);
static ATerm g_169 (ATerm a_169, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm i_15 (ATerm a_35, ATerm t);
static ATerm j_15 (ATerm t_68, ATerm u_68, ATerm t);
static ATerm k_15 (ATerm p_70, ATerm q_70, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm r_170 (ATerm q_169, ATerm t);
static ATerm s_170 (ATerm u_169, ATerm v_169, ATerm w_169, ATerm t);
static ATerm t_170 (ATerm e_170, ATerm f_170, ATerm g_170, ATerm t);
static ATerm l_15 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm p_165 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm t_147 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm o_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm r_13 (ATerm t);
ATerm default_system_usage_2_0 (ATerm n_167 (ATerm), ATerm o_167 (ATerm), ATerm t);
static ATerm v_13 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm b_14 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm s_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm v_15 (ATerm h_77, ATerm i_77, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm u_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm y_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm t_15 (ATerm z_38, ATerm a_39, ATerm y_38, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm a_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm y_15 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm m_15 (ATerm h_36, ATerm i_36, ATerm t);
ATerm foldr_2_0 (ATerm q_153 (ATerm), ATerm r_153 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm e_16 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm p_162 (ATerm), ATerm t);
static ATerm f_16 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_15 (ATerm u_43, ATerm w_43, ATerm x_43, ATerm t);
ATerm lookup_table_0_1 (ATerm l_40, ATerm t);
ATerm new_hashtable_0_2 (ATerm g_44, ATerm h_44, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm p_15 (ATerm c_44, ATerm d_44, ATerm t);
static ATerm q_15 (ATerm j_44, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm d_148 (ATerm), ATerm t);
static ATerm x_15 (ATerm z_43, ATerm a_44, ATerm t);
static ATerm s_15 (ATerm s_40, ATerm t_40, ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm n_16 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm o_118 (ATerm), ATerm p_118 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm i_167 (ATerm), ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
ATerm parse_options_3_0 (ATerm f_167 (ATerm), ATerm g_167 (ATerm), ATerm h_167 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm i_165 (ATerm), ATerm j_165 (ATerm), ATerm k_165 (ATerm), ATerm l_165 (ATerm), ATerm m_165 (ATerm), ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
static ATerm d_17 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_e_17;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_f_17;
  return(t);
}
ATerm AddSDef_0_0 (ATerm t)
{
  ATerm n_0 = NULL,p_0 = NULL,r_0 = NULL,s_0 = NULL,t_0 = NULL;
  n_0 = t;
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDefT_4))
          {
            p_0 = ATgetArgument(t, 0);
            {
              ATerm i_17 = ATgetArgument(t, 1);
            }
            {
              ATerm j_17 = ATgetArgument(t, 2);
            }
            {
              ATerm k_17 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(h_17);
        {
          ATerm x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL;
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_0), (ATerm)ATempty, (ATerm) ATempty);
          z_0 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_17, n_0);
          a_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_0), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_l_17, n_0));
          t = u_13(u_0, z_0, a_1, t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_0), (ATerm)ATempty, (ATerm) ATempty);
          x_0 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_17, n_0);
          y_0 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_0), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_m_17, n_0));
          t = u_13(v_0, x_0, y_0, t);
          t = n_0;
        }
      }
    else
      {
        t = g_17;
        if(match_cons(t, sym_ExtSDefInl_4))
          {
            p_0 = ATgetArgument(t, 0);
            r_0 = ATgetArgument(t, 1);
            s_0 = ATgetArgument(t, 2);
            t_0 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, p_0, r_0, s_0, t_0);
        t = AddSDef_0_0(t);
        t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, p_0, r_0, s_0, t_0);
      }
  }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_o_17;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm e_1 = NULL,t_1 = NULL;
  if(match_cons(t, sym__2))
    {
      e_1 = ATgetArgument(t, 0);
      t_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_15(e_1, t_1, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_o_17;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL;
  if(match_cons(t, sym__2))
    {
      z_1 = ATgetArgument(t, 0);
      a_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_15(z_1, a_2, t);
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  ATerm p_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_0 = NULL,e_0 = NULL;
      e_0 = t;
      t = SSL_explode_term(e_0);
      if(match_cons(t, sym__2))
        {
          ATerm r_17 = ATgetArgument(t, 0);
          a_0 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_0;
      t = foldr_3_0(w_0, b_1, term_size_0_0, t);
      LocalPopChoice(q_17);
    }
  else
    {
      t = p_17;
      {
        static ATerm m_1 (ATerm t);
        static ATerm m_1 (ATerm t)
        {
          ATerm u_1 = NULL,v_1 = NULL;
          v_1 = t;
          t = SSL_explode_term(v_1);
          if(match_cons(t, sym__2))
            {
              ATerm s_17 = ATgetArgument(t, 0);
              u_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_1;
          t = foldr_3_0(c_1, f_1, m_1, t);
          return(t);
        }
        t = m_1(t);
      }
    }
  return(t);
}
ATerm Seq_2_0 (ATerm j_115 (ATerm), ATerm k_115 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,q_0 = NULL;
  s_1 = t;
  if(match_cons(t, sym_Seq_2))
    {
      o_1 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_1);
  n_1 = t;
  t = o_1;
  t = j_115(t);
  q_1 = t;
  t = p_1;
  t = k_115(t);
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, q_1, r_1);
  q_0 = t;
  t = SSLsetAnnotations(q_0, n_1);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL,n_2 = NULL;
  v_8 = t;
  if(match_cons(t, sym_Match_1))
    {
      u_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_8);
  t_8 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, u_8);
  n_2 = t;
  t = SSLsetAnnotations(n_2, t_8);
  return(t);
}
ATerm body_to_inline_0_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL;
  static ATerm b_13 (ATerm t);
  static ATerm b_13 (ATerm t)
  {
    ATerm v_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
    y_12 = t;
    if(match_cons(t, sym_Id_0))
      {
        t = y_12;
      }
    else
      {
        if(match_cons(t, sym_Fail_0))
          {
            t = y_12;
          }
        else
          {
            if(match_cons(t, sym_CallT_3))
              {
                z_12 = ATgetArgument(t, 0);
                a_13 = ATgetArgument(t, 1);
                v_12 = ATgetArgument(t, 2);
                {
                  ATerm f_2 = NULL,j_2 = NULL,m_2 = NULL,o_2 = NULL,i_1 = NULL,d_1 = NULL;
                  t = SSLgetAnnotations(y_12);
                  f_2 = t;
                  t = z_12;
                  if(match_cons(t, sym_SVar_1))
                    {
                      m_2 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_12);
                  j_2 = t;
                  t = (ATerm) ATmakeAppl(sym_SVar_1, m_2);
                  d_1 = t;
                  t = SSLsetAnnotations(d_1, j_2);
                  o_2 = t;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, o_2, a_13, v_12);
                  i_1 = t;
                  t = SSLsetAnnotations(i_1, f_2);
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    z_12 = ATgetArgument(t, 0);
                    a_13 = ATgetArgument(t, 1);
                    v_12 = ATgetArgument(t, 2);
                    {
                      ATerm k_4 = NULL,q_4 = NULL,s_4 = NULL,t_4 = NULL,k_1 = NULL,j_1 = NULL;
                      t = SSLgetAnnotations(y_12);
                      k_4 = t;
                      t = z_12;
                      if(match_cons(t, sym_SVar_1))
                        {
                          s_4 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(z_12);
                      q_4 = t;
                      t = (ATerm) ATmakeAppl(sym_SVar_1, s_4);
                      j_1 = t;
                      t = SSLsetAnnotations(j_1, q_4);
                      t_4 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, t_4, a_13, v_12);
                      k_1 = t;
                      t = SSLsetAnnotations(k_1, k_4);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Build_1))
                      {
                        z_12 = ATgetArgument(t, 0);
                        {
                          ATerm f_5 = NULL,l_1 = NULL;
                          t = SSLgetAnnotations(y_12);
                          f_5 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, z_12);
                          l_1 = t;
                          t = SSLsetAnnotations(l_1, f_5);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            z_12 = ATgetArgument(t, 0);
                            {
                              ATerm h_6 = NULL,w_1 = NULL;
                              t = SSLgetAnnotations(y_12);
                              h_6 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, z_12);
                              w_1 = t;
                              t = SSLsetAnnotations(w_1, h_6);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                z_12 = ATgetArgument(t, 0);
                                a_13 = ATgetArgument(t, 1);
                                {
                                  ATerm t_17 = t;
                                  int v_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm h_7 = NULL,r_7 = NULL,a_8 = NULL,c_8 = NULL,y_1 = NULL,x_1 = NULL;
                                      t = SSLgetAnnotations(y_12);
                                      h_7 = t;
                                      t = z_12;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          a_8 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(z_12);
                                      r_7 = t;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, a_8);
                                      x_1 = t;
                                      t = SSLsetAnnotations(x_1, r_7);
                                      c_8 = t;
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_8, a_13);
                                      y_1 = t;
                                      t = SSLsetAnnotations(y_1, h_7);
                                      LocalPopChoice(v_17);
                                    }
                                  else
                                    {
                                      t = t_17;
                                      {
                                        ATerm k_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL,q_2 = NULL,p_2 = NULL;
                                        t = SSLgetAnnotations(y_12);
                                        k_8 = t;
                                        t = z_12;
                                        if(match_cons(t, sym_Scope_2))
                                          {
                                            o_8 = ATgetArgument(t, 0);
                                            p_8 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = SSLgetAnnotations(z_12);
                                        n_8 = t;
                                        t = p_8;
                                        t = Seq_2_0(g_1, _id, t);
                                        q_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Scope_2, o_8, q_8);
                                        p_2 = t;
                                        t = SSLsetAnnotations(p_2, n_8);
                                        r_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, r_8, a_13);
                                        q_2 = t;
                                        t = SSLsetAnnotations(q_2, k_8);
                                      }
                                    }
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    z_12 = ATgetArgument(t, 0);
                                    a_13 = ATgetArgument(t, 1);
                                    {
                                      ATerm w_17 = t;
                                      int x_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm d_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,t_2 = NULL,r_2 = NULL;
                                          t = SSLgetAnnotations(y_12);
                                          d_9 = t;
                                          t = a_13;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              h_9 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = SSLgetAnnotations(a_13);
                                          g_9 = t;
                                          t = (ATerm) ATmakeAppl(sym_Match_1, h_9);
                                          r_2 = t;
                                          t = SSLsetAnnotations(r_2, g_9);
                                          i_9 = t;
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, z_12, i_9);
                                          t_2 = t;
                                          t = SSLsetAnnotations(t_2, d_9);
                                          LocalPopChoice(x_17);
                                        }
                                      else
                                        {
                                          t = w_17;
                                          {
                                            ATerm q_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,a_10 = NULL,x_2 = NULL,w_2 = NULL,u_2 = NULL;
                                            t = SSLgetAnnotations(y_12);
                                            q_9 = t;
                                            t = a_13;
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                u_9 = ATgetArgument(t, 0);
                                                v_9 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(a_13);
                                            t_9 = t;
                                            t = u_9;
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                y_9 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(u_9);
                                            x_9 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, y_9);
                                            u_2 = t;
                                            t = SSLsetAnnotations(u_2, x_9);
                                            a_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, a_10, v_9);
                                            w_2 = t;
                                            t = SSLsetAnnotations(w_2, t_9);
                                            w_9 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, z_12, w_9);
                                            x_2 = t;
                                            t = SSLsetAnnotations(x_2, q_9);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Choice_2))
                                      {
                                        z_12 = ATgetArgument(t, 0);
                                        a_13 = ATgetArgument(t, 1);
                                        {
                                          ATerm p_10 = NULL,v_10 = NULL,w_10 = NULL,y_2 = NULL;
                                          t = SSLgetAnnotations(y_12);
                                          p_10 = t;
                                          t = z_12;
                                          t = b_13(t);
                                          v_10 = t;
                                          t = a_13;
                                          t = b_13(t);
                                          w_10 = t;
                                          t = (ATerm) ATmakeAppl(sym_Choice_2, v_10, w_10);
                                          y_2 = t;
                                          t = SSLsetAnnotations(y_2, p_10);
                                        }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_LChoice_2))
                                          {
                                            z_12 = ATgetArgument(t, 0);
                                            a_13 = ATgetArgument(t, 1);
                                            {
                                              ATerm k_11 = NULL,o_11 = NULL,p_11 = NULL,z_2 = NULL;
                                              t = SSLgetAnnotations(y_12);
                                              k_11 = t;
                                              t = z_12;
                                              t = b_13(t);
                                              o_11 = t;
                                              t = a_13;
                                              t = b_13(t);
                                              p_11 = t;
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, o_11, p_11);
                                              z_2 = t;
                                              t = SSLsetAnnotations(z_2, k_11);
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_GuardedLChoice_3))
                                              {
                                                z_12 = ATgetArgument(t, 0);
                                                a_13 = ATgetArgument(t, 1);
                                                v_12 = ATgetArgument(t, 2);
                                                {
                                                  ATerm y_11 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,a_3 = NULL;
                                                  t = SSLgetAnnotations(y_12);
                                                  y_11 = t;
                                                  t = z_12;
                                                  t = b_13(t);
                                                  e_12 = t;
                                                  t = a_13;
                                                  t = b_13(t);
                                                  f_12 = t;
                                                  t = v_12;
                                                  t = b_13(t);
                                                  g_12 = t;
                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, e_12, f_12, g_12);
                                                  a_3 = t;
                                                  t = SSLsetAnnotations(a_3, y_11);
                                                }
                                              }
                                            else
                                              {
                                                ATerm q_12 = NULL,b_3 = NULL;
                                                if(match_cons(t, sym_Cong_2))
                                                  {
                                                    z_12 = ATgetArgument(t, 0);
                                                    a_13 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSLgetAnnotations(y_12);
                                                q_12 = t;
                                                t = (ATerm) ATmakeAppl(sym_Cong_2, z_12, a_13);
                                                b_3 = t;
                                                t = SSLsetAnnotations(b_3, q_12);
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return(t);
  }
  t = b_13(t);
  k_2 = t;
  t = term_size_0_0(t);
  l_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_2, term_y_17);
  t = leq_0_0(t);
  t = k_2;
  return(t);
}
ATerm inlineable_0_0 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,n_15 = NULL,o_15 = NULL,r_15 = NULL;
  c_15 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      d_15 = ATgetArgument(t, 0);
      n_15 = ATgetArgument(t, 1);
      o_15 = ATgetArgument(t, 2);
      r_15 = ATgetArgument(t, 3);
      {
        ATerm b_16 = NULL,c_16 = NULL,k_16 = NULL,c_4 = NULL;
        t = SSLgetAnnotations(c_15);
        c_16 = t;
        t = d_15;
        {
          ATerm z_17 = t;
          if((PushChoice() == 0))
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_17;
            }
        }
        b_16 = t;
        t = r_15;
        {
          ATerm a_18 = t;
          if((PushChoice() == 0))
            {
              static ATerm h_1 (ATerm t);
              static ATerm h_1 (ATerm t)
              {
                if(match_cons(t, sym_CallT_3))
                  {
                    ATerm b_18 = ATgetArgument(t, 0);
                    if(match_cons(b_18, sym_SVar_1))
                      {
                        if((b_16 != ATgetArgument(b_18, 0)))
                          {
                            _fail(ATgetArgument(b_18, 0));
                          }
                      }
                    else
                      _fail(t);
                    {
                      ATerm c_18 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm d_18 = ATgetArgument(t, 2);
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(h_1, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_18;
            }
        }
        t = r_15;
        t = body_to_inline_0_0(t);
        k_16 = t;
        t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, b_16, n_15, o_15, k_16);
        c_4 = t;
        t = SSLsetAnnotations(c_4, c_16);
      }
    }
  else
    {
      ATerm w_16 = NULL,x_16 = NULL,c_17 = NULL,d_4 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          d_15 = ATgetArgument(t, 0);
          n_15 = ATgetArgument(t, 1);
          o_15 = ATgetArgument(t, 2);
          r_15 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_15);
      x_16 = t;
      t = d_15;
      {
        ATerm e_18 = t;
        if((PushChoice() == 0))
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_18;
          }
      }
      w_16 = t;
      t = r_15;
      {
        ATerm f_18 = t;
        if((PushChoice() == 0))
          {
            static ATerm b_2 (ATerm t);
            static ATerm b_2 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm g_18 = ATgetArgument(t, 0);
                  if(match_cons(g_18, sym_SVar_1))
                    {
                      if((w_16 != ATgetArgument(g_18, 0)))
                        {
                          _fail(ATgetArgument(g_18, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm k_18 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm n_18 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(b_2, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = f_18;
          }
      }
      t = r_15;
      t = body_to_inline_0_0(t);
      c_17 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, w_16, n_15, o_15, c_17);
      d_4 = t;
      t = SSLsetAnnotations(d_4, x_16);
    }
  return(t);
}
static ATerm i_7 (ATerm k_39, ATerm l_39, ATerm t)
{
  ATerm d_16 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_39, l_39);
  t = s_15(k_39, l_39, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_16 = ATgetFirst((ATermList) t);
      {
        ATerm o_18 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = d_16;
  return(t);
}
ATerm bottomup_1_0 (ATerm d_135 (ATerm), ATerm t)
{
  static ATerm c_2 (ATerm t);
  static ATerm c_2 (ATerm t)
  {
    t = bottomup_1_0(d_135, t);
    return(t);
  }
  t = SRTS_all(c_2, t);
  t = d_135(t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_18 = ATgetArgument(t, 0);
      if(((ATgetType(p_18) != AT_LIST) || !(ATisEmpty(p_18))))
        _fail(t);
      {
        ATerm r_18 = ATgetArgument(t, 1);
        if(((ATgetType(r_18) != AT_LIST) || !(ATisEmpty(r_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_18 = ATgetArgument(t, 0);
      if(((ATgetType(s_18) == AT_LIST) && !(ATisEmpty(s_18))))
        {
          a_31 = ATgetFirst((ATermList) s_18);
          b_31 = (ATerm) ATgetNext((ATermList) s_18);
        }
      else
        _fail(t);
      {
        ATerm v_18 = ATgetArgument(t, 1);
        if(((ATgetType(v_18) == AT_LIST) && !(ATisEmpty(v_18))))
          {
            c_31 = ATgetFirst((ATermList) v_18);
            d_31 = (ATerm) ATgetNext((ATermList) v_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_31, c_31), (ATerm) ATmakeAppl(sym__2, b_31, d_31));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL;
  if(match_cons(t, sym__2))
    {
      f_31 = ATgetArgument(t, 0);
      g_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_31), f_31);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm j_31 = NULL,l_31 = NULL;
  if(match_cons(t, sym__2))
    {
      j_31 = ATgetArgument(t, 0);
      l_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_31), (ATerm) ATmakeAppl(sym_Match_1, l_31));
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_19 = ATgetArgument(t, 0);
      if(((ATgetType(c_19) != AT_LIST) || !(ATisEmpty(c_19))))
        _fail(t);
      {
        ATerm e_19 = ATgetArgument(t, 1);
        if(((ATgetType(e_19) != AT_LIST) || !(ATisEmpty(e_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm c_41 = NULL,d_41 = NULL,g_41 = NULL,h_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_19 = ATgetArgument(t, 0);
      if(((ATgetType(j_19) == AT_LIST) && !(ATisEmpty(j_19))))
        {
          c_41 = ATgetFirst((ATermList) j_19);
          d_41 = (ATerm) ATgetNext((ATermList) j_19);
        }
      else
        _fail(t);
      {
        ATerm k_19 = ATgetArgument(t, 1);
        if(((ATgetType(k_19) == AT_LIST) && !(ATisEmpty(k_19))))
          {
            g_41 = ATgetFirst((ATermList) k_19);
            h_41 = (ATerm) ATgetNext((ATermList) k_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_41, g_41), (ATerm) ATmakeAppl(sym__2, d_41, h_41));
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL;
  if(match_cons(t, sym__2))
    {
      i_41 = ATgetArgument(t, 0);
      j_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_41), i_41);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL;
  if(match_cons(t, sym__2))
    {
      o_41 = ATgetArgument(t, 0);
      p_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_41), (ATerm) ATmakeAppl(sym_Match_1, p_41));
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm n_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(m_19);
      {
        ATerm u_57 = NULL,x_57 = NULL;
        u_57 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm o_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        x_57 = t;
        t = SSLgetAnnotations(u_57);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_19 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) p_19) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm q_19 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(q_19) != AT_LIST) || !(ATisEmpty(q_19))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_57;
      }
    }
  else
    {
      t = l_19;
      {
        ATerm r_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm t_19 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) t_19) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm u_19 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(s_19);
            _fail(t);
          }
        else
          {
            t = r_19;
          }
      }
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  static ATerm d_2 (ATerm t);
  static ATerm d_2 (ATerm t)
  {
    ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,v_22 = NULL,w_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
    b_23 = t;
    if(match_cons(t, sym_Test_1))
      {
        a_23 = ATgetArgument(t, 0);
        t = a_23;
        if(match_cons(t, sym_Id_0))
          {
            ATerm v_19 = t;
            int w_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_y_19;
                t = d_2(t);
                LocalPopChoice(w_19);
              }
            else
              {
                t = v_19;
                {
                  ATerm z_19 = t;
                  int a_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_23 = NULL,g_23 = NULL,i_23 = NULL,j_23 = NULL,q_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL;
                      t = b_23;
                      t = new_0_0(t);
                      f_23 = t;
                      t = bottomup_1_0(d_2, t);
                      g_24 = t;
                      t = (ATerm) ATempty;
                      t = d_2(t);
                      h_24 = t;
                      t = (ATerm) ATinsert(CheckATermList(h_24), g_24);
                      t = d_2(t);
                      g_23 = t;
                      t = f_23;
                      t = bottomup_1_0(d_2, t);
                      f_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, f_24);
                      t = d_2(t);
                      e_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, e_24);
                      t = d_2(t);
                      j_23 = t;
                      t = a_23;
                      t = bottomup_1_0(d_2, t);
                      a_24 = t;
                      t = f_23;
                      t = bottomup_1_0(d_2, t);
                      d_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, d_24);
                      t = d_2(t);
                      c_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, c_24);
                      t = d_2(t);
                      b_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_24, b_24);
                      t = d_2(t);
                      q_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_23, q_23);
                      t = d_2(t);
                      i_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, g_23, i_23);
                      t = d_2(t);
                      LocalPopChoice(a_20);
                    }
                  else
                    {
                      t = z_19;
                      t = b_23;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm d_20 = t;
                int k_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_m_20;
                    t = d_2(t);
                    LocalPopChoice(k_20);
                  }
                else
                  {
                    t = d_20;
                    {
                      ATerm p_20 = t;
                      int q_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,v_24 = NULL,w_24 = NULL,y_24 = NULL,z_24 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL;
                          t = b_23;
                          t = new_0_0(t);
                          n_24 = t;
                          t = bottomup_1_0(d_2, t);
                          f_25 = t;
                          t = (ATerm) ATempty;
                          t = d_2(t);
                          g_25 = t;
                          t = (ATerm) ATinsert(CheckATermList(g_25), f_25);
                          t = d_2(t);
                          o_24 = t;
                          t = n_24;
                          t = bottomup_1_0(d_2, t);
                          e_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, e_25);
                          t = d_2(t);
                          z_24 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, z_24);
                          t = d_2(t);
                          r_24 = t;
                          t = a_23;
                          t = bottomup_1_0(d_2, t);
                          t_24 = t;
                          t = n_24;
                          t = bottomup_1_0(d_2, t);
                          y_24 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, y_24);
                          t = d_2(t);
                          w_24 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, w_24);
                          t = d_2(t);
                          v_24 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, t_24, v_24);
                          t = d_2(t);
                          s_24 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, r_24, s_24);
                          t = d_2(t);
                          p_24 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, o_24, p_24);
                          t = d_2(t);
                          LocalPopChoice(q_20);
                        }
                      else
                        {
                          t = p_20;
                          t = b_23;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    w_22 = ATgetArgument(t, 0);
                    {
                      ATerm r_20 = t;
                      int s_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, w_22);
                          t = d_2(t);
                          LocalPopChoice(s_20);
                        }
                      else
                        {
                          t = r_20;
                          {
                            ATerm t_20 = t;
                            int u_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm l_25 = NULL,t_25 = NULL,c_26 = NULL,f_26 = NULL,g_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL;
                                t = b_23;
                                t = new_0_0(t);
                                l_25 = t;
                                t = bottomup_1_0(d_2, t);
                                o_26 = t;
                                t = (ATerm) ATempty;
                                t = d_2(t);
                                p_26 = t;
                                t = (ATerm) ATinsert(CheckATermList(p_26), o_26);
                                t = d_2(t);
                                t_25 = t;
                                t = l_25;
                                t = bottomup_1_0(d_2, t);
                                n_26 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, n_26);
                                t = d_2(t);
                                m_26 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, m_26);
                                t = d_2(t);
                                f_26 = t;
                                t = a_23;
                                t = bottomup_1_0(d_2, t);
                                i_26 = t;
                                t = l_25;
                                t = bottomup_1_0(d_2, t);
                                l_26 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, l_26);
                                t = d_2(t);
                                k_26 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, k_26);
                                t = d_2(t);
                                j_26 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_26, j_26);
                                t = d_2(t);
                                g_26 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, f_26, g_26);
                                t = d_2(t);
                                c_26 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, t_25, c_26);
                                t = d_2(t);
                                LocalPopChoice(u_20);
                              }
                            else
                              {
                                t = t_20;
                                t = b_23;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm v_20 = t;
                    int x_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL,t_27 = NULL,u_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,c_28 = NULL,d_28 = NULL,j_28 = NULL;
                        t = b_23;
                        t = new_0_0(t);
                        m_27 = t;
                        t = bottomup_1_0(d_2, t);
                        d_28 = t;
                        t = (ATerm) ATempty;
                        t = d_2(t);
                        j_28 = t;
                        t = (ATerm) ATinsert(CheckATermList(j_28), d_28);
                        t = d_2(t);
                        n_27 = t;
                        t = m_27;
                        t = bottomup_1_0(d_2, t);
                        c_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, c_28);
                        t = d_2(t);
                        a_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, a_28);
                        t = d_2(t);
                        t_27 = t;
                        t = a_23;
                        t = bottomup_1_0(d_2, t);
                        w_27 = t;
                        t = m_27;
                        t = bottomup_1_0(d_2, t);
                        z_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, z_27);
                        t = d_2(t);
                        y_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, y_27);
                        t = d_2(t);
                        x_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, w_27, x_27);
                        t = d_2(t);
                        u_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, t_27, u_27);
                        t = d_2(t);
                        o_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, n_27, o_27);
                        t = d_2(t);
                        LocalPopChoice(x_20);
                      }
                    else
                      {
                        t = v_20;
                        t = b_23;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            a_23 = ATgetArgument(t, 0);
            t = a_23;
            if(match_cons(t, sym_Id_0))
              {
                ATerm y_20 = t;
                int z_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_m_20;
                    t = d_2(t);
                    LocalPopChoice(z_20);
                  }
                else
                  {
                    t = y_20;
                    t = b_23;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm a_21 = t;
                    int b_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_y_19;
                        t = d_2(t);
                        LocalPopChoice(b_21);
                      }
                    else
                      {
                        t = a_21;
                        t = b_23;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        w_22 = ATgetArgument(t, 0);
                        {
                          ATerm c_21 = t;
                          int e_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, w_22);
                              t = d_2(t);
                              LocalPopChoice(e_21);
                            }
                          else
                            {
                              t = c_21;
                              t = b_23;
                            }
                        }
                      }
                    else
                      {
                        t = b_23;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                a_23 = ATgetArgument(t, 0);
                z_22 = ATgetArgument(t, 1);
                t = z_22;
                if(match_cons(t, sym_Id_0))
                  {
                    t = a_23;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = z_22;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = a_23;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                w_22 = ATgetArgument(t, 0);
                                y_22 = ATgetArgument(t, 1);
                                t = a_23;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    w_22 = ATgetArgument(t, 0);
                                    y_22 = ATgetArgument(t, 1);
                                    t = a_23;
                                  }
                                else
                                  {
                                    t = a_23;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        s_22 = ATgetArgument(t, 0);
                        v_22 = ATgetArgument(t, 1);
                        t = s_22;
                        if(match_cons(t, sym_Match_1))
                          {
                            r_22 = ATgetArgument(t, 0);
                            t = r_22;
                            if(match_cons(t, sym_Op_2))
                              {
                                p_22 = ATgetArgument(t, 0);
                                i_22 = ATgetArgument(t, 1);
                                t = a_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = z_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm f_21 = t;
                                        int g_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_m_20;
                                            t = d_2(t);
                                            LocalPopChoice(g_21);
                                          }
                                        else
                                          {
                                            t = f_21;
                                            t = b_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            w_22 = ATgetArgument(t, 0);
                                            y_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm h_21 = t;
                                              int i_21 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm p_30 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                  t = d_2(t);
                                                  p_30 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, p_30);
                                                  t = d_2(t);
                                                  LocalPopChoice(i_21);
                                                }
                                              else
                                                {
                                                  t = h_21;
                                                  t = b_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                t = w_22;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    q_22 = ATgetArgument(t, 0);
                                                    j_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm j_21 = t;
                                                      int k_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, q_22, p_22);
                                                          {
                                                            ATerm l_21 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm n_17 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    n_17 = ATgetArgument(t, 0);
                                                                    if((n_17 != ATgetArgument(t, 1)))
                                                                      {
                                                                        _fail(ATgetArgument(t, 1));
                                                                      }
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                PopChoice();
                                                                _fail(t);
                                                              }
                                                            else
                                                              {
                                                                t = l_21;
                                                              }
                                                          }
                                                          t = term_m_20;
                                                          t = bottomup_1_0(d_2, t);
                                                          LocalPopChoice(k_21);
                                                        }
                                                      else
                                                        {
                                                          t = j_21;
                                                          {
                                                            ATerm m_21 = t;
                                                            int n_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm z_30 = NULL;
                                                                t = p_22;
                                                                if((q_22 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, j_22, i_22);
                                                                t = genzip_4_0(e_2, g_2, h_2, i_2, t);
                                                                z_30 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, z_30), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, q_22, j_22)), v_22));
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(n_21);
                                                              }
                                                            else
                                                              {
                                                                t = m_21;
                                                                {
                                                                  ATerm o_21 = t;
                                                                  int p_21 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm q_31 = NULL;
                                                                      t = r_22;
                                                                      if((w_22 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                                      t = d_2(t);
                                                                      q_31 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_31, v_22);
                                                                      t = d_2(t);
                                                                      LocalPopChoice(p_21);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = o_21;
                                                                      t = b_23;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm q_21 = t;
                                                    int r_21 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm a_32 = NULL;
                                                        t = r_22;
                                                        if((w_22 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                        t = d_2(t);
                                                        a_32 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, a_32, v_22);
                                                        t = d_2(t);
                                                        LocalPopChoice(r_21);
                                                      }
                                                    else
                                                      {
                                                        t = q_21;
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm s_21 = t;
                                                      int t_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm e_32 = NULL;
                                                          t = r_22;
                                                          if((w_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, w_22);
                                                          t = d_2(t);
                                                          e_32 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_32, v_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(t_21);
                                                        }
                                                      else
                                                        {
                                                          t = s_21;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        y_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm u_21 = t;
                                                          int v_21 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm l_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              l_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, l_32);
                                                              t = d_2(t);
                                                              LocalPopChoice(v_21);
                                                            }
                                                          else
                                                            {
                                                              t = u_21;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = a_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = z_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm b_22 = t;
                                        int u_22 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_m_20;
                                            t = d_2(t);
                                            LocalPopChoice(u_22);
                                          }
                                        else
                                          {
                                            t = b_22;
                                            t = b_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            w_22 = ATgetArgument(t, 0);
                                            y_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm c_23 = t;
                                              int e_23 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm h_33 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                  t = d_2(t);
                                                  h_33 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, h_33);
                                                  t = d_2(t);
                                                  LocalPopChoice(e_23);
                                                }
                                              else
                                                {
                                                  t = c_23;
                                                  t = b_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                {
                                                  ATerm k_23 = t;
                                                  int l_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm m_33 = NULL;
                                                      t = r_22;
                                                      if((w_22 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, w_22);
                                                      t = d_2(t);
                                                      m_33 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_33, v_22);
                                                      t = d_2(t);
                                                      LocalPopChoice(l_23);
                                                    }
                                                  else
                                                    {
                                                      t = k_23;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm m_23 = t;
                                                      int n_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm s_33 = NULL;
                                                          t = r_22;
                                                          if((w_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                          t = d_2(t);
                                                          s_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, s_33, v_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(n_23);
                                                        }
                                                      else
                                                        {
                                                          t = m_23;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        y_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm o_23 = t;
                                                          int p_23 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              z_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, z_33);
                                                              t = d_2(t);
                                                              LocalPopChoice(p_23);
                                                            }
                                                          else
                                                            {
                                                              t = o_23;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Build_1))
                              {
                                r_22 = ATgetArgument(t, 0);
                                t = r_22;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    p_22 = ATgetArgument(t, 0);
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm r_23 = t;
                                            int s_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(s_23);
                                              }
                                            else
                                              {
                                                t = r_23;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                y_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm t_23 = t;
                                                  int u_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_34 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                      t = d_2(t);
                                                      x_34 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, x_34);
                                                      t = d_2(t);
                                                      LocalPopChoice(u_23);
                                                    }
                                                  else
                                                    {
                                                      t = t_23;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm v_23 = t;
                                                int w_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm x_23 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(w_23);
                                                    {
                                                      ATerm z_23 = t;
                                                      int i_24 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm g_35 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, r_22);
                                                          t = d_2(t);
                                                          g_35 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_35, v_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(i_24);
                                                        }
                                                      else
                                                        {
                                                          t = z_23;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = v_23;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        t = w_22;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            q_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm j_24 = t;
                                                              int k_24 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm m_35 = NULL,n_35 = NULL;
                                                                  t = p_22;
                                                                  if((q_22 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, q_22);
                                                                  t = d_2(t);
                                                                  n_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, n_35);
                                                                  t = d_2(t);
                                                                  m_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_35, v_22);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(k_24);
                                                                }
                                                              else
                                                                {
                                                                  t = j_24;
                                                                  t = b_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = b_23;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            w_22 = ATgetArgument(t, 0);
                                                            y_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm l_24 = t;
                                                              int m_24 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm l_36 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                                  t = d_2(t);
                                                                  l_36 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, l_36);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(m_24);
                                                                }
                                                              else
                                                                {
                                                                  t = l_24;
                                                                  t = b_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = b_23;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm x_24 = t;
                                            int h_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(h_25);
                                              }
                                            else
                                              {
                                                t = x_24;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                y_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm j_25 = t;
                                                  int k_25 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm a_37 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                      t = d_2(t);
                                                      a_37 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, a_37);
                                                      t = d_2(t);
                                                      LocalPopChoice(k_25);
                                                    }
                                                  else
                                                    {
                                                      t = j_25;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm n_25 = t;
                                                int p_25 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm s_25 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(p_25);
                                                    {
                                                      ATerm u_25 = t;
                                                      int v_25 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm g_37 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, r_22);
                                                          t = d_2(t);
                                                          g_37 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_37, v_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(v_25);
                                                        }
                                                      else
                                                        {
                                                          t = u_25;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = n_25;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        y_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm w_25 = t;
                                                          int x_25 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_37 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              z_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, z_37);
                                                              t = d_2(t);
                                                              LocalPopChoice(x_25);
                                                            }
                                                          else
                                                            {
                                                              t = w_25;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_PrimT_3))
                                  {
                                    r_22 = ATgetArgument(t, 0);
                                    k_22 = ATgetArgument(t, 1);
                                    l_22 = ATgetArgument(t, 2);
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm y_25 = t;
                                            int z_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(z_25);
                                              }
                                            else
                                              {
                                                t = y_25;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                y_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm a_26 = t;
                                                  int b_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm j_38 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                      t = d_2(t);
                                                      j_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, j_38);
                                                      t = d_2(t);
                                                      LocalPopChoice(b_26);
                                                    }
                                                  else
                                                    {
                                                      t = a_26;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm d_26 = t;
                                                int e_26 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm h_26 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(e_26);
                                                    {
                                                      ATerm r_26 = t;
                                                      int s_26 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm p_38 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, r_22, k_22, l_22);
                                                          t = d_2(t);
                                                          p_38 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_38, v_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(s_26);
                                                        }
                                                      else
                                                        {
                                                          t = r_26;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = d_26;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        y_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_26 = t;
                                                          int w_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_38 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              u_38 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, u_38);
                                                              t = d_2(t);
                                                              LocalPopChoice(w_26);
                                                            }
                                                          else
                                                            {
                                                              t = t_26;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm x_26 = t;
                                            int b_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(b_27);
                                              }
                                            else
                                              {
                                                t = x_26;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                y_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm f_27 = t;
                                                  int h_27 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm j_39 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                      t = d_2(t);
                                                      j_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, j_39);
                                                      t = d_2(t);
                                                      LocalPopChoice(h_27);
                                                    }
                                                  else
                                                    {
                                                      t = f_27;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    y_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm p_27 = t;
                                                      int q_27 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm v_39 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                          t = d_2(t);
                                                          v_39 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, v_39);
                                                          t = d_2(t);
                                                          LocalPopChoice(q_27);
                                                        }
                                                      else
                                                        {
                                                          t = p_27;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = b_23;
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            s_22 = ATgetArgument(t, 0);
                            t = s_22;
                            if(match_cons(t, sym_Op_2))
                              {
                                r_22 = ATgetArgument(t, 0);
                                k_22 = ATgetArgument(t, 1);
                                t = a_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = z_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm r_27 = t;
                                        int s_27 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_m_20;
                                            t = d_2(t);
                                            LocalPopChoice(s_27);
                                          }
                                        else
                                          {
                                            t = r_27;
                                            t = b_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            w_22 = ATgetArgument(t, 0);
                                            y_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm v_27 = t;
                                              int b_28 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm p_40 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                  t = d_2(t);
                                                  p_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, p_40);
                                                  t = d_2(t);
                                                  LocalPopChoice(b_28);
                                                }
                                              else
                                                {
                                                  t = v_27;
                                                  t = b_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                t = w_22;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    q_22 = ATgetArgument(t, 0);
                                                    j_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm e_28 = t;
                                                      int h_28 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, q_22, r_22);
                                                          {
                                                            ATerm i_28 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm u_17 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    u_17 = ATgetArgument(t, 0);
                                                                    if((u_17 != ATgetArgument(t, 1)))
                                                                      {
                                                                        _fail(ATgetArgument(t, 1));
                                                                      }
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                PopChoice();
                                                                _fail(t);
                                                              }
                                                            else
                                                              {
                                                                t = i_28;
                                                              }
                                                          }
                                                          t = term_m_20;
                                                          t = bottomup_1_0(d_2, t);
                                                          LocalPopChoice(h_28);
                                                        }
                                                      else
                                                        {
                                                          t = e_28;
                                                          {
                                                            ATerm k_28 = t;
                                                            int l_28 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm b_41 = NULL;
                                                                t = r_22;
                                                                if((q_22 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, j_22, k_22);
                                                                t = genzip_4_0(s_2, v_2, c_3, d_3, t);
                                                                b_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_41), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, q_22, j_22)));
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(l_28);
                                                              }
                                                            else
                                                              {
                                                                t = k_28;
                                                                {
                                                                  ATerm n_28 = t;
                                                                  int o_28 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = s_22;
                                                                      if((w_22 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                                      t = d_2(t);
                                                                      LocalPopChoice(o_28);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = n_28;
                                                                      t = b_23;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm q_28 = t;
                                                    int r_28 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = s_22;
                                                        if((w_22 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                        t = d_2(t);
                                                        LocalPopChoice(r_28);
                                                      }
                                                    else
                                                      {
                                                        t = q_28;
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm s_28 = t;
                                                      int t_28 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = s_22;
                                                          if((w_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, w_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(t_28);
                                                        }
                                                      else
                                                        {
                                                          t = s_28;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        y_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm u_28 = t;
                                                          int v_28 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_42 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              i_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, i_42);
                                                              t = d_2(t);
                                                              LocalPopChoice(v_28);
                                                            }
                                                          else
                                                            {
                                                              t = u_28;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = a_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = z_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm w_28 = t;
                                        int x_28 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_m_20;
                                            t = d_2(t);
                                            LocalPopChoice(x_28);
                                          }
                                        else
                                          {
                                            t = w_28;
                                            t = b_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            w_22 = ATgetArgument(t, 0);
                                            y_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm y_28 = t;
                                              int z_28 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm f_43 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                  t = d_2(t);
                                                  f_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, f_43);
                                                  t = d_2(t);
                                                  LocalPopChoice(z_28);
                                                }
                                              else
                                                {
                                                  t = y_28;
                                                  t = b_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                {
                                                  ATerm a_29 = t;
                                                  int b_29 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = s_22;
                                                      if((w_22 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, w_22);
                                                      t = d_2(t);
                                                      LocalPopChoice(b_29);
                                                    }
                                                  else
                                                    {
                                                      t = a_29;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm c_29 = t;
                                                      int d_29 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = s_22;
                                                          if((w_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(d_29);
                                                        }
                                                      else
                                                        {
                                                          t = c_29;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        y_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm e_29 = t;
                                                          int g_29 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_43 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              q_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, q_43);
                                                              t = d_2(t);
                                                              LocalPopChoice(g_29);
                                                            }
                                                          else
                                                            {
                                                              t = e_29;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Build_1))
                              {
                                s_22 = ATgetArgument(t, 0);
                                t = s_22;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    r_22 = ATgetArgument(t, 0);
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm h_29 = t;
                                            int i_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(i_29);
                                              }
                                            else
                                              {
                                                t = h_29;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                y_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm j_29 = t;
                                                  int k_29 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_44 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                      t = d_2(t);
                                                      p_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, p_44);
                                                      t = d_2(t);
                                                      LocalPopChoice(k_29);
                                                    }
                                                  else
                                                    {
                                                      t = j_29;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm l_29 = t;
                                                int m_29 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm o_29 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(m_29);
                                                    {
                                                      ATerm p_29 = t;
                                                      int q_29 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(q_29);
                                                        }
                                                      else
                                                        {
                                                          t = p_29;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = l_29;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        t = w_22;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            q_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm s_29 = t;
                                                              int t_29 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm a_45 = NULL;
                                                                  t = r_22;
                                                                  if((q_22 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, q_22);
                                                                  t = d_2(t);
                                                                  a_45 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, a_45);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(t_29);
                                                                }
                                                              else
                                                                {
                                                                  t = s_29;
                                                                  t = b_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = b_23;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            w_22 = ATgetArgument(t, 0);
                                                            y_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm u_29 = t;
                                                              int v_29 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm k_45 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                                  t = d_2(t);
                                                                  k_45 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, k_45);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(v_29);
                                                                }
                                                              else
                                                                {
                                                                  t = u_29;
                                                                  t = b_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = b_23;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm w_29 = t;
                                            int x_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(x_29);
                                              }
                                            else
                                              {
                                                t = w_29;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                y_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm y_29 = t;
                                                  int z_29 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_46 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                      t = d_2(t);
                                                      e_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, e_46);
                                                      t = d_2(t);
                                                      LocalPopChoice(z_29);
                                                    }
                                                  else
                                                    {
                                                      t = y_29;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm a_30 = t;
                                                int b_30 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm c_30 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(b_30);
                                                    {
                                                      ATerm d_30 = t;
                                                      int e_30 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(e_30);
                                                        }
                                                      else
                                                        {
                                                          t = d_30;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = a_30;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        y_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm f_30 = t;
                                                          int g_30 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_46 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              q_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, q_46);
                                                              t = d_2(t);
                                                              LocalPopChoice(g_30);
                                                            }
                                                          else
                                                            {
                                                              t = f_30;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_PrimT_3))
                                  {
                                    s_22 = ATgetArgument(t, 0);
                                    v_22 = ATgetArgument(t, 1);
                                    m_22 = ATgetArgument(t, 2);
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm h_30 = t;
                                            int i_30 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(i_30);
                                              }
                                            else
                                              {
                                                t = h_30;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                y_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm j_30 = t;
                                                  int k_30 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_47 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                      t = d_2(t);
                                                      e_47 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, e_47);
                                                      t = d_2(t);
                                                      LocalPopChoice(k_30);
                                                    }
                                                  else
                                                    {
                                                      t = j_30;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm m_30 = t;
                                                int n_30 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm o_30 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(n_30);
                                                    {
                                                      ATerm q_30 = t;
                                                      int r_30 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, s_22, v_22, m_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(r_30);
                                                        }
                                                      else
                                                        {
                                                          t = q_30;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = m_30;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        y_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm s_30 = t;
                                                          int t_30 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_47 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              u_47 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, u_47);
                                                              t = d_2(t);
                                                              LocalPopChoice(t_30);
                                                            }
                                                          else
                                                            {
                                                              t = s_30;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Let_2))
                                      {
                                        s_22 = ATgetArgument(t, 0);
                                        v_22 = ATgetArgument(t, 1);
                                        t = a_23;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = z_22;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm u_30 = t;
                                                int v_30 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_m_20;
                                                    t = d_2(t);
                                                    LocalPopChoice(v_30);
                                                  }
                                                else
                                                  {
                                                    t = u_30;
                                                    {
                                                      ATerm w_30 = t;
                                                      int x_30 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm t_48 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, v_22);
                                                          t = d_2(t);
                                                          t_48 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, s_22, t_48);
                                                          t = d_2(t);
                                                          LocalPopChoice(x_30);
                                                        }
                                                      else
                                                        {
                                                          t = w_30;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    y_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm i_31 = t;
                                                      int k_31 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm i_49 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                          t = d_2(t);
                                                          i_49 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, i_49);
                                                          t = d_2(t);
                                                          LocalPopChoice(k_31);
                                                        }
                                                      else
                                                        {
                                                          t = i_31;
                                                          {
                                                            ATerm m_31 = t;
                                                            int n_31 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm q_49 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, v_22);
                                                                t = d_2(t);
                                                                q_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, s_22, q_49);
                                                                t = d_2(t);
                                                                LocalPopChoice(n_31);
                                                              }
                                                            else
                                                              {
                                                                t = m_31;
                                                                t = b_23;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        y_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm o_31 = t;
                                                          int p_31 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_50 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, v_22);
                                                              t = d_2(t);
                                                              a_50 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, s_22, a_50);
                                                              t = d_2(t);
                                                              LocalPopChoice(p_31);
                                                            }
                                                          else
                                                            {
                                                              t = o_31;
                                                              {
                                                                ATerm r_31 = t;
                                                                int s_31 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm e_50 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                                    t = d_2(t);
                                                                    e_50 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, e_50);
                                                                    t = d_2(t);
                                                                    LocalPopChoice(s_31);
                                                                  }
                                                                else
                                                                  {
                                                                    t = r_31;
                                                                    t = b_23;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm t_31 = t;
                                                        int u_31 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm q_50 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, v_22);
                                                            t = d_2(t);
                                                            q_50 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, s_22, q_50);
                                                            t = d_2(t);
                                                            LocalPopChoice(u_31);
                                                          }
                                                        else
                                                          {
                                                            t = t_31;
                                                            t = b_23;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Scope_2))
                                          {
                                            s_22 = ATgetArgument(t, 0);
                                            v_22 = ATgetArgument(t, 1);
                                            t = a_23;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = z_22;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm v_31 = t;
                                                    int w_31 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_m_20;
                                                        t = d_2(t);
                                                        LocalPopChoice(w_31);
                                                      }
                                                    else
                                                      {
                                                        t = v_31;
                                                        {
                                                          ATerm x_31 = t;
                                                          int y_31 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm k_51 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, v_22);
                                                              t = d_2(t);
                                                              k_51 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, k_51);
                                                              t = d_2(t);
                                                              LocalPopChoice(y_31);
                                                            }
                                                          else
                                                            {
                                                              t = x_31;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        y_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm z_31 = t;
                                                          int b_32 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm t_51 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              t_51 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, t_51);
                                                              t = d_2(t);
                                                              LocalPopChoice(b_32);
                                                            }
                                                          else
                                                            {
                                                              t = z_31;
                                                              {
                                                                ATerm c_32 = t;
                                                                int d_32 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm a_52 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, v_22);
                                                                    t = d_2(t);
                                                                    a_52 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, a_52);
                                                                    t = d_2(t);
                                                                    LocalPopChoice(d_32);
                                                                  }
                                                                else
                                                                  {
                                                                    t = c_32;
                                                                    t = b_23;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            w_22 = ATgetArgument(t, 0);
                                                            y_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm f_32 = t;
                                                              int h_32 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm i_52 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, v_22);
                                                                  t = d_2(t);
                                                                  i_52 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, i_52);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(h_32);
                                                                }
                                                              else
                                                                {
                                                                  t = f_32;
                                                                  {
                                                                    ATerm i_32 = t;
                                                                    int j_32 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm q_52 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                                        t = d_2(t);
                                                                        q_52 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, q_52);
                                                                        t = d_2(t);
                                                                        LocalPopChoice(j_32);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = i_32;
                                                                        t = b_23;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm k_32 = t;
                                                            int m_32 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm x_52 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, v_22);
                                                                t = d_2(t);
                                                                x_52 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, x_52);
                                                                t = d_2(t);
                                                                LocalPopChoice(m_32);
                                                              }
                                                            else
                                                              {
                                                                t = k_32;
                                                                t = b_23;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = a_23;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = z_22;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm n_32 = t;
                                                    int o_32 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_m_20;
                                                        t = d_2(t);
                                                        LocalPopChoice(o_32);
                                                      }
                                                    else
                                                      {
                                                        t = n_32;
                                                        t = b_23;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        y_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm p_32 = t;
                                                          int q_32 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_53 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              n_53 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, n_53);
                                                              t = d_2(t);
                                                              LocalPopChoice(q_32);
                                                            }
                                                          else
                                                            {
                                                              t = p_32;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            w_22 = ATgetArgument(t, 0);
                                                            y_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm s_32 = t;
                                                              int u_32 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm u_53 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                                  t = d_2(t);
                                                                  u_53 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, u_53);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(u_32);
                                                                }
                                                              else
                                                                {
                                                                  t = s_32;
                                                                  t = b_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = b_23;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
            else
              {
                if(match_cons(t, sym_LChoice_2))
                  {
                    a_23 = ATgetArgument(t, 0);
                    z_22 = ATgetArgument(t, 1);
                    t = z_22;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = a_23;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm w_32 = t;
                            int x_32 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_y_19;
                                t = d_2(t);
                                LocalPopChoice(x_32);
                              }
                            else
                              {
                                t = w_32;
                                t = a_23;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = z_22;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    w_22 = ATgetArgument(t, 0);
                                    y_22 = ATgetArgument(t, 1);
                                    t = a_23;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        w_22 = ATgetArgument(t, 0);
                                        t = a_23;
                                      }
                                    else
                                      {
                                        t = a_23;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = a_23;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm z_32 = t;
                            int a_33 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_y_19;
                                t = d_2(t);
                                LocalPopChoice(a_33);
                              }
                            else
                              {
                                t = z_32;
                                {
                                  ATerm b_33 = t;
                                  int c_33 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = z_22;
                                      if((a_23 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(c_33);
                                    }
                                  else
                                    {
                                      t = b_33;
                                      t = b_23;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = z_22;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    w_22 = ATgetArgument(t, 0);
                                    y_22 = ATgetArgument(t, 1);
                                    {
                                      ATerm d_33 = t;
                                      int e_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm p_57 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, y_22, z_22);
                                          t = d_2(t);
                                          p_57 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, w_22, p_57);
                                          t = d_2(t);
                                          LocalPopChoice(e_33);
                                        }
                                      else
                                        {
                                          t = d_33;
                                          {
                                            ATerm f_33 = t;
                                            int g_33 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = z_22;
                                                if((a_23 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(g_33);
                                              }
                                            else
                                              {
                                                t = f_33;
                                                t = b_23;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        w_22 = ATgetArgument(t, 0);
                                        {
                                          ATerm i_33 = t;
                                          int j_33 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = z_22;
                                              if((a_23 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(j_33);
                                            }
                                          else
                                            {
                                              t = i_33;
                                              {
                                                ATerm k_33 = t;
                                                int l_33 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = w_22;
                                                    t = topdown_1_0(e_3, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                    t = bottomup_1_0(d_2, t);
                                                    LocalPopChoice(l_33);
                                                  }
                                                else
                                                  {
                                                    t = k_33;
                                                    t = b_23;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm n_33 = t;
                                        int o_33 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = z_22;
                                            if((a_23 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(o_33);
                                          }
                                        else
                                          {
                                            t = n_33;
                                            t = b_23;
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        a_23 = ATgetArgument(t, 0);
                        z_22 = ATgetArgument(t, 1);
                        t = z_22;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = a_23;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm p_33 = t;
                                int q_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_y_19;
                                    t = d_2(t);
                                    LocalPopChoice(q_33);
                                  }
                                else
                                  {
                                    t = p_33;
                                    t = z_22;
                                  }
                              }
                            else
                              {
                                ATerm r_33 = t;
                                int t_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_y_19;
                                    t = d_2(t);
                                    LocalPopChoice(t_33);
                                  }
                                else
                                  {
                                    t = r_33;
                                    t = b_23;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = a_23;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm u_33 = t;
                                    int v_33 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_m_20;
                                        t = d_2(t);
                                        LocalPopChoice(v_33);
                                      }
                                    else
                                      {
                                        t = u_33;
                                        t = z_22;
                                      }
                                  }
                                else
                                  {
                                    ATerm w_33 = t;
                                    int x_33 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_m_20;
                                        t = d_2(t);
                                        LocalPopChoice(x_33);
                                      }
                                    else
                                      {
                                        t = w_33;
                                        t = b_23;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    s_22 = ATgetArgument(t, 0);
                                    v_22 = ATgetArgument(t, 1);
                                    t = a_23;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        ATerm y_33 = t;
                                        int b_34 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm v_60 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, a_23, s_22);
                                            t = conc_0_0(t);
                                            v_60 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, v_60, v_22);
                                            t = bottomup_1_0(d_2, t);
                                            LocalPopChoice(b_34);
                                          }
                                        else
                                          {
                                            t = y_33;
                                            t = b_23;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = a_23;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        t = b_23;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm c_34 = t;
                        int d_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm e_34 = ATgetArgument(t, 0);
                                z_22 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(d_34);
                            t = z_22;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm f_34 = t;
                                int g_34 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_y_19;
                                    t = d_2(t);
                                    LocalPopChoice(g_34);
                                  }
                                else
                                  {
                                    t = f_34;
                                    t = b_23;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm h_34 = t;
                                    int j_34 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_m_20;
                                        t = d_2(t);
                                        LocalPopChoice(j_34);
                                      }
                                    else
                                      {
                                        t = h_34;
                                        t = b_23;
                                      }
                                  }
                                else
                                  {
                                    t = b_23;
                                  }
                              }
                          }
                        else
                          {
                            t = c_34;
                            if(match_cons(t, sym_All_1))
                              {
                                a_23 = ATgetArgument(t, 0);
                                t = a_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm n_34 = t;
                                    int o_34 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_y_19;
                                        t = d_2(t);
                                        LocalPopChoice(o_34);
                                      }
                                    else
                                      {
                                        t = n_34;
                                        t = b_23;
                                      }
                                  }
                                else
                                  {
                                    t = b_23;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    a_23 = ATgetArgument(t, 0);
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm p_34 = t;
                                        int q_34 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_y_19;
                                            t = d_2(t);
                                            LocalPopChoice(q_34);
                                          }
                                        else
                                          {
                                            t = p_34;
                                            {
                                              ATerm r_34 = t;
                                              int s_34 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm t_61 = NULL,u_61 = NULL,w_61 = NULL,f_62 = NULL,g_62 = NULL,i_62 = NULL,l_62 = NULL,s_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL;
                                                  t = b_23;
                                                  t = new_0_0(t);
                                                  t_61 = t;
                                                  t = bottomup_1_0(d_2, t);
                                                  c_63 = t;
                                                  t = (ATerm) ATempty;
                                                  t = d_2(t);
                                                  d_63 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(d_63), c_63);
                                                  t = d_2(t);
                                                  u_61 = t;
                                                  t = t_61;
                                                  t = bottomup_1_0(d_2, t);
                                                  b_63 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, b_63);
                                                  t = d_2(t);
                                                  a_63 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, a_63);
                                                  t = d_2(t);
                                                  f_62 = t;
                                                  t = a_23;
                                                  t = bottomup_1_0(d_2, t);
                                                  i_62 = t;
                                                  t = t_61;
                                                  t = bottomup_1_0(d_2, t);
                                                  z_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, z_62);
                                                  t = d_2(t);
                                                  s_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, s_62);
                                                  t = d_2(t);
                                                  l_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_62, l_62);
                                                  t = d_2(t);
                                                  g_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_62, g_62);
                                                  t = d_2(t);
                                                  w_61 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, u_61, w_61);
                                                  t = d_2(t);
                                                  LocalPopChoice(s_34);
                                                }
                                              else
                                                {
                                                  t = r_34;
                                                  t = b_23;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm t_34 = t;
                                            int w_34 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(w_34);
                                              }
                                            else
                                              {
                                                t = t_34;
                                                {
                                                  ATerm b_35 = t;
                                                  int c_35 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL;
                                                      t = b_23;
                                                      t = new_0_0(t);
                                                      g_63 = t;
                                                      t = bottomup_1_0(d_2, t);
                                                      r_63 = t;
                                                      t = (ATerm) ATempty;
                                                      t = d_2(t);
                                                      s_63 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(s_63), r_63);
                                                      t = d_2(t);
                                                      h_63 = t;
                                                      t = g_63;
                                                      t = bottomup_1_0(d_2, t);
                                                      q_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, q_63);
                                                      t = d_2(t);
                                                      p_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, p_63);
                                                      t = d_2(t);
                                                      j_63 = t;
                                                      t = a_23;
                                                      t = bottomup_1_0(d_2, t);
                                                      l_63 = t;
                                                      t = g_63;
                                                      t = bottomup_1_0(d_2, t);
                                                      o_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, o_63);
                                                      t = d_2(t);
                                                      n_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, n_63);
                                                      t = d_2(t);
                                                      m_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_63, m_63);
                                                      t = d_2(t);
                                                      k_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_63, k_63);
                                                      t = d_2(t);
                                                      i_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, h_63, i_63);
                                                      t = d_2(t);
                                                      LocalPopChoice(c_35);
                                                    }
                                                  else
                                                    {
                                                      t = b_35;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                y_22 = ATgetArgument(t, 1);
                                                t = y_22;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    z_21 = ATgetArgument(t, 0);
                                                    f_22 = ATgetArgument(t, 1);
                                                    t = z_21;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        a_22 = ATgetArgument(t, 0);
                                                        t = w_22;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            q_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm d_35 = t;
                                                              int f_35 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm d_64 = NULL,k_64 = NULL,o_64 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, a_22);
                                                                  t = d_2(t);
                                                                  o_64 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, o_64, f_22);
                                                                  t = d_2(t);
                                                                  k_64 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, k_64);
                                                                  t = d_2(t);
                                                                  d_64 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, d_64);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(f_35);
                                                                }
                                                              else
                                                                {
                                                                  t = d_35;
                                                                  {
                                                                    ATerm h_35 = t;
                                                                    int i_35 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm q_64 = NULL,r_64 = NULL,t_64 = NULL,u_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL;
                                                                        t = b_23;
                                                                        t = new_0_0(t);
                                                                        q_64 = t;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        g_65 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = d_2(t);
                                                                        h_65 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(h_65), g_65);
                                                                        t = d_2(t);
                                                                        r_64 = t;
                                                                        t = q_64;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        f_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, f_65);
                                                                        t = d_2(t);
                                                                        e_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, e_65);
                                                                        t = d_2(t);
                                                                        u_64 = t;
                                                                        t = a_23;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        x_64 = t;
                                                                        t = q_64;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        d_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, d_65);
                                                                        t = d_2(t);
                                                                        c_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, c_65);
                                                                        t = d_2(t);
                                                                        y_64 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, x_64, y_64);
                                                                        t = d_2(t);
                                                                        w_64 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, u_64, w_64);
                                                                        t = d_2(t);
                                                                        t_64 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, r_64, t_64);
                                                                        t = d_2(t);
                                                                        LocalPopChoice(i_35);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = h_35;
                                                                        t = b_23;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm j_35 = t;
                                                            int k_35 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm k_65 = NULL,l_65 = NULL,n_65 = NULL,x_65 = NULL,a_66 = NULL,i_66 = NULL,m_66 = NULL,n_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL;
                                                                t = b_23;
                                                                t = new_0_0(t);
                                                                k_65 = t;
                                                                t = bottomup_1_0(d_2, t);
                                                                z_66 = t;
                                                                t = (ATerm) ATempty;
                                                                t = d_2(t);
                                                                a_67 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(a_67), z_66);
                                                                t = d_2(t);
                                                                l_65 = t;
                                                                t = k_65;
                                                                t = bottomup_1_0(d_2, t);
                                                                y_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, y_66);
                                                                t = d_2(t);
                                                                x_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, x_66);
                                                                t = d_2(t);
                                                                x_65 = t;
                                                                t = a_23;
                                                                t = bottomup_1_0(d_2, t);
                                                                i_66 = t;
                                                                t = k_65;
                                                                t = bottomup_1_0(d_2, t);
                                                                w_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, w_66);
                                                                t = d_2(t);
                                                                n_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, n_66);
                                                                t = d_2(t);
                                                                m_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_66, m_66);
                                                                t = d_2(t);
                                                                a_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, x_65, a_66);
                                                                t = d_2(t);
                                                                n_65 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, l_65, n_65);
                                                                t = d_2(t);
                                                                LocalPopChoice(k_35);
                                                              }
                                                            else
                                                              {
                                                                t = j_35;
                                                                t = b_23;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = w_22;
                                                        {
                                                          ATerm l_35 = t;
                                                          int o_35 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL,l_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL;
                                                              t = b_23;
                                                              t = new_0_0(t);
                                                              f_67 = t;
                                                              t = bottomup_1_0(d_2, t);
                                                              z_67 = t;
                                                              t = (ATerm) ATempty;
                                                              t = d_2(t);
                                                              a_68 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(a_68), z_67);
                                                              t = d_2(t);
                                                              g_67 = t;
                                                              t = f_67;
                                                              t = bottomup_1_0(d_2, t);
                                                              y_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, y_67);
                                                              t = d_2(t);
                                                              x_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, x_67);
                                                              t = d_2(t);
                                                              i_67 = t;
                                                              t = a_23;
                                                              t = bottomup_1_0(d_2, t);
                                                              t_67 = t;
                                                              t = f_67;
                                                              t = bottomup_1_0(d_2, t);
                                                              w_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, w_67);
                                                              t = d_2(t);
                                                              v_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, v_67);
                                                              t = d_2(t);
                                                              u_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_67, u_67);
                                                              t = d_2(t);
                                                              l_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_67, l_67);
                                                              t = d_2(t);
                                                              h_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, g_67, h_67);
                                                              t = d_2(t);
                                                              LocalPopChoice(o_35);
                                                            }
                                                          else
                                                            {
                                                              t = l_35;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = w_22;
                                                    {
                                                      ATerm p_35 = t;
                                                      int q_35 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm f_68 = NULL,g_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,v_68 = NULL,z_68 = NULL,c_69 = NULL,d_69 = NULL,g_69 = NULL,j_69 = NULL;
                                                          t = b_23;
                                                          t = new_0_0(t);
                                                          f_68 = t;
                                                          t = bottomup_1_0(d_2, t);
                                                          g_69 = t;
                                                          t = (ATerm) ATempty;
                                                          t = d_2(t);
                                                          j_69 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(j_69), g_69);
                                                          t = d_2(t);
                                                          g_68 = t;
                                                          t = f_68;
                                                          t = bottomup_1_0(d_2, t);
                                                          d_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, d_69);
                                                          t = d_2(t);
                                                          c_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, c_69);
                                                          t = d_2(t);
                                                          n_68 = t;
                                                          t = a_23;
                                                          t = bottomup_1_0(d_2, t);
                                                          p_68 = t;
                                                          t = f_68;
                                                          t = bottomup_1_0(d_2, t);
                                                          z_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, z_68);
                                                          t = d_2(t);
                                                          v_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, v_68);
                                                          t = d_2(t);
                                                          q_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_68, q_68);
                                                          t = d_2(t);
                                                          o_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_68, o_68);
                                                          t = d_2(t);
                                                          m_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, g_68, m_68);
                                                          t = d_2(t);
                                                          LocalPopChoice(q_35);
                                                        }
                                                      else
                                                        {
                                                          t = p_35;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm r_35 = t;
                                                      int s_35 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, w_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(s_35);
                                                        }
                                                      else
                                                        {
                                                          t = r_35;
                                                          {
                                                            ATerm u_35 = t;
                                                            int v_35 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm r_69 = NULL,s_69 = NULL,t_69 = NULL,u_69 = NULL,w_69 = NULL,x_69 = NULL,y_69 = NULL,z_69 = NULL,e_70 = NULL,j_70 = NULL,t_70 = NULL,u_70 = NULL,x_70 = NULL;
                                                                t = b_23;
                                                                t = new_0_0(t);
                                                                r_69 = t;
                                                                t = bottomup_1_0(d_2, t);
                                                                u_70 = t;
                                                                t = (ATerm) ATempty;
                                                                t = d_2(t);
                                                                x_70 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(x_70), u_70);
                                                                t = d_2(t);
                                                                s_69 = t;
                                                                t = r_69;
                                                                t = bottomup_1_0(d_2, t);
                                                                t_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, t_70);
                                                                t = d_2(t);
                                                                j_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, j_70);
                                                                t = d_2(t);
                                                                u_69 = t;
                                                                t = a_23;
                                                                t = bottomup_1_0(d_2, t);
                                                                x_69 = t;
                                                                t = r_69;
                                                                t = bottomup_1_0(d_2, t);
                                                                e_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, e_70);
                                                                t = d_2(t);
                                                                z_69 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, z_69);
                                                                t = d_2(t);
                                                                y_69 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, x_69, y_69);
                                                                t = d_2(t);
                                                                w_69 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, u_69, w_69);
                                                                t = d_2(t);
                                                                t_69 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, s_69, t_69);
                                                                t = d_2(t);
                                                                LocalPopChoice(v_35);
                                                              }
                                                            else
                                                              {
                                                                t = u_35;
                                                                t = b_23;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm w_35 = t;
                                                    int x_35 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,q_71 = NULL;
                                                        t = b_23;
                                                        t = new_0_0(t);
                                                        a_71 = t;
                                                        t = bottomup_1_0(d_2, t);
                                                        n_71 = t;
                                                        t = (ATerm) ATempty;
                                                        t = d_2(t);
                                                        q_71 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(q_71), n_71);
                                                        t = d_2(t);
                                                        b_71 = t;
                                                        t = a_71;
                                                        t = bottomup_1_0(d_2, t);
                                                        m_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, m_71);
                                                        t = d_2(t);
                                                        l_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, l_71);
                                                        t = d_2(t);
                                                        d_71 = t;
                                                        t = a_23;
                                                        t = bottomup_1_0(d_2, t);
                                                        h_71 = t;
                                                        t = a_71;
                                                        t = bottomup_1_0(d_2, t);
                                                        k_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, k_71);
                                                        t = d_2(t);
                                                        j_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, j_71);
                                                        t = d_2(t);
                                                        i_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, h_71, i_71);
                                                        t = d_2(t);
                                                        e_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, d_71, e_71);
                                                        t = d_2(t);
                                                        c_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, b_71, c_71);
                                                        t = d_2(t);
                                                        LocalPopChoice(x_35);
                                                      }
                                                    else
                                                      {
                                                        t = w_35;
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Match_1))
                                      {
                                        a_23 = ATgetArgument(t, 0);
                                        t = a_23;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm y_35 = t;
                                            int c_36 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_y_19;
                                                t = d_2(t);
                                                LocalPopChoice(c_36);
                                              }
                                            else
                                              {
                                                t = y_35;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            t = b_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            a_23 = ATgetArgument(t, 0);
                                            t = a_23;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm d_36 = t;
                                                int e_36 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_m_20;
                                                    t = d_2(t);
                                                    LocalPopChoice(e_36);
                                                  }
                                                else
                                                  {
                                                    t = d_36;
                                                    t = b_23;
                                                  }
                                              }
                                            else
                                              {
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                a_23 = ATgetArgument(t, 0);
                                                t = a_23;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm f_36 = t;
                                                    int g_36 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_m_20;
                                                        t = d_2(t);
                                                        LocalPopChoice(g_36);
                                                      }
                                                    else
                                                      {
                                                        t = f_36;
                                                        t = b_23;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = b_23;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm j_36 = t;
                                                int k_36 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm m_36 = ATgetArgument(t, 0);
                                                        z_22 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(k_36);
                                                    t = z_22;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm n_36 = t;
                                                        int o_36 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_m_20;
                                                            t = d_2(t);
                                                            LocalPopChoice(o_36);
                                                          }
                                                        else
                                                          {
                                                            t = n_36;
                                                            t = b_23;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = j_36;
                                                    {
                                                      ATerm p_36 = t;
                                                      int q_36 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm r_36 = ATgetArgument(t, 0);
                                                              z_22 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(q_36);
                                                          {
                                                            ATerm t_36 = t;
                                                            int u_36 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = z_22;
                                                                t = fetch_1_0(f_3, t);
                                                                t = term_m_20;
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(u_36);
                                                              }
                                                            else
                                                              {
                                                                t = t_36;
                                                                t = b_23;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = p_36;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              a_23 = ATgetArgument(t, 0);
                                                              z_22 = ATgetArgument(t, 1);
                                                              t = z_22;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = a_23;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = z_22;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          w_22 = ATgetArgument(t, 0);
                                                                          y_22 = ATgetArgument(t, 1);
                                                                          t = a_23;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = a_23;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = a_23;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = z_22;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          w_22 = ATgetArgument(t, 0);
                                                                          y_22 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm v_36 = t;
                                                                            int w_36 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm y_73 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, y_22, z_22);
                                                                                t = d_2(t);
                                                                                y_73 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, w_22, y_73);
                                                                                t = d_2(t);
                                                                                LocalPopChoice(w_36);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = v_36;
                                                                                {
                                                                                  ATerm y_36 = t;
                                                                                  int z_36 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = z_22;
                                                                                      if((a_23 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(z_36);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = y_36;
                                                                                      t = b_23;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm b_37 = t;
                                                                          int c_37 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = z_22;
                                                                              if((a_23 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(c_37);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = b_37;
                                                                              t = b_23;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  a_23 = ATgetArgument(t, 0);
                                                                  z_22 = ATgetArgument(t, 1);
                                                                  y_21 = ATgetArgument(t, 2);
                                                                  t = y_21;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm d_37 = t;
                                                                      int f_37 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, z_22);
                                                                          t = d_2(t);
                                                                          LocalPopChoice(f_37);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = d_37;
                                                                          t = b_23;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = b_23;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      a_23 = ATgetArgument(t, 0);
                                                                      z_22 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm h_37 = t;
                                                                        int i_37 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, a_23, z_22);
                                                                            t = d_2(t);
                                                                            LocalPopChoice(i_37);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = h_37;
                                                                            t = b_23;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          a_23 = ATgetArgument(t, 0);
                                                                          t = a_23;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              w_22 = ATgetFirst((ATermList) t);
                                                                              y_22 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm j_37 = t;
                                                                                int k_37 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm m_74 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, y_22);
                                                                                    t = d_2(t);
                                                                                    m_74 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, w_22, m_74);
                                                                                    t = d_2(t);
                                                                                    LocalPopChoice(k_37);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = j_37;
                                                                                    t = b_23;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm l_37 = t;
                                                                                  int m_37 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_m_20;
                                                                                      t = d_2(t);
                                                                                      LocalPopChoice(m_37);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = l_37;
                                                                                      t = b_23;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = b_23;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              a_23 = ATgetArgument(t, 0);
                                                                              t = a_23;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  w_22 = ATgetFirst((ATermList) t);
                                                                                  y_22 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm n_37 = t;
                                                                                    int o_37 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm w_74 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, y_22);
                                                                                        t = d_2(t);
                                                                                        w_74 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, w_22, w_74);
                                                                                        t = d_2(t);
                                                                                        LocalPopChoice(o_37);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = n_37;
                                                                                        t = b_23;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm p_37 = t;
                                                                                      int r_37 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_m_20;
                                                                                          t = d_2(t);
                                                                                          LocalPopChoice(r_37);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = p_37;
                                                                                          t = b_23;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = b_23;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  a_23 = ATgetArgument(t, 0);
                                                                                  t = a_23;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      w_22 = ATgetFirst((ATermList) t);
                                                                                      y_22 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm s_37 = t;
                                                                                        int x_37 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm i_75 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, y_22);
                                                                                            t = d_2(t);
                                                                                            i_75 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, i_75);
                                                                                            t = d_2(t);
                                                                                            LocalPopChoice(x_37);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = s_37;
                                                                                            t = b_23;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm y_37 = t;
                                                                                          int a_38 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_y_19;
                                                                                              t = d_2(t);
                                                                                              LocalPopChoice(a_38);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = y_37;
                                                                                              t = b_23;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = b_23;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      a_23 = ATgetArgument(t, 0);
                                                                                      z_22 = ATgetArgument(t, 1);
                                                                                      y_21 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm b_38 = t;
                                                                                        int c_38 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL;
                                                                                            t = term_d_38;
                                                                                            t = bottomup_1_0(d_2, t);
                                                                                            z_75 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = d_2(t);
                                                                                            c_76 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(c_76), y_21);
                                                                                            t = d_2(t);
                                                                                            b_76 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(b_76), a_23);
                                                                                            t = d_2(t);
                                                                                            a_76 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, z_75, a_76);
                                                                                            t = d_2(t);
                                                                                            y_75 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, z_22, y_75);
                                                                                            t = d_2(t);
                                                                                            LocalPopChoice(c_38);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = b_38;
                                                                                            t = b_23;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          a_23 = ATgetArgument(t, 0);
                                                                                          z_22 = ATgetArgument(t, 1);
                                                                                          y_21 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm e_38 = t;
                                                                                            int f_38 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, z_22);
                                                                                                t = d_2(t);
                                                                                                k_76 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, y_21);
                                                                                                t = d_2(t);
                                                                                                p_76 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = d_2(t);
                                                                                                q_76 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(q_76), p_76);
                                                                                                t = d_2(t);
                                                                                                o_76 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(o_76), a_23);
                                                                                                t = d_2(t);
                                                                                                l_76 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(l_76), k_76);
                                                                                                t = d_2(t);
                                                                                                j_76 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, j_76);
                                                                                                t = d_2(t);
                                                                                                LocalPopChoice(f_38);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = e_38;
                                                                                                t = b_23;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              a_23 = ATgetArgument(t, 0);
                                                                                              z_22 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm g_38 = t;
                                                                                                int h_38 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm w_76 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, z_22);
                                                                                                    t = d_2(t);
                                                                                                    w_76 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, w_76);
                                                                                                    t = d_2(t);
                                                                                                    LocalPopChoice(h_38);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = g_38;
                                                                                                    t = b_23;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  a_23 = ATgetArgument(t, 0);
                                                                                                  z_22 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm i_38 = t;
                                                                                                    int k_38 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm j_77 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, a_23);
                                                                                                        t = d_2(t);
                                                                                                        j_77 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, j_77, z_22);
                                                                                                        t = d_2(t);
                                                                                                        LocalPopChoice(k_38);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = i_38;
                                                                                                        t = b_23;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      a_23 = ATgetArgument(t, 0);
                                                                                                      z_22 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm l_38 = t;
                                                                                                        int m_38 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm u_77 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, z_22);
                                                                                                            t = d_2(t);
                                                                                                            u_77 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, u_77, a_23);
                                                                                                            t = d_2(t);
                                                                                                            LocalPopChoice(m_38);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = l_38;
                                                                                                            t = b_23;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          a_23 = ATgetArgument(t, 0);
                                                                                                          z_22 = ATgetArgument(t, 1);
                                                                                                          t = z_22;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              s_22 = ATgetArgument(t, 0);
                                                                                                              v_22 = ATgetArgument(t, 1);
                                                                                                              t = a_23;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = z_22;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm n_38 = t;
                                                                                                                  int o_38 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm q_78 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, a_23, s_22);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      q_78 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, q_78, v_22);
                                                                                                                      t = bottomup_1_0(d_2, t);
                                                                                                                      LocalPopChoice(o_38);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = n_38;
                                                                                                                      t = b_23;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  s_22 = ATgetArgument(t, 0);
                                                                                                                  v_22 = ATgetArgument(t, 1);
                                                                                                                  m_22 = ATgetArgument(t, 2);
                                                                                                                  t = m_22;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = v_22;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = s_22;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              r_22 = ATgetArgument(t, 0);
                                                                                                                              t = a_23;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = z_22;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      w_22 = ATgetFirst((ATermList) t);
                                                                                                                                      y_22 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = y_22;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = w_22;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              q_22 = ATgetArgument(t, 0);
                                                                                                                                              j_22 = ATgetArgument(t, 1);
                                                                                                                                              g_22 = ATgetArgument(t, 2);
                                                                                                                                              h_22 = ATgetArgument(t, 3);
                                                                                                                                              t = g_22;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = j_22;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm q_38 = t;
                                                                                                                                                      int r_38 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = r_22;
                                                                                                                                                          if((q_22 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = h_22;
                                                                                                                                                          {
                                                                                                                                                            ATerm s_38 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm g_3 (ATerm t);
                                                                                                                                                                static ATerm g_3 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm t_38 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(t_38, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((q_22 != ATgetArgument(t_38, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(t_38, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm v_38 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(v_38) != AT_LIST) || !(ATisEmpty(v_38))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm w_38 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(w_38) != AT_LIST) || !(ATisEmpty(w_38))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  return(t);
                                                                                                                                                                }
                                                                                                                                                                t = oncetd_1_0(g_3, t);
                                                                                                                                                                PopChoice();
                                                                                                                                                                _fail(t);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                t = s_38;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = h_22;
                                                                                                                                                          t = bottomup_1_0(d_2, t);
                                                                                                                                                          LocalPopChoice(r_38);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = q_38;
                                                                                                                                                          t = b_23;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = b_23;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = b_23;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = b_23;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = b_23;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = b_23;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = a_23;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = z_22;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = b_23;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = a_23;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = z_22;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = b_23;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = a_23;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = z_22;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = b_23;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = a_23;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = z_22;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = b_23;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              a_23 = ATgetArgument(t, 0);
                                                                                                              z_22 = ATgetArgument(t, 1);
                                                                                                              t = a_23;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = z_22;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = b_23;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = b_23;
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return(t);
  }
  t = bottomup_1_0(d_2, t);
  return(t);
}
ATerm SubsArgCall2_0_0 (ATerm t)
{
  ATerm k_80 = NULL,l_80 = NULL,n_80 = NULL,o_80 = NULL,h_18 = NULL,i_18 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm x_38 = ATgetArgument(t, 0);
      if(match_cons(x_38, sym_SVar_1))
        {
          n_80 = ATgetArgument(x_38, 0);
        }
      else
        _fail(t);
      k_80 = ATgetArgument(t, 1);
      l_80 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_80), (ATerm)ATempty, (ATerm) ATempty);
  h_18 = t;
  t = term_b_39;
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_39, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_80), (ATerm)ATempty, (ATerm) ATempty));
  t = i_7(i_18, h_18, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm c_39 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_39) != ATmakeSymbol("o_0", 0, ATtrue)))
        _fail(t);
      o_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_80), k_80, l_80);
  return(t);
}
ATerm SubsArgCall1_0_0 (ATerm t)
{
  ATerm p_80 = NULL,q_80 = NULL,l_18 = NULL;
  p_80 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm d_39 = ATgetArgument(t, 0);
      if(match_cons(d_39, sym_SVar_1))
        {
          ATerm i_39 = ATgetArgument(d_39, 0);
        }
      else
        _fail(t);
      {
        ATerm g_39 = ATgetArgument(t, 1);
        if(((ATgetType(g_39) != AT_LIST) || !(ATisEmpty(g_39))))
          _fail(t);
      }
      {
        ATerm h_39 = ATgetArgument(t, 2);
        if(((ATgetType(h_39) != AT_LIST) || !(ATisEmpty(h_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_m_39;
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_39, p_80);
  t = i_7(l_18, p_80, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm n_39 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_39) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
      q_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_80;
  t = strename_0_0(t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_b_39;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_m_39;
  return(t);
}
ATerm substitute_arg_0_0 (ATerm t)
{
  ATerm t_81 = NULL,u_81 = NULL,z_81 = NULL,d_82 = NULL,e_82 = NULL,h_82 = NULL,i_82 = NULL,k_82 = NULL,l_82 = NULL,n_82 = NULL,r_82 = NULL;
  e_82 = t;
  if(match_cons(t, sym__2))
    {
      h_82 = ATgetArgument(t, 0);
      r_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_82;
  if(match_cons(t, sym_VarDec_2))
    {
      i_82 = ATgetArgument(t, 0);
      k_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_82;
  if(match_cons(t, sym_FunType_2))
    {
      l_82 = ATgetArgument(t, 0);
      {
        ATerm o_39 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = l_82;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_39 = ATgetFirst((ATermList) t);
      n_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_82;
  {
    ATerm r_39 = t;
    int s_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_39 = ATgetFirst((ATermList) t);
            ATerm u_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(s_39);
        {
          ATerm d_83 = NULL,e_83 = NULL;
          t = r_82;
          if(match_cons(t, sym_CallT_3))
            {
              t_81 = ATgetArgument(t, 0);
              z_81 = ATgetArgument(t, 1);
              d_82 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = t_81;
          if(match_cons(t, sym_SVar_1))
            {
              u_81 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_81;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = d_82;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_82), (ATerm)ATempty, (ATerm) ATempty);
          d_83 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_39, u_81);
          e_83 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_82), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_w_39, u_81));
          t = u_13(h_3, d_83, e_83, t);
          t = e_82;
        }
      }
    else
      {
        t = r_39;
        {
          ATerm v_83 = NULL,b_84 = NULL;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_82), (ATerm)ATempty, (ATerm) ATempty);
          v_83 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_39, r_82);
          b_84 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_82), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_x_39, r_82));
          t = u_13(i_3, v_83, b_84, t);
          t = e_82;
        }
      }
  }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_m_39;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_b_39;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_39 = ATgetArgument(t, 0);
      if(((ATgetType(y_39) != AT_LIST) || !(ATisEmpty(y_39))))
        _fail(t);
      {
        ATerm z_39 = ATgetArgument(t, 1);
        if(((ATgetType(z_39) != AT_LIST) || !(ATisEmpty(z_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm k_84 = NULL,p_84 = NULL,q_84 = NULL,s_84 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_40 = ATgetArgument(t, 0);
      if(((ATgetType(a_40) == AT_LIST) && !(ATisEmpty(a_40))))
        {
          k_84 = ATgetFirst((ATermList) a_40);
          p_84 = (ATerm) ATgetNext((ATermList) a_40);
        }
      else
        _fail(t);
      {
        ATerm d_40 = ATgetArgument(t, 1);
        if(((ATgetType(d_40) == AT_LIST) && !(ATisEmpty(d_40))))
          {
            q_84 = ATgetFirst((ATermList) d_40);
            s_84 = (ATerm) ATgetNext((ATermList) d_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_84, q_84), (ATerm) ATmakeAppl(sym__2, p_84, s_84));
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm r_85 = NULL,s_85 = NULL;
  if(match_cons(t, sym__2))
    {
      r_85 = ATgetArgument(t, 0);
      s_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_85), r_85);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm e_40 = t;
  int f_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_40 = t;
      int h_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SubsArgCall1_0_0(t);
          LocalPopChoice(h_40);
        }
      else
        {
          t = g_40;
          t = SubsArgCall2_0_0(t);
        }
      LocalPopChoice(f_40);
    }
  else
    {
      t = e_40;
    }
  return(t);
}
ATerm substitute_args_0_0 (ATerm t)
{
  ATerm f_84 = NULL,g_84 = NULL,j_84 = NULL;
  static ATerm k_3 (ATerm t);
  static ATerm k_3 (ATerm t)
  {
    static ATerm m_3 (ATerm t);
    static ATerm m_3 (ATerm t)
    {
      if(match_cons(t, sym__3))
        {
          if(((f_84 != NULL) && (f_84 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            f_84 = ATgetArgument(t, 0);
          if(((g_84 != NULL) && (g_84 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            g_84 = ATgetArgument(t, 1);
          if(((j_84 != NULL) && (j_84 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            j_84 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, f_84, g_84);
      t = genzip_4_0(n_3, o_3, p_3, substitute_arg_0_0, t);
      t = j_84;
      t = topdown_1_0(q_3, t);
      return(t);
    }
    t = scope_2_0(l_3, m_3, t);
    return(t);
  }
  t = scope_2_0(j_3, k_3, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_40 = ATgetArgument(t, 0);
      if(((ATgetType(i_40) != AT_LIST) || !(ATisEmpty(i_40))))
        _fail(t);
      {
        ATerm j_40 = ATgetArgument(t, 1);
        if(((ATgetType(j_40) != AT_LIST) || !(ATisEmpty(j_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_40 = ATgetArgument(t, 0);
      if(((ATgetType(k_40) == AT_LIST) && !(ATisEmpty(k_40))))
        {
          w_18 = ATgetFirst((ATermList) k_40);
          x_18 = (ATerm) ATgetNext((ATermList) k_40);
        }
      else
        _fail(t);
      {
        ATerm m_40 = ATgetArgument(t, 1);
        if(((ATgetType(m_40) == AT_LIST) && !(ATisEmpty(m_40))))
          {
            y_18 = ATgetFirst((ATermList) m_40);
            z_18 = (ATerm) ATgetNext((ATermList) m_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_18, y_18), (ATerm) ATmakeAppl(sym__2, x_18, z_18));
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL;
  if(match_cons(t, sym__2))
    {
      a_19 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_19), a_19);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm d_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
  if(match_cons(t, sym__2))
    {
      d_19 = ATgetArgument(t, 0);
      i_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_19;
  {
    ATerm n_40 = t;
    int o_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm q_40 = ATgetArgument(t, 0);
            f_19 = ATgetArgument(t, 1);
            g_19 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(o_40);
        t = (ATerm) ATmakeAppl(sym_SDef_3, i_19, f_19, g_19);
      }
    else
      {
        t = n_40;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm r_40 = ATgetArgument(t, 0);
            f_19 = ATgetArgument(t, 1);
            g_19 = ATgetArgument(t, 2);
            h_19 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, i_19, f_19, g_19, h_19);
      }
  }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_40 = ATgetArgument(t, 0);
      if(((ATgetType(v_40) != AT_LIST) || !(ATisEmpty(v_40))))
        _fail(t);
      {
        ATerm w_40 = ATgetArgument(t, 1);
        if(((ATgetType(w_40) != AT_LIST) || !(ATisEmpty(w_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_40 = ATgetArgument(t, 0);
      if(((ATgetType(y_40) == AT_LIST) && !(ATisEmpty(y_40))))
        {
          e_20 = ATgetFirst((ATermList) y_40);
          f_20 = (ATerm) ATgetNext((ATermList) y_40);
        }
      else
        _fail(t);
      {
        ATerm z_40 = ATgetArgument(t, 1);
        if(((ATgetType(z_40) == AT_LIST) && !(ATisEmpty(z_40))))
          {
            g_20 = ATgetFirst((ATermList) z_40);
            h_20 = (ATerm) ATgetNext((ATermList) z_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_20, g_20), (ATerm) ATmakeAppl(sym__2, f_20, h_20));
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL;
  if(match_cons(t, sym__2))
    {
      i_20 = ATgetArgument(t, 0);
      j_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_20), i_20);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm l_20 = NULL,n_20 = NULL,o_20 = NULL;
  if(match_cons(t, sym__2))
    {
      l_20 = ATgetArgument(t, 0);
      o_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_20;
  {
    ATerm a_41 = t;
    int f_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm k_41 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_41);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_20);
      }
    else
      {
        t = a_41;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm l_41 = ATgetArgument(t, 0);
            n_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_20, n_20);
      }
  }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_41 = ATgetArgument(t, 0);
      if(((ATgetType(m_41) != AT_LIST) || !(ATisEmpty(m_41))))
        _fail(t);
      {
        ATerm n_41 = ATgetArgument(t, 1);
        if(((ATgetType(n_41) != AT_LIST) || !(ATisEmpty(n_41))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,n_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_41 = ATgetArgument(t, 0);
      if(((ATgetType(q_41) == AT_LIST) && !(ATisEmpty(q_41))))
        {
          c_22 = ATgetFirst((ATermList) q_41);
          d_22 = (ATerm) ATgetNext((ATermList) q_41);
        }
      else
        _fail(t);
      {
        ATerm r_41 = ATgetArgument(t, 1);
        if(((ATgetType(r_41) == AT_LIST) && !(ATisEmpty(r_41))))
          {
            e_22 = ATgetFirst((ATermList) r_41);
            n_22 = (ATerm) ATgetNext((ATermList) r_41);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_22, e_22), (ATerm) ATmakeAppl(sym__2, d_22, n_22));
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm o_22 = NULL,t_22 = NULL;
  if(match_cons(t, sym__2))
    {
      o_22 = ATgetArgument(t, 0);
      t_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_22), o_22);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm x_22 = NULL,d_23 = NULL,h_23 = NULL;
  if(match_cons(t, sym__2))
    {
      x_22 = ATgetArgument(t, 0);
      h_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_22;
  {
    ATerm s_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm v_41 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(t_41);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_23);
      }
    else
      {
        t = s_41;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm w_41 = ATgetArgument(t, 0);
            d_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, h_23, d_23);
      }
  }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_41 = ATgetArgument(t, 0);
      if(((ATgetType(x_41) != AT_LIST) || !(ATisEmpty(x_41))))
        _fail(t);
      {
        ATerm a_42 = ATgetArgument(t, 1);
        if(((ATgetType(a_42) != AT_LIST) || !(ATisEmpty(a_42))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_42 = ATgetArgument(t, 0);
      if(((ATgetType(b_42) == AT_LIST) && !(ATisEmpty(b_42))))
        {
          a_25 = ATgetFirst((ATermList) b_42);
          b_25 = (ATerm) ATgetNext((ATermList) b_42);
        }
      else
        _fail(t);
      {
        ATerm c_42 = ATgetArgument(t, 1);
        if(((ATgetType(c_42) == AT_LIST) && !(ATisEmpty(c_42))))
          {
            c_25 = ATgetFirst((ATermList) c_42);
            d_25 = (ATerm) ATgetNext((ATermList) c_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_25, c_25), (ATerm) ATmakeAppl(sym__2, b_25, d_25));
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm i_25 = NULL,m_25 = NULL;
  if(match_cons(t, sym__2))
    {
      i_25 = ATgetArgument(t, 0);
      m_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_25), i_25);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm o_25 = NULL,q_25 = NULL,r_25 = NULL;
  if(match_cons(t, sym__2))
    {
      o_25 = ATgetArgument(t, 0);
      r_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_25;
  {
    ATerm f_42 = t;
    int g_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_42);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, r_25);
      }
    else
      {
        t = f_42;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm j_42 = ATgetArgument(t, 0);
            q_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, r_25, q_25);
      }
  }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_42 = ATgetArgument(t, 0);
      if(((ATgetType(o_42) != AT_LIST) || !(ATisEmpty(o_42))))
        _fail(t);
      {
        ATerm q_42 = ATgetArgument(t, 1);
        if(((ATgetType(q_42) != AT_LIST) || !(ATisEmpty(q_42))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL,c_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_42 = ATgetArgument(t, 0);
      if(((ATgetType(r_42) == AT_LIST) && !(ATisEmpty(r_42))))
        {
          y_26 = ATgetFirst((ATermList) r_42);
          z_26 = (ATerm) ATgetNext((ATermList) r_42);
        }
      else
        _fail(t);
      {
        ATerm s_42 = ATgetArgument(t, 1);
        if(((ATgetType(s_42) == AT_LIST) && !(ATisEmpty(s_42))))
          {
            a_27 = ATgetFirst((ATermList) s_42);
            c_27 = (ATerm) ATgetNext((ATermList) s_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_26, a_27), (ATerm) ATmakeAppl(sym__2, z_26, c_27));
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL;
  if(match_cons(t, sym__2))
    {
      d_27 = ATgetArgument(t, 0);
      e_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_27), d_27);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm g_27 = NULL,k_27 = NULL,l_27 = NULL;
  if(match_cons(t, sym__2))
    {
      g_27 = ATgetArgument(t, 0);
      l_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_27;
  {
    ATerm v_42 = t;
    int w_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm y_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_42);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, l_27);
      }
    else
      {
        t = v_42;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm z_42 = ATgetArgument(t, 0);
            k_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, l_27, k_27);
      }
  }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_43 = ATgetArgument(t, 0);
      if(((ATgetType(a_43) != AT_LIST) || !(ATisEmpty(a_43))))
        _fail(t);
      {
        ATerm b_43 = ATgetArgument(t, 1);
        if(((ATgetType(b_43) != AT_LIST) || !(ATisEmpty(b_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm g_100 = NULL,k_100 = NULL,l_100 = NULL,n_100 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_43 = ATgetArgument(t, 0);
      if(((ATgetType(c_43) == AT_LIST) && !(ATisEmpty(c_43))))
        {
          g_100 = ATgetFirst((ATermList) c_43);
          k_100 = (ATerm) ATgetNext((ATermList) c_43);
        }
      else
        _fail(t);
      {
        ATerm d_43 = ATgetArgument(t, 1);
        if(((ATgetType(d_43) == AT_LIST) && !(ATisEmpty(d_43))))
          {
            l_100 = ATgetFirst((ATermList) d_43);
            n_100 = (ATerm) ATgetNext((ATermList) d_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_100, l_100), (ATerm) ATmakeAppl(sym__2, k_100, n_100));
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm s_100 = NULL,u_100 = NULL;
  if(match_cons(t, sym__2))
    {
      s_100 = ATgetArgument(t, 0);
      u_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_100), s_100);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm w_100 = NULL,y_100 = NULL,e_101 = NULL;
  if(match_cons(t, sym__2))
    {
      w_100 = ATgetArgument(t, 0);
      e_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_100;
  {
    ATerm e_43 = t;
    int g_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_43 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_43);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_101);
      }
    else
      {
        t = e_43;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm i_43 = ATgetArgument(t, 0);
            y_100 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, e_101, y_100);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm v_133 (ATerm), ATerm t)
{
  ATerm j_43 = t;
  int k_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_99 = NULL,o_99 = NULL,v_99 = NULL,w_99 = NULL,x_99 = NULL;
      o_99 = t;
      if(match_cons(t, sym_Let_2))
        {
          v_99 = ATgetArgument(t, 0);
          w_99 = ATgetArgument(t, 1);
          {
            ATerm q_18 = NULL,t_18 = NULL,u_18 = NULL,h_4 = NULL;
            t = SSLgetAnnotations(o_99);
            q_18 = t;
            t = v_99;
            t = v_133(t);
            u_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_99, u_18);
            t = genzip_4_0(r_3, s_3, t_3, u_3, t);
            t_18 = t;
            t = (ATerm) ATmakeAppl(sym_Let_2, t_18, w_99);
            h_4 = t;
            t = SSLsetAnnotations(h_4, q_18);
          }
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              v_99 = ATgetArgument(t, 0);
              w_99 = ATgetArgument(t, 1);
              x_99 = ATgetArgument(t, 2);
              {
                ATerm x_19 = NULL,b_20 = NULL,c_20 = NULL,i_4 = NULL;
                t = SSLgetAnnotations(o_99);
                x_19 = t;
                t = w_99;
                t = v_133(t);
                c_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, w_99, c_20);
                t = genzip_4_0(v_3, w_3, x_3, y_3, t);
                b_20 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, v_99, b_20, x_99);
                i_4 = t;
                t = SSLsetAnnotations(i_4, x_19);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  v_99 = ATgetArgument(t, 0);
                  w_99 = ATgetArgument(t, 1);
                  x_99 = ATgetArgument(t, 2);
                  n_99 = ATgetArgument(t, 3);
                  {
                    ATerm d_21 = NULL,w_21 = NULL,x_21 = NULL,j_4 = NULL;
                    t = SSLgetAnnotations(o_99);
                    d_21 = t;
                    t = w_99;
                    t = v_133(t);
                    x_21 = t;
                    t = (ATerm) ATmakeAppl(sym__2, w_99, x_21);
                    t = genzip_4_0(z_3, a_4, b_4, e_4, t);
                    w_21 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, v_99, w_21, x_99, n_99);
                    j_4 = t;
                    t = SSLsetAnnotations(j_4, d_21);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      v_99 = ATgetArgument(t, 0);
                      w_99 = ATgetArgument(t, 1);
                      x_99 = ATgetArgument(t, 2);
                      n_99 = ATgetArgument(t, 3);
                      {
                        ATerm y_23 = NULL,q_24 = NULL,u_24 = NULL,l_4 = NULL;
                        t = SSLgetAnnotations(o_99);
                        y_23 = t;
                        t = w_99;
                        t = v_133(t);
                        u_24 = t;
                        t = (ATerm) ATmakeAppl(sym__2, w_99, u_24);
                        t = genzip_4_0(f_4, g_4, m_4, n_4, t);
                        q_24 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, v_99, q_24, x_99, n_99);
                        l_4 = t;
                        t = SSLsetAnnotations(l_4, y_23);
                      }
                    }
                  else
                    {
                      ATerm q_26 = NULL,u_26 = NULL,v_26 = NULL,p_4 = NULL;
                      if(match_cons(t, sym_RDecT_3))
                        {
                          v_99 = ATgetArgument(t, 0);
                          w_99 = ATgetArgument(t, 1);
                          x_99 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(o_99);
                      q_26 = t;
                      t = w_99;
                      t = v_133(t);
                      v_26 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_99, v_26);
                      t = genzip_4_0(o_4, u_4, v_4, w_4, t);
                      u_26 = t;
                      t = (ATerm) ATmakeAppl(sym_RDecT_3, v_99, u_26, x_99);
                      p_4 = t;
                      t = SSLsetAnnotations(p_4, q_26);
                    }
                }
            }
        }
      LocalPopChoice(k_43);
    }
  else
    {
      t = j_43;
      {
        ATerm l_43 = t;
        int m_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_4 (ATerm t);
            static ATerm x_4 (ATerm t)
            {
              ATerm e_100 = NULL,f_100 = NULL;
              f_100 = t;
              t = v_133(t);
              e_100 = t;
              t = (ATerm) ATmakeAppl(sym__2, f_100, e_100);
              t = genzip_4_0(y_4, z_4, a_5, b_5, t);
              return(t);
            }
            t = dynrule_cong_6_0(_id, x_4, _id, _id, _id, _id, t);
            LocalPopChoice(m_43);
          }
        else
          {
            t = l_43;
            {
              ATerm p_102 = NULL,t_102 = NULL,h_103 = NULL,m_28 = NULL,p_28 = NULL,r_4 = NULL;
              p_102 = t;
              if(match_cons(t, sym_Rec_2))
                {
                  t_102 = ATgetArgument(t, 0);
                  h_103 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(p_102);
              m_28 = t;
              t = t_102;
              t = v_133(t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_28 = ATgetFirst((ATermList) t);
                  {
                    ATerm o_43 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Rec_2, p_28, h_103);
              r_4 = t;
              t = SSLsetAnnotations(r_4, m_28);
            }
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm w_133 (ATerm), ATerm x_133 (ATerm), ATerm y_133 (ATerm), ATerm t)
{
  ATerm v_109 = NULL,w_109 = NULL,x_109 = NULL,y_109 = NULL,z_109 = NULL;
  x_109 = t;
  if(match_cons(t, sym_Let_2))
    {
      y_109 = ATgetArgument(t, 0);
      z_109 = ATgetArgument(t, 1);
      {
        ATerm f_29 = NULL,n_29 = NULL,r_29 = NULL,j_5 = NULL;
        t = SSLgetAnnotations(x_109);
        f_29 = t;
        t = y_109;
        t = w_133(t);
        n_29 = t;
        t = z_109;
        t = w_133(t);
        r_29 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, n_29, r_29);
        j_5 = t;
        t = SSLsetAnnotations(j_5, f_29);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          y_109 = ATgetArgument(t, 0);
          z_109 = ATgetArgument(t, 1);
          w_109 = ATgetArgument(t, 2);
          {
            ATerm l_30 = NULL,y_30 = NULL,e_31 = NULL,h_31 = NULL,k_5 = NULL;
            t = SSLgetAnnotations(x_109);
            l_30 = t;
            t = y_109;
            t = y_133(t);
            y_30 = t;
            t = z_109;
            t = y_133(t);
            e_31 = t;
            t = w_109;
            t = w_133(t);
            h_31 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, y_30, e_31, h_31);
            k_5 = t;
            t = SSLsetAnnotations(k_5, l_30);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              y_109 = ATgetArgument(t, 0);
              z_109 = ATgetArgument(t, 1);
              w_109 = ATgetArgument(t, 2);
              v_109 = ATgetArgument(t, 3);
              {
                ATerm g_32 = NULL,r_32 = NULL,t_32 = NULL,v_32 = NULL,y_32 = NULL,l_5 = NULL;
                t = SSLgetAnnotations(x_109);
                g_32 = t;
                t = y_109;
                t = y_133(t);
                r_32 = t;
                t = z_109;
                t = y_133(t);
                t_32 = t;
                t = w_109;
                t = y_133(t);
                v_32 = t;
                t = v_109;
                t = w_133(t);
                y_32 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, r_32, t_32, v_32, y_32);
                l_5 = t;
                t = SSLsetAnnotations(l_5, g_32);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  y_109 = ATgetArgument(t, 0);
                  z_109 = ATgetArgument(t, 1);
                  w_109 = ATgetArgument(t, 2);
                  v_109 = ATgetArgument(t, 3);
                  {
                    ATerm a_34 = NULL,i_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_5 = NULL;
                    t = SSLgetAnnotations(x_109);
                    a_34 = t;
                    t = y_109;
                    t = y_133(t);
                    i_34 = t;
                    t = z_109;
                    t = y_133(t);
                    k_34 = t;
                    t = w_109;
                    t = y_133(t);
                    l_34 = t;
                    t = v_109;
                    t = w_133(t);
                    m_34 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, i_34, k_34, l_34, m_34);
                    n_5 = t;
                    t = SSLsetAnnotations(n_5, a_34);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      y_109 = ATgetArgument(t, 0);
                      z_109 = ATgetArgument(t, 1);
                      w_109 = ATgetArgument(t, 2);
                      {
                        ATerm t_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,o_5 = NULL;
                        t = SSLgetAnnotations(x_109);
                        t_35 = t;
                        t = y_109;
                        t = y_133(t);
                        z_35 = t;
                        t = z_109;
                        t = y_133(t);
                        a_36 = t;
                        t = w_109;
                        t = y_133(t);
                        b_36 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, z_35, a_36, b_36);
                        o_5 = t;
                        t = SSLsetAnnotations(o_5, t_35);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          y_109 = ATgetArgument(t, 0);
                          z_109 = ATgetArgument(t, 1);
                          {
                            ATerm s_36 = NULL,x_36 = NULL,e_37 = NULL,p_5 = NULL;
                            t = SSLgetAnnotations(x_109);
                            s_36 = t;
                            t = y_109;
                            t = y_133(t);
                            x_36 = t;
                            t = z_109;
                            t = w_133(t);
                            e_37 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, x_36, e_37);
                            p_5 = t;
                            t = SSLsetAnnotations(p_5, s_36);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              y_109 = ATgetArgument(t, 0);
                              z_109 = ATgetArgument(t, 1);
                              {
                                ATerm q_37 = NULL,u_37 = NULL,w_37 = NULL,q_5 = NULL;
                                t = SSLgetAnnotations(x_109);
                                q_37 = t;
                                t = y_109;
                                t = y_133(t);
                                u_37 = t;
                                t = z_109;
                                t = w_133(t);
                                w_37 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, u_37, w_37);
                                q_5 = t;
                                t = SSLsetAnnotations(q_5, q_37);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  y_109 = ATgetArgument(t, 0);
                                  z_109 = ATgetArgument(t, 1);
                                  {
                                    ATerm q_39 = NULL,b_40 = NULL,c_40 = NULL,r_5 = NULL;
                                    t = SSLgetAnnotations(x_109);
                                    q_39 = t;
                                    t = y_109;
                                    t = y_133(t);
                                    b_40 = t;
                                    t = z_109;
                                    t = w_133(t);
                                    c_40 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, b_40, c_40);
                                    r_5 = t;
                                    t = SSLsetAnnotations(r_5, q_39);
                                  }
                                }
                              else
                                {
                                  ATerm u_40 = NULL,x_40 = NULL,e_41 = NULL,t_5 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      y_109 = ATgetArgument(t, 0);
                                      z_109 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(x_109);
                                  u_40 = t;
                                  t = y_109;
                                  t = y_133(t);
                                  x_40 = t;
                                  t = z_109;
                                  t = w_133(t);
                                  e_41 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, x_40, e_41);
                                  t_5 = t;
                                  t = SSLsetAnnotations(t_5, u_40);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm dynrule_sargs_1_0 (ATerm a_134 (ATerm), ATerm t)
{
  ATerm r_110 = NULL,s_110 = NULL,u_110 = NULL;
  ATerm p_43 = t;
  int r_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          r_110 = ATgetArgument(t, 0);
          {
            ATerm s_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_43);
      t = r_110;
      if(match_cons(t, sym_DynRuleId_1))
        {
          s_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_110;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm t_43 = ATgetArgument(t, 0);
          u_110 = ATgetArgument(t, 1);
          {
            ATerm v_43 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = u_110;
    }
  else
    {
      t = p_43;
      {
        ATerm y_43 = t;
        int f_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                r_110 = ATgetArgument(t, 0);
                {
                  ATerm i_44 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(f_44);
            t = r_110;
            if(match_cons(t, sym_DynRuleId_1))
              {
                s_110 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = s_110;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm l_44 = ATgetArgument(t, 0);
                u_110 = ATgetArgument(t, 1);
                {
                  ATerm m_44 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = u_110;
          }
        else
          {
            t = y_43;
            if(match_cons(t, sym_AddDynRule_2))
              {
                r_110 = ATgetArgument(t, 0);
                {
                  ATerm o_44 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = r_110;
            if(match_cons(t, sym_DynRuleId_1))
              {
                s_110 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = s_110;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm r_44 = ATgetArgument(t, 0);
                u_110 = ATgetArgument(t, 1);
                {
                  ATerm x_44 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = u_110;
          }
      }
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm l_111 = NULL;
  ATerm y_44 = t;
  int z_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_111 = ATgetArgument(t, 0);
          {
            ATerm b_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_44);
      t = l_111;
    }
  else
    {
      t = y_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_111 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_111;
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm r_111 = NULL;
  ATerm c_45 = t;
  int d_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_111 = ATgetArgument(t, 0);
          {
            ATerm e_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_45);
      t = r_111;
    }
  else
    {
      t = c_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_111 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_111;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm f_111 = NULL;
  ATerm f_45 = t;
  int l_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm m_45 = ATgetArgument(t, 0);
          f_111 = ATgetArgument(t, 1);
          {
            ATerm n_45 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_45);
      t = f_111;
      t = map_1_0(c_5, t);
    }
  else
    {
      t = f_45;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm o_45 = ATgetArgument(t, 0);
          f_111 = ATgetArgument(t, 1);
          {
            ATerm q_45 = ATgetArgument(t, 2);
          }
          {
            ATerm v_45 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = f_111;
      t = map_1_0(d_5, t);
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm w_111 = NULL;
  ATerm w_45 = t;
  int x_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          w_111 = ATgetArgument(t, 0);
          {
            ATerm y_45 = ATgetArgument(t, 1);
          }
          {
            ATerm z_45 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_45);
      t = w_111;
    }
  else
    {
      t = w_45;
      if(match_cons(t, sym_SDefT_4))
        {
          w_111 = ATgetArgument(t, 0);
          {
            ATerm a_46 = ATgetArgument(t, 1);
          }
          {
            ATerm b_46 = ATgetArgument(t, 2);
          }
          {
            ATerm c_46 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = w_111;
    }
  return(t);
}
static ATerm c_13 (ATerm g_28, ATerm f_28, ATerm t)
{
  t = g_28;
  t = map_1_0(e_5, t);
  return(t);
}
ATerm SVar_1_0 (ATerm f_112 (ATerm), ATerm t)
{
  ATerm g_112 = NULL,h_112 = NULL,i_112 = NULL,j_112 = NULL,e_6 = NULL;
  j_112 = t;
  if(match_cons(t, sym_SVar_1))
    {
      h_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_112);
  g_112 = t;
  t = h_112;
  t = f_112(t);
  i_112 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, i_112);
  e_6 = t;
  t = SSLsetAnnotations(e_6, g_112);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm d_46 = t;
  int f_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_112 = NULL,p_112 = NULL,q_112 = NULL,r_112 = NULL,s_112 = NULL;
      o_112 = t;
      if(match_cons(t, sym_Let_2))
        {
          p_112 = ATgetArgument(t, 0);
          q_112 = ATgetArgument(t, 1);
          t = o_112;
          t = c_13(p_112, q_112, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              p_112 = ATgetArgument(t, 0);
              q_112 = ATgetArgument(t, 1);
              r_112 = ATgetArgument(t, 2);
              t = q_112;
              t = map_1_0(h_5, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  p_112 = ATgetArgument(t, 0);
                  q_112 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, p_112);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_112 = ATgetArgument(t, 0);
                      q_112 = ATgetArgument(t, 1);
                      r_112 = ATgetArgument(t, 2);
                      s_112 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_112;
                  t = map_1_0(i_5, t);
                }
            }
        }
      LocalPopChoice(f_46);
    }
  else
    {
      t = d_46;
      {
        ATerm g_46 = t;
        int i_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(i_46);
          }
        else
          {
            t = g_46;
            t = dynrule_sargs_1_0(m_5, t);
          }
      }
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm b_113 = NULL;
  ATerm j_46 = t;
  int l_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_113 = ATgetArgument(t, 0);
          {
            ATerm m_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_46);
      t = b_113;
    }
  else
    {
      t = j_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_113;
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm m_113 = NULL;
  ATerm n_46 = t;
  int o_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_113 = ATgetArgument(t, 0);
          {
            ATerm p_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_46);
      t = m_113;
    }
  else
    {
      t = n_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_113;
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = map_1_0(s_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm r_113 = NULL;
  ATerm r_46 = t;
  int s_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_113 = ATgetArgument(t, 0);
          {
            ATerm v_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_46);
      t = r_113;
    }
  else
    {
      t = r_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_113;
    }
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  t = rename_4_0(SVar_1_0, g_5, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm dynrule_cong_6_0 (ATerm c_134 (ATerm), ATerm d_134 (ATerm), ATerm e_134 (ATerm), ATerm f_134 (ATerm), ATerm g_134 (ATerm), ATerm h_134 (ATerm), ATerm t)
{
  ATerm z_116 = NULL,a_117 = NULL,c_117 = NULL;
  z_116 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      a_117 = ATgetArgument(t, 0);
      c_117 = ATgetArgument(t, 1);
      {
        ATerm u_41 = NULL,y_41 = NULL,z_41 = NULL,d_42 = NULL,e_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,p_42 = NULL,t_42 = NULL,u_42 = NULL,x_42 = NULL,l_6 = NULL,k_6 = NULL,j_6 = NULL;
        t = SSLgetAnnotations(z_116);
        u_41 = t;
        t = a_117;
        if(match_cons(t, sym_DynRuleId_1))
          {
            d_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_117);
        z_41 = t;
        t = d_42;
        if(match_cons(t, sym_RDecT_3))
          {
            l_42 = ATgetArgument(t, 0);
            m_42 = ATgetArgument(t, 1);
            n_42 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_42);
        k_42 = t;
        t = l_42;
        t = c_134(t);
        p_42 = t;
        t = m_42;
        t = d_134(t);
        t_42 = t;
        t = n_42;
        t = e_134(t);
        u_42 = t;
        t = (ATerm) ATmakeAppl(sym_RDecT_3, p_42, t_42, u_42);
        j_6 = t;
        t = SSLsetAnnotations(j_6, k_42);
        x_42 = t;
        t = (ATerm) ATmakeAppl(sym_DynRuleId_1, x_42);
        k_6 = t;
        t = SSLsetAnnotations(k_6, z_41);
        e_42 = t;
        t = c_117;
        t = f_134(t);
        y_41 = t;
        t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, e_42, y_41);
        l_6 = t;
        t = SSLsetAnnotations(l_6, u_41);
      }
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          a_117 = ATgetArgument(t, 0);
          c_117 = ATgetArgument(t, 1);
          {
            ATerm n_43 = NULL,b_44 = NULL,e_44 = NULL,k_44 = NULL,n_44 = NULL,q_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,p_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,q_6 = NULL,p_6 = NULL,o_6 = NULL,m_6 = NULL;
            t = SSLgetAnnotations(z_116);
            n_43 = t;
            t = a_117;
            if(match_cons(t, sym_DynRuleId_1))
              {
                w_44 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(a_117);
            v_44 = t;
            t = w_44;
            if(match_cons(t, sym_RDecT_3))
              {
                i_45 = ATgetArgument(t, 0);
                j_45 = ATgetArgument(t, 1);
                p_45 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(w_44);
            h_45 = t;
            t = i_45;
            t = c_134(t);
            r_45 = t;
            t = j_45;
            t = d_134(t);
            s_45 = t;
            t = p_45;
            t = e_134(t);
            t_45 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, r_45, s_45, t_45);
            m_6 = t;
            t = SSLsetAnnotations(m_6, h_45);
            u_45 = t;
            t = (ATerm) ATmakeAppl(sym_DynRuleId_1, u_45);
            o_6 = t;
            t = SSLsetAnnotations(o_6, v_44);
            g_45 = t;
            t = c_117;
            if(match_cons(t, sym_Rule_3))
              {
                e_44 = ATgetArgument(t, 0);
                k_44 = ATgetArgument(t, 1);
                n_44 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_117);
            b_44 = t;
            t = e_44;
            t = f_134(t);
            q_44 = t;
            t = k_44;
            t = g_134(t);
            s_44 = t;
            t = n_44;
            t = h_134(t);
            t_44 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, q_44, s_44, t_44);
            p_6 = t;
            t = SSLsetAnnotations(p_6, b_44);
            u_44 = t;
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, g_45, u_44);
            q_6 = t;
            t = SSLsetAnnotations(q_6, n_43);
          }
        }
      else
        {
          ATerm h_46 = NULL,k_46 = NULL,t_46 = NULL,u_46 = NULL,a_47 = NULL,c_47 = NULL,d_47 = NULL,f_47 = NULL,h_47 = NULL,j_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,x_47 = NULL,y_47 = NULL,e_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,x_6 = NULL,u_6 = NULL,t_6 = NULL,s_6 = NULL;
          if(match_cons(t, sym_AddDynRule_2))
            {
              a_117 = ATgetArgument(t, 0);
              c_117 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_116);
          h_46 = t;
          t = a_117;
          if(match_cons(t, sym_DynRuleId_1))
            {
              l_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_117);
          j_47 = t;
          t = l_47;
          if(match_cons(t, sym_RDecT_3))
            {
              o_47 = ATgetArgument(t, 0);
              x_47 = ATgetArgument(t, 1);
              y_47 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_47);
          n_47 = t;
          t = o_47;
          t = c_134(t);
          e_48 = t;
          t = x_47;
          t = d_134(t);
          h_48 = t;
          t = y_47;
          t = e_134(t);
          i_48 = t;
          t = (ATerm) ATmakeAppl(sym_RDecT_3, e_48, h_48, i_48);
          s_6 = t;
          t = SSLsetAnnotations(s_6, n_47);
          j_48 = t;
          t = (ATerm) ATmakeAppl(sym_DynRuleId_1, j_48);
          t_6 = t;
          t = SSLsetAnnotations(t_6, j_47);
          m_47 = t;
          t = c_117;
          if(match_cons(t, sym_Rule_3))
            {
              t_46 = ATgetArgument(t, 0);
              u_46 = ATgetArgument(t, 1);
              a_47 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_117);
          k_46 = t;
          t = t_46;
          t = f_134(t);
          c_47 = t;
          t = u_46;
          t = g_134(t);
          d_47 = t;
          t = a_47;
          t = h_134(t);
          f_47 = t;
          t = (ATerm) ATmakeAppl(sym_Rule_3, c_47, d_47, f_47);
          u_6 = t;
          t = SSLsetAnnotations(u_6, k_46);
          h_47 = t;
          t = (ATerm) ATmakeAppl(sym_AddDynRule_2, m_47, h_47);
          x_6 = t;
          t = SSLsetAnnotations(x_6, h_46);
        }
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_46 = ATgetArgument(t, 0);
      if(((ATgetType(w_46) != AT_LIST) || !(ATisEmpty(w_46))))
        _fail(t);
      {
        ATerm x_46 = ATgetArgument(t, 1);
        if(((ATgetType(x_46) != AT_LIST) || !(ATisEmpty(x_46))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_46 = ATgetArgument(t, 0);
      if(((ATgetType(y_46) == AT_LIST) && !(ATisEmpty(y_46))))
        {
          r_50 = ATgetFirst((ATermList) y_46);
          s_50 = (ATerm) ATgetNext((ATermList) y_46);
        }
      else
        _fail(t);
      {
        ATerm z_46 = ATgetArgument(t, 1);
        if(((ATgetType(z_46) == AT_LIST) && !(ATisEmpty(z_46))))
          {
            t_50 = ATgetFirst((ATermList) z_46);
            u_50 = (ATerm) ATgetNext((ATermList) z_46);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_50, t_50), (ATerm) ATmakeAppl(sym__2, s_50, u_50));
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL;
  if(match_cons(t, sym__2))
    {
      b_51 = ATgetArgument(t, 0);
      c_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_51), b_51);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm i_51 = NULL,m_51 = NULL,n_51 = NULL;
  if(match_cons(t, sym__2))
    {
      i_51 = ATgetArgument(t, 0);
      n_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_51;
  {
    ATerm b_47 = t;
    int g_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm i_47 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_47);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, n_51);
      }
    else
      {
        t = b_47;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm k_47 = ATgetArgument(t, 0);
            m_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, n_51, m_51);
      }
  }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_47 = ATgetArgument(t, 0);
      if(((ATgetType(p_47) != AT_LIST) || !(ATisEmpty(p_47))))
        _fail(t);
      {
        ATerm q_47 = ATgetArgument(t, 1);
        if(((ATgetType(q_47) != AT_LIST) || !(ATisEmpty(q_47))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm i_53 = NULL,j_53 = NULL,q_53 = NULL,r_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_47 = ATgetArgument(t, 0);
      if(((ATgetType(r_47) == AT_LIST) && !(ATisEmpty(r_47))))
        {
          i_53 = ATgetFirst((ATermList) r_47);
          j_53 = (ATerm) ATgetNext((ATermList) r_47);
        }
      else
        _fail(t);
      {
        ATerm s_47 = ATgetArgument(t, 1);
        if(((ATgetType(s_47) == AT_LIST) && !(ATisEmpty(s_47))))
          {
            q_53 = ATgetFirst((ATermList) s_47);
            r_53 = (ATerm) ATgetNext((ATermList) s_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_53, q_53), (ATerm) ATmakeAppl(sym__2, j_53, r_53));
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL;
  if(match_cons(t, sym__2))
    {
      w_53 = ATgetArgument(t, 0);
      x_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_53), w_53);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm b_54 = NULL,d_54 = NULL,e_54 = NULL;
  if(match_cons(t, sym__2))
    {
      b_54 = ATgetArgument(t, 0);
      e_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_54;
  {
    ATerm t_47 = t;
    int v_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm w_47 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(v_47);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_54);
      }
    else
      {
        t = t_47;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm z_47 = ATgetArgument(t, 0);
            d_54 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, e_54, d_54);
      }
  }
  return(t);
}
static ATerm c_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_48 = ATgetArgument(t, 0);
      if(((ATgetType(a_48) != AT_LIST) || !(ATisEmpty(a_48))))
        _fail(t);
      {
        ATerm b_48 = ATgetArgument(t, 1);
        if(((ATgetType(b_48) != AT_LIST) || !(ATisEmpty(b_48))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_48 = ATgetArgument(t, 0);
      if(((ATgetType(c_48) == AT_LIST) && !(ATisEmpty(c_48))))
        {
          m_55 = ATgetFirst((ATermList) c_48);
          n_55 = (ATerm) ATgetNext((ATermList) c_48);
        }
      else
        _fail(t);
      {
        ATerm d_48 = ATgetArgument(t, 1);
        if(((ATgetType(d_48) == AT_LIST) && !(ATisEmpty(d_48))))
          {
            o_55 = ATgetFirst((ATermList) d_48);
            p_55 = (ATerm) ATgetNext((ATermList) d_48);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_55, o_55), (ATerm) ATmakeAppl(sym__2, n_55, p_55));
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm q_55 = NULL,s_55 = NULL;
  if(match_cons(t, sym__2))
    {
      q_55 = ATgetArgument(t, 0);
      s_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_55), q_55);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm v_55 = NULL,x_55 = NULL,y_55 = NULL;
  if(match_cons(t, sym__2))
    {
      v_55 = ATgetArgument(t, 0);
      y_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_55;
  {
    ATerm f_48 = t;
    int g_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm k_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_48);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, y_55);
      }
    else
      {
        t = f_48;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm l_48 = ATgetArgument(t, 0);
            x_55 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, y_55, x_55);
      }
  }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_48 = ATgetArgument(t, 0);
      if(((ATgetType(m_48) != AT_LIST) || !(ATisEmpty(m_48))))
        _fail(t);
      {
        ATerm n_48 = ATgetArgument(t, 1);
        if(((ATgetType(n_48) != AT_LIST) || !(ATisEmpty(n_48))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm a_122 = NULL,b_122 = NULL,c_122 = NULL,d_122 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_48 = ATgetArgument(t, 0);
      if(((ATgetType(o_48) == AT_LIST) && !(ATisEmpty(o_48))))
        {
          a_122 = ATgetFirst((ATermList) o_48);
          b_122 = (ATerm) ATgetNext((ATermList) o_48);
        }
      else
        _fail(t);
      {
        ATerm p_48 = ATgetArgument(t, 1);
        if(((ATgetType(p_48) == AT_LIST) && !(ATisEmpty(p_48))))
          {
            c_122 = ATgetFirst((ATermList) p_48);
            d_122 = (ATerm) ATgetNext((ATermList) p_48);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_122, c_122), (ATerm) ATmakeAppl(sym__2, b_122, d_122));
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm e_122 = NULL,f_122 = NULL;
  if(match_cons(t, sym__2))
    {
      e_122 = ATgetArgument(t, 0);
      f_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_122), e_122);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm h_122 = NULL,j_122 = NULL,k_122 = NULL;
  if(match_cons(t, sym__2))
    {
      h_122 = ATgetArgument(t, 0);
      k_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_122;
  {
    ATerm q_48 = t;
    int r_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm s_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(r_48);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, k_122);
      }
    else
      {
        t = q_48;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm u_48 = ATgetArgument(t, 0);
            j_122 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, k_122, j_122);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm r_133 (ATerm), ATerm t)
{
  ATerm w_48 = t;
  int x_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_121 = NULL,s_121 = NULL,t_121 = NULL,u_121 = NULL,v_121 = NULL;
      r_121 = t;
      if(match_cons(t, sym_Scope_2))
        {
          s_121 = ATgetArgument(t, 0);
          t_121 = ATgetArgument(t, 1);
          {
            ATerm v_48 = NULL,z_48 = NULL,o_7 = NULL;
            t = SSLgetAnnotations(r_121);
            v_48 = t;
            t = s_121;
            t = r_133(t);
            z_48 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, z_48, t_121);
            o_7 = t;
            t = SSLsetAnnotations(o_7, v_48);
          }
        }
      else
        {
          if(match_cons(t, sym_LRule_1))
            {
              s_121 = ATgetArgument(t, 0);
              {
                ATerm j_49 = NULL,s_7 = NULL;
                t = SSLgetAnnotations(r_121);
                j_49 = t;
                t = (ATerm) ATmakeAppl(sym_LRule_1, s_121);
                s_7 = t;
                t = SSLsetAnnotations(s_7, j_49);
              }
            }
          else
            {
              if(match_cons(t, sym_RDecT_3))
                {
                  s_121 = ATgetArgument(t, 0);
                  t_121 = ATgetArgument(t, 1);
                  u_121 = ATgetArgument(t, 2);
                  {
                    ATerm h_50 = NULL,l_50 = NULL,m_50 = NULL,t_7 = NULL;
                    t = SSLgetAnnotations(r_121);
                    h_50 = t;
                    t = u_121;
                    t = r_133(t);
                    m_50 = t;
                    t = (ATerm) ATmakeAppl(sym__2, u_121, m_50);
                    t = genzip_4_0(u_5, v_5, w_5, x_5, t);
                    l_50 = t;
                    t = (ATerm) ATmakeAppl(sym_RDecT_3, s_121, t_121, l_50);
                    t_7 = t;
                    t = SSLsetAnnotations(t_7, h_50);
                  }
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_121 = ATgetArgument(t, 0);
                      t_121 = ATgetArgument(t, 1);
                      u_121 = ATgetArgument(t, 2);
                      v_121 = ATgetArgument(t, 3);
                      {
                        ATerm t_52 = NULL,f_53 = NULL,g_53 = NULL,u_7 = NULL;
                        t = SSLgetAnnotations(r_121);
                        t_52 = t;
                        t = u_121;
                        t = r_133(t);
                        g_53 = t;
                        t = (ATerm) ATmakeAppl(sym__2, u_121, g_53);
                        t = genzip_4_0(y_5, z_5, a_6, b_6, t);
                        f_53 = t;
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, s_121, t_121, f_53, v_121);
                        u_7 = t;
                        t = SSLsetAnnotations(u_7, t_52);
                      }
                    }
                  else
                    {
                      ATerm d_55 = NULL,j_55 = NULL,k_55 = NULL,v_7 = NULL;
                      if(match_cons(t, sym_RDefT_4))
                        {
                          s_121 = ATgetArgument(t, 0);
                          t_121 = ATgetArgument(t, 1);
                          u_121 = ATgetArgument(t, 2);
                          v_121 = ATgetArgument(t, 3);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(r_121);
                      d_55 = t;
                      t = u_121;
                      t = r_133(t);
                      k_55 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_121, k_55);
                      t = genzip_4_0(c_6, d_6, f_6, g_6, t);
                      j_55 = t;
                      t = (ATerm) ATmakeAppl(sym_RDefT_4, s_121, t_121, j_55, v_121);
                      v_7 = t;
                      t = SSLsetAnnotations(v_7, d_55);
                    }
                }
            }
        }
      LocalPopChoice(x_48);
    }
  else
    {
      t = w_48;
      {
        static ATerm i_6 (ATerm t);
        static ATerm i_6 (ATerm t)
        {
          ATerm y_121 = NULL,z_121 = NULL;
          z_121 = t;
          t = r_133(t);
          y_121 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_121, y_121);
          t = genzip_4_0(n_6, r_6, v_6, w_6, t);
          return(t);
        }
        t = dynrule_cong_6_0(_id, _id, i_6, _id, _id, _id, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm s_133 (ATerm), ATerm t_133 (ATerm), ATerm u_133 (ATerm), ATerm t)
{
  ATerm b_128 = NULL,c_128 = NULL,d_128 = NULL,e_128 = NULL,f_128 = NULL;
  e_128 = t;
  if(match_cons(t, sym_Scope_2))
    {
      f_128 = ATgetArgument(t, 0);
      d_128 = ATgetArgument(t, 1);
      {
        ATerm w_56 = NULL,a_57 = NULL,b_57 = NULL,z_9 = NULL;
        t = SSLgetAnnotations(e_128);
        w_56 = t;
        t = f_128;
        t = u_133(t);
        a_57 = t;
        t = d_128;
        t = s_133(t);
        b_57 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, a_57, b_57);
        z_9 = t;
        t = SSLsetAnnotations(z_9, w_56);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          f_128 = ATgetArgument(t, 0);
          {
            ATerm m_57 = NULL,o_57 = NULL,v_57 = NULL,w_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL,c_58 = NULL,d_58 = NULL,d_10 = NULL,c_10 = NULL;
            t = SSLgetAnnotations(e_128);
            m_57 = t;
            t = f_128;
            if(match_cons(t, sym_Rule_3))
              {
                v_57 = ATgetArgument(t, 0);
                w_57 = ATgetArgument(t, 1);
                y_57 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(f_128);
            o_57 = t;
            t = v_57;
            t = s_133(t);
            z_57 = t;
            t = w_57;
            t = s_133(t);
            a_58 = t;
            t = y_57;
            t = s_133(t);
            c_58 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, z_57, a_58, c_58);
            c_10 = t;
            t = SSLsetAnnotations(c_10, o_57);
            d_58 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, d_58);
            d_10 = t;
            t = SSLsetAnnotations(d_10, m_57);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              f_128 = ATgetArgument(t, 0);
              d_128 = ATgetArgument(t, 1);
              b_128 = ATgetArgument(t, 2);
              {
                ATerm n_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,e_10 = NULL;
                t = SSLgetAnnotations(e_128);
                n_58 = t;
                t = f_128;
                t = u_133(t);
                s_58 = t;
                t = d_128;
                t = u_133(t);
                t_58 = t;
                t = b_128;
                t = u_133(t);
                u_58 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, s_58, t_58, u_58);
                e_10 = t;
                t = SSLsetAnnotations(e_10, n_58);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  f_128 = ATgetArgument(t, 0);
                  d_128 = ATgetArgument(t, 1);
                  b_128 = ATgetArgument(t, 2);
                  c_128 = ATgetArgument(t, 3);
                  {
                    ATerm h_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,y_59 = NULL,h_10 = NULL;
                    t = SSLgetAnnotations(e_128);
                    h_59 = t;
                    t = f_128;
                    t = u_133(t);
                    t_59 = t;
                    t = d_128;
                    t = u_133(t);
                    u_59 = t;
                    t = b_128;
                    t = u_133(t);
                    v_59 = t;
                    t = c_128;
                    t = s_133(t);
                    y_59 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, t_59, u_59, v_59, y_59);
                    h_10 = t;
                    t = SSLsetAnnotations(h_10, h_59);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_128 = ATgetArgument(t, 0);
                      d_128 = ATgetArgument(t, 1);
                      b_128 = ATgetArgument(t, 2);
                      c_128 = ATgetArgument(t, 3);
                      {
                        ATerm r_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,i_10 = NULL;
                        t = SSLgetAnnotations(e_128);
                        r_60 = t;
                        t = f_128;
                        t = u_133(t);
                        a_61 = t;
                        t = d_128;
                        t = u_133(t);
                        b_61 = t;
                        t = b_128;
                        t = u_133(t);
                        c_61 = t;
                        t = c_128;
                        t = s_133(t);
                        d_61 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, a_61, b_61, c_61, d_61);
                        i_10 = t;
                        t = SSLsetAnnotations(i_10, r_60);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          f_128 = ATgetArgument(t, 0);
                          d_128 = ATgetArgument(t, 1);
                          {
                            ATerm a_62 = NULL,d_62 = NULL,e_62 = NULL,j_10 = NULL;
                            t = SSLgetAnnotations(e_128);
                            a_62 = t;
                            t = f_128;
                            t = u_133(t);
                            d_62 = t;
                            t = d_128;
                            t = s_133(t);
                            e_62 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, d_62, e_62);
                            j_10 = t;
                            t = SSLsetAnnotations(j_10, a_62);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              f_128 = ATgetArgument(t, 0);
                              d_128 = ATgetArgument(t, 1);
                              {
                                ATerm w_62 = NULL,u_63 = NULL,v_63 = NULL,m_10 = NULL;
                                t = SSLgetAnnotations(e_128);
                                w_62 = t;
                                t = f_128;
                                t = u_133(t);
                                u_63 = t;
                                t = d_128;
                                t = s_133(t);
                                v_63 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, u_63, v_63);
                                m_10 = t;
                                t = SSLsetAnnotations(m_10, w_62);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  f_128 = ATgetArgument(t, 0);
                                  d_128 = ATgetArgument(t, 1);
                                  {
                                    ATerm h_64 = NULL,l_64 = NULL,m_64 = NULL,s_10 = NULL;
                                    t = SSLgetAnnotations(e_128);
                                    h_64 = t;
                                    t = f_128;
                                    t = u_133(t);
                                    l_64 = t;
                                    t = d_128;
                                    t = s_133(t);
                                    m_64 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, l_64, m_64);
                                    s_10 = t;
                                    t = SSLsetAnnotations(s_10, h_64);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      f_128 = ATgetArgument(t, 0);
                                      {
                                        ATerm m_65 = NULL,p_65 = NULL,t_10 = NULL;
                                        t = SSLgetAnnotations(e_128);
                                        m_65 = t;
                                        t = f_128;
                                        t = s_133(t);
                                        p_65 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, p_65);
                                        t_10 = t;
                                        t = SSLsetAnnotations(t_10, m_65);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          f_128 = ATgetArgument(t, 0);
                                          {
                                            ATerm v_65 = NULL,y_65 = NULL,u_10 = NULL;
                                            t = SSLgetAnnotations(e_128);
                                            v_65 = t;
                                            t = f_128;
                                            t = s_133(t);
                                            y_65 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, y_65);
                                            u_10 = t;
                                            t = SSLsetAnnotations(u_10, v_65);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              f_128 = ATgetArgument(t, 0);
                                              {
                                                ATerm f_66 = NULL,h_66 = NULL,z_10 = NULL;
                                                t = SSLgetAnnotations(e_128);
                                                f_66 = t;
                                                t = f_128;
                                                t = s_133(t);
                                                h_66 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, h_66);
                                                z_10 = t;
                                                t = SSLsetAnnotations(z_10, f_66);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  f_128 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm q_66 = NULL,s_66 = NULL,a_11 = NULL;
                                                    t = SSLgetAnnotations(e_128);
                                                    q_66 = t;
                                                    t = f_128;
                                                    t = s_133(t);
                                                    s_66 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, s_66);
                                                    a_11 = t;
                                                    t = SSLsetAnnotations(a_11, q_66);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm j_67 = NULL,m_67 = NULL,b_11 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      f_128 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(e_128);
                                                  j_67 = t;
                                                  t = f_128;
                                                  t = s_133(t);
                                                  m_67 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, m_67);
                                                  b_11 = t;
                                                  t = SSLsetAnnotations(b_11, j_67);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm dynrule_targs_1_0 (ATerm b_134 (ATerm), ATerm t)
{
  ATerm b_129 = NULL,c_129 = NULL,f_129 = NULL;
  ATerm y_48 = t;
  int a_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          b_129 = ATgetArgument(t, 0);
          {
            ATerm b_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_49);
      t = b_129;
      if(match_cons(t, sym_DynRuleId_1))
        {
          c_129 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_129;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm c_49 = ATgetArgument(t, 0);
          ATerm d_49 = ATgetArgument(t, 1);
          f_129 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = f_129;
    }
  else
    {
      t = y_48;
      {
        ATerm e_49 = t;
        int f_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                b_129 = ATgetArgument(t, 0);
                {
                  ATerm g_49 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(f_49);
            t = b_129;
            if(match_cons(t, sym_DynRuleId_1))
              {
                c_129 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = c_129;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm h_49 = ATgetArgument(t, 0);
                ATerm k_49 = ATgetArgument(t, 1);
                f_129 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = f_129;
          }
        else
          {
            t = e_49;
            if(match_cons(t, sym_AddDynRule_2))
              {
                b_129 = ATgetArgument(t, 0);
                {
                  ATerm l_49 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = b_129;
            if(match_cons(t, sym_DynRuleId_1))
              {
                c_129 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = c_129;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm m_49 = ATgetArgument(t, 0);
                ATerm n_49 = ATgetArgument(t, 1);
                f_129 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = f_129;
          }
      }
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm v_129 = NULL;
  ATerm o_49 = t;
  int p_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_129 = ATgetArgument(t, 0);
          {
            ATerm r_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_49);
      t = v_129;
    }
  else
    {
      t = o_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_129 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_129;
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm b_130 = NULL;
  ATerm s_49 = t;
  int t_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_130 = ATgetArgument(t, 0);
          {
            ATerm u_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_49);
      t = b_130;
    }
  else
    {
      t = s_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_130;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm q_129 = NULL;
  ATerm v_49 = t;
  int w_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm x_49 = ATgetArgument(t, 0);
          ATerm y_49 = ATgetArgument(t, 1);
          q_129 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(w_49);
      t = q_129;
      t = map_1_0(y_6, t);
    }
  else
    {
      t = v_49;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm z_49 = ATgetArgument(t, 0);
          ATerm b_50 = ATgetArgument(t, 1);
          q_129 = ATgetArgument(t, 2);
          {
            ATerm c_50 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = q_129;
      t = map_1_0(z_6, t);
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm x_130 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_130);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm d_50 = t;
  int f_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_50);
    }
  else
    {
      t = d_50;
      {
        ATerm g_50 = t;
        int i_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_50);
          }
        else
          {
            t = g_50;
            {
              ATerm j_50 = t;
              int k_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_130 = NULL,a_131 = NULL,b_131 = NULL,c_131 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_130 = ATgetArgument(t, 0);
                      a_131 = ATgetArgument(t, 1);
                      b_131 = ATgetArgument(t, 2);
                      c_131 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_131;
                  t = map_1_0(c_7, t);
                  LocalPopChoice(k_50);
                }
              else
                {
                  t = j_50;
                  {
                    ATerm n_50 = t;
                    int o_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_50);
                      }
                    else
                      {
                        t = n_50;
                        t = dynrule_targs_1_0(d_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm j_131 = NULL;
  ATerm p_50 = t;
  int v_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_131 = ATgetArgument(t, 0);
          {
            ATerm w_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_50);
      t = j_131;
    }
  else
    {
      t = p_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_131 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_131;
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = map_1_0(e_7, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm o_131 = NULL;
  ATerm x_50 = t;
  int y_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_131 = ATgetArgument(t, 0);
          {
            ATerm z_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_50);
      t = o_131;
    }
  else
    {
      t = x_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_131 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_131;
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm s_131 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_131);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm a_51 = t;
  int d_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_51);
    }
  else
    {
      t = a_51;
      {
        ATerm e_51 = t;
        int f_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_51);
          }
        else
          {
            t = e_51;
            {
              ATerm g_51 = t;
              int h_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_131 = NULL,v_131 = NULL,w_131 = NULL,x_131 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_131 = ATgetArgument(t, 0);
                      v_131 = ATgetArgument(t, 1);
                      w_131 = ATgetArgument(t, 2);
                      x_131 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_131;
                  t = map_1_0(j_7, t);
                  LocalPopChoice(h_51);
                }
              else
                {
                  t = g_51;
                  {
                    ATerm j_51 = t;
                    int l_51 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(l_51);
                      }
                    else
                      {
                        t = j_51;
                        t = dynrule_targs_1_0(k_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm e_132 = NULL;
  ATerm o_51 = t;
  int p_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_132 = ATgetArgument(t, 0);
          {
            ATerm q_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_51);
      t = e_132;
    }
  else
    {
      t = o_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_132;
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = map_1_0(l_7, t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm j_132 = NULL;
  ATerm r_51 = t;
  int s_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_132 = ATgetArgument(t, 0);
          {
            ATerm u_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_51);
      t = j_132;
    }
  else
    {
      t = r_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_132;
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm n_132 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_132);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm v_51 = t;
  int w_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_51);
    }
  else
    {
      t = v_51;
      {
        ATerm x_51 = t;
        int y_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(y_51);
          }
        else
          {
            t = x_51;
            {
              ATerm z_51 = t;
              int b_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_132 = NULL,q_132 = NULL,r_132 = NULL,s_132 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_132 = ATgetArgument(t, 0);
                      q_132 = ATgetArgument(t, 1);
                      r_132 = ATgetArgument(t, 2);
                      s_132 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_132;
                  t = map_1_0(p_7, t);
                  LocalPopChoice(b_52);
                }
              else
                {
                  t = z_51;
                  {
                    ATerm c_52 = t;
                    int d_52 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(d_52);
                      }
                    else
                      {
                        t = c_52;
                        t = dynrule_targs_1_0(q_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm d_133 = NULL;
  ATerm e_52 = t;
  int f_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_133 = ATgetArgument(t, 0);
          {
            ATerm g_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_52);
      t = d_133;
    }
  else
    {
      t = e_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_133 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_133;
    }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = map_1_0(w_7, t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm i_133 = NULL;
  ATerm h_52 = t;
  int j_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_133 = ATgetArgument(t, 0);
          {
            ATerm k_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_52);
      t = i_133;
    }
  else
    {
      t = h_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_133 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_133;
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm m_133 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_133);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm l_52 = t;
  int m_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_52);
    }
  else
    {
      t = l_52;
      {
        ATerm n_52 = t;
        int o_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_52);
          }
        else
          {
            t = n_52;
            {
              ATerm p_52 = t;
              int r_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_133 = NULL,p_133 = NULL,q_133 = NULL,z_133 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_133 = ATgetArgument(t, 0);
                      p_133 = ATgetArgument(t, 1);
                      q_133 = ATgetArgument(t, 2);
                      z_133 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_133;
                  t = map_1_0(z_7, t);
                  LocalPopChoice(r_52);
                }
              else
                {
                  t = p_52;
                  {
                    ATerm s_52 = t;
                    int u_52 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(u_52);
                      }
                    else
                      {
                        t = s_52;
                        t = dynrule_targs_1_0(b_8, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm o_134 = NULL;
  ATerm v_52 = t;
  int w_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_134 = ATgetArgument(t, 0);
          {
            ATerm y_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_52);
      t = o_134;
    }
  else
    {
      t = v_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_134;
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = map_1_0(d_8, t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm t_134 = NULL;
  ATerm z_52 = t;
  int a_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_134 = ATgetArgument(t, 0);
          {
            ATerm b_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_53);
      t = t_134;
    }
  else
    {
      t = z_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_134;
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm x_134 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_134);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm c_53 = t;
  int d_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_53);
    }
  else
    {
      t = c_53;
      {
        ATerm e_53 = t;
        int h_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_53);
          }
        else
          {
            t = e_53;
            {
              ATerm k_53 = t;
              int l_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_134 = NULL,a_135 = NULL,b_135 = NULL,f_135 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_134 = ATgetArgument(t, 0);
                      a_135 = ATgetArgument(t, 1);
                      b_135 = ATgetArgument(t, 2);
                      f_135 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_135;
                  t = map_1_0(g_8, t);
                  LocalPopChoice(l_53);
                }
              else
                {
                  t = k_53;
                  {
                    ATerm m_53 = t;
                    int o_53 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_53);
                      }
                    else
                      {
                        t = m_53;
                        t = dynrule_targs_1_0(h_8, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm m_135 = NULL;
  ATerm p_53 = t;
  int s_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_135 = ATgetArgument(t, 0);
          {
            ATerm t_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_53);
      t = m_135;
    }
  else
    {
      t = p_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_135;
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = map_1_0(i_8, t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm r_135 = NULL;
  ATerm v_53 = t;
  int y_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_135 = ATgetArgument(t, 0);
          {
            ATerm z_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_53);
      t = r_135;
    }
  else
    {
      t = v_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_135;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm v_130 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      v_130 = ATgetArgument(t, 0);
      t = v_130;
      t = free_vars_3_0(a_7, b_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          v_130 = ATgetArgument(t, 0);
          t = v_130;
          t = free_vars_3_0(f_7, g_7, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              v_130 = ATgetArgument(t, 0);
              t = v_130;
              t = free_vars_3_0(m_7, n_7, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  v_130 = ATgetArgument(t, 0);
                  t = v_130;
                  t = free_vars_3_0(x_7, y_7, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      v_130 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = v_130;
                  t = free_vars_3_0(e_8, f_8, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm f_13 (ATerm n_150 (ATerm), ATerm m_59, ATerm l_59, ATerm t)
{
  static ATerm l_136 (ATerm t);
  static ATerm l_136 (ATerm t)
  {
    ATerm e_136 = NULL,f_136 = NULL,i_136 = NULL;
    e_136 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_59;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_136 = ATgetFirst((ATermList) t);
            i_136 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm a_54 = t;
          int c_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_136;
              {
                static ATerm j_8 (ATerm t);
                static ATerm j_8 (ATerm t)
                {
                  t = l_59;
                  return(t);
                }
                t = h_13(n_150, j_8, f_136, i_136, t);
              }
              t = l_136(t);
              LocalPopChoice(c_54);
            }
          else
            {
              t = a_54;
              {
                ATerm b_68 = NULL,i_68 = NULL,q_13 = NULL;
                t = SSLgetAnnotations(e_136);
                b_68 = t;
                t = i_136;
                t = l_136(t);
                i_68 = t;
                t = (ATerm) ATinsert(CheckATermList(i_68), f_136);
                q_13 = t;
                t = SSLsetAnnotations(q_13, b_68);
              }
            }
        }
      }
    return(t);
  }
  t = m_59;
  t = l_136(t);
  return(t);
}
static ATerm h_13 (ATerm q_150 (ATerm), ATerm r_150 (ATerm), ATerm q_59, ATerm p_59, ATerm t)
{
  t = r_150(t);
  {
    static ATerm l_8 (ATerm t);
    static ATerm l_8 (ATerm t)
    {
      ATerm n_136 = NULL;
      n_136 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_59, n_136);
      t = q_150(t);
      return(t);
    }
    t = fetch_1_0(l_8, t);
  }
  t = p_59;
  return(t);
}
static ATerm i_13 (ATerm i_150 (ATerm), ATerm k_59, ATerm j_59, ATerm t)
{
  static ATerm d_137 (ATerm t);
  static ATerm d_137 (ATerm t)
  {
    ATerm y_136 = NULL,z_136 = NULL,a_137 = NULL;
    y_136 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_136;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_136 = ATgetFirst((ATermList) t);
            a_137 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_54 = t;
          int g_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_136;
              {
                static ATerm m_8 (ATerm t);
                static ATerm m_8 (ATerm t)
                {
                  t = j_59;
                  return(t);
                }
                t = h_13(i_150, m_8, z_136, a_137, t);
              }
              t = d_137(t);
              LocalPopChoice(g_54);
            }
          else
            {
              t = f_54;
              {
                ATerm y_68 = NULL,e_69 = NULL,t_13 = NULL;
                t = SSLgetAnnotations(y_136);
                y_68 = t;
                t = a_137;
                t = d_137(t);
                e_69 = t;
                t = (ATerm) ATinsert(CheckATermList(e_69), z_136);
                t_13 = t;
                t = SSLsetAnnotations(t_13, y_68);
              }
            }
        }
      }
    return(t);
  }
  t = k_59;
  t = d_137(t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_54 = ATgetArgument(t, 0);
      if(((ATgetType(h_54) != AT_LIST) || !(ATisEmpty(h_54))))
        _fail(t);
      {
        ATerm i_54 = ATgetArgument(t, 1);
        if(((ATgetType(i_54) != AT_LIST) || !(ATisEmpty(i_54))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm l_137 = NULL,m_137 = NULL,n_137 = NULL,o_137 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_54 = ATgetArgument(t, 0);
      if(((ATgetType(j_54) == AT_LIST) && !(ATisEmpty(j_54))))
        {
          l_137 = ATgetFirst((ATermList) j_54);
          m_137 = (ATerm) ATgetNext((ATermList) j_54);
        }
      else
        _fail(t);
      {
        ATerm k_54 = ATgetArgument(t, 1);
        if(((ATgetType(k_54) == AT_LIST) && !(ATisEmpty(k_54))))
          {
            n_137 = ATgetFirst((ATermList) k_54);
            o_137 = (ATerm) ATgetNext((ATermList) k_54);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_137, n_137), (ATerm) ATmakeAppl(sym__2, m_137, o_137));
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm p_137 = NULL,q_137 = NULL;
  if(match_cons(t, sym__2))
    {
      p_137 = ATgetArgument(t, 0);
      q_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_137), p_137);
  return(t);
}
static ATerm k_13 (ATerm t_818, ATerm y_818, ATerm y_80, ATerm t)
{
  ATerm g_137 = NULL,h_137 = NULL,i_137 = NULL,j_137 = NULL;
  t = SSL_explode_term(y_818);
  if(match_cons(t, sym__2))
    {
      g_137 = ATgetArgument(t, 0);
      i_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(t_818);
  if(match_cons(t, sym__2))
    {
      if((g_137 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      h_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_137, i_137);
  t = genzip_4_0(s_8, w_8, x_8, _id, t);
  j_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_137, y_80);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm t)
{
  static ATerm s_137 (ATerm t);
  static ATerm s_137 (ATerm t)
  {
    ATerm l_54 = t;
    int m_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_141(t);
        LocalPopChoice(m_54);
      }
    else
      {
        t = l_54;
        t = u_141(t);
        t = s_137(t);
      }
    return(t);
  }
  t = s_137(t);
  return(t);
}
ATerm for_3_0 (ATerm w_141 (ATerm), ATerm x_141 (ATerm), ATerm y_141 (ATerm), ATerm t)
{
  t = w_141(t);
  t = while_not_2_0(x_141, y_141, t);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm z_137 = NULL;
  z_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, z_137);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm a_138 = NULL,b_138 = NULL,c_138 = NULL,d_138 = NULL,x_13 = NULL;
  d_138 = t;
  if(match_cons(t, sym__2))
    {
      b_138 = ATgetArgument(t, 0);
      c_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_138);
  a_138 = t;
  t = c_138;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_138, c_138);
  x_13 = t;
  t = SSLsetAnnotations(x_13, a_138);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm y_138 = NULL,z_138 = NULL,a_139 = NULL,b_139 = NULL,c_139 = NULL;
  y_138 = t;
  if(match_cons(t, sym__2))
    {
      z_138 = ATgetArgument(t, 0);
      a_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_139;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_139 = ATgetFirst((ATermList) t);
      c_139 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_54 = t;
        int o_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_139(z_138, a_139, y_138, t);
            LocalPopChoice(o_54);
          }
        else
          {
            t = n_54;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_138), b_139), c_139);
          }
      }
    }
  else
    {
      t = m_139(z_138, a_139, y_138, t);
    }
  return(t);
}
static ATerm m_139 (ATerm e_138, ATerm f_138, ATerm g_138, ATerm t)
{
  ATerm h_138 = NULL,k_138 = NULL,c_14 = NULL,p_138 = NULL,q_138 = NULL,r_138 = NULL,s_138 = NULL;
  t = SSLgetAnnotations(g_138);
  h_138 = t;
  t = f_138;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_138 = ATgetFirst((ATermList) t);
      s_138 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_138;
  if(match_cons(t, sym__2))
    {
      q_138 = ATgetArgument(t, 0);
      r_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_54 = t;
    int q_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_138;
        if((q_138 != t))
          {
            _fail(t);
          }
        t = s_138;
        LocalPopChoice(q_54);
      }
    else
      {
        t = p_54;
        t = f_138;
        t = k_13(q_138, r_138, s_138, t);
      }
  }
  k_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_138, k_138);
  c_14 = t;
  t = SSLsetAnnotations(c_14, h_138);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm l_139 = NULL;
  if(match_cons(t, sym__2))
    {
      l_139 = ATgetArgument(t, 0);
      if((l_139 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm r_54 = t;
  int s_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(y_8, z_8, a_9, t);
      LocalPopChoice(s_54);
    }
  else
    {
      t = r_54;
      {
        ATerm g_139 = NULL,h_139 = NULL,i_139 = NULL;
        g_139 = t;
        if(match_cons(t, sym__2))
          {
            h_139 = ATgetArgument(t, 0);
            i_139 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_139;
        t = i_13(b_9, h_139, i_139, t);
      }
    }
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm b_70 = NULL,c_70 = NULL;
  if(match_cons(t, sym__2))
    {
      b_70 = ATgetArgument(t, 0);
      c_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_13(k_9, b_70, c_70, t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm d_70 = NULL;
  if(match_cons(t, sym__2))
    {
      d_70 = ATgetArgument(t, 0);
      if((d_70 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm m_70 = NULL,r_70 = NULL;
  if(match_cons(t, sym__2))
    {
      m_70 = ATgetArgument(t, 0);
      r_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_13(n_9, m_70, r_70, t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm s_70 = NULL;
  if(match_cons(t, sym__2))
    {
      s_70 = ATgetArgument(t, 0);
      if((s_70 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm k_157 (ATerm), ATerm l_157 (ATerm), ATerm m_157 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm f_140 (ATerm t);
  static ATerm f_140 (ATerm t)
  {
    ATerm t_54 = t;
    int u_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_157(t);
        LocalPopChoice(u_54);
      }
    else
      {
        t = t_54;
        {
          ATerm v_54 = t;
          int w_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_139 = NULL,p_139 = NULL,o_69 = NULL,p_69 = NULL;
              o_139 = t;
              t = l_157(t);
              p_139 = t;
              t = o_139;
              {
                static ATerm c_9 (ATerm t);
                static ATerm c_9 (ATerm t)
                {
                  ATerm r_139 = NULL;
                  t = f_140(t);
                  r_139 = t;
                  t = (ATerm) ATmakeAppl(sym__2, r_139, p_139);
                  t = diff_0_0(t);
                  return(t);
                }
                t = m_157(c_9, f_140, e_9, t);
              }
              p_69 = t;
              t = SSL_explode_term(p_69);
              if(match_cons(t, sym__2))
                {
                  ATerm x_54 = ATgetArgument(t, 0);
                  o_69 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_69;
              t = foldr_3_0(f_9, j_9, _id, t);
              LocalPopChoice(w_54);
            }
          else
            {
              t = v_54;
              {
                ATerm g_70 = NULL,h_70 = NULL;
                h_70 = t;
                t = SSL_explode_term(h_70);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_54 = ATgetArgument(t, 0);
                    g_70 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_70;
                t = foldr_3_0(l_9, m_9, f_140, t);
              }
            }
        }
      }
    return(t);
  }
  t = f_140(t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm s_140 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_140);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm z_54 = t;
  int a_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_55);
    }
  else
    {
      t = z_54;
      {
        ATerm b_55 = t;
        int c_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_55);
          }
        else
          {
            t = b_55;
            {
              ATerm e_55 = t;
              int f_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_140 = NULL,v_140 = NULL,w_140 = NULL,x_140 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_140 = ATgetArgument(t, 0);
                      v_140 = ATgetArgument(t, 1);
                      w_140 = ATgetArgument(t, 2);
                      x_140 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_140;
                  t = map_1_0(r_9, t);
                  LocalPopChoice(f_55);
                }
              else
                {
                  t = e_55;
                  {
                    ATerm g_55 = t;
                    int h_55 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(h_55);
                      }
                    else
                      {
                        t = g_55;
                        t = dynrule_targs_1_0(s_9, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm h_141 = NULL;
  ATerm i_55 = t;
  int l_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_141 = ATgetArgument(t, 0);
          {
            ATerm r_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_55);
      t = h_141;
    }
  else
    {
      t = i_55;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_141 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_141;
    }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = map_1_0(b_10, t);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm m_141 = NULL;
  ATerm t_55 = t;
  int u_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_141 = ATgetArgument(t, 0);
          {
            ATerm w_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_55);
      t = m_141;
    }
  else
    {
      t = t_55;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_141 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_141;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm l_140 = NULL,p_140 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      p_140 = ATgetArgument(t, 0);
      t = p_140;
      if(match_cons(t, sym_Rule_3))
        {
          l_140 = ATgetArgument(t, 0);
          {
            ATerm z_55 = ATgetArgument(t, 1);
          }
          {
            ATerm a_56 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = l_140;
      t = free_vars_3_0(o_9, p_9, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          p_140 = ATgetArgument(t, 0);
          {
            ATerm b_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = p_140;
    }
  return(t);
}
ATerm Var_1_0 (ATerm b_112 (ATerm), ATerm t)
{
  ATerm q_141 = NULL,r_141 = NULL,s_141 = NULL,z_141 = NULL,f_14 = NULL;
  z_141 = t;
  if(match_cons(t, sym_Var_1))
    {
      r_141 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_141);
  q_141 = t;
  t = r_141;
  t = b_112(t);
  s_141 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_141);
  f_14 = t;
  t = SSLsetAnnotations(f_14, q_141);
  return(t);
}
static ATerm m_13 (ATerm s_155 (ATerm), ATerm t_155 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm v_62, ATerm u_62, ATerm t_62, ATerm t)
{
  static ATerm f_10 (ATerm t);
  static ATerm g_10 (ATerm t);
  static ATerm f_10 (ATerm t)
  {
    ATerm b_142 = NULL;
    b_142 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_142, t_62);
    t = s_155(t);
    return(t);
  }
  static ATerm g_10 (ATerm t)
  {
    ATerm c_142 = NULL;
    c_142 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_142, u_62);
    t = s_155(t);
    return(t);
  }
  t = v_62;
  t = t_155(f_10, g_10, _id, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm k_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_56 = ATgetArgument(t, 0);
      if(((ATgetType(c_56) != AT_LIST) || !(ATisEmpty(c_56))))
        _fail(t);
      {
        ATerm d_56 = ATgetArgument(t, 1);
        if(((ATgetType(d_56) != AT_LIST) || !(ATisEmpty(d_56))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm l_142 = NULL,m_142 = NULL,n_142 = NULL,o_142 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_56 = ATgetArgument(t, 0);
      if(((ATgetType(e_56) == AT_LIST) && !(ATisEmpty(e_56))))
        {
          l_142 = ATgetFirst((ATermList) e_56);
          m_142 = (ATerm) ATgetNext((ATermList) e_56);
        }
      else
        _fail(t);
      {
        ATerm f_56 = ATgetArgument(t, 1);
        if(((ATgetType(f_56) == AT_LIST) && !(ATisEmpty(f_56))))
          {
            n_142 = ATgetFirst((ATermList) f_56);
            o_142 = (ATerm) ATgetNext((ATermList) f_56);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_142, n_142), (ATerm) ATmakeAppl(sym__2, m_142, o_142));
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm p_142 = NULL,q_142 = NULL;
  if(match_cons(t, sym__2))
    {
      p_142 = ATgetArgument(t, 0);
      q_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_142), p_142);
  return(t);
}
static ATerm n_13 (ATerm m_155 (ATerm), ATerm n_155 (ATerm (ATerm), ATerm), ATerm n_62, ATerm q_62, ATerm t)
{
  ATerm f_142 = NULL,g_142 = NULL,h_142 = NULL,i_142 = NULL,k_142 = NULL;
  t = n_62;
  t = m_155(t);
  f_142 = t;
  t = map_1_0(new_0_0, t);
  g_142 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_142, g_142);
  t = genzip_4_0(k_10, l_10, n_10, _id, t);
  k_142 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_142, q_62);
  t = conc_0_0(t);
  h_142 = t;
  t = n_62;
  {
    static ATerm o_10 (ATerm t);
    static ATerm o_10 (ATerm t)
    {
      t = g_142;
      return(t);
    }
    t = n_155(o_10, t);
  }
  i_142 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_142, q_62, h_142);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm w_142 = NULL,x_142 = NULL,y_142 = NULL,e_143 = NULL,g_143 = NULL,h_143 = NULL,i_143 = NULL;
  y_142 = t;
  if(match_cons(t, sym__2))
    {
      e_143 = ATgetArgument(t, 0);
      g_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_143;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_143 = ATgetFirst((ATermList) t);
      i_143 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_143;
  if(match_cons(t, sym__2))
    {
      w_142 = ATgetArgument(t, 0);
      x_142 = ATgetArgument(t, 1);
      {
        ATerm g_56 = t;
        int h_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_142;
            if((e_143 != t))
              {
                _fail(t);
              }
            t = x_142;
            LocalPopChoice(h_56);
          }
        else
          {
            t = g_56;
            t = (ATerm) ATmakeAppl(sym__2, e_143, i_143);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, e_143, i_143);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm a_156 (ATerm), ATerm t)
{
  static ATerm e_144 (ATerm t);
  static ATerm e_144 (ATerm t)
  {
    ATerm i_56 = t;
    int j_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_156(t);
        LocalPopChoice(j_56);
      }
    else
      {
        t = i_56;
        {
          ATerm b_144 = NULL,c_144 = NULL,d_144 = NULL;
          static ATerm q_10 (ATerm t);
          static ATerm q_10 (ATerm t)
          {
            ATerm p_71 = NULL;
            p_71 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_71, not_null(d_144));
            t = e_144(t);
            return(t);
          }
          b_144 = t;
          if(match_cons(t, sym__2))
            {
              c_144 = ATgetArgument(t, 0);
              if(((d_144 != NULL) && (d_144 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                d_144 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_144;
          t = SRTS_all(q_10, t);
        }
      }
    return(t);
  }
  t = e_144(t);
  return(t);
}
ATerm rename_4_0 (ATerm h_155 (ATerm (ATerm), ATerm), ATerm i_155 (ATerm), ATerm j_155 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_155 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm i_144 = NULL;
  static ATerm x_144 (ATerm t);
  static ATerm x_144 (ATerm t)
  {
    static ATerm r_10 (ATerm t);
    static ATerm r_10 (ATerm t)
    {
      ATerm r_144 = NULL,s_144 = NULL,t_144 = NULL;
      r_144 = t;
      if(match_cons(t, sym__2))
        {
          s_144 = ATgetArgument(t, 0);
          t_144 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm k_56 = t;
        int l_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_10 (ATerm t);
            static ATerm x_10 (ATerm t)
            {
              ATerm w_144 = NULL;
              w_144 = t;
              t = (ATerm) ATmakeAppl(sym__2, w_144, t_144);
              t = lookup_0_0(t);
              return(t);
            }
            t = s_144;
            t = h_155(x_10, t);
            LocalPopChoice(l_56);
          }
        else
          {
            t = k_56;
            {
              ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL;
              t = r_144;
              t = n_13(i_155, k_155, s_144, t_144, t);
              if(match_cons(t, sym__3))
                {
                  k_72 = ATgetArgument(t, 0);
                  l_72 = ATgetArgument(t, 1);
                  m_72 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = m_13(x_144, j_155, k_72, l_72, m_72, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(r_10, t);
    return(t);
  }
  i_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_144, (ATerm) ATempty);
  t = x_144(t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm m_56 = t;
  int n_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_56);
    }
  else
    {
      t = m_56;
      {
        ATerm o_56 = t;
        int p_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_145 = NULL,e_145 = NULL,f_145 = NULL,g_145 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                d_145 = ATgetArgument(t, 0);
                e_145 = ATgetArgument(t, 1);
                f_145 = ATgetArgument(t, 2);
                g_145 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = f_145;
            t = map_1_0(c_11, t);
            LocalPopChoice(p_56);
          }
        else
          {
            t = o_56;
            {
              ATerm q_56 = t;
              int r_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Bind8_0_0(t);
                  LocalPopChoice(r_56);
                }
              else
                {
                  t = q_56;
                  t = dynrule_targs_1_0(d_11, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm n_145 = NULL;
  ATerm s_56 = t;
  int t_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_145 = ATgetArgument(t, 0);
          {
            ATerm u_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_56);
      t = n_145;
    }
  else
    {
      t = s_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_145 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_145;
    }
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = map_1_0(e_11, t);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm s_145 = NULL;
  ATerm v_56 = t;
  int x_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_145 = ATgetArgument(t, 0);
          {
            ATerm y_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_56);
      t = s_145;
    }
  else
    {
      t = v_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_145 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_145;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, y_10, tboundin_3_0, tpaste_1_0, t);
  t = srename_0_0(t);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm l_77 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      l_77 = ATgetArgument(t, 0);
      {
        ATerm z_56 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = l_77;
  return(t);
}
static ATerm g_11 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_57 = ATgetArgument(t, 0);
      if(((ATgetType(c_57) != AT_LIST) || !(ATisEmpty(c_57))))
        _fail(t);
      {
        ATerm d_57 = ATgetArgument(t, 1);
        if(((ATgetType(d_57) != AT_LIST) || !(ATisEmpty(d_57))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm m_77 = NULL,n_77 = NULL,o_77 = NULL,r_77 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_57 = ATgetArgument(t, 0);
      if(((ATgetType(e_57) == AT_LIST) && !(ATisEmpty(e_57))))
        {
          m_77 = ATgetFirst((ATermList) e_57);
          n_77 = (ATerm) ATgetNext((ATermList) e_57);
        }
      else
        _fail(t);
      {
        ATerm f_57 = ATgetArgument(t, 1);
        if(((ATgetType(f_57) == AT_LIST) && !(ATisEmpty(f_57))))
          {
            o_77 = ATgetFirst((ATermList) f_57);
            r_77 = (ATerm) ATgetNext((ATermList) f_57);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_77, o_77), (ATerm) ATmakeAppl(sym__2, n_77, r_77));
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm t_77 = NULL,v_77 = NULL;
  if(match_cons(t, sym__2))
    {
      t_77 = ATgetArgument(t, 0);
      v_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_77), t_77);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm w_77 = NULL,x_77 = NULL;
  if(match_cons(t, sym__2))
    {
      w_77 = ATgetArgument(t, 0);
      x_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_77), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_77))));
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = term_e_17;
  return(t);
}
ATerm InlineCall_0_0 (ATerm t)
{
  ATerm n_147 = NULL,o_147 = NULL,p_147 = NULL,q_147 = NULL,s_147 = NULL;
  n_147 = t;
  if(match_cons(t, sym_CallT_3))
    {
      o_147 = ATgetArgument(t, 0);
      q_147 = ATgetArgument(t, 1);
      s_147 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_147;
  if(match_cons(t, sym_SVar_1))
    {
      p_147 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_57 = t;
    int h_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_74 = NULL,y_74 = NULL;
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_147), (ATerm)ATempty, (ATerm) ATempty);
        x_74 = t;
        t = term_e_17;
        y_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_147), (ATerm)ATempty, (ATerm) ATempty));
        t = i_7(y_74, x_74, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = n_147;
        _fail(t);
        LocalPopChoice(h_57);
      }
    else
      {
        t = g_57;
        {
          ATerm i_57 = t;
          int j_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_75 = NULL,t_75 = NULL;
              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_147), (ATerm)ATempty, (ATerm) ATempty);
              s_75 = t;
              t = term_e_17;
              t_75 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_147), (ATerm)ATempty, (ATerm) ATempty));
              t = i_7(t_75, s_75, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = n_147;
              _fail(t);
              LocalPopChoice(j_57);
            }
          else
            {
              t = i_57;
              {
                ATerm k_57 = t;
                int l_57 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_76 = NULL,m_76 = NULL,t_76 = NULL,u_76 = NULL,z_76 = NULL,a_77 = NULL,f_77 = NULL,g_77 = NULL,k_77 = NULL,h_78 = NULL,k_78 = NULL;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_147), (ATerm)ATempty, (ATerm) ATempty);
                    h_78 = t;
                    t = term_e_17;
                    k_78 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_147), (ATerm)ATempty, (ATerm) ATempty));
                    t = i_7(k_78, h_78, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm n_57 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) n_57) != ATmakeSymbol("d_0", 0, ATtrue)))
                          _fail(t);
                        h_76 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = h_76;
                    t = strename_0_0(t);
                    if(match_cons(t, sym_SDefT_4))
                      {
                        if((p_147 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        m_76 = ATgetArgument(t, 1);
                        u_76 = ATgetArgument(t, 2);
                        t_76 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__3, m_76, q_147, t_76);
                    t = substitute_args_0_0(t);
                    a_77 = t;
                    t = u_76;
                    t = map_1_0(f_11, t);
                    z_76 = t;
                    t = (ATerm) ATmakeAppl(sym__2, s_147, z_76);
                    t = genzip_4_0(g_11, h_11, i_11, j_11, t);
                    f_77 = t;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_147), (ATerm)ATempty, (ATerm) ATempty);
                    g_77 = t;
                    t = term_q_57;
                    k_77 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_147), (ATerm)ATempty, (ATerm) ATempty), term_q_57);
                    t = u_13(l_11, g_77, k_77, t);
                    t = (ATerm) ATmakeAppl(sym_Scope_2, z_76, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, f_77), a_77));
                    t = simplify_0_0(t);
                    LocalPopChoice(l_57);
                  }
                else
                  {
                    t = k_57;
                    {
                      ATerm e_79 = NULL,f_79 = NULL;
                      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_147), (ATerm)ATempty, (ATerm) ATempty);
                      e_79 = t;
                      t = term_e_17;
                      f_79 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_147), (ATerm)ATempty, (ATerm) ATempty));
                      t = i_7(f_79, e_79, t);
                      if(!(match_cons(t, sym_Undefined_0)))
                        _fail(t);
                      t = n_147;
                      _fail(t);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm r_57 = t;
  if((PushChoice() == 0))
    {
      ATerm z_147 = NULL,a_148 = NULL;
      if(match_cons(t, sym__2))
        {
          z_147 = ATgetArgument(t, 0);
          a_148 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, z_147, a_148);
      {
        ATerm s_57 = t;
        int t_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(z_147, a_148);
            LocalPopChoice(t_57);
          }
        else
          {
            t = s_57;
            t = SSL_gtr(z_147, a_148);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, z_147, a_148);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_57;
    }
  return(t);
}
ATerm foldr_3_0 (ATerm s_153 (ATerm), ATerm t_153 (ATerm), ATerm u_153 (ATerm), ATerm t)
{
  ATerm c_148 = NULL,f_148 = NULL,g_148 = NULL;
  c_148 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_148;
      t = s_153(t);
    }
  else
    {
      ATerm j_148 = NULL,m_148 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_148 = ATgetFirst((ATermList) t);
          g_148 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_148;
      t = u_153(t);
      j_148 = t;
      t = g_148;
      t = foldr_3_0(s_153, t_153, u_153, t);
      m_148 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_148, m_148);
      t = t_153(t);
    }
  return(t);
}
static ATerm m_11 (ATerm t)
{
  t = term_b_58;
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm u_79 = NULL,z_79 = NULL;
  if(match_cons(t, sym__2))
    {
      u_79 = ATgetArgument(t, 0);
      z_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_15(u_79, z_79, t);
  return(t);
}
ATerm occurrences_1_0 (ATerm u_150 (ATerm), ATerm t)
{
  ATerm p_148 = NULL,q_148 = NULL,r_148 = NULL,i_79 = NULL;
  r_148 = t;
  {
    ATerm e_58 = t;
    int f_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_150(t);
        t = term_o_17;
        LocalPopChoice(f_58);
      }
    else
      {
        t = e_58;
        t = term_b_58;
      }
  }
  p_148 = t;
  t = SSL_explode_term(r_148);
  if(match_cons(t, sym__2))
    {
      ATerm g_58 = ATgetArgument(t, 0);
      i_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_79;
  {
    static ATerm q_11 (ATerm t);
    static ATerm q_11 (ATerm t)
    {
      t = occurrences_1_0(u_150, t);
      return(t);
    }
    t = foldr_3_0(m_11, n_11, q_11, t);
  }
  q_148 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_148, q_148);
  t = m_15(p_148, q_148, t);
  return(t);
}
static ATerm s_13 (ATerm w_132 (ATerm), ATerm j_27, ATerm i_27, ATerm t)
{
  ATerm u_148 = NULL,v_148 = NULL;
  u_148 = t;
  t = i_27;
  {
    ATerm h_58 = t;
    if((PushChoice() == 0))
      {
        static ATerm r_11 (ATerm t);
        static ATerm r_11 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm i_58 = ATgetArgument(t, 0);
              if(match_cons(i_58, sym_SVar_1))
                {
                  if((j_27 != ATgetArgument(i_58, 0)))
                    {
                      _fail(ATgetArgument(i_58, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm j_58 = ATgetArgument(t, 1);
              }
              {
                ATerm k_58 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(r_11, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_58;
      }
  }
  t = w_132(t);
  {
    static ATerm s_11 (ATerm t);
    static ATerm s_11 (ATerm t)
    {
      if(match_cons(t, sym_CallT_3))
        {
          ATerm l_58 = ATgetArgument(t, 0);
          if(match_cons(l_58, sym_SVar_1))
            {
              if((j_27 != ATgetArgument(l_58, 0)))
                {
                  _fail(ATgetArgument(l_58, 0));
                }
            }
          else
            _fail(t);
          {
            ATerm m_58 = ATgetArgument(t, 1);
          }
          {
            ATerm o_58 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      return(t);
    }
    t = occurrences_1_0(s_11, t);
  }
  v_148 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_148, term_o_17);
  t = leq_0_0(t);
  t = u_148;
  return(t);
}
static ATerm u_13 (ATerm d_143 (ATerm), ATerm v_37, ATerm t_37, ATerm t)
{
  ATerm w_148 = NULL,x_148 = NULL,y_148 = NULL,z_148 = NULL,a_149 = NULL,b_149 = NULL,c_149 = NULL,d_149 = NULL;
  z_148 = t;
  t = d_143(t);
  w_148 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_148, v_37, t_37);
  t = t_15(w_148, v_37, t_37, t);
  {
    ATerm p_58 = t;
    int q_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_149 = NULL;
        t = term_r_58;
        e_149 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_148, term_r_58);
        t = s_15(w_148, e_149, t);
        {
          ATerm v_58 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_58;
            }
        }
        LocalPopChoice(q_58);
      }
    else
      {
        t = p_58;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_148 = ATgetFirst((ATermList) t);
      y_148 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, w_148, term_r_58, (ATerm) ATinsert(CheckATermList(y_148), (ATerm) ATinsert(CheckATermList(x_148), v_37)));
  t = lookup_table_0_1(w_148, t);
  d_149 = t;
  t = term_r_58;
  a_149 = t;
  t = (ATerm) ATinsert(CheckATermList(y_148), (ATerm) ATinsert(CheckATermList(x_148), v_37));
  b_149 = t;
  t = d_149;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_149 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_15(a_149, b_149, c_149, t);
  t = z_148;
  return(t);
}
static ATerm w_13 (ATerm e_39, ATerm f_39, ATerm t)
{
  ATerm f_149 = NULL,g_149 = NULL;
  g_149 = t;
  {
    ATerm w_58 = t;
    int x_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_39, f_39);
        t = s_15(e_39, f_39, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_58 = ATgetFirst((ATermList) t);
            f_149 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(x_58);
        {
          ATerm h_149 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, e_39, f_39, f_149);
          t = lookup_table_0_1(e_39, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              h_149 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_15(f_39, f_149, h_149, t);
          t = (ATerm) ATmakeAppl(sym__3, e_39, f_39, f_149);
        }
      }
    else
      {
        t = w_58;
        {
          ATerm j_149 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, e_39, f_39);
          t = lookup_table_0_1(e_39, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              j_149 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_15(f_39, j_149, t);
          t = (ATerm) ATmakeAppl(sym__2, e_39, f_39);
        }
      }
  }
  t = g_149;
  return(t);
}
ATerm end_scope_1_0 (ATerm a_143 (ATerm), ATerm t)
{
  ATerm l_149 = NULL,m_149 = NULL,n_149 = NULL,o_149 = NULL,p_149 = NULL,q_149 = NULL,r_149 = NULL;
  o_149 = t;
  t = a_143(t);
  n_149 = t;
  {
    ATerm z_58 = t;
    int a_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_149 = NULL;
        t = term_r_58;
        s_149 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_149, term_r_58);
        t = s_15(n_149, s_149, t);
        {
          ATerm b_59 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_59;
            }
        }
        LocalPopChoice(a_59);
      }
    else
      {
        t = z_58;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_149 = ATgetFirst((ATermList) t);
      l_149 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, n_149, term_r_58, l_149);
  t = lookup_table_0_1(n_149, t);
  r_149 = t;
  t = term_r_58;
  p_149 = t;
  t = r_149;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_149 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_15(p_149, l_149, q_149, t);
  t = m_149;
  {
    static ATerm t_11 (ATerm t);
    static ATerm t_11 (ATerm t)
    {
      ATerm t_149 = NULL;
      t_149 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_149, t_149);
      t = w_13(n_149, t_149, t);
      return(t);
    }
    t = map_1_0(t_11, t);
  }
  t = o_149;
  return(t);
}
ATerm restore_always_2_0 (ATerm n_138 (ATerm), ATerm o_138 (ATerm), ATerm t)
{
  ATerm c_59 = t;
  int d_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_138(t);
      t = o_138(t);
      LocalPopChoice(d_59);
    }
  else
    {
      t = c_59;
      t = o_138(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm z_142 (ATerm), ATerm t)
{
  ATerm v_149 = NULL,w_149 = NULL,x_149 = NULL,y_149 = NULL,z_149 = NULL,a_150 = NULL,b_150 = NULL;
  w_149 = t;
  t = z_142(t);
  v_149 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_149, term_r_58);
  {
    ATerm e_59 = t;
    int f_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_150 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm g_59 = ATgetArgument(t, 0);
            ATerm i_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_58;
        f_150 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_149, term_r_58);
        t = s_15(v_149, f_150, t);
        LocalPopChoice(f_59);
      }
    else
      {
        t = e_59;
        t = (ATerm) ATempty;
      }
  }
  x_149 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_149, term_r_58, (ATerm) ATinsert(CheckATermList(x_149), (ATerm) ATempty));
  t = lookup_table_0_1(v_149, t);
  b_150 = t;
  t = term_r_58;
  y_149 = t;
  t = (ATerm) ATinsert(CheckATermList(x_149), (ATerm) ATempty);
  z_149 = t;
  t = b_150;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_150 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_15(y_149, z_149, a_150, t);
  t = w_149;
  return(t);
}
ATerm scope_2_0 (ATerm b_143 (ATerm), ATerm c_143 (ATerm), ATerm t)
{
  static ATerm u_11 (ATerm t);
  static ATerm u_11 (ATerm t)
  {
    t = end_scope_1_0(b_143, t);
    return(t);
  }
  t = begin_scope_1_0(b_143, t);
  t = restore_always_2_0(c_143, u_11, t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = term_e_17;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = term_f_17;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_e_17;
  return(t);
}
ATerm inline_sdef_0_0 (ATerm t)
{
  static ATerm w_11 (ATerm t);
  static ATerm w_11 (ATerm t)
  {
    static ATerm z_11 (ATerm t);
    static ATerm z_11 (ATerm t)
    {
      ATerm n_59 = t;
      int o_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_150 = NULL,p_150 = NULL,s_150 = NULL;
          m_150 = t;
          {
            ATerm r_59 = t;
            int s_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    p_150 = ATgetArgument(t, 0);
                    {
                      ATerm w_59 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm x_59 = ATgetArgument(t, 2);
                    }
                    {
                      ATerm z_59 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(s_59);
                {
                  ATerm w_150 = NULL,c_151 = NULL;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_150), (ATerm)ATempty, (ATerm) ATempty);
                  w_150 = t;
                  t = term_q_57;
                  c_151 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_150), (ATerm)ATempty, (ATerm) ATempty), term_q_57);
                  t = u_13(a_12, w_150, c_151, t);
                  t = m_150;
                }
              }
            else
              {
                t = r_59;
                if(match_cons(t, sym_Let_2))
                  {
                    p_150 = ATgetArgument(t, 0);
                    s_150 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = p_150;
                {
                  static ATerm b_12 (ATerm t);
                  static ATerm b_12 (ATerm t)
                  {
                    ATerm f_151 = NULL,g_151 = NULL;
                    if(match_cons(t, sym_SDefT_4))
                      {
                        f_151 = ATgetArgument(t, 0);
                        {
                          ATerm a_60 = ATgetArgument(t, 1);
                        }
                        {
                          ATerm b_60 = ATgetArgument(t, 2);
                        }
                        g_151 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    {
                      static ATerm c_12 (ATerm t);
                      static ATerm c_12 (ATerm t)
                      {
                        t = s_150;
                        return(t);
                      }
                      t = s_13(c_12, f_151, g_151, t);
                    }
                    t = AddSDef_0_0(t);
                    return(t);
                  }
                  t = map_1_0(b_12, t);
                }
                t = (ATerm) ATmakeAppl(sym_Let_2, p_150, s_150);
              }
          }
          LocalPopChoice(o_59);
        }
      else
        {
          t = n_59;
          t = repeat_2_0(InlineCall_0_0, _id, t);
        }
      t = SRTS_all(inline_sdef_0_0, t);
      return(t);
    }
    t = scope_2_0(x_11, z_11, t);
    return(t);
  }
  t = scope_2_0(v_11, w_11, t);
  return(t);
}
ATerm topdown_1_0 (ATerm c_135 (ATerm), ATerm t)
{
  static ATerm d_12 (ATerm t);
  static ATerm d_12 (ATerm t)
  {
    t = topdown_1_0(c_135, t);
    return(t);
  }
  t = c_135(t);
  t = SRTS_all(d_12, t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm c_60 = t;
  int d_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm e_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(d_60);
      {
        ATerm k_151 = NULL,l_151 = NULL;
        k_151 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm f_60 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        l_151 = t;
        t = SSLgetAnnotations(k_151);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_60 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) g_60) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm h_60 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(h_60) != AT_LIST) || !(ATisEmpty(h_60))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = l_151;
      }
    }
  else
    {
      t = c_60;
      {
        ATerm i_60 = t;
        int j_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm k_60 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) k_60) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm l_60 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(j_60);
            _fail(t);
          }
        else
          {
            t = i_60;
          }
      }
    }
  return(t);
}
static ATerm y_13 (ATerm j_101, ATerm i_101, ATerm t)
{
  t = j_101;
  t = topdown_1_0(h_12, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, j_101);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm u_151 = NULL,v_151 = NULL,x_151 = NULL,y_151 = NULL,z_151 = NULL,a_152 = NULL,b_152 = NULL,c_152 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      x_151 = ATgetArgument(t, 0);
      a_152 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_151;
  if(match_cons(t, sym_Match_1))
    {
      y_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_151;
  if(match_cons(t, sym_Var_1))
    {
      z_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_152;
  if(match_cons(t, sym_Seq_2))
    {
      b_152 = ATgetArgument(t, 0);
      v_151 = ATgetArgument(t, 1);
      t = b_152;
      if(match_cons(t, sym_Build_1))
        {
          c_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_152;
      if(match_cons(t, sym_Var_1))
        {
          u_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_151;
      if((z_151 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_151)), v_151);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          b_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_152;
      if(match_cons(t, sym_Var_1))
        {
          c_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_152;
      if((z_151 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_151));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm k_152 = NULL,l_152 = NULL,n_152 = NULL,o_152 = NULL,p_152 = NULL,q_152 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      n_152 = ATgetArgument(t, 0);
      p_152 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_152;
  if(match_cons(t, sym_Build_1))
    {
      o_152 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_152;
  if(match_cons(t, sym_Seq_2))
    {
      q_152 = ATgetArgument(t, 0);
      l_152 = ATgetArgument(t, 1);
      t = q_152;
      if(match_cons(t, sym_Match_1))
        {
          k_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_152;
      if((o_152 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_152), l_152);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          q_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_152;
      if((o_152 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, o_152);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm y_152 = NULL,a_153 = NULL,c_153 = NULL,d_153 = NULL,e_153 = NULL,f_153 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      c_153 = ATgetArgument(t, 0);
      e_153 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_153;
  if(match_cons(t, sym_Match_1))
    {
      d_153 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_153;
  if(match_cons(t, sym_Seq_2))
    {
      f_153 = ATgetArgument(t, 0);
      a_153 = ATgetArgument(t, 1);
      t = f_153;
      if(match_cons(t, sym_Match_1))
        {
          y_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_152;
      if((d_153 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_153), a_153);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          f_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_153;
      if((d_153 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, d_153);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm n_153 = NULL,o_153 = NULL,p_153 = NULL,w_153 = NULL,y_153 = NULL,z_153 = NULL,a_154 = NULL,b_154 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      w_153 = ATgetArgument(t, 0);
      y_153 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_153;
  if(match_cons(t, sym_Build_1))
    {
      ATerm m_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_153;
  if(match_cons(t, sym_Seq_2))
    {
      z_153 = ATgetArgument(t, 0);
      a_154 = ATgetArgument(t, 1);
      t = z_153;
      if(match_cons(t, sym_PrimT_3))
        {
          n_153 = ATgetArgument(t, 0);
          o_153 = ATgetArgument(t, 1);
          p_153 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, n_153, o_153, p_153), a_154);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          z_153 = ATgetArgument(t, 0);
          a_154 = ATgetArgument(t, 1);
          b_154 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, z_153, a_154, b_154);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm n_154 = NULL,o_154 = NULL,q_154 = NULL,s_154 = NULL,t_154 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      q_154 = ATgetArgument(t, 0);
      s_154 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_154;
  if(match_cons(t, sym_Build_1))
    {
      ATerm n_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_154;
  if(match_cons(t, sym_Seq_2))
    {
      t_154 = ATgetArgument(t, 0);
      o_154 = ATgetArgument(t, 1);
      t = t_154;
      if(match_cons(t, sym_Build_1))
        {
          n_154 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_154), o_154);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          t_154 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, t_154);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm t_139 (ATerm), ATerm u_139 (ATerm), ATerm v_139 (ATerm), ATerm w_139 (ATerm), ATerm t)
{
  static ATerm d_155 (ATerm t);
  static ATerm d_155 (ATerm t)
  {
    ATerm o_60 = t;
    int p_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_139(t);
        LocalPopChoice(p_60);
      }
    else
      {
        t = o_60;
        {
          ATerm x_154 = NULL,y_154 = NULL,z_154 = NULL,a_155 = NULL,b_155 = NULL,c_155 = NULL,h_14 = NULL;
          t = u_139(t);
          c_155 = t;
          if(match_cons(t, sym__2))
            {
              y_154 = ATgetArgument(t, 0);
              z_154 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_155);
          x_154 = t;
          t = y_154;
          t = w_139(t);
          a_155 = t;
          t = z_154;
          t = d_155(t);
          b_155 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_155, b_155);
          h_14 = t;
          t = SSLsetAnnotations(h_14, x_154);
          t = v_139(t);
        }
      }
    return(t);
  }
  t = d_155(t);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_60 = ATgetArgument(t, 0);
      if(((ATgetType(q_60) != AT_LIST) || !(ATisEmpty(q_60))))
        _fail(t);
      {
        ATerm s_60 = ATgetArgument(t, 1);
        if(((ATgetType(s_60) != AT_LIST) || !(ATisEmpty(s_60))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm n_156 = NULL,o_156 = NULL,p_156 = NULL,q_156 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_60 = ATgetArgument(t, 0);
      if(((ATgetType(t_60) == AT_LIST) && !(ATisEmpty(t_60))))
        {
          n_156 = ATgetFirst((ATermList) t_60);
          o_156 = (ATerm) ATgetNext((ATermList) t_60);
        }
      else
        _fail(t);
      {
        ATerm u_60 = ATgetArgument(t, 1);
        if(((ATgetType(u_60) == AT_LIST) && !(ATisEmpty(u_60))))
          {
            p_156 = ATgetFirst((ATermList) u_60);
            q_156 = (ATerm) ATgetNext((ATermList) u_60);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_156, p_156), (ATerm) ATmakeAppl(sym__2, o_156, q_156));
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm r_156 = NULL,s_156 = NULL;
  if(match_cons(t, sym__2))
    {
      r_156 = ATgetArgument(t, 0);
      s_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_156), r_156);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm t_156 = NULL,u_156 = NULL;
  if(match_cons(t, sym__2))
    {
      t_156 = ATgetArgument(t, 0);
      u_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_156), (ATerm) ATmakeAppl(sym_Match_1, u_156));
  return(t);
}
static ATerm m_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_60 = ATgetArgument(t, 0);
      if(((ATgetType(w_60) != AT_LIST) || !(ATisEmpty(w_60))))
        _fail(t);
      {
        ATerm x_60 = ATgetArgument(t, 1);
        if(((ATgetType(x_60) != AT_LIST) || !(ATisEmpty(x_60))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm z_156 = NULL,a_157 = NULL,b_157 = NULL,c_157 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_60 = ATgetArgument(t, 0);
      if(((ATgetType(y_60) == AT_LIST) && !(ATisEmpty(y_60))))
        {
          z_156 = ATgetFirst((ATermList) y_60);
          a_157 = (ATerm) ATgetNext((ATermList) y_60);
        }
      else
        _fail(t);
      {
        ATerm z_60 = ATgetArgument(t, 1);
        if(((ATgetType(z_60) == AT_LIST) && !(ATisEmpty(z_60))))
          {
            b_157 = ATgetFirst((ATermList) z_60);
            c_157 = (ATerm) ATgetNext((ATermList) z_60);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_156, b_157), (ATerm) ATmakeAppl(sym__2, a_157, c_157));
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm d_157 = NULL,e_157 = NULL;
  if(match_cons(t, sym__2))
    {
      d_157 = ATgetArgument(t, 0);
      e_157 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_157), d_157);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm f_157 = NULL,g_157 = NULL;
  if(match_cons(t, sym__2))
    {
      f_157 = ATgetArgument(t, 0);
      g_157 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_157), (ATerm) ATmakeAppl(sym_Match_1, g_157));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm u_155 = NULL,v_155 = NULL,w_155 = NULL,y_155 = NULL,z_155 = NULL,c_156 = NULL,d_156 = NULL,e_156 = NULL,f_156 = NULL,g_156 = NULL,h_156 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      y_155 = ATgetArgument(t, 0);
      e_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_155;
  if(match_cons(t, sym_Build_1))
    {
      z_155 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_155;
  if(match_cons(t, sym_Op_2))
    {
      c_156 = ATgetArgument(t, 0);
      d_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_156;
  if(match_cons(t, sym_Seq_2))
    {
      f_156 = ATgetArgument(t, 0);
      w_155 = ATgetArgument(t, 1);
      {
        ATerm m_156 = NULL;
        t = f_156;
        if(match_cons(t, sym_Match_1))
          {
            g_156 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_156;
        if(match_cons(t, sym_Op_2))
          {
            u_155 = ATgetArgument(t, 0);
            v_155 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_155;
        if((c_156 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, d_156, v_155);
        t = genzip_4_0(i_12, j_12, k_12, l_12, t);
        m_156 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_156), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, c_156, d_156)), w_155));
      }
    }
  else
    {
      ATerm y_156 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          f_156 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_156;
      if(match_cons(t, sym_Op_2))
        {
          g_156 = ATgetArgument(t, 0);
          h_156 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_156;
      if((c_156 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, d_156, h_156);
      t = genzip_4_0(m_12, n_12, o_12, p_12, t);
      y_156 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_156), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, c_156, d_156)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm g_158 = NULL,j_158 = NULL,k_158 = NULL,l_158 = NULL,m_158 = NULL,o_158 = NULL,p_158 = NULL,q_158 = NULL;
  j_158 = t;
  if(match_cons(t, sym_Seq_2))
    {
      k_158 = ATgetArgument(t, 0);
      o_158 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_158;
  if(match_cons(t, sym_Build_1))
    {
      l_158 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_158;
  if(match_cons(t, sym_Op_2))
    {
      m_158 = ATgetArgument(t, 0);
      {
        ATerm e_61 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = o_158;
  {
    ATerm f_61 = t;
    int g_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            p_158 = ATgetArgument(t, 0);
            {
              ATerm h_61 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(g_61);
        t = p_158;
        if(match_cons(t, sym_Match_1))
          {
            q_158 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_158;
        if(match_cons(t, sym_Op_2))
          {
            g_158 = ATgetArgument(t, 0);
            {
              ATerm i_61 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_158, g_158);
        {
          ATerm j_61 = t;
          if((PushChoice() == 0))
            {
              ATerm u_80 = NULL;
              if(match_cons(t, sym__2))
                {
                  u_80 = ATgetArgument(t, 0);
                  if((u_80 != ATgetArgument(t, 1)))
                    {
                      _fail(ATgetArgument(t, 1));
                    }
                }
              else
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_61;
            }
        }
        t = term_m_20;
      }
    else
      {
        t = f_61;
        if(match_cons(t, sym_Match_1))
          {
            p_158 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = p_158;
        if(match_cons(t, sym_Op_2))
          {
            q_158 = ATgetArgument(t, 0);
            {
              ATerm k_61 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_158, q_158);
        {
          ATerm l_61 = t;
          if((PushChoice() == 0))
            {
              ATerm f_81 = NULL;
              if(match_cons(t, sym__2))
                {
                  f_81 = ATgetArgument(t, 0);
                  if((f_81 != ATgetArgument(t, 1)))
                    {
                      _fail(ATgetArgument(t, 1));
                    }
                }
              else
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_61;
            }
        }
        t = term_m_20;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm g_136 (ATerm), ATerm t)
{
  static ATerm u_158 (ATerm t);
  static ATerm u_158 (ATerm t)
  {
    ATerm m_61 = t;
    int n_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_136(t);
        LocalPopChoice(n_61);
      }
    else
      {
        t = m_61;
        t = SRTS_one(u_158, t);
      }
    return(t);
  }
  t = u_158(t);
  return(t);
}
ATerm at_end_1_0 (ATerm k_148 (ATerm), ATerm t)
{
  static ATerm p_159 (ATerm t);
  static ATerm p_159 (ATerm t)
  {
    ATerm m_159 = NULL,n_159 = NULL,o_159 = NULL;
    o_159 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_159 = ATgetFirst((ATermList) t);
        n_159 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm m_81 = NULL,q_81 = NULL,j_14 = NULL;
          t = SSLgetAnnotations(o_159);
          m_81 = t;
          t = n_159;
          t = p_159(t);
          q_81 = t;
          t = (ATerm) ATinsert(CheckATermList(q_81), m_159);
          j_14 = t;
          t = SSLsetAnnotations(j_14, m_81);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_159;
        t = k_148(t);
      }
    return(t);
  }
  t = p_159(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_158 = NULL,x_158 = NULL,y_158 = NULL;
  w_158 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_158;
    }
  else
    {
      static ATerm r_12 (ATerm t);
      static ATerm r_12 (ATerm t)
      {
        t = not_null(y_158);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_158 = ATgetFirst((ATermList) t);
          if(((y_158 != NULL) && (y_158 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_158 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_158;
      t = at_end_1_0(r_12, t);
    }
  return(t);
}
static ATerm b_160 (ATerm t_159, ATerm t)
{
  ATerm u_159 = NULL;
  t = SSL_explode_term(t_159);
  if(match_cons(t, sym__2))
    {
      ATerm o_61 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_61) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_159 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_159;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_159 = NULL,x_159 = NULL,y_159 = NULL;
  y_159 = t;
  if(match_cons(t, sym__2))
    {
      w_159 = ATgetArgument(t, 0);
      x_159 = ATgetArgument(t, 1);
      {
        ATerm p_61 = t;
        int q_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_12 (ATerm t);
            static ATerm s_12 (ATerm t)
            {
              t = x_159;
              return(t);
            }
            t = w_159;
            t = at_end_1_0(s_12, t);
            LocalPopChoice(q_61);
          }
        else
          {
            t = p_61;
            t = b_160(y_159, t);
          }
      }
    }
  else
    {
      t = b_160(y_159, t);
    }
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm u_160 = NULL,v_160 = NULL,w_160 = NULL,x_160 = NULL,y_160 = NULL,z_160 = NULL,a_161 = NULL,b_161 = NULL,c_161 = NULL,d_161 = NULL,e_161 = NULL,f_161 = NULL,g_161 = NULL;
  u_160 = t;
  if(match_cons(t, sym_Let_2))
    {
      v_160 = ATgetArgument(t, 0);
      c_161 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_161;
  if(match_cons(t, sym_Let_2))
    {
      d_161 = ATgetArgument(t, 0);
      f_161 = ATgetArgument(t, 1);
      {
        ATerm k_161 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, v_160, d_161);
        t = conc_0_0(t);
        k_161 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, k_161, f_161);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          d_161 = ATgetArgument(t, 0);
          f_161 = ATgetArgument(t, 1);
          g_161 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_160;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_160 = ATgetFirst((ATermList) t);
          b_161 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_160;
      if(match_cons(t, sym_SDefT_4))
        {
          x_160 = ATgetArgument(t, 0);
          y_160 = ATgetArgument(t, 1);
          z_160 = ATgetArgument(t, 2);
          a_161 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = y_160;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_160;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_161;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_161;
      if(match_cons(t, sym_SVar_1))
        {
          e_161 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_161;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_161;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_161;
      if((x_160 != t))
        {
          _fail(t);
        }
      t = a_161;
      {
        ATerm r_61 = t;
        if((PushChoice() == 0))
          {
            static ATerm t_12 (ATerm t);
            static ATerm t_12 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm s_61 = ATgetArgument(t, 0);
                  if(match_cons(s_61, sym_SVar_1))
                    {
                      if((x_160 != ATgetArgument(s_61, 0)))
                        {
                          _fail(ATgetArgument(s_61, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm v_61 = ATgetArgument(t, 1);
                    if(((ATgetType(v_61) != AT_LIST) || !(ATisEmpty(v_61))))
                      _fail(t);
                  }
                  {
                    ATerm x_61 = ATgetArgument(t, 2);
                    if(((ATgetType(x_61) != AT_LIST) || !(ATisEmpty(x_61))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(t_12, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_61;
          }
      }
      t = a_161;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm t_161 = NULL,u_161 = NULL,v_161 = NULL,w_161 = NULL,x_161 = NULL,y_161 = NULL,a_162 = NULL,b_162 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      a_162 = ATgetArgument(t, 0);
      t = a_162;
      if(match_cons(t, sym_Seq_2))
        {
          y_161 = ATgetArgument(t, 0);
          u_161 = ATgetArgument(t, 1);
          t = y_161;
          if(match_cons(t, sym_Where_1))
            {
              t_161 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_161;
          if(match_cons(t, sym_Seq_2))
            {
              v_161 = ATgetArgument(t, 0);
              x_161 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_161;
          if(match_cons(t, sym_Build_1))
            {
              w_161 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, t_161, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_161), x_161)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              y_161 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, y_161);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          a_162 = ATgetArgument(t, 0);
          t = a_162;
          if(match_cons(t, sym_Test_1))
            {
              y_161 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, y_161);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              a_162 = ATgetArgument(t, 0);
              t = a_162;
              if(match_cons(t, sym_Not_1))
                {
                  y_161 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, y_161);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  a_162 = ATgetArgument(t, 0);
                  b_162 = ATgetArgument(t, 1);
                  t = b_162;
                  if((a_162 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      a_162 = ATgetArgument(t, 0);
                      b_162 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = b_162;
                  if((a_162 != t))
                    {
                      _fail(t);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm AssociateR_0_0 (ATerm t)
{
  ATerm q_162 = NULL,r_162 = NULL,s_162 = NULL,t_162 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      q_162 = ATgetArgument(t, 0);
      t_162 = ATgetArgument(t, 1);
      t = q_162;
      if(match_cons(t, sym_LChoice_2))
        {
          r_162 = ATgetArgument(t, 0);
          s_162 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, r_162, (ATerm) ATmakeAppl(sym_LChoice_2, s_162, t_162));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          q_162 = ATgetArgument(t, 0);
          t_162 = ATgetArgument(t, 1);
          t = q_162;
          if(match_cons(t, sym_Seq_2))
            {
              r_162 = ATgetArgument(t, 0);
              s_162 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, r_162, (ATerm) ATmakeAppl(sym_Seq_2, s_162, t_162));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              q_162 = ATgetArgument(t, 0);
              t_162 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_162;
          if(match_cons(t, sym_Choice_2))
            {
              r_162 = ATgetArgument(t, 0);
              s_162 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, r_162, (ATerm) ATmakeAppl(sym_Choice_2, s_162, t_162));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm h_163 = NULL,i_163 = NULL,j_163 = NULL,l_163 = NULL,m_163 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      l_163 = ATgetArgument(t, 0);
      m_163 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, l_163, m_163);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          l_163 = ATgetArgument(t, 0);
          t = l_163;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_163 = ATgetFirst((ATermList) t);
              i_163 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, h_163, (ATerm) ATmakeAppl(sym_LChoices_1, i_163));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_m_20;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              l_163 = ATgetArgument(t, 0);
              t = l_163;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_163 = ATgetFirst((ATermList) t);
                  i_163 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, h_163, (ATerm) ATmakeAppl(sym_Choices_1, i_163));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_m_20;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  l_163 = ATgetArgument(t, 0);
                  t = l_163;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      h_163 = ATgetFirst((ATermList) t);
                      i_163 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_163, (ATerm) ATmakeAppl(sym_Seqs_1, i_163));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_y_19;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      l_163 = ATgetArgument(t, 0);
                      m_163 = ATgetArgument(t, 1);
                      j_163 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, m_163, (ATerm) ATmakeAppl(sym_Op_2, term_d_38, (ATerm) ATinsert(ATinsert(ATempty, j_163), l_163)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          l_163 = ATgetArgument(t, 0);
                          m_163 = ATgetArgument(t, 1);
                          j_163 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, j_163)), l_163), (ATerm) ATmakeAppl(sym_Build_1, m_163)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              l_163 = ATgetArgument(t, 0);
                              m_163 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, l_163, (ATerm) ATmakeAppl(sym_Match_1, m_163));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  l_163 = ATgetArgument(t, 0);
                                  m_163 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_163), m_163);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      l_163 = ATgetArgument(t, 0);
                                      m_163 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_163), l_163);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm u_12 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm z_164 = NULL,a_165 = NULL,b_165 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      z_164 = ATgetArgument(t, 0);
      t = z_164;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_m_20;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          z_164 = ATgetArgument(t, 0);
          t = z_164;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_y_19;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              z_164 = ATgetArgument(t, 0);
              a_165 = ATgetArgument(t, 1);
              t = z_164;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_m_20;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  z_164 = ATgetArgument(t, 0);
                  a_165 = ATgetArgument(t, 1);
                  t = a_165;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_m_20;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      z_164 = ATgetArgument(t, 0);
                      a_165 = ATgetArgument(t, 1);
                      t = a_165;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_m_20;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          z_164 = ATgetArgument(t, 0);
                          t = z_164;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_m_20;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              z_164 = ATgetArgument(t, 0);
                              t = z_164;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_m_20;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  z_164 = ATgetArgument(t, 0);
                                  a_165 = ATgetArgument(t, 1);
                                  t = a_165;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_m_20;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      z_164 = ATgetArgument(t, 0);
                                      a_165 = ATgetArgument(t, 1);
                                      t = a_165;
                                      t = fetch_1_0(u_12, t);
                                      t = term_m_20;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          z_164 = ATgetArgument(t, 0);
                                          a_165 = ATgetArgument(t, 1);
                                          t = a_165;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = z_164;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = a_165;
                                                }
                                              else
                                                {
                                                  t = z_164;
                                                }
                                            }
                                          else
                                            {
                                              t = z_164;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = a_165;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              z_164 = ATgetArgument(t, 0);
                                              a_165 = ATgetArgument(t, 1);
                                              t = a_165;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = z_164;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = a_165;
                                                    }
                                                  else
                                                    {
                                                      t = z_164;
                                                    }
                                                }
                                              else
                                                {
                                                  t = z_164;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = a_165;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  z_164 = ATgetArgument(t, 0);
                                                  t = z_164;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_m_20;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      z_164 = ATgetArgument(t, 0);
                                                      a_165 = ATgetArgument(t, 1);
                                                      b_165 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = b_165;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_164, a_165);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm ElimId_0_0 (ATerm t)
{
  ATerm l_166 = NULL,n_166 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      n_166 = ATgetArgument(t, 0);
      t = n_166;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_y_19;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          n_166 = ATgetArgument(t, 0);
          t = n_166;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_m_20;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              n_166 = ATgetArgument(t, 0);
              l_166 = ATgetArgument(t, 1);
              t = l_166;
              if(match_cons(t, sym_Id_0))
                {
                  t = n_166;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = l_166;
                    }
                  else
                    {
                      t = n_166;
                    }
                }
              else
                {
                  t = n_166;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = l_166;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  n_166 = ATgetArgument(t, 0);
                  l_166 = ATgetArgument(t, 1);
                  t = n_166;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_y_19;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      n_166 = ATgetArgument(t, 0);
                      l_166 = ATgetArgument(t, 1);
                      t = l_166;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_y_19;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          n_166 = ATgetArgument(t, 0);
                          l_166 = ATgetArgument(t, 1);
                          t = l_166;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_y_19;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              n_166 = ATgetArgument(t, 0);
                              t = n_166;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_y_19;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  n_166 = ATgetArgument(t, 0);
                                  t = n_166;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_y_19;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      n_166 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = n_166;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_y_19;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm Simplify_0_0 (ATerm t)
{
  ATerm y_61 = t;
  int z_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(z_61);
    }
  else
    {
      t = y_61;
      {
        ATerm b_62 = t;
        int c_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(c_62);
          }
        else
          {
            t = b_62;
            {
              ATerm h_62 = t;
              int j_62 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(j_62);
                }
              else
                {
                  t = h_62;
                  {
                    ATerm k_62 = t;
                    int m_62 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(m_62);
                      }
                    else
                      {
                        t = k_62;
                        {
                          ATerm o_62 = t;
                          int p_62 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(p_62);
                            }
                          else
                            {
                              t = o_62;
                              {
                                ATerm r_62 = t;
                                int x_62 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_167 = NULL,d_167 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        c_167 = ATgetArgument(t, 0);
                                        d_167 = ATgetArgument(t, 1);
                                        t = c_167;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = d_167;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            c_167 = ATgetArgument(t, 0);
                                            d_167 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = c_167;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = d_167;
                                      }
                                    LocalPopChoice(x_62);
                                  }
                                else
                                  {
                                    t = r_62;
                                    {
                                      ATerm y_62 = t;
                                      int e_63 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(e_63);
                                        }
                                      else
                                        {
                                          t = y_62;
                                          {
                                            ATerm f_63 = t;
                                            int t_63 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(t_63);
                                              }
                                            else
                                              {
                                                t = f_63;
                                                {
                                                  ATerm w_63 = t;
                                                  int x_63 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(x_63);
                                                    }
                                                  else
                                                    {
                                                      t = w_63;
                                                      {
                                                        ATerm y_63 = t;
                                                        int z_63 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(z_63);
                                                          }
                                                        else
                                                          {
                                                            t = y_63;
                                                            {
                                                              ATerm a_64 = t;
                                                              int b_64 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(b_64);
                                                                }
                                                              else
                                                                {
                                                                  t = a_64;
                                                                  {
                                                                    ATerm c_64 = t;
                                                                    int e_64 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(e_64);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = c_64;
                                                                        {
                                                                          ATerm f_64 = t;
                                                                          int g_64 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(g_64);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_64;
                                                                              {
                                                                                ATerm i_64 = t;
                                                                                int j_64 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(j_64);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = i_64;
                                                                                    {
                                                                                      ATerm k_167 = NULL,l_167 = NULL,m_167 = NULL,p_167 = NULL;
                                                                                      l_167 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          m_167 = ATgetArgument(t, 0);
                                                                                          p_167 = ATgetArgument(t, 1);
                                                                                          t = m_167;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              k_167 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = l_167;
                                                                                          t = y_13(k_167, p_167, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              m_167 = ATgetArgument(t, 0);
                                                                                              p_167 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = m_167;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = p_167;
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm c_141 (ATerm), ATerm d_141 (ATerm), ATerm t)
{
  static ATerm t_167 (ATerm t);
  static ATerm t_167 (ATerm t)
  {
    ATerm n_64 = t;
    int p_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_141(t);
        t = t_167(t);
        LocalPopChoice(p_64);
      }
    else
      {
        t = n_64;
        t = d_141(t);
      }
    return(t);
  }
  t = t_167(t);
  return(t);
}
ATerm downup_1_0 (ATerm e_135 (ATerm), ATerm t)
{
  t = e_135(t);
  {
    static ATerm w_12 (ATerm t);
    static ATerm w_12 (ATerm t)
    {
      t = downup_1_0(e_135, t);
      return(t);
    }
    t = SRTS_all(w_12, t);
  }
  t = e_135(t);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  t = downup_1_0(d_13, t);
  {
    ATerm s_64 = t;
    int v_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        LocalPopChoice(v_64);
      }
    else
      {
        t = s_64;
      }
  }
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = repeat_2_0(Simplify_0_0, _id, t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = inline_sdef_0_0(t);
  {
    ATerm z_64 = t;
    int a_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        LocalPopChoice(a_65);
      }
    else
      {
        t = z_64;
      }
  }
  return(t);
}
ATerm inline_sdefs_0_0 (ATerm t)
{
  t = map_1_0(x_12, t);
  t = map_1_0(e_13, t);
  return(t);
}
static ATerm e_15 (ATerm n_70, ATerm o_70, ATerm t)
{
  ATerm c_168 = NULL;
  t = SSL_fputc(n_70, o_70);
  c_168 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_168);
  return(t);
}
static ATerm f_15 (ATerm y_34, ATerm z_34, ATerm t)
{
  ATerm d_168 = NULL;
  t = SSL_write_term_to_stream_text(y_34, z_34);
  d_168 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_168);
  return(t);
}
static ATerm h_15 (ATerm r_142 (ATerm), ATerm j_271, ATerm e_35, ATerm t)
{
  ATerm e_168 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_271, term_b_65);
  t = l_15(t);
  e_168 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_168, e_35);
  t = r_142(t);
  t = fclose_0_0(t);
  t = e_35;
  return(t);
}
static ATerm g_15 (ATerm u_34, ATerm v_34, ATerm t)
{
  ATerm f_168 = NULL;
  t = SSL_write_term_to_stream_baf(u_34, v_34);
  f_168 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_168);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm m_168 = NULL,n_168 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_65 = ATgetArgument(t, 0);
      if(match_cons(i_65, sym_Stream_1))
        {
          m_168 = ATgetArgument(i_65, 0);
        }
      else
        _fail(t);
      n_168 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_15(m_168, n_168, t);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm o_168 = NULL,p_168 = NULL,q_168 = NULL,r_168 = NULL,s_168 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_65 = ATgetArgument(t, 0);
      if(match_cons(j_65, sym_Stream_1))
        {
          r_168 = ATgetArgument(j_65, 0);
        }
      else
        _fail(t);
      s_168 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_15(r_168, s_168, t);
  o_168 = t;
  t = term_o_65;
  p_168 = t;
  t = o_168;
  if(match_cons(t, sym_Stream_1))
    {
      q_168 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_65, o_168);
  t = e_15(p_168, q_168, t);
  return(t);
}
ATerm output_1_0 (ATerm o_165 (ATerm), ATerm t)
{
  ATerm g_168 = NULL,h_168 = NULL;
  t = o_165(t);
  h_168 = t;
  {
    ATerm q_65 = t;
    int r_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_168 = NULL,j_168 = NULL;
        t = term_s_65;
        i_168 = t;
        t = term_t_65;
        j_168 = t;
        t = term_u_65;
        t = s_15(i_168, j_168, t);
        LocalPopChoice(r_65);
      }
    else
      {
        t = q_65;
        t = term_w_65;
      }
  }
  g_168 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_168, h_168);
  {
    ATerm z_65 = t;
    int b_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_168 = NULL,l_168 = NULL;
        t = term_s_65;
        k_168 = t;
        t = term_c_66;
        l_168 = t;
        t = term_d_66;
        t = s_15(k_168, l_168, t);
        t = (ATerm) ATmakeAppl(sym__2, g_168, h_168);
        LocalPopChoice(b_66);
        if(match_cons(t, sym__2))
          {
            ATerm e_66 = ATgetArgument(t, 0);
            ATerm g_66 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_15(g_13, g_168, h_168, t);
      }
    else
      {
        t = z_65;
        if(match_cons(t, sym__2))
          {
            ATerm j_66 = ATgetArgument(t, 0);
            ATerm k_66 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_15(j_13, g_168, h_168, t);
      }
  }
  return(t);
}
static ATerm g_169 (ATerm a_169, ATerm t)
{
  t = SSL_fclose(a_169);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_169 = NULL,e_169 = NULL;
  e_169 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_169 = ATgetArgument(t, 0);
      {
        ATerm l_66 = t;
        int o_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_169);
            LocalPopChoice(o_66);
          }
        else
          {
            t = l_66;
            t = g_169(e_169, t);
          }
      }
    }
  else
    {
      t = g_169(e_169, t);
    }
  return(t);
}
static ATerm i_15 (ATerm a_35, ATerm t)
{
  t = SSL_read_term_from_stream(a_35);
  return(t);
}
static ATerm j_15 (ATerm t_68, ATerm u_68, ATerm t)
{
  t = SSL_strcat(t_68, u_68);
  return(t);
}
static ATerm k_15 (ATerm p_70, ATerm q_70, ATerm t)
{
  ATerm h_169 = NULL;
  t = SSL_fopen(p_70, q_70);
  h_169 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_169);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_169 = NULL;
  t = SSL_stdin_stream();
  i_169 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_169);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_169 = NULL;
  t = SSL_stdout_stream();
  j_169 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_169);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_169 = NULL;
  t = SSL_stderr_stream();
  k_169 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_169);
  return(t);
}
static ATerm r_170 (ATerm q_169, ATerm t)
{
  ATerm r_169 = NULL;
  t = SSL_explode_term(q_169);
  if(match_cons(t, sym__2))
    {
      ATerm p_66 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_66) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_66 = ATgetArgument(t, 1);
        if(((ATgetType(r_66) == AT_LIST) && !(ATisEmpty(r_66))))
          {
            r_169 = ATgetFirst((ATermList) r_66);
            {
              ATerm t_66 = (ATerm) ATgetNext((ATermList) r_66);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_169;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_169;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_169;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_169;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm s_170 (ATerm u_169, ATerm v_169, ATerm w_169, ATerm t)
{
  ATerm x_169 = NULL,y_169 = NULL,z_169 = NULL,c_170 = NULL,l_14 = NULL;
  t = SSLgetAnnotations(w_169);
  z_169 = t;
  t = u_169;
  if(match_cons(t, sym_Path_1))
    {
      c_170 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_170, v_169);
  l_14 = t;
  t = SSLsetAnnotations(l_14, z_169);
  if(match_cons(t, sym__2))
    {
      x_169 = ATgetArgument(t, 0);
      y_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_15(x_169, y_169, t);
  return(t);
}
static ATerm t_170 (ATerm e_170, ATerm f_170, ATerm g_170, ATerm t)
{
  ATerm h_170 = NULL,i_170 = NULL,j_170 = NULL,m_170 = NULL,m_14 = NULL;
  t = SSLgetAnnotations(g_170);
  j_170 = t;
  t = SSL_is_string(e_170);
  m_170 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_170, f_170);
  m_14 = t;
  t = SSLsetAnnotations(m_14, j_170);
  if(match_cons(t, sym__2))
    {
      h_170 = ATgetArgument(t, 0);
      i_170 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_15(h_170, i_170, t);
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm o_170 = NULL,p_170 = NULL,q_170 = NULL;
  o_170 = t;
  if(match_cons(t, sym__2))
    {
      p_170 = ATgetArgument(t, 0);
      q_170 = ATgetArgument(t, 1);
      {
        ATerm u_66 = t;
        int v_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_170(o_170, t);
            LocalPopChoice(v_66);
          }
        else
          {
            t = u_66;
            {
              ATerm b_67 = t;
              int c_67 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_170(p_170, q_170, o_170, t);
                  LocalPopChoice(c_67);
                }
              else
                {
                  t = b_67;
                  t = t_170(p_170, q_170, o_170, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_170(o_170, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_170 = NULL,w_170 = NULL,x_170 = NULL,c_171 = NULL;
  c_171 = t;
  {
    ATerm d_67 = t;
    int e_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_171, term_k_67);
        t = l_15(t);
        LocalPopChoice(e_67);
      }
    else
      {
        t = d_67;
        {
          ATerm g_83 = NULL,h_83 = NULL;
          t = term_n_67;
          h_83 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_67, c_171);
          t = j_15(h_83, c_171, t);
          g_83 = t;
          t = SSL_perror(g_83);
          _fail(t);
        }
      }
  }
  w_170 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_170 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_15(x_170, t);
  v_170 = t;
  t = w_170;
  t = fclose_0_0(t);
  t = v_170;
  return(t);
}
ATerm input_1_0 (ATerm p_165 (ATerm), ATerm t)
{
  ATerm o_67 = t;
  int p_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_171 = NULL,g_171 = NULL;
      t = term_s_65;
      f_171 = t;
      t = term_q_67;
      g_171 = t;
      t = term_r_67;
      t = s_15(f_171, g_171, t);
      LocalPopChoice(p_67);
    }
  else
    {
      t = o_67;
      t = term_s_67;
    }
  t = ReadFromFile_0_0(t);
  t = p_165(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm h_171 = NULL,i_171 = NULL;
  t = term_s_65;
  h_171 = t;
  t = term_c_68;
  i_171 = t;
  t = term_d_68;
  t = s_15(h_171, i_171, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_171 = NULL,l_171 = NULL,m_171 = NULL;
  k_171 = t;
  {
    ATerm e_68 = t;
    int h_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_171;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_68 = ATgetFirst((ATermList) t);
                ATerm k_68 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_171;
          }
        LocalPopChoice(h_68);
      }
    else
      {
        t = e_68;
        t = (ATerm) ATinsert(ATempty, k_171);
      }
  }
  l_171 = t;
  t = term_w_65;
  m_171 = t;
  t = SSL_printnl(m_171, l_171);
  t = k_171;
  return(t);
}
ATerm map_1_0 (ATerm t_147 (ATerm), ATerm t)
{
  static ATerm e_172 (ATerm t);
  static ATerm e_172 (ATerm t)
  {
    ATerm b_172 = NULL,c_172 = NULL,d_172 = NULL;
    b_172 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_172;
      }
    else
      {
        ATerm o_83 = NULL,r_83 = NULL,s_83 = NULL,p_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_172 = ATgetFirst((ATermList) t);
            d_172 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_172);
        o_83 = t;
        t = c_172;
        t = t_147(t);
        r_83 = t;
        t = d_172;
        t = e_172(t);
        s_83 = t;
        t = (ATerm) ATinsert(CheckATermList(s_83), r_83);
        p_14 = t;
        t = SSLsetAnnotations(p_14, o_83);
      }
    return(t);
  }
  t = e_172(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm h_172 = NULL,i_172 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_172 = ATgetFirst((ATermList) t);
      i_172 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_172 = NULL,n_172 = NULL;
        static ATerm l_13 (ATerm t);
        static ATerm l_13 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_172)), not_null(n_172));
          return(t);
        }
        t = i_172;
        t = m_0(t);
        if(((m_172 != NULL) && (m_172 != t)))
          _fail(t);
        else
          m_172 = t;
        t = h_172;
        t = k_0(t);
        if(((n_172 != NULL) && (n_172 != t)))
          _fail(t);
        else
          n_172 = t;
        t = i_172;
        t = reverse_acc_2_0(k_0, l_13, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_68;
      t = m_0(t);
    }
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm v_172 = NULL,w_172 = NULL,x_172 = NULL,r_14 = NULL;
  x_172 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_172 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_172);
  v_172 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_172);
  r_14 = t;
  t = SSLsetAnnotations(r_14, v_172);
  return(t);
}
static ATerm p_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm b_173 = NULL;
  b_173 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_173), term_r_68);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm n_167 (ATerm), ATerm o_167 (ATerm), ATerm t)
{
  ATerm r_172 = NULL,s_172 = NULL;
  ATerm s_68 = t;
  int w_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_172 = NULL,u_172 = NULL;
      t = term_s_65;
      t_172 = t;
      t = term_c_68;
      u_172 = t;
      t = term_d_68;
      t = s_15(t_172, u_172, t);
      LocalPopChoice(w_68);
    }
  else
    {
      t = s_68;
      t = fetch_1_0(o_13, t);
    }
  {
    ATerm x_68 = t;
    int a_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_167(t);
        t = echo_0_0(t);
        LocalPopChoice(a_69);
      }
    else
      {
        t = x_68;
      }
  }
  t = term_b_69;
  t = echo_0_0(t);
  t = term_f_69;
  r_172 = t;
  t = term_h_69;
  s_172 = t;
  t = term_i_69;
  t = s_15(r_172, s_172, t);
  t = reverse_acc_2_0(_id, p_13, t);
  t = map_1_0(r_13, t);
  {
    ATerm k_69 = t;
    int l_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_173 = NULL;
        t = o_167(t);
        c_173 = t;
        t = (ATerm) ATinsert(CheckATermList(c_173), term_m_69);
        t = echo_0_0(t);
        LocalPopChoice(l_69);
      }
    else
      {
        t = k_69;
      }
  }
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm i_173 = NULL,j_173 = NULL,k_173 = NULL,t_14 = NULL;
  k_173 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_173 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_173);
  i_173 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_173);
  t_14 = t;
  t = SSLsetAnnotations(t_14, i_173);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_173 = NULL;
  f_173 = t;
  {
    ATerm n_69 = t;
    int q_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_173 = NULL,h_173 = NULL;
        t = term_s_65;
        g_173 = t;
        t = term_c_68;
        h_173 = t;
        t = term_d_68;
        t = s_15(g_173, h_173, t);
        LocalPopChoice(q_69);
      }
    else
      {
        t = n_69;
        t = fetch_1_0(v_13, t);
      }
  }
  t = f_173;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm m_173 = NULL;
  m_173 = t;
  if(match_string(t, "-k"))
    {
      t = m_173;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_173;
    }
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm n_173 = NULL,o_173 = NULL,p_173 = NULL;
  n_173 = t;
  t = SSL_string_to_int(n_173);
  o_173 = t;
  t = term_v_69;
  p_173 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_69, o_173);
  t = v_15(p_173, o_173, t);
  t = n_173;
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = term_a_70;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_13, a_14, b_14, t);
  return(t);
}
static ATerm d_14 (ATerm t)
{
  ATerm r_173 = NULL;
  r_173 = t;
  if(match_string(t, "-S"))
    {
      t = r_173;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_173;
    }
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm s_173 = NULL,t_173 = NULL;
  t = term_f_70;
  s_173 = t;
  t = term_b_58;
  t_173 = t;
  t = term_i_70;
  t = v_15(s_173, t_173, t);
  t = term_k_70;
  return(t);
}
static ATerm g_14 (ATerm t)
{
  t = term_l_70;
  return(t);
}
static ATerm i_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm u_173 = NULL,v_173 = NULL,w_173 = NULL;
  u_173 = t;
  t = SSL_string_to_int(u_173);
  v_173 = t;
  t = term_f_70;
  w_173 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_70, v_173);
  t = v_15(w_173, v_173, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_173);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  t = term_v_70;
  return(t);
}
static ATerm o_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm x_173 = NULL,y_173 = NULL;
  t = term_w_70;
  x_173 = t;
  t = term_l_68;
  y_173 = t;
  t = term_y_70;
  t = v_15(x_173, y_173, t);
  t = term_z_70;
  return(t);
}
static ATerm s_14 (ATerm t)
{
  t = term_f_71;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_71 = t;
  int o_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_14, e_14, g_14, t);
      LocalPopChoice(o_71);
    }
  else
    {
      t = g_71;
      {
        ATerm r_71 = t;
        int s_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_14, k_14, n_14, t);
            LocalPopChoice(s_71);
          }
        else
          {
            t = r_71;
            t = Option_3_0(o_14, q_14, s_14, t);
          }
      }
    }
  return(t);
}
static ATerm v_15 (ATerm h_77, ATerm i_77, ATerm t)
{
  ATerm z_173 = NULL,a_174 = NULL;
  t = term_s_65;
  z_173 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_65, h_77, i_77);
  t = lookup_table_0_1(z_173, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_174 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_15(h_77, i_77, a_174, t);
  t = (ATerm) ATmakeAppl(sym__3, term_s_65, h_77, i_77);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm e_174 = NULL,f_174 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_174 = NULL,h_174 = NULL,i_174 = NULL;
      t = term_l_68;
      t = f_0(t);
      g_174 = t;
      t = term_f_69;
      h_174 = t;
      t = term_h_69;
      i_174 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_69, term_h_69, g_174);
      t = t_15(h_174, i_174, g_174, t);
      _fail(t);
    }
  else
    {
      ATerm l_174 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_174 = ATgetFirst((ATermList) t);
          f_174 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_174;
      t = b_0(t);
      t = term_l_68;
      t = c_0(t);
      l_174 = t;
      t = (ATerm) ATinsert(CheckATermList(f_174), l_174);
    }
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm n_174 = NULL;
  n_174 = t;
  if(match_string(t, "-o"))
    {
      t = n_174;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_174;
    }
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm o_174 = NULL,p_174 = NULL;
  o_174 = t;
  t = term_t_65;
  p_174 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_65, o_174);
  t = v_15(p_174, o_174, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_174);
  return(t);
}
static ATerm y_14 (ATerm t)
{
  t = term_t_71;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_14, x_14, y_14, t);
  return(t);
}
static ATerm t_15 (ATerm z_38, ATerm a_39, ATerm y_38, ATerm t)
{
  ATerm r_174 = NULL,s_174 = NULL,t_174 = NULL,u_174 = NULL,v_174 = NULL;
  r_174 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_38, a_39);
  {
    ATerm u_71 = t;
    int v_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_71 = ATgetArgument(t, 0);
            ATerm x_71 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_38, a_39);
        t = s_15(z_38, a_39, t);
        LocalPopChoice(v_71);
      }
    else
      {
        t = u_71;
        t = (ATerm) ATempty;
      }
  }
  s_174 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_38, a_39, (ATerm) ATinsert(CheckATermList(s_174), y_38));
  t = lookup_table_0_1(z_38, t);
  v_174 = t;
  t = (ATerm) ATinsert(CheckATermList(s_174), y_38);
  t_174 = t;
  t = v_174;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_174 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_15(a_39, t_174, u_174, t);
  t = r_174;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm c_175 = NULL,d_175 = NULL,e_175 = NULL,f_175 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_175 = NULL,h_175 = NULL,i_175 = NULL;
      t = term_l_68;
      t = j_0(t);
      g_175 = t;
      t = term_f_69;
      h_175 = t;
      t = term_h_69;
      i_175 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_69, term_h_69, g_175);
      t = t_15(h_175, i_175, g_175, t);
      _fail(t);
    }
  else
    {
      ATerm m_175 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_175 = ATgetFirst((ATermList) t);
          d_175 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_175;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_175 = ATgetFirst((ATermList) t);
          f_175 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_175;
      t = h_0(t);
      t = e_175;
      t = i_0(t);
      m_175 = t;
      t = (ATerm) ATinsert(CheckATermList(f_175), m_175);
    }
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm o_175 = NULL;
  o_175 = t;
  if(match_string(t, "-i"))
    {
      t = o_175;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_175;
    }
  return(t);
}
static ATerm u_15 (ATerm t)
{
  ATerm p_175 = NULL,q_175 = NULL;
  p_175 = t;
  t = term_q_67;
  q_175 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_67, p_175);
  t = v_15(q_175, p_175, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_175);
  return(t);
}
static ATerm y_15 (ATerm t)
{
  t = term_y_71;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_15, u_15, y_15, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_175 = NULL,s_175 = NULL,t_175 = NULL,u_175 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_68;
  t = whoami_0_0(t);
  r_175 = t;
  t = term_z_71;
  t_175 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_72), r_175);
  u_175 = t;
  t = SSL_printnl(t_175, u_175);
  t = term_o_17;
  s_175 = t;
  t = SSL_exit(s_175);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm v_175 = NULL,w_175 = NULL;
  t = term_s_65;
  v_175 = t;
  t = term_c_68;
  w_175 = t;
  t = term_d_68;
  t = s_15(v_175, w_175, t);
  return(t);
}
static ATerm m_15 (ATerm h_36, ATerm i_36, ATerm t)
{
  ATerm b_72 = t;
  int c_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(h_36, i_36);
      LocalPopChoice(c_72);
    }
  else
    {
      t = b_72;
      t = SSL_addr(h_36, i_36);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm q_153 (ATerm), ATerm r_153 (ATerm), ATerm t)
{
  ATerm y_175 = NULL,z_175 = NULL,a_176 = NULL;
  y_175 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_175;
      t = q_153(t);
    }
  else
    {
      ATerm d_176 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_175 = ATgetFirst((ATermList) t);
          a_176 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_176;
      t = foldr_2_0(q_153, r_153, t);
      d_176 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_175, d_176);
      t = r_153(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm z_15 (ATerm t)
{
  t = term_b_58;
  return(t);
}
static ATerm e_16 (ATerm t)
{
  ATerm e_84 = NULL,h_84 = NULL;
  if(match_cons(t, sym__2))
    {
      e_84 = ATgetArgument(t, 0);
      h_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_15(e_84, h_84, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_176 = NULL,z_83 = NULL,a_84 = NULL;
  t = times_0_0(t);
  a_84 = t;
  t = SSL_explode_term(a_84);
  if(match_cons(t, sym__2))
    {
      ATerm d_72 = ATgetArgument(t, 0);
      z_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_83;
  t = foldr_2_0(z_15, e_16, t);
  g_176 = t;
  t = SSL_TicksToSeconds(g_176);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_176 = NULL,s_176 = NULL,t_176 = NULL;
  r_176 = t;
  if(match_cons(t, sym__2))
    {
      s_176 = ATgetArgument(t, 0);
      t_176 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_72 = t;
    int f_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_176;
        if((s_176 != t))
          {
            _fail(t);
          }
        t = r_176;
        LocalPopChoice(f_72);
      }
    else
      {
        t = e_72;
        t = (ATerm) ATmakeAppl(sym__2, s_176, t_176);
        {
          ATerm g_72 = t;
          int h_72 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_176, t_176);
              LocalPopChoice(h_72);
            }
          else
            {
              t = g_72;
              t = SSL_gtr(s_176, t_176);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, s_176, t_176);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_162 (ATerm), ATerm t)
{
  ATerm x_176 = NULL;
  x_176 = t;
  {
    ATerm i_72 = t;
    int j_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_176 = NULL,a_177 = NULL,b_177 = NULL;
        t = term_s_65;
        a_177 = t;
        t = term_f_70;
        b_177 = t;
        t = term_n_72;
        t = s_15(a_177, b_177, t);
        z_176 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_176, term_o_17);
        t = geq_0_0(t);
        t = x_176;
        t = p_162(t);
        LocalPopChoice(j_72);
      }
    else
      {
        t = i_72;
        t = x_176;
      }
  }
  return(t);
}
static ATerm f_16 (ATerm t)
{
  ATerm d_177 = NULL,e_177 = NULL,g_177 = NULL,h_177 = NULL;
  t = run_time_0_0(t);
  d_177 = t;
  t = term_l_68;
  t = whoami_0_0(t);
  e_177 = t;
  t = term_z_71;
  g_177 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_72), d_177), term_o_72), e_177);
  h_177 = t;
  t = SSL_printnl(g_177, h_177);
  t = (ATerm) ATmakeAppl(sym__2, term_z_71, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_72), d_177), term_o_72), e_177));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_16, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_177 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_58;
  i_177 = t;
  t = SSL_exit(i_177);
  return(t);
}
static ATerm w_15 (ATerm u_43, ATerm w_43, ATerm x_43, ATerm t)
{
  ATerm j_177 = NULL;
  t = SSL_hashtable_put(x_43, u_43, w_43);
  j_177 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_177);
  return(t);
}
ATerm lookup_table_0_1 (ATerm l_40, ATerm t)
{
  ATerm s_177 = NULL;
  t = table_hashtable_0_0(t);
  s_177 = t;
  {
    ATerm q_72 = t;
    int r_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_84 = NULL;
        t = s_177;
        if(match_cons(t, sym_Hashtable_1))
          {
            x_84 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_15(l_40, x_84, t);
        LocalPopChoice(r_72);
      }
    else
      {
        t = q_72;
        {
          ATerm c_85 = NULL;
          t = l_40;
          t = table_create_0_0(t);
          t = s_177;
          if(match_cons(t, sym_Hashtable_1))
            {
              c_85 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_15(l_40, c_85, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm g_44, ATerm h_44, ATerm t)
{
  ATerm v_177 = NULL;
  t = SSL_hashtable_create(g_44, h_44);
  v_177 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_177);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm w_177 = NULL,x_177 = NULL,y_177 = NULL,a_178 = NULL,b_178 = NULL;
  w_177 = t;
  t = term_s_72;
  a_178 = t;
  t = term_t_72;
  b_178 = t;
  t = w_177;
  t = new_hashtable_0_2(a_178, b_178, t);
  x_177 = t;
  t = w_177;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_177 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_15(w_177, x_177, y_177, t);
  t = w_177;
  return(t);
}
static ATerm p_15 (ATerm c_44, ATerm d_44, ATerm t)
{
  ATerm c_178 = NULL;
  t = SSL_hashtable_remove(d_44, c_44);
  c_178 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_178);
  return(t);
}
static ATerm q_15 (ATerm j_44, ATerm t)
{
  ATerm d_178 = NULL;
  t = SSL_hashtable_destroy(j_44);
  d_178 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_178);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm e_178 = NULL;
  t = SSL_table_hashtable();
  e_178 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_178);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm f_178 = NULL,g_178 = NULL,h_178 = NULL,i_178 = NULL;
  f_178 = t;
  t = table_hashtable_0_0(t);
  g_178 = t;
  t = lookup_table_0_1(f_178, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_15(i_178, t);
  t = g_178;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_15(f_178, h_178, t);
  t = f_178;
  return(t);
}
ATerm fetch_1_0 (ATerm d_148 (ATerm), ATerm t)
{
  static ATerm f_179 (ATerm t);
  static ATerm f_179 (ATerm t)
  {
    ATerm c_179 = NULL,d_179 = NULL,e_179 = NULL;
    c_179 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_179 = ATgetFirst((ATermList) t);
        e_179 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_72 = t;
      int v_72 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_85 = NULL,k_85 = NULL,v_14 = NULL;
          t = SSLgetAnnotations(c_179);
          h_85 = t;
          t = d_179;
          t = d_148(t);
          k_85 = t;
          t = (ATerm) ATinsert(CheckATermList(e_179), k_85);
          v_14 = t;
          t = SSLsetAnnotations(v_14, h_85);
          LocalPopChoice(v_72);
        }
      else
        {
          t = u_72;
          {
            ATerm u_85 = NULL,z_85 = NULL,w_14 = NULL;
            t = SSLgetAnnotations(c_179);
            u_85 = t;
            t = e_179;
            t = f_179(t);
            z_85 = t;
            t = (ATerm) ATinsert(CheckATermList(z_85), d_179);
            w_14 = t;
            t = SSLsetAnnotations(w_14, u_85);
          }
        }
    }
    return(t);
  }
  t = f_179(t);
  return(t);
}
static ATerm x_15 (ATerm z_43, ATerm a_44, ATerm t)
{
  t = SSL_hashtable_get(a_44, z_43);
  return(t);
}
static ATerm s_15 (ATerm s_40, ATerm t_40, ATerm t)
{
  ATerm i_179 = NULL;
  t = lookup_table_0_1(s_40, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_179 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(t_40, i_179, t);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm k_179 = NULL,l_179 = NULL;
  t = term_w_72;
  k_179 = t;
  t = term_l_68;
  l_179 = t;
  t = term_x_72;
  t = v_15(k_179, l_179, t);
  return(t);
}
static ATerm i_16 (ATerm t)
{
  t = term_y_72;
  return(t);
}
static ATerm l_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm m_179 = NULL,n_179 = NULL,o_179 = NULL,p_179 = NULL;
  t = term_w_72;
  o_179 = t;
  t = term_l_68;
  p_179 = t;
  t = term_x_72;
  t = v_15(o_179, p_179, t);
  t = term_z_72;
  m_179 = t;
  t = term_l_68;
  n_179 = t;
  t = term_a_73;
  t = v_15(m_179, n_179, t);
  t = term_b_73;
  return(t);
}
static ATerm n_16 (ATerm t)
{
  t = term_c_73;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_73 = t;
  int e_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_16, h_16, i_16, t);
      LocalPopChoice(e_73);
    }
  else
    {
      t = d_73;
      t = Option_3_0(l_16, m_16, n_16, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_118 (ATerm), ATerm p_118 (ATerm), ATerm t)
{
  ATerm q_179 = NULL,r_179 = NULL,s_179 = NULL,t_179 = NULL,u_179 = NULL,v_179 = NULL,z_14 = NULL;
  v_179 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_179 = ATgetFirst((ATermList) t);
      s_179 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_179);
  q_179 = t;
  t = r_179;
  t = o_118(t);
  t_179 = t;
  t = s_179;
  t = p_118(t);
  u_179 = t;
  t = (ATerm) ATinsert(CheckATermList(u_179), t_179);
  z_14 = t;
  t = SSLsetAnnotations(z_14, q_179);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_167 (ATerm), ATerm t)
{
  ATerm a_180 = NULL,b_180 = NULL,c_180 = NULL,d_180 = NULL,f_180 = NULL,g_180 = NULL,b_15 = NULL;
  a_180 = t;
  {
    ATerm f_73 = t;
    int g_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_73;
        t = i_167(t);
        LocalPopChoice(g_73);
      }
    else
      {
        t = f_73;
      }
  }
  t = a_180;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_180 = ATgetFirst((ATermList) t);
      d_180 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_180);
  b_180 = t;
  t = term_c_68;
  g_180 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_68, c_180);
  t = v_15(g_180, c_180, t);
  t = d_180;
  {
    static ATerm q_180 (ATerm t);
    static ATerm q_180 (ATerm t)
    {
      ATerm i_73 = t;
      int j_73 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_73 = t;
          int l_73 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_180 = NULL;
              j_180 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_180;
              LocalPopChoice(l_73);
            }
          else
            {
              t = k_73;
              t = i_167(t);
              t = Cons_2_0(_id, q_180, t);
            }
          LocalPopChoice(j_73);
        }
      else
        {
          t = i_73;
          {
            ATerm m_180 = NULL,n_180 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_180 = ATgetFirst((ATermList) t);
                n_180 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_180), (ATerm) ATmakeAppl(sym_Undefined_1, m_180));
          }
        }
      return(t);
    }
    t = q_180(t);
  }
  f_180 = t;
  t = (ATerm) ATinsert(CheckATermList(f_180), (ATerm) ATmakeAppl(sym_Program_1, c_180));
  b_15 = t;
  t = SSLsetAnnotations(b_15, b_180);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm d_181 = NULL;
  d_181 = t;
  if(match_string(t, "--help"))
    {
      t = d_181;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_181;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_181;
        }
    }
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm e_181 = NULL,f_181 = NULL;
  t = term_m_73;
  e_181 = t;
  t = term_l_68;
  f_181 = t;
  t = term_n_73;
  t = v_15(e_181, f_181, t);
  t = term_o_73;
  return(t);
}
static ATerm r_16 (ATerm t)
{
  t = term_p_73;
  return(t);
}
static ATerm s_16 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm f_167 (ATerm), ATerm g_167 (ATerm), ATerm h_167 (ATerm), ATerm t)
{
  ATerm v_180 = NULL,w_180 = NULL,x_180 = NULL,y_180 = NULL,z_180 = NULL,a_181 = NULL,b_181 = NULL,c_181 = NULL;
  x_180 = t;
  t = term_f_69;
  y_180 = t;
  t = term_q_73;
  t = lookup_table_0_1(y_180, t);
  c_181 = t;
  t = term_h_69;
  z_180 = t;
  t = (ATerm) ATempty;
  a_181 = t;
  t = c_181;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_181 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_15(z_180, a_181, b_181, t);
  t = x_180;
  {
    static ATerm o_16 (ATerm t);
    static ATerm o_16 (ATerm t)
    {
      ATerm r_73 = t;
      int s_73 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_167(t);
          LocalPopChoice(s_73);
        }
      else
        {
          t = r_73;
          {
            ATerm t_73 = t;
            int u_73 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_16, q_16, r_16, t);
                LocalPopChoice(u_73);
              }
            else
              {
                t = t_73;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_16, t);
  }
  {
    ATerm v_73 = t;
    int w_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_181 = NULL;
        q_181 = t;
        {
          ATerm x_73 = t;
          int z_73 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_86 = NULL;
              t = q_181;
              {
                ATerm a_74 = t;
                int b_74 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_86 = NULL,i_86 = NULL;
                    t = term_s_65;
                    h_86 = t;
                    t = term_m_73;
                    i_86 = t;
                    t = term_c_74;
                    t = s_15(h_86, i_86, t);
                    LocalPopChoice(b_74);
                  }
                else
                  {
                    t = a_74;
                    t = fetch_1_0(s_16, t);
                  }
              }
              t = q_181;
              t = g_167(t);
              t = term_b_58;
              g_86 = t;
              t = SSL_exit(g_86);
              LocalPopChoice(z_73);
            }
          else
            {
              t = x_73;
              {
                ATerm m_86 = NULL,n_86 = NULL,o_86 = NULL;
                t = term_s_65;
                n_86 = t;
                t = term_w_72;
                o_86 = t;
                t = term_d_74;
                t = s_15(n_86, o_86, t);
                t = q_181;
                t = h_167(t);
                t = term_b_58;
                m_86 = t;
                t = SSL_exit(m_86);
              }
            }
        }
        LocalPopChoice(w_73);
      }
    else
      {
        t = v_73;
        {
          ATerm e_74 = t;
          int f_74 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_181 = NULL,s_181 = NULL,t_181 = NULL;
              static ATerm t_16 (ATerm t);
              static ATerm t_16 (ATerm t)
              {
                ATerm u_181 = NULL,v_181 = NULL,w_181 = NULL,a_16 = NULL;
                w_181 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_181 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_181);
                u_181 = t;
                t = v_181;
                if(((v_180 != NULL) && (v_180 != t)))
                  _fail(t);
                else
                  v_180 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_181);
                a_16 = t;
                t = SSLsetAnnotations(a_16, u_181);
                return(t);
              }
              t = fetch_1_0(t_16, t);
              t = term_z_71;
              s_181 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_180)), term_g_74);
              t_181 = t;
              t = SSL_printnl(s_181, t_181);
              t = (ATerm) ATmakeAppl(sym__2, term_z_71, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_180)), term_g_74));
              t = g_167(t);
              t = term_o_17;
              r_181 = t;
              t = SSL_exit(r_181);
              LocalPopChoice(f_74);
            }
          else
            {
              t = e_74;
            }
        }
      }
  }
  w_180 = t;
  t = term_f_69;
  t = table_destroy_0_0(t);
  t = w_180;
  return(t);
}
ATerm option_wrap_5_0 (ATerm i_165 (ATerm), ATerm j_165 (ATerm), ATerm k_165 (ATerm), ATerm l_165 (ATerm), ATerm m_165 (ATerm), ATerm t)
{
  ATerm b_182 = NULL,c_182 = NULL,d_182 = NULL,e_182 = NULL,f_182 = NULL;
  t = parse_options_3_0(i_165, j_165, k_165, t);
  b_182 = t;
  t = term_h_74;
  t = table_create_0_0(t);
  t = term_h_74;
  c_182 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_74, term_i_74, b_182);
  t = lookup_table_0_1(c_182, t);
  f_182 = t;
  t = term_i_74;
  d_182 = t;
  t = f_182;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_15(d_182, b_182, e_182, t);
  t = b_182;
  t = l_165(t);
  {
    ATerm j_74 = t;
    int k_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_165(t);
        t = report_success_0_0(t);
        LocalPopChoice(k_74);
      }
    else
      {
        t = j_74;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm u_16 (ATerm t)
{
  ATerm l_74 = t;
  int n_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(n_74);
    }
  else
    {
      t = l_74;
      {
        ATerm o_74 = t;
        int p_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(p_74);
          }
        else
          {
            t = o_74;
            {
              ATerm q_74 = t;
              int r_74 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(y_16, z_16, a_17, t);
                  LocalPopChoice(r_74);
                }
              else
                {
                  t = q_74;
                  {
                    ATerm s_74 = t;
                    int t_74 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(t_74);
                      }
                    else
                      {
                        t = s_74;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_16 (ATerm t)
{
  t = input_1_0(b_17, t);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm h_182 = NULL,i_182 = NULL;
  t = term_c_66;
  h_182 = t;
  t = term_l_68;
  i_182 = t;
  t = term_u_74;
  t = v_15(h_182, i_182, t);
  t = term_v_74;
  return(t);
}
static ATerm a_17 (ATerm t)
{
  t = term_z_74;
  return(t);
}
static ATerm b_17 (ATerm t)
{
  t = output_1_0(d_17, t);
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm k_182 = NULL,l_182 = NULL,m_182 = NULL,n_182 = NULL,o_182 = NULL,p_182 = NULL,q_182 = NULL,r_182 = NULL,s_182 = NULL,t_182 = NULL,u_182 = NULL,v_182 = NULL,w_182 = NULL,x_182 = NULL,y_182 = NULL,w_20 = NULL,m_18 = NULL,j_18 = NULL,j_16 = NULL;
  y_182 = t;
  if(match_cons(t, sym_Specification_1))
    {
      l_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_182);
  k_182 = t;
  t = l_182;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_182 = ATgetFirst((ATermList) t);
      o_182 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_182);
  m_182 = t;
  t = o_182;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_182 = ATgetFirst((ATermList) t);
      s_182 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_182);
  q_182 = t;
  t = r_182;
  if(match_cons(t, sym_Strategies_1))
    {
      v_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_182);
  u_182 = t;
  t = v_182;
  t = inline_sdefs_0_0(t);
  w_182 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, w_182);
  j_16 = t;
  t = SSLsetAnnotations(j_16, u_182);
  x_182 = t;
  t = s_182;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_182), x_182);
  j_18 = t;
  t = SSLsetAnnotations(j_18, q_182);
  t_182 = t;
  t = (ATerm) ATinsert(CheckATermList(t_182), n_182);
  m_18 = t;
  t = SSLsetAnnotations(m_18, m_182);
  p_182 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, p_182);
  w_20 = t;
  t = SSLsetAnnotations(w_20, k_182);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(u_16, default_system_usage_0_0, default_system_about_0_0, _id, v_16, t);
  return(t);
}
