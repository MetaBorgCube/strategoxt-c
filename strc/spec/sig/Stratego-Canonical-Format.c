#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Cons_1;
Symbol sym_Nil_0;
Symbol sym_Some_1;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_BuildDefault_1;
Symbol sym_As_2;
Symbol sym_Op_2;
Symbol sym_Wld_0;
Symbol sym_Str_1;
Symbol sym_Real_1;
Symbol sym_Int_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_SVar_1;
Symbol sym_GChoice_2;
Symbol sym_Choice_2;
Symbol sym_Thread_1;
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
Symbol sym_LGChoice_2;
Symbol sym_LChoice_2;
Symbol sym_Seq_2;
Symbol sym_Scope_2;
Symbol sym_Build_1;
Symbol sym_Match_1;
Symbol sym_CallT_3;
Symbol sym_Let_2;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_VarDec_2;
Symbol sym_ExtSDef_3;
Symbol sym_ExtSDefInl_4;
Symbol sym_SDefT_4;
Symbol sym_SDef_3;
Symbol sym_Undefined_0;
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
Symbol sym_Some_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Hashtable_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Cons_1;
Symbol sym_Nil_0;
Symbol sym_Some_1;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_BuildDefault_1;
Symbol sym_As_2;
Symbol sym_Op_2;
Symbol sym_Wld_0;
Symbol sym_Str_1;
Symbol sym_Real_1;
Symbol sym_Int_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_SVar_1;
Symbol sym_GChoice_2;
Symbol sym_Choice_2;
Symbol sym_Thread_1;
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
Symbol sym_LGChoice_2;
Symbol sym_LChoice_2;
Symbol sym_Seq_2;
Symbol sym_Scope_2;
Symbol sym_Build_1;
Symbol sym_Match_1;
Symbol sym_CallT_3;
Symbol sym_Let_2;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_VarDec_2;
Symbol sym_ExtSDef_3;
Symbol sym_ExtSDefInl_4;
Symbol sym_SDefT_4;
Symbol sym_SDef_3;
Symbol sym_Cong_2;
static void init_module_constructors (void)
{
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
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
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
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
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
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
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
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
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
}
ATerm term_x_15;
ATerm term_t_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_u_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_c_9;
ATerm term_t_8;
ATerm term_o_8;
ATerm term_i_8;
ATerm term_b_8;
ATerm term_y_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_z_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_i_6;
ATerm term_h_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym__2, term_l_6, term_m_6);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym__2, term_t_6, term_u_6);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a match-term-expression: ", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym__2, term_l_6, term_m_10);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_v_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym__2, term_a_11, term_h_6);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym__2, term_e_13, term_h_6);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym__2, term_m_13, term_h_6);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym__2, term_z_13, term_h_6);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym__3, term_t_6, term_u_6, (ATerm) ATempty);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym__2, term_l_6, term_z_13);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym__2, term_l_6, term_e_13);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym__2, term_a_15, term_h_6);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm e_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm k_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm h_137 (ATerm), ATerm i_137 (ATerm), ATerm t);
static ATerm n_0 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm debug_1_0 (ATerm g_115 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
ATerm term_expression_0_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm match_term_exp_0_0 (ATerm t);
ATerm CallT_3_0 (ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm strategy_expression_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm strategy_definition_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_115 (ATerm), ATerm t);
static ATerm z_3 (ATerm j_53, ATerm k_53, ATerm t);
static ATerm a_4 (ATerm q_37, ATerm r_37, ATerm t);
static ATerm c_4 (ATerm i_115 (ATerm), ATerm s_250, ATerm w_37, ATerm t);
static ATerm b_4 (ATerm m_37, ATerm n_37, ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm w_133 (ATerm), ATerm t);
static ATerm h_49 (ATerm b_49, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_4 (ATerm s_37, ATerm t);
static ATerm e_4 (ATerm p_51, ATerm q_51, ATerm t);
static ATerm f_4 (ATerm l_53, ATerm m_53, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm s_50 (ATerm r_49, ATerm t);
static ATerm t_50 (ATerm v_49, ATerm w_49, ATerm x_49, ATerm t);
static ATerm u_50 (ATerm f_50, ATerm g_50, ATerm h_50, ATerm t);
static ATerm g_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_116 (ATerm), ATerm t);
static ATerm l_4 (ATerm o_60, ATerm p_60, ATerm t);
ATerm if_verbose2_1_0 (ATerm f_132 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm o_4 (ATerm f_72, ATerm g_72, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm n_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm m_4 (ATerm v_58, ATerm w_58, ATerm u_58, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_4 (ATerm e_57, ATerm f_57, ATerm t);
ATerm foldr_2_0 (ATerm p_122 (ATerm), ATerm q_122 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm e_132 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm p_4 (ATerm g_63, ATerm h_63, ATerm i_63, ATerm t);
static ATerm q_4 (ATerm j_63, ATerm k_63, ATerm t);
ATerm lookup_table_0_1 (ATerm h_60, ATerm t);
ATerm new_hashtable_0_2 (ATerm o_63, ATerm p_63, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm j_4 (ATerm l_63, ATerm m_63, ATerm t);
static ATerm k_4 (ATerm q_63, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm g_95 (ATerm), ATerm h_95 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm c_137 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm parse_options_3_0 (ATerm z_136 (ATerm), ATerm a_137 (ATerm), ATerm b_137 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm e_135 (ATerm), ATerm f_135 (ATerm), ATerm g_135 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm iowrap_3_0 (ATerm f_134 (ATerm), ATerm g_134 (ATerm), ATerm h_134 (ATerm), ATerm t);
static ATerm a_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm c_0 = NULL,f_0 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_0 = ATgetFirst((ATermList) t);
      f_0 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_0 = NULL,r_0 = NULL;
        static ATerm a_0 (ATerm t);
        static ATerm a_0 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_0)), not_null(r_0));
          return(t);
        }
        t = f_0;
        t = o_0(t);
        if(((p_0 != NULL) && (p_0 != t)))
          _fail(t);
        else
          p_0 = t;
        t = c_0;
        t = m_0(t);
        if(((r_0 != NULL) && (r_0 != t)))
          _fail(t);
        else
          r_0 = t;
        t = f_0;
        t = reverse_acc_2_0(m_0, a_0, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_6;
      t = o_0(t);
    }
  return(t);
}
static ATerm e_0 (ATerm t)
{
  ATerm r_1 = NULL,t_1 = NULL,u_1 = NULL,h_3 = NULL;
  u_1 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_1);
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_1);
  h_3 = t;
  t = SSLsetAnnotations(h_3, r_1);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm a_2 = NULL;
  a_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_2), term_i_6);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm h_137 (ATerm), ATerm i_137 (ATerm), ATerm t)
{
  ATerm b_1 = NULL,o_1 = NULL;
  ATerm j_6 = t;
  int k_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_1 = NULL,q_1 = NULL;
      t = term_l_6;
      p_1 = t;
      t = term_m_6;
      q_1 = t;
      t = term_n_6;
      t = l_4(p_1, q_1, t);
      LocalPopChoice(k_6);
    }
  else
    {
      t = j_6;
      t = fetch_1_0(e_0, t);
    }
  {
    ATerm p_6 = t;
    int r_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_137(t);
        t = echo_0_0(t);
        LocalPopChoice(r_6);
      }
    else
      {
        t = p_6;
      }
  }
  t = term_s_6;
  t = echo_0_0(t);
  t = term_t_6;
  b_1 = t;
  t = term_u_6;
  o_1 = t;
  t = term_v_6;
  t = l_4(b_1, o_1, t);
  t = reverse_acc_2_0(_id, i_0, t);
  t = map_1_0(k_0, t);
  {
    ATerm w_6 = t;
    int x_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_2 = NULL;
        t = i_137(t);
        b_2 = t;
        t = (ATerm) ATinsert(CheckATermList(b_2), term_z_6);
        t = echo_0_0(t);
        LocalPopChoice(x_6);
      }
    else
      {
        t = w_6;
      }
  }
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm i_2 = NULL,k_2 = NULL,l_2 = NULL,l_3 = NULL;
  l_2 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_2);
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_2);
  l_3 = t;
  t = SSLsetAnnotations(l_3, i_2);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_2 = NULL;
  e_2 = t;
  {
    ATerm p_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_2 = NULL,h_2 = NULL;
        t = term_l_6;
        g_2 = t;
        t = term_m_6;
        h_2 = t;
        t = term_n_6;
        t = l_4(g_2, h_2, t);
        LocalPopChoice(q_7);
      }
    else
      {
        t = p_7;
        t = fetch_1_0(n_0, t);
      }
  }
  t = e_2;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
ATerm debug_1_0 (ATerm g_115 (ATerm), ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL;
  m_2 = t;
  t = g_115(t);
  n_2 = t;
  t = term_r_7;
  o_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_2), n_2);
  p_2 = t;
  t = SSL_printnl(o_2, p_2);
  t = m_2;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_s_7;
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm v_7 = t;
  int x_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_7 = NULL,o_7 = NULL,t_7 = NULL;
      n_7 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = n_7;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              o_7 = ATgetArgument(t, 0);
              {
                ATerm q_0 = NULL,t_0 = NULL,o_3 = NULL;
                t = SSLgetAnnotations(n_7);
                q_0 = t;
                t = SSL_is_string(o_7);
                t_0 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, t_0);
                o_3 = t;
                t = SSLsetAnnotations(o_3, q_0);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  o_7 = ATgetArgument(t, 0);
                  {
                    ATerm z_0 = NULL,c_1 = NULL,w_3 = NULL;
                    t = SSLgetAnnotations(n_7);
                    z_0 = t;
                    t = SSL_is_int(o_7);
                    c_1 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, c_1);
                    w_3 = t;
                    t = SSLsetAnnotations(w_3, z_0);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      o_7 = ATgetArgument(t, 0);
                      {
                        ATerm i_1 = NULL,k_1 = NULL,r_4 = NULL;
                        t = SSLgetAnnotations(n_7);
                        i_1 = t;
                        t = SSL_is_real(o_7);
                        k_1 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, k_1);
                        r_4 = t;
                        t = SSLsetAnnotations(r_4, i_1);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          o_7 = ATgetArgument(t, 0);
                          {
                            ATerm z_1 = NULL,j_2 = NULL,s_4 = NULL;
                            t = SSLgetAnnotations(n_7);
                            z_1 = t;
                            t = SSL_is_string(o_7);
                            j_2 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, j_2);
                            s_4 = t;
                            t = SSLsetAnnotations(s_4, z_1);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              o_7 = ATgetArgument(t, 0);
                              {
                                ATerm v_2 = NULL,x_2 = NULL,v_4 = NULL;
                                t = SSLgetAnnotations(n_7);
                                v_2 = t;
                                t = o_7;
                                t = term_expression_0_0(t);
                                x_2 = t;
                                t = (ATerm) ATmakeAppl(sym_BuildDefault_1, x_2);
                                v_4 = t;
                                t = SSLsetAnnotations(v_4, v_2);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_As_2))
                                {
                                  o_7 = ATgetArgument(t, 0);
                                  t_7 = ATgetArgument(t, 1);
                                  {
                                    ATerm e_3 = NULL,j_3 = NULL,k_3 = NULL,m_3 = NULL,p_3 = NULL,q_3 = NULL,x_4 = NULL,w_4 = NULL;
                                    t = SSLgetAnnotations(n_7);
                                    e_3 = t;
                                    t = o_7;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        m_3 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(o_7);
                                    k_3 = t;
                                    t = SSL_is_string(m_3);
                                    p_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, p_3);
                                    w_4 = t;
                                    t = SSLsetAnnotations(w_4, k_3);
                                    q_3 = t;
                                    t = t_7;
                                    t = term_expression_0_0(t);
                                    j_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, q_3, j_3);
                                    x_4 = t;
                                    t = SSLsetAnnotations(x_4, e_3);
                                  }
                                }
                              else
                                {
                                  ATerm i_4 = NULL,u_4 = NULL,a_5 = NULL,y_4 = NULL;
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      o_7 = ATgetArgument(t, 0);
                                      t_7 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(n_7);
                                  i_4 = t;
                                  t = SSL_is_string(o_7);
                                  u_4 = t;
                                  t = t_7;
                                  t = map_1_0(term_expression_0_0, t);
                                  a_5 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, u_4, a_5);
                                  y_4 = t;
                                  t = SSLsetAnnotations(y_4, i_4);
                                }
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(x_7);
    }
  else
    {
      t = v_7;
      t = debug_1_0(s_0, t);
    }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_y_7;
  return(t);
}
ATerm match_term_exp_0_0 (ATerm t)
{
  ATerm z_7 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_14 = NULL,r_14 = NULL,s_14 = NULL;
      o_14 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = o_14;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              r_14 = ATgetArgument(t, 0);
              {
                ATerm m_5 = NULL,r_5 = NULL,q_5 = NULL;
                t = SSLgetAnnotations(o_14);
                m_5 = t;
                t = SSL_is_string(r_14);
                r_5 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, r_5);
                q_5 = t;
                t = SSLsetAnnotations(q_5, m_5);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  r_14 = ATgetArgument(t, 0);
                  {
                    ATerm d_6 = NULL,g_6 = NULL,s_5 = NULL;
                    t = SSLgetAnnotations(o_14);
                    d_6 = t;
                    t = SSL_is_int(r_14);
                    g_6 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, g_6);
                    s_5 = t;
                    t = SSLsetAnnotations(s_5, d_6);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      r_14 = ATgetArgument(t, 0);
                      {
                        ATerm o_6 = NULL,q_6 = NULL,u_5 = NULL;
                        t = SSLgetAnnotations(o_14);
                        o_6 = t;
                        t = SSL_is_real(r_14);
                        q_6 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, q_6);
                        u_5 = t;
                        t = SSLsetAnnotations(u_5, o_6);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          r_14 = ATgetArgument(t, 0);
                          {
                            ATerm u_7 = NULL,w_7 = NULL,w_5 = NULL;
                            t = SSLgetAnnotations(o_14);
                            u_7 = t;
                            t = SSL_is_string(r_14);
                            w_7 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, w_7);
                            w_5 = t;
                            t = SSLsetAnnotations(w_5, u_7);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              r_14 = ATgetArgument(t, 0);
                              {
                                ATerm d_8 = NULL,h_8 = NULL,x_5 = NULL;
                                t = SSLgetAnnotations(o_14);
                                d_8 = t;
                                t = r_14;
                                t = match_term_exp_0_0(t);
                                h_8 = t;
                                t = (ATerm) ATmakeAppl(sym_BuildDefault_1, h_8);
                                x_5 = t;
                                t = SSLsetAnnotations(x_5, d_8);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_As_2))
                                {
                                  r_14 = ATgetArgument(t, 0);
                                  s_14 = ATgetArgument(t, 1);
                                  {
                                    ATerm s_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,c_6 = NULL,b_6 = NULL;
                                    t = SSLgetAnnotations(o_14);
                                    s_8 = t;
                                    t = r_14;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        y_8 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(r_14);
                                    x_8 = t;
                                    t = SSL_is_string(y_8);
                                    z_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, z_8);
                                    b_6 = t;
                                    t = SSLsetAnnotations(b_6, x_8);
                                    a_9 = t;
                                    t = s_14;
                                    t = match_term_exp_0_0(t);
                                    w_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, a_9, w_8);
                                    c_6 = t;
                                    t = SSLsetAnnotations(c_6, s_8);
                                  }
                                }
                              else
                                {
                                  ATerm i_9 = NULL,l_9 = NULL,m_9 = NULL,e_6 = NULL;
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      r_14 = ATgetArgument(t, 0);
                                      s_14 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(o_14);
                                  i_9 = t;
                                  t = SSL_is_string(r_14);
                                  l_9 = t;
                                  t = s_14;
                                  t = map_1_0(match_term_exp_0_0, t);
                                  m_9 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, l_9, m_9);
                                  e_6 = t;
                                  t = SSLsetAnnotations(e_6, i_9);
                                }
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(a_8);
    }
  else
    {
      t = z_7;
      t = debug_1_0(u_0, t);
    }
  return(t);
}
ATerm CallT_3_0 (ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm t)
{
  ATerm z_15 = NULL,d_16 = NULL,e_16 = NULL,h_16 = NULL,j_16 = NULL,n_16 = NULL,o_16 = NULL,q_16 = NULL,y_6 = NULL;
  q_16 = t;
  if(match_cons(t, sym_CallT_3))
    {
      d_16 = ATgetArgument(t, 0);
      e_16 = ATgetArgument(t, 1);
      h_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_16);
  z_15 = t;
  t = d_16;
  t = b_88(t);
  j_16 = t;
  t = e_16;
  t = c_88(t);
  n_16 = t;
  t = h_16;
  t = d_88(t);
  o_16 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, j_16, n_16, o_16);
  y_6 = t;
  t = SSLsetAnnotations(y_6, z_15);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = CallT_3_0(w_0, x_0, y_0, t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm l_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,j_7 = NULL;
  p_20 = t;
  if(match_cons(t, sym_SVar_1))
    {
      n_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_20);
  l_20 = t;
  t = SSL_is_string(n_20);
  o_20 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, o_20);
  j_7 = t;
  t = SSLsetAnnotations(j_7, l_20);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,y_20 = NULL,z_20 = NULL,k_7 = NULL;
  z_20 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_20);
  v_20 = t;
  t = SSL_is_string(w_20);
  y_20 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_20);
  k_7 = t;
  t = SSLsetAnnotations(k_7, v_20);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm f_27 = NULL;
  f_27 = t;
  t = SSL_is_string(f_27);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,t_28 = NULL,u_9 = NULL,t_9 = NULL;
  t_28 = t;
  if(match_cons(t, sym_CallT_3))
    {
      l_28 = ATgetArgument(t, 0);
      m_28 = ATgetArgument(t, 1);
      n_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_28);
  k_28 = t;
  t = l_28;
  if(match_cons(t, sym_SVar_1))
    {
      p_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_28);
  o_28 = t;
  t = SSL_is_string(p_28);
  q_28 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, q_28);
  t_9 = t;
  t = SSLsetAnnotations(t_9, o_28);
  r_28 = t;
  t = m_28;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = n_28;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, r_28, m_28, n_28);
  u_9 = t;
  t = SSLsetAnnotations(u_9, k_28);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,v_9 = NULL;
  x_28 = t;
  if(match_cons(t, sym_Var_1))
    {
      v_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_28);
  u_28 = t;
  t = SSL_is_string(v_28);
  w_28 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_28);
  v_9 = t;
  t = SSLsetAnnotations(v_9, u_28);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL,h_34 = NULL,j_34 = NULL;
  d_34 = t;
  if(match_cons(t, sym_SDef_3))
    {
      e_34 = ATgetArgument(t, 0);
      f_34 = ATgetArgument(t, 1);
      h_34 = ATgetArgument(t, 2);
      {
        ATerm s_36 = NULL,w_36 = NULL,z_36 = NULL,a_37 = NULL,y_9 = NULL;
        t = SSLgetAnnotations(d_34);
        s_36 = t;
        t = SSL_is_string(e_34);
        w_36 = t;
        t = f_34;
        t = map_1_0(h_1, t);
        z_36 = t;
        t = h_34;
        t = strategy_expression_0_0(t);
        a_37 = t;
        t = (ATerm) ATmakeAppl(sym_SDef_3, w_36, z_36, a_37);
        y_9 = t;
        t = SSLsetAnnotations(y_9, s_36);
      }
    }
  else
    {
      ATerm z_38 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,b_10 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          e_34 = ATgetArgument(t, 0);
          f_34 = ATgetArgument(t, 1);
          h_34 = ATgetArgument(t, 2);
          j_34 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_34);
      z_38 = t;
      t = SSL_is_string(e_34);
      k_39 = t;
      t = f_34;
      t = map_1_0(j_1, t);
      l_39 = t;
      t = h_34;
      t = map_1_0(l_1, t);
      m_39 = t;
      t = j_34;
      t = strategy_expression_0_0(t);
      n_39 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, k_39, l_39, m_39, n_39);
      b_10 = t;
      t = SSLsetAnnotations(b_10, z_38);
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm h_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,x_9 = NULL;
  q_38 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      n_38 = ATgetArgument(t, 0);
      o_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_38);
  h_38 = t;
  t = SSL_is_string(n_38);
  p_38 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_38, o_38);
  x_9 = t;
  t = SSLsetAnnotations(x_9, h_38);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,z_9 = NULL;
  e_41 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      y_40 = ATgetArgument(t, 0);
      c_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_41);
  x_40 = t;
  t = SSL_is_string(y_40);
  d_41 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_41, c_41);
  z_9 = t;
  t = SSLsetAnnotations(z_9, x_40);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,m_41 = NULL,n_41 = NULL,d_42 = NULL,a_10 = NULL;
  d_42 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      k_41 = ATgetArgument(t, 0);
      m_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_42);
  j_41 = t;
  t = SSL_is_string(k_41);
  n_41 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_41, m_41);
  a_10 = t;
  t = SSLsetAnnotations(a_10, j_41);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_b_8;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm c_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL,n_40 = NULL;
      i_40 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = i_40;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = i_40;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  j_40 = ATgetArgument(t, 0);
                  {
                    ATerm h_15 = NULL,j_15 = NULL,a_7 = NULL;
                    t = SSLgetAnnotations(i_40);
                    h_15 = t;
                    t = j_40;
                    t = strategy_expression_0_0(t);
                    j_15 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, j_15);
                    a_7 = t;
                    t = SSLsetAnnotations(a_7, h_15);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Test_1))
                    {
                      j_40 = ATgetArgument(t, 0);
                      {
                        ATerm s_15 = NULL,w_15 = NULL,b_7 = NULL;
                        t = SSLgetAnnotations(i_40);
                        s_15 = t;
                        t = j_40;
                        t = strategy_expression_0_0(t);
                        w_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Test_1, w_15);
                        b_7 = t;
                        t = SSLsetAnnotations(b_7, s_15);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Seq_2))
                        {
                          j_40 = ATgetArgument(t, 0);
                          n_40 = ATgetArgument(t, 1);
                          {
                            ATerm g_16 = NULL,l_16 = NULL,m_16 = NULL,c_7 = NULL;
                            t = SSLgetAnnotations(i_40);
                            g_16 = t;
                            t = j_40;
                            t = strategy_expression_0_0(t);
                            l_16 = t;
                            t = n_40;
                            t = strategy_expression_0_0(t);
                            m_16 = t;
                            t = (ATerm) ATmakeAppl(sym_Seq_2, l_16, m_16);
                            c_7 = t;
                            t = SSLsetAnnotations(c_7, g_16);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Choice_2))
                            {
                              j_40 = ATgetArgument(t, 0);
                              n_40 = ATgetArgument(t, 1);
                              {
                                ATerm x_16 = NULL,a_17 = NULL,b_17 = NULL,d_7 = NULL;
                                t = SSLgetAnnotations(i_40);
                                x_16 = t;
                                t = j_40;
                                t = strategy_expression_0_0(t);
                                a_17 = t;
                                t = n_40;
                                t = strategy_expression_0_0(t);
                                b_17 = t;
                                t = (ATerm) ATmakeAppl(sym_Choice_2, a_17, b_17);
                                d_7 = t;
                                t = SSLsetAnnotations(d_7, x_16);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_LChoice_2))
                                {
                                  j_40 = ATgetArgument(t, 0);
                                  n_40 = ATgetArgument(t, 1);
                                  {
                                    ATerm j_17 = NULL,m_17 = NULL,n_17 = NULL,e_7 = NULL;
                                    t = SSLgetAnnotations(i_40);
                                    j_17 = t;
                                    t = j_40;
                                    t = strategy_expression_0_0(t);
                                    m_17 = t;
                                    t = n_40;
                                    t = strategy_expression_0_0(t);
                                    n_17 = t;
                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, m_17, n_17);
                                    e_7 = t;
                                    t = SSLsetAnnotations(e_7, j_17);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      j_40 = ATgetArgument(t, 0);
                                      n_40 = ATgetArgument(t, 1);
                                      h_40 = ATgetArgument(t, 2);
                                      {
                                        ATerm w_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,f_7 = NULL;
                                        t = SSLgetAnnotations(i_40);
                                        w_17 = t;
                                        t = j_40;
                                        t = strategy_expression_0_0(t);
                                        a_18 = t;
                                        t = n_40;
                                        t = strategy_expression_0_0(t);
                                        b_18 = t;
                                        t = h_40;
                                        t = strategy_expression_0_0(t);
                                        c_18 = t;
                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, a_18, b_18, c_18);
                                        f_7 = t;
                                        t = SSLsetAnnotations(f_7, w_17);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          j_40 = ATgetArgument(t, 0);
                                          n_40 = ATgetArgument(t, 1);
                                          {
                                            ATerm l_18 = NULL,p_18 = NULL,q_18 = NULL,g_7 = NULL;
                                            t = SSLgetAnnotations(i_40);
                                            l_18 = t;
                                            t = j_40;
                                            t = strategy_expression_0_0(t);
                                            p_18 = t;
                                            t = n_40;
                                            t = strategy_expression_0_0(t);
                                            q_18 = t;
                                            t = (ATerm) ATmakeAppl(sym_GChoice_2, p_18, q_18);
                                            g_7 = t;
                                            t = SSLsetAnnotations(g_7, l_18);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              j_40 = ATgetArgument(t, 0);
                                              n_40 = ATgetArgument(t, 1);
                                              {
                                                ATerm a_19 = NULL,e_19 = NULL,f_19 = NULL,h_7 = NULL;
                                                t = SSLgetAnnotations(i_40);
                                                a_19 = t;
                                                t = j_40;
                                                t = strategy_expression_0_0(t);
                                                e_19 = t;
                                                t = n_40;
                                                t = strategy_expression_0_0(t);
                                                f_19 = t;
                                                t = (ATerm) ATmakeAppl(sym_LGChoice_2, e_19, f_19);
                                                h_7 = t;
                                                t = SSLsetAnnotations(h_7, a_19);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_CallT_3))
                                                {
                                                  j_40 = ATgetArgument(t, 0);
                                                  n_40 = ATgetArgument(t, 1);
                                                  h_40 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm w_19 = NULL,c_20 = NULL,d_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,j_20 = NULL,l_7 = NULL,i_7 = NULL;
                                                    t = SSLgetAnnotations(i_40);
                                                    w_19 = t;
                                                    t = j_40;
                                                    if(match_cons(t, sym_SVar_1))
                                                      {
                                                        g_20 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSLgetAnnotations(j_40);
                                                    f_20 = t;
                                                    t = SSL_is_string(g_20);
                                                    h_20 = t;
                                                    t = (ATerm) ATmakeAppl(sym_SVar_1, h_20);
                                                    i_7 = t;
                                                    t = SSLsetAnnotations(i_7, f_20);
                                                    j_20 = t;
                                                    t = n_40;
                                                    t = map_1_0(v_0, t);
                                                    c_20 = t;
                                                    t = h_40;
                                                    t = map_1_0(a_1, t);
                                                    d_20 = t;
                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, j_20, c_20, d_20);
                                                    l_7 = t;
                                                    t = SSLsetAnnotations(l_7, w_19);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      j_40 = ATgetArgument(t, 0);
                                                      n_40 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm w_21 = NULL,c_22 = NULL,e_22 = NULL,m_7 = NULL;
                                                        t = SSLgetAnnotations(i_40);
                                                        w_21 = t;
                                                        t = SSL_is_string(j_40);
                                                        c_22 = t;
                                                        t = n_40;
                                                        t = strategy_expression_0_0(t);
                                                        e_22 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, c_22, e_22);
                                                        m_7 = t;
                                                        t = SSLsetAnnotations(m_7, w_21);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          j_40 = ATgetArgument(t, 0);
                                                          n_40 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm q_22 = NULL,u_22 = NULL,v_22 = NULL,e_8 = NULL;
                                                            t = SSLgetAnnotations(i_40);
                                                            q_22 = t;
                                                            t = SSL_is_int(j_40);
                                                            u_22 = t;
                                                            t = n_40;
                                                            t = strategy_expression_0_0(t);
                                                            v_22 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, u_22, v_22);
                                                            e_8 = t;
                                                            t = SSLsetAnnotations(e_8, q_22);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              j_40 = ATgetArgument(t, 0);
                                                              n_40 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm h_23 = NULL,m_23 = NULL,n_23 = NULL,f_8 = NULL;
                                                                t = SSLgetAnnotations(i_40);
                                                                h_23 = t;
                                                                t = SSL_is_string(j_40);
                                                                m_23 = t;
                                                                t = n_40;
                                                                t = map_1_0(strategy_expression_0_0, t);
                                                                n_23 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Cong_2, m_23, n_23);
                                                                f_8 = t;
                                                                t = SSLsetAnnotations(f_8, h_23);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_One_1))
                                                                {
                                                                  j_40 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm e_24 = NULL,g_24 = NULL,k_8 = NULL;
                                                                    t = SSLgetAnnotations(i_40);
                                                                    e_24 = t;
                                                                    t = j_40;
                                                                    t = strategy_expression_0_0(t);
                                                                    g_24 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_One_1, g_24);
                                                                    k_8 = t;
                                                                    t = SSLsetAnnotations(k_8, e_24);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Some_1))
                                                                    {
                                                                      j_40 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm o_24 = NULL,q_24 = NULL,l_8 = NULL;
                                                                        t = SSLgetAnnotations(i_40);
                                                                        o_24 = t;
                                                                        t = j_40;
                                                                        t = strategy_expression_0_0(t);
                                                                        q_24 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Some_1, q_24);
                                                                        l_8 = t;
                                                                        t = SSLsetAnnotations(l_8, o_24);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_All_1))
                                                                        {
                                                                          j_40 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm x_24 = NULL,a_25 = NULL,n_8 = NULL;
                                                                            t = SSLgetAnnotations(i_40);
                                                                            x_24 = t;
                                                                            t = j_40;
                                                                            t = strategy_expression_0_0(t);
                                                                            a_25 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_All_1, a_25);
                                                                            n_8 = t;
                                                                            t = SSLsetAnnotations(n_8, x_24);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Thread_1))
                                                                            {
                                                                              j_40 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm i_25 = NULL,m_25 = NULL,r_8 = NULL;
                                                                                t = SSLgetAnnotations(i_40);
                                                                                i_25 = t;
                                                                                t = j_40;
                                                                                t = strategy_expression_0_0(t);
                                                                                m_25 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Thread_1, m_25);
                                                                                r_8 = t;
                                                                                t = SSLsetAnnotations(r_8, i_25);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  j_40 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm z_25 = NULL,d_26 = NULL,u_8 = NULL;
                                                                                    t = SSLgetAnnotations(i_40);
                                                                                    z_25 = t;
                                                                                    t = j_40;
                                                                                    t = match_term_exp_0_0(t);
                                                                                    d_26 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, d_26);
                                                                                    u_8 = t;
                                                                                    t = SSLsetAnnotations(u_8, z_25);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      j_40 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm k_26 = NULL,q_26 = NULL,q_9 = NULL;
                                                                                        t = SSLgetAnnotations(i_40);
                                                                                        k_26 = t;
                                                                                        t = j_40;
                                                                                        t = term_expression_0_0(t);
                                                                                        q_26 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, q_26);
                                                                                        q_9 = t;
                                                                                        t = SSLsetAnnotations(q_9, k_26);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Scope_2))
                                                                                        {
                                                                                          j_40 = ATgetArgument(t, 0);
                                                                                          n_40 = ATgetArgument(t, 1);
                                                                                          {
                                                                                            ATerm y_26 = NULL,b_27 = NULL,c_27 = NULL,r_9 = NULL;
                                                                                            t = SSLgetAnnotations(i_40);
                                                                                            y_26 = t;
                                                                                            t = j_40;
                                                                                            t = map_1_0(d_1, t);
                                                                                            b_27 = t;
                                                                                            t = n_40;
                                                                                            t = strategy_expression_0_0(t);
                                                                                            c_27 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Scope_2, b_27, c_27);
                                                                                            r_9 = t;
                                                                                            t = SSLsetAnnotations(r_9, y_26);
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Where_1))
                                                                                            {
                                                                                              j_40 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm n_27 = NULL,p_27 = NULL,s_9 = NULL;
                                                                                                t = SSLgetAnnotations(i_40);
                                                                                                n_27 = t;
                                                                                                t = j_40;
                                                                                                t = strategy_expression_0_0(t);
                                                                                                p_27 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Where_1, p_27);
                                                                                                s_9 = t;
                                                                                                t = SSLsetAnnotations(s_9, n_27);
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_PrimT_3))
                                                                                                {
                                                                                                  j_40 = ATgetArgument(t, 0);
                                                                                                  n_40 = ATgetArgument(t, 1);
                                                                                                  h_40 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm z_27 = NULL,e_28 = NULL,g_28 = NULL,i_28 = NULL,w_9 = NULL;
                                                                                                    t = SSLgetAnnotations(i_40);
                                                                                                    z_27 = t;
                                                                                                    t = SSL_is_string(j_40);
                                                                                                    e_28 = t;
                                                                                                    t = n_40;
                                                                                                    t = map_1_0(e_1, t);
                                                                                                    g_28 = t;
                                                                                                    t = h_40;
                                                                                                    t = map_1_0(f_1, t);
                                                                                                    i_28 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, e_28, g_28, i_28);
                                                                                                    w_9 = t;
                                                                                                    t = SSLsetAnnotations(w_9, z_27);
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  ATerm w_31 = NULL,z_31 = NULL,a_32 = NULL,c_10 = NULL;
                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                    {
                                                                                                      j_40 = ATgetArgument(t, 0);
                                                                                                      n_40 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = SSLgetAnnotations(i_40);
                                                                                                  w_31 = t;
                                                                                                  t = j_40;
                                                                                                  t = map_1_0(g_1, t);
                                                                                                  z_31 = t;
                                                                                                  t = n_40;
                                                                                                  t = strategy_expression_0_0(t);
                                                                                                  a_32 = t;
                                                                                                  t = (ATerm) ATmakeAppl(sym_Let_2, z_31, a_32);
                                                                                                  c_10 = t;
                                                                                                  t = SSLsetAnnotations(c_10, w_31);
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
      LocalPopChoice(g_8);
    }
  else
    {
      t = c_8;
      t = debug_1_0(m_1, t);
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,l_11 = NULL;
  o_49 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      w_48 = ATgetArgument(t, 0);
      m_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_49);
  v_48 = t;
  t = SSL_is_string(w_48);
  n_49 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_49, m_49);
  l_11 = t;
  t = SSLsetAnnotations(l_11, v_48);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm s_55 = NULL,e_56 = NULL,f_56 = NULL,r_56 = NULL,h_57 = NULL,n_11 = NULL;
  h_57 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      e_56 = ATgetArgument(t, 0);
      f_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_57);
  s_55 = t;
  t = SSL_is_string(e_56);
  r_56 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_56, f_56);
  n_11 = t;
  t = SSLsetAnnotations(n_11, s_55);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm i_57 = NULL,k_58 = NULL,t_58 = NULL,x_58 = NULL,y_58 = NULL,o_11 = NULL;
  y_58 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      k_58 = ATgetArgument(t, 0);
      t_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_58);
  i_57 = t;
  t = SSL_is_string(k_58);
  x_58 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_58, t_58);
  o_11 = t;
  t = SSLsetAnnotations(o_11, i_57);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm n_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL,q_11 = NULL;
  u_63 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      r_63 = ATgetArgument(t, 0);
      s_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_63);
  n_63 = t;
  t = SSL_is_string(r_63);
  t_63 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, t_63, s_63);
  q_11 = t;
  t = SSLsetAnnotations(q_11, n_63);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL,r_11 = NULL;
  z_63 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      w_63 = ATgetArgument(t, 0);
      x_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_63);
  v_63 = t;
  t = SSL_is_string(w_63);
  y_63 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, y_63, x_63);
  r_11 = t;
  t = SSLsetAnnotations(r_11, v_63);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,t_11 = NULL;
  v_64 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      s_64 = ATgetArgument(t, 0);
      t_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_64);
  r_64 = t;
  t = SSL_is_string(s_64);
  u_64 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, u_64, t_64);
  t_11 = t;
  t = SSLsetAnnotations(t_11, r_64);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL,u_11 = NULL;
  a_65 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      x_64 = ATgetArgument(t, 0);
      y_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_65);
  w_64 = t;
  t = SSL_is_string(x_64);
  z_64 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_64, y_64);
  u_11 = t;
  t = SSLsetAnnotations(u_11, w_64);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_i_8;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm j_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL;
      w_45 = t;
      if(match_cons(t, sym_SDef_3))
        {
          x_45 = ATgetArgument(t, 0);
          y_45 = ATgetArgument(t, 1);
          z_45 = ATgetArgument(t, 2);
          {
            ATerm t_44 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,m_11 = NULL;
            t = SSLgetAnnotations(w_45);
            t_44 = t;
            t = SSL_is_string(x_45);
            y_46 = t;
            t = y_45;
            t = map_1_0(n_1, t);
            z_46 = t;
            t = z_45;
            t = strategy_expression_0_0(t);
            a_47 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, y_46, z_46, a_47);
            m_11 = t;
            t = SSLsetAnnotations(m_11, t_44);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              x_45 = ATgetArgument(t, 0);
              y_45 = ATgetArgument(t, 1);
              z_45 = ATgetArgument(t, 2);
              v_45 = ATgetArgument(t, 3);
              {
                ATerm e_53 = NULL,k_54 = NULL,n_54 = NULL,u_54 = NULL,v_54 = NULL,p_11 = NULL;
                t = SSLgetAnnotations(w_45);
                e_53 = t;
                t = SSL_is_string(x_45);
                k_54 = t;
                t = y_45;
                t = map_1_0(s_1, t);
                n_54 = t;
                t = z_45;
                t = map_1_0(v_1, t);
                u_54 = t;
                t = v_45;
                t = strategy_expression_0_0(t);
                v_54 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, k_54, n_54, u_54, v_54);
                p_11 = t;
                t = SSLsetAnnotations(p_11, e_53);
              }
            }
          else
            {
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  x_45 = ATgetArgument(t, 0);
                  y_45 = ATgetArgument(t, 1);
                  z_45 = ATgetArgument(t, 2);
                  v_45 = ATgetArgument(t, 3);
                  {
                    ATerm w_62 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL,s_11 = NULL;
                    t = SSLgetAnnotations(w_45);
                    w_62 = t;
                    t = SSL_is_string(x_45);
                    b_63 = t;
                    t = y_45;
                    t = map_1_0(w_1, t);
                    c_63 = t;
                    t = z_45;
                    t = map_1_0(x_1, t);
                    d_63 = t;
                    t = v_45;
                    t = strategy_expression_0_0(t);
                    e_63 = t;
                    t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, b_63, c_63, d_63, e_63);
                    s_11 = t;
                    t = SSLsetAnnotations(s_11, w_62);
                  }
                }
              else
                {
                  ATerm j_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,v_11 = NULL;
                  if(match_cons(t, sym_ExtSDef_3))
                    {
                      x_45 = ATgetArgument(t, 0);
                      y_45 = ATgetArgument(t, 1);
                      z_45 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_45);
                  j_64 = t;
                  t = SSL_is_string(x_45);
                  n_64 = t;
                  t = y_45;
                  t = map_1_0(y_1, t);
                  o_64 = t;
                  t = z_45;
                  t = map_1_0(c_2, t);
                  p_64 = t;
                  t = (ATerm) ATmakeAppl(sym_ExtSDef_3, n_64, o_64, p_64);
                  v_11 = t;
                  t = SSLsetAnnotations(v_11, j_64);
                }
            }
        }
      LocalPopChoice(m_8);
    }
  else
    {
      t = j_8;
      t = debug_1_0(d_2, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm q_115 (ATerm), ATerm t)
{
  static ATerm s_46 (ATerm t);
  static ATerm s_46 (ATerm t)
  {
    ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL;
    p_46 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_46;
      }
    else
      {
        ATerm i_65 = NULL,l_65 = NULL,m_65 = NULL,h_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_46 = ATgetFirst((ATermList) t);
            r_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_46);
        i_65 = t;
        t = q_46;
        t = q_115(t);
        l_65 = t;
        t = r_46;
        t = s_46(t);
        m_65 = t;
        t = (ATerm) ATinsert(CheckATermList(m_65), l_65);
        h_12 = t;
        t = SSLsetAnnotations(h_12, i_65);
      }
    return(t);
  }
  t = s_46(t);
  return(t);
}
static ATerm z_3 (ATerm j_53, ATerm k_53, ATerm t)
{
  ATerm u_46 = NULL;
  t = SSL_fputc(j_53, k_53);
  u_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_46);
  return(t);
}
static ATerm a_4 (ATerm q_37, ATerm r_37, ATerm t)
{
  ATerm v_46 = NULL;
  t = SSL_write_term_to_stream_text(q_37, r_37);
  v_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_46);
  return(t);
}
static ATerm c_4 (ATerm i_115 (ATerm), ATerm s_250, ATerm w_37, ATerm t)
{
  ATerm w_46 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_250, term_o_8);
  t = g_4(t);
  w_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_46, w_37);
  t = i_115(t);
  t = fclose_0_0(t);
  t = w_37;
  return(t);
}
static ATerm b_4 (ATerm m_37, ATerm n_37, ATerm t)
{
  ATerm x_46 = NULL;
  t = SSL_write_term_to_stream_baf(m_37, n_37);
  x_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_46);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm a_66 = NULL,b_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_8 = ATgetArgument(t, 0);
      if(match_cons(p_8, sym_Stream_1))
        {
          a_66 = ATgetArgument(p_8, 0);
        }
      else
        _fail(t);
      b_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_4(a_66, b_66, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_8 = ATgetArgument(t, 0);
      if(match_cons(q_8, sym_Stream_1))
        {
          p_66 = ATgetArgument(q_8, 0);
        }
      else
        _fail(t);
      q_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4(p_66, q_66, t);
  m_66 = t;
  t = term_t_8;
  n_66 = t;
  t = m_66;
  if(match_cons(t, sym_Stream_1))
    {
      o_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_t_8, m_66);
  t = z_3(n_66, o_66, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,l_48 = NULL,m_48 = NULL,k_12 = NULL,j_12 = NULL;
  c_47 = t;
  if(match_cons(t, sym__2))
    {
      j_47 = ATgetArgument(t, 0);
      k_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_47);
  i_47 = t;
  t = j_47;
  {
    ATerm v_8 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_2 (ATerm t);
        static ATerm f_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((b_47 != NULL) && (b_47 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                b_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(f_2, t);
        LocalPopChoice(b_9);
      }
    else
      {
        t = v_8;
        t = term_c_9;
        b_47 = t;
      }
  }
  l_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_47, k_47);
  j_12 = t;
  t = SSLsetAnnotations(j_12, i_47);
  t = c_47;
  if(match_cons(t, sym__2))
    {
      e_47 = ATgetArgument(t, 0);
      f_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_47);
  d_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_47, (ATerm) ATmakeAppl(sym__2, not_null(b_47), f_47));
  k_12 = t;
  t = SSLsetAnnotations(k_12, d_47);
  h_47 = t;
  if(match_cons(t, sym__2))
    {
      l_48 = ATgetArgument(t, 0);
      m_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,l_12 = NULL;
        t = SSLgetAnnotations(h_47);
        t_65 = t;
        t = l_48;
        t = fetch_1_0(q_2, t);
        w_65 = t;
        t = m_48;
        if(match_cons(t, sym__2))
          {
            y_65 = ATgetArgument(t, 0);
            z_65 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_4(r_2, y_65, z_65, t);
        x_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_65, x_65);
        l_12 = t;
        t = SSLsetAnnotations(l_12, t_65);
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
        {
          ATerm g_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_12 = NULL;
          t = SSLgetAnnotations(h_47);
          g_66 = t;
          t = m_48;
          if(match_cons(t, sym__2))
            {
              k_66 = ATgetArgument(t, 0);
              l_66 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_4(s_2, k_66, l_66, t);
          j_66 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_48, j_66);
          m_12 = t;
          t = SSLsetAnnotations(m_12, g_66);
        }
      }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm w_133 (ATerm), ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL;
  t_48 = t;
  t = dtime_0_0(t);
  t = t_48;
  t = w_133(t);
  s_48 = t;
  t = dtime_0_0(t);
  p_48 = t;
  t = s_48;
  if(match_cons(t, sym__2))
    {
      q_48 = ATgetArgument(t, 0);
      r_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_48), (ATerm) ATmakeAppl(sym_Runtime_1, p_48)), r_48);
  return(t);
}
static ATerm h_49 (ATerm b_49, ATerm t)
{
  t = SSL_fclose(b_49);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL;
  f_49 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_49 = ATgetArgument(t, 0);
      {
        ATerm f_9 = t;
        int g_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_49);
            LocalPopChoice(g_9);
          }
        else
          {
            t = f_9;
            t = h_49(f_49, t);
          }
      }
    }
  else
    {
      t = h_49(f_49, t);
    }
  return(t);
}
static ATerm d_4 (ATerm s_37, ATerm t)
{
  t = SSL_read_term_from_stream(s_37);
  return(t);
}
static ATerm e_4 (ATerm p_51, ATerm q_51, ATerm t)
{
  t = SSL_strcat(p_51, q_51);
  return(t);
}
static ATerm f_4 (ATerm l_53, ATerm m_53, ATerm t)
{
  ATerm i_49 = NULL;
  t = SSL_fopen(l_53, m_53);
  i_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_49);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_49 = NULL;
  t = SSL_stdin_stream();
  j_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_49);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_49 = NULL;
  t = SSL_stdout_stream();
  k_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_49);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_49 = NULL;
  t = SSL_stderr_stream();
  l_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_49);
  return(t);
}
static ATerm s_50 (ATerm r_49, ATerm t)
{
  ATerm s_49 = NULL;
  t = SSL_explode_term(r_49);
  if(match_cons(t, sym__2))
    {
      ATerm h_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_9 = ATgetArgument(t, 1);
        if(((ATgetType(j_9) == AT_LIST) && !(ATisEmpty(j_9))))
          {
            s_49 = ATgetFirst((ATermList) j_9);
            {
              ATerm k_9 = (ATerm) ATgetNext((ATermList) j_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_49;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_49;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_49;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_49;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm t_50 (ATerm v_49, ATerm w_49, ATerm x_49, ATerm t)
{
  ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL,d_50 = NULL,r_12 = NULL;
  t = SSLgetAnnotations(x_49);
  a_50 = t;
  t = v_49;
  if(match_cons(t, sym_Path_1))
    {
      d_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_50, w_49);
  r_12 = t;
  t = SSLsetAnnotations(r_12, a_50);
  if(match_cons(t, sym__2))
    {
      y_49 = ATgetArgument(t, 0);
      z_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_4(y_49, z_49, t);
  return(t);
}
static ATerm u_50 (ATerm f_50, ATerm g_50, ATerm h_50, ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL,n_50 = NULL,s_12 = NULL;
  t = SSLgetAnnotations(h_50);
  k_50 = t;
  t = SSL_is_string(f_50);
  n_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_50, g_50);
  s_12 = t;
  t = SSLsetAnnotations(s_12, k_50);
  if(match_cons(t, sym__2))
    {
      i_50 = ATgetArgument(t, 0);
      j_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_4(i_50, j_50, t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL;
  p_50 = t;
  if(match_cons(t, sym__2))
    {
      q_50 = ATgetArgument(t, 0);
      r_50 = ATgetArgument(t, 1);
      {
        ATerm n_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_50(p_50, t);
            LocalPopChoice(o_9);
          }
        else
          {
            t = n_9;
            {
              ATerm p_9 = t;
              int d_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_50(q_50, r_50, p_50, t);
                  LocalPopChoice(d_10);
                }
              else
                {
                  t = p_9;
                  t = u_50(q_50, r_50, p_50, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_50(p_50, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL,d_51 = NULL;
  d_51 = t;
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_51, term_g_10);
        t = g_4(t);
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
        {
          ATerm b_67 = NULL,c_67 = NULL;
          t = term_h_10;
          c_67 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_10, d_51);
          t = e_4(c_67, d_51, t);
          b_67 = t;
          t = SSL_perror(b_67);
          _fail(t);
        }
      }
  }
  x_50 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_4(y_50, t);
  w_50 = t;
  t = x_50;
  t = fclose_0_0(t);
  t = w_50;
  return(t);
}
ATerm fetch_1_0 (ATerm a_116 (ATerm), ATerm t)
{
  static ATerm e_52 (ATerm t);
  static ATerm e_52 (ATerm t)
  {
    ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL;
    b_52 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_52 = ATgetFirst((ATermList) t);
        d_52 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_10 = t;
      int j_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_67 = NULL,k_67 = NULL,v_12 = NULL;
          t = SSLgetAnnotations(b_52);
          h_67 = t;
          t = c_52;
          t = a_116(t);
          k_67 = t;
          t = (ATerm) ATinsert(CheckATermList(d_52), k_67);
          v_12 = t;
          t = SSLsetAnnotations(v_12, h_67);
          LocalPopChoice(j_10);
        }
      else
        {
          t = i_10;
          {
            ATerm s_67 = NULL,v_67 = NULL,w_12 = NULL;
            t = SSLgetAnnotations(b_52);
            s_67 = t;
            t = d_52;
            t = e_52(t);
            v_67 = t;
            t = (ATerm) ATinsert(CheckATermList(v_67), c_52);
            w_12 = t;
            t = SSLsetAnnotations(w_12, s_67);
          }
        }
    }
    return(t);
  }
  t = e_52(t);
  return(t);
}
static ATerm l_4 (ATerm o_60, ATerm p_60, ATerm t)
{
  ATerm h_52 = NULL;
  t = lookup_table_0_1(o_60, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(p_60, h_52, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm f_132 (ATerm), ATerm t)
{
  ATerm k_52 = NULL;
  k_52 = t;
  {
    ATerm k_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL;
        t = term_l_6;
        n_52 = t;
        t = term_m_10;
        o_52 = t;
        t = term_n_10;
        t = l_4(n_52, o_52, t);
        m_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_52, term_o_10);
        t = geq_0_0(t);
        t = k_52;
        t = f_132(t);
        LocalPopChoice(l_10);
      }
    else
      {
        t = k_10;
        t = k_52;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL;
  r_52 = t;
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_52;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_10 = ATgetFirst((ATermList) t);
                ATerm s_10 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_52;
          }
        LocalPopChoice(q_10);
      }
    else
      {
        t = p_10;
        t = (ATerm) ATinsert(ATempty, r_52);
      }
  }
  s_52 = t;
  t = term_c_9;
  t_52 = t;
  t = SSL_printnl(t_52, s_52);
  t = r_52;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL;
  t = term_l_6;
  x_52 = t;
  t = term_m_6;
  y_52 = t;
  t = term_n_6;
  t = l_4(x_52, y_52, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm a_53 = NULL;
  a_53 = t;
  if(match_string(t, "-k"))
    {
      t = a_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_53;
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL;
  b_53 = t;
  t = SSL_string_to_int(b_53);
  c_53 = t;
  t = term_t_10;
  d_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_10, c_53);
  t = o_4(d_53, c_53, t);
  t = b_53;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_u_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_2, u_2, w_2, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm f_53 = NULL;
  f_53 = t;
  if(match_string(t, "-S"))
    {
      t = f_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_53;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL;
  t = term_m_10;
  g_53 = t;
  t = term_v_10;
  h_53 = t;
  t = term_w_10;
  t = o_4(g_53, h_53, t);
  t = term_x_10;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_y_10;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm i_53 = NULL,p_53 = NULL,q_53 = NULL;
  i_53 = t;
  t = SSL_string_to_int(i_53);
  p_53 = t;
  t = term_m_10;
  q_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_10, p_53);
  t = o_4(q_53, p_53, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_53);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_z_10;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL;
  t = term_a_11;
  r_53 = t;
  t = term_h_6;
  s_53 = t;
  t = term_b_11;
  t = o_4(r_53, s_53, t);
  t = term_c_11;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_d_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_2, z_2, a_3, t);
      LocalPopChoice(f_11);
    }
  else
    {
      t = e_11;
      {
        ATerm g_11 = t;
        int h_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_3, c_3, d_3, t);
            LocalPopChoice(h_11);
          }
        else
          {
            t = g_11;
            t = Option_3_0(f_3, g_3, i_3, t);
          }
      }
    }
  return(t);
}
static ATerm o_4 (ATerm f_72, ATerm g_72, ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL;
  t = term_l_6;
  t_53 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_6, f_72, g_72);
  t = lookup_table_0_1(t_53, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_4(f_72, g_72, u_53, t);
  t = (ATerm) ATmakeAppl(sym__3, term_l_6, f_72, g_72);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_54 = NULL,b_54 = NULL,c_54 = NULL;
      t = term_h_6;
      t = g_0(t);
      a_54 = t;
      t = term_t_6;
      b_54 = t;
      t = term_u_6;
      c_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_6, term_u_6, a_54);
      t = m_4(b_54, c_54, a_54, t);
      _fail(t);
    }
  else
    {
      ATerm f_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_53 = ATgetFirst((ATermList) t);
          z_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_53;
      t = b_0(t);
      t = term_h_6;
      t = d_0(t);
      f_54 = t;
      t = (ATerm) ATinsert(CheckATermList(z_53), f_54);
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm h_54 = NULL;
  h_54 = t;
  if(match_string(t, "-o"))
    {
      t = h_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_54;
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm i_54 = NULL,j_54 = NULL;
  i_54 = t;
  t = term_i_11;
  j_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_11, i_54);
  t = o_4(j_54, i_54, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_54);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_j_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_3, r_3, s_3, t);
  return(t);
}
static ATerm m_4 (ATerm v_58, ATerm w_58, ATerm u_58, ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL;
  l_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_58, w_58);
  {
    ATerm k_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_11 = ATgetArgument(t, 0);
            ATerm y_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_58, w_58);
        t = l_4(v_58, w_58, t);
        LocalPopChoice(w_11);
      }
    else
      {
        t = k_11;
        t = (ATerm) ATempty;
      }
  }
  m_54 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_58, w_58, (ATerm) ATinsert(CheckATermList(m_54), u_58));
  t = lookup_table_0_1(v_58, t);
  q_54 = t;
  t = (ATerm) ATinsert(CheckATermList(m_54), u_58);
  o_54 = t;
  t = q_54;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_4(w_58, o_54, p_54, t);
  t = l_54;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL;
      t = term_h_6;
      t = l_0(t);
      b_55 = t;
      t = term_t_6;
      c_55 = t;
      t = term_u_6;
      d_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_6, term_u_6, b_55);
      t = m_4(c_55, d_55, b_55, t);
      _fail(t);
    }
  else
    {
      ATerm h_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_54 = ATgetFirst((ATermList) t);
          y_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_54;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_54 = ATgetFirst((ATermList) t);
          a_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_54;
      t = h_0(t);
      t = z_54;
      t = j_0(t);
      h_55 = t;
      t = (ATerm) ATinsert(CheckATermList(a_55), h_55);
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm j_55 = NULL;
  j_55 = t;
  if(match_string(t, "-i"))
    {
      t = j_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_55;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm k_55 = NULL,l_55 = NULL;
  k_55 = t;
  t = term_z_11;
  l_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_11, k_55);
  t = o_4(l_55, k_55, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_55);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_a_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_3, u_3, v_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_6;
  t = whoami_0_0(t);
  m_55 = t;
  t = term_r_7;
  o_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_12), m_55);
  p_55 = t;
  t = SSL_printnl(o_55, p_55);
  t = term_c_12;
  n_55 = t;
  t = SSL_exit(n_55);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL;
  t = term_l_6;
  q_55 = t;
  t = term_m_6;
  r_55 = t;
  t = term_n_6;
  t = l_4(q_55, r_55, t);
  return(t);
}
static ATerm h_4 (ATerm e_57, ATerm f_57, ATerm t)
{
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_57, f_57);
      LocalPopChoice(e_12);
    }
  else
    {
      t = d_12;
      t = SSL_addr(e_57, f_57);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_122 (ATerm), ATerm q_122 (ATerm), ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL;
  t_55 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_55;
      t = p_122(t);
    }
  else
    {
      ATerm y_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_55 = ATgetFirst((ATermList) t);
          v_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_55;
      t = foldr_2_0(p_122, q_122, t);
      y_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_55, y_55);
      t = q_122(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_v_10;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm e_68 = NULL,f_68 = NULL;
  if(match_cons(t, sym__2))
    {
      e_68 = ATgetArgument(t, 0);
      f_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_4(e_68, f_68, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_56 = NULL,a_68 = NULL,b_68 = NULL;
  t = times_0_0(t);
  b_68 = t;
  t = SSL_explode_term(b_68);
  if(match_cons(t, sym__2))
    {
      ATerm f_12 = ATgetArgument(t, 0);
      a_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_68;
  t = foldr_2_0(x_3, y_3, t);
  b_56 = t;
  t = SSL_TicksToSeconds(b_56);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_56 = NULL,n_56 = NULL,o_56 = NULL;
  m_56 = t;
  if(match_cons(t, sym__2))
    {
      n_56 = ATgetArgument(t, 0);
      o_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_56;
        if((n_56 != t))
          {
            _fail(t);
          }
        t = m_56;
        LocalPopChoice(i_12);
      }
    else
      {
        t = g_12;
        t = (ATerm) ATmakeAppl(sym__2, n_56, o_56);
        {
          ATerm n_12 = t;
          int o_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_56, o_56);
              LocalPopChoice(o_12);
            }
          else
            {
              t = n_12;
              t = SSL_gtr(n_56, o_56);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, n_56, o_56);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_132 (ATerm), ATerm t)
{
  ATerm s_56 = NULL;
  s_56 = t;
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL;
        t = term_l_6;
        v_56 = t;
        t = term_m_10;
        w_56 = t;
        t = term_n_10;
        t = l_4(v_56, w_56, t);
        u_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_56, term_c_12);
        t = geq_0_0(t);
        t = s_56;
        t = e_132(t);
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        t = s_56;
      }
  }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL,b_57 = NULL,c_57 = NULL;
  t = run_time_0_0(t);
  y_56 = t;
  t = term_h_6;
  t = whoami_0_0(t);
  z_56 = t;
  t = term_r_7;
  b_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_12), y_56), term_t_12), z_56);
  c_57 = t;
  t = SSL_printnl(b_57, c_57);
  t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_12), y_56), term_t_12), z_56));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_10;
  d_57 = t;
  t = SSL_exit(d_57);
  return(t);
}
static ATerm p_4 (ATerm g_63, ATerm h_63, ATerm i_63, ATerm t)
{
  ATerm g_57 = NULL;
  t = SSL_hashtable_put(i_63, g_63, h_63);
  g_57 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_57);
  return(t);
}
static ATerm q_4 (ATerm j_63, ATerm k_63, ATerm t)
{
  t = SSL_hashtable_get(k_63, j_63);
  return(t);
}
ATerm lookup_table_0_1 (ATerm h_60, ATerm t)
{
  ATerm p_57 = NULL;
  t = table_hashtable_0_0(t);
  p_57 = t;
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_68 = NULL;
        t = p_57;
        if(match_cons(t, sym_Hashtable_1))
          {
            q_68 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_4(h_60, q_68, t);
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
        {
          ATerm v_68 = NULL;
          t = h_60;
          t = table_create_0_0(t);
          t = p_57;
          if(match_cons(t, sym_Hashtable_1))
            {
              v_68 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_4(h_60, v_68, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm o_63, ATerm p_63, ATerm t)
{
  ATerm s_57 = NULL;
  t = SSL_hashtable_create(o_63, p_63);
  s_57 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_57);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL,x_57 = NULL,y_57 = NULL;
  t_57 = t;
  t = term_a_13;
  x_57 = t;
  t = term_c_13;
  y_57 = t;
  t = t_57;
  t = new_hashtable_0_2(x_57, y_57, t);
  u_57 = t;
  t = t_57;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_4(t_57, u_57, v_57, t);
  t = t_57;
  return(t);
}
static ATerm j_4 (ATerm l_63, ATerm m_63, ATerm t)
{
  ATerm z_57 = NULL;
  t = SSL_hashtable_remove(m_63, l_63);
  z_57 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_57);
  return(t);
}
static ATerm k_4 (ATerm q_63, ATerm t)
{
  ATerm a_58 = NULL;
  t = SSL_hashtable_destroy(q_63);
  a_58 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_58);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm b_58 = NULL;
  t = SSL_table_hashtable();
  b_58 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_58);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL;
  c_58 = t;
  t = table_hashtable_0_0(t);
  d_58 = t;
  t = lookup_table_0_1(c_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_4(f_58, t);
  t = d_58;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_4(c_58, e_58, t);
  t = c_58;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL;
  t = term_e_13;
  g_58 = t;
  t = term_h_6;
  h_58 = t;
  t = term_k_13;
  t = o_4(g_58, h_58, t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_l_13;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL,l_58 = NULL,m_58 = NULL;
  t = term_e_13;
  l_58 = t;
  t = term_h_6;
  m_58 = t;
  t = term_k_13;
  t = o_4(l_58, m_58, t);
  t = term_m_13;
  i_58 = t;
  t = term_h_6;
  j_58 = t;
  t = term_n_13;
  t = o_4(i_58, j_58, t);
  t = term_o_13;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_p_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_4, z_4, b_5, t);
      LocalPopChoice(r_13);
    }
  else
    {
      t = q_13;
      t = Option_3_0(c_5, d_5, e_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm g_95 (ATerm), ATerm h_95 (ATerm), ATerm t)
{
  ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,z_12 = NULL;
  s_58 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_58 = ATgetFirst((ATermList) t);
      p_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_58);
  n_58 = t;
  t = o_58;
  t = g_95(t);
  q_58 = t;
  t = p_58;
  t = h_95(t);
  r_58 = t;
  t = (ATerm) ATinsert(CheckATermList(r_58), q_58);
  z_12 = t;
  t = SSLsetAnnotations(z_12, n_58);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_137 (ATerm), ATerm t)
{
  ATerm a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,f_59 = NULL,g_59 = NULL,b_13 = NULL;
  a_59 = t;
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_13;
        t = c_137(t);
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
      }
  }
  t = a_59;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_59 = ATgetFirst((ATermList) t);
      d_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_59);
  b_59 = t;
  t = term_m_6;
  g_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_6, c_59);
  t = o_4(g_59, c_59, t);
  t = d_59;
  {
    static ATerm q_59 (ATerm t);
    static ATerm q_59 (ATerm t)
    {
      ATerm v_13 = t;
      int w_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_13 = t;
          int y_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_59 = NULL;
              j_59 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_59;
              LocalPopChoice(y_13);
            }
          else
            {
              t = x_13;
              t = c_137(t);
              t = Cons_2_0(_id, q_59, t);
            }
          LocalPopChoice(w_13);
        }
      else
        {
          t = v_13;
          {
            ATerm m_59 = NULL,n_59 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_59 = ATgetFirst((ATermList) t);
                n_59 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_59), (ATerm) ATmakeAppl(sym_Undefined_1, m_59));
          }
        }
      return(t);
    }
    t = q_59(t);
  }
  f_59 = t;
  t = (ATerm) ATinsert(CheckATermList(f_59), (ATerm) ATmakeAppl(sym_Program_1, c_59));
  b_13 = t;
  t = SSLsetAnnotations(b_13, b_59);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm d_60 = NULL;
  d_60 = t;
  if(match_string(t, "--help"))
    {
      t = d_60;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_60;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_60;
        }
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm e_60 = NULL,f_60 = NULL;
  t = term_z_13;
  e_60 = t;
  t = term_h_6;
  f_60 = t;
  t = term_a_14;
  t = o_4(e_60, f_60, t);
  t = term_b_14;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_c_14;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm z_136 (ATerm), ATerm a_137 (ATerm), ATerm b_137 (ATerm), ATerm t)
{
  ATerm v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL;
  x_59 = t;
  t = term_t_6;
  y_59 = t;
  t = term_d_14;
  t = lookup_table_0_1(y_59, t);
  c_60 = t;
  t = term_u_6;
  z_59 = t;
  t = (ATerm) ATempty;
  a_60 = t;
  t = c_60;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_4(z_59, a_60, b_60, t);
  t = x_59;
  {
    static ATerm f_5 (ATerm t);
    static ATerm f_5 (ATerm t)
    {
      ATerm e_14 = t;
      int f_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_136(t);
          LocalPopChoice(f_14);
        }
      else
        {
          t = e_14;
          {
            ATerm g_14 = t;
            int h_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(g_5, h_5, i_5, t);
                LocalPopChoice(h_14);
              }
            else
              {
                t = g_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_5, t);
  }
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_60 = NULL;
        w_60 = t;
        {
          ATerm k_14 = t;
          int l_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_68 = NULL;
              t = w_60;
              {
                ATerm m_14 = t;
                int n_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_69 = NULL,b_69 = NULL;
                    t = term_l_6;
                    a_69 = t;
                    t = term_z_13;
                    b_69 = t;
                    t = term_p_14;
                    t = l_4(a_69, b_69, t);
                    LocalPopChoice(n_14);
                  }
                else
                  {
                    t = m_14;
                    t = fetch_1_0(j_5, t);
                  }
              }
              t = w_60;
              t = a_137(t);
              t = term_v_10;
              z_68 = t;
              t = SSL_exit(z_68);
              LocalPopChoice(l_14);
            }
          else
            {
              t = k_14;
              {
                ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL;
                t = term_l_6;
                g_69 = t;
                t = term_e_13;
                h_69 = t;
                t = term_q_14;
                t = l_4(g_69, h_69, t);
                t = w_60;
                t = b_137(t);
                t = term_v_10;
                f_69 = t;
                t = SSL_exit(f_69);
              }
            }
        }
        LocalPopChoice(j_14);
      }
    else
      {
        t = i_14;
        {
          ATerm t_14 = t;
          int u_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_60 = NULL,y_60 = NULL,z_60 = NULL;
              static ATerm k_5 (ATerm t);
              static ATerm k_5 (ATerm t)
              {
                ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL,d_13 = NULL;
                c_61 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    b_61 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_61);
                a_61 = t;
                t = b_61;
                if(((v_59 != NULL) && (v_59 != t)))
                  _fail(t);
                else
                  v_59 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, b_61);
                d_13 = t;
                t = SSLsetAnnotations(d_13, a_61);
                return(t);
              }
              t = fetch_1_0(k_5, t);
              t = term_r_7;
              y_60 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_59)), term_v_14);
              z_60 = t;
              t = SSL_printnl(y_60, z_60);
              t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_59)), term_v_14));
              t = a_137(t);
              t = term_c_12;
              x_60 = t;
              t = SSL_exit(x_60);
              LocalPopChoice(u_14);
            }
          else
            {
              t = t_14;
            }
        }
      }
  }
  w_59 = t;
  t = term_t_6;
  t = table_destroy_0_0(t);
  t = w_59;
  return(t);
}
ATerm option_wrap_5_0 (ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm e_135 (ATerm), ATerm f_135 (ATerm), ATerm g_135 (ATerm), ATerm t)
{
  ATerm h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL;
  t = parse_options_3_0(c_135, d_135, e_135, t);
  h_61 = t;
  t = term_w_14;
  t = table_create_0_0(t);
  t = term_w_14;
  i_61 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_14, term_x_14, h_61);
  t = lookup_table_0_1(i_61, t);
  l_61 = t;
  t = term_x_14;
  j_61 = t;
  t = l_61;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_4(j_61, h_61, k_61, t);
  t = h_61;
  t = f_135(t);
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_135(t);
        t = report_success_0_0(t);
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = if_verbose2_1_0(y_5, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm m_61 = NULL,n_61 = NULL;
  t = term_a_15;
  m_61 = t;
  t = term_h_6;
  n_61 = t;
  t = term_b_15;
  t = o_4(m_61, n_61, t);
  t = term_c_15;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_d_15;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL;
  o_61 = t;
  t = term_l_6;
  s_61 = t;
  t = term_m_6;
  t_61 = t;
  t = term_n_6;
  t = l_4(s_61, t_61, t);
  p_61 = t;
  t = term_r_7;
  q_61 = t;
  t = (ATerm) ATinsert(ATempty, p_61);
  r_61 = t;
  t = SSL_printnl(q_61, r_61);
  t = o_61;
  return(t);
}
ATerm iowrap_3_0 (ATerm f_134 (ATerm), ATerm g_134 (ATerm), ATerm h_134 (ATerm), ATerm t)
{
  static ATerm l_5 (ATerm t);
  static ATerm o_5 (ATerm t);
  static ATerm l_5 (ATerm t)
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_134(t);
        LocalPopChoice(f_15);
      }
    else
      {
        t = e_15;
        {
          ATerm g_15 = t;
          int i_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(i_15);
            }
          else
            {
              t = g_15;
              {
                ATerm k_15 = t;
                int l_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(l_15);
                  }
                else
                  {
                    t = k_15;
                    {
                      ATerm m_15 = t;
                      int n_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(p_5, t_5, v_5, t);
                          LocalPopChoice(n_15);
                        }
                      else
                        {
                          t = m_15;
                          {
                            ATerm o_15 = t;
                            int p_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(p_15);
                              }
                            else
                              {
                                t = o_15;
                                t = keep_option_0_0(t);
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
  static ATerm o_5 (ATerm t)
  {
    ATerm u_61 = NULL,v_61 = NULL,w_61 = NULL;
    v_61 = t;
    {
      ATerm q_15 = t;
      int r_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm z_5 (ATerm t);
          static ATerm z_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((u_61 != NULL) && (u_61 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_61 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(z_5, t);
          LocalPopChoice(r_15);
        }
      else
        {
          t = q_15;
          t = term_t_15;
          u_61 = t;
        }
    }
    t = not_null(u_61);
    t = ReadFromFile_0_0(t);
    w_61 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_61, w_61);
    t = apply_strategy_1_0(f_134, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_5_0(l_5, h_134, default_system_about_0_0, n_5, o_5, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,j_13 = NULL;
  d_62 = t;
  if(match_cons(t, sym__2))
    {
      a_62 = ATgetArgument(t, 0);
      b_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_62);
  z_61 = t;
  t = b_62;
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_62 = NULL,k_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL,x_69 = NULL,i_13 = NULL,h_13 = NULL,g_13 = NULL,f_13 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            u_62 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_62);
        k_69 = t;
        t = u_62;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_69 = ATgetFirst((ATermList) t);
            o_69 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_62);
        m_69 = t;
        t = o_69;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_69 = ATgetFirst((ATermList) t);
            s_69 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_69);
        q_69 = t;
        t = r_69;
        if(match_cons(t, sym_Strategies_1))
          {
            v_69 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_69);
        u_69 = t;
        t = v_69;
        t = map_1_0(strategy_definition_0_0, t);
        w_69 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, w_69);
        f_13 = t;
        t = SSLsetAnnotations(f_13, u_69);
        x_69 = t;
        t = s_69;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(s_69), x_69);
        g_13 = t;
        t = SSLsetAnnotations(g_13, q_69);
        t_69 = t;
        t = (ATerm) ATinsert(CheckATermList(t_69), n_69);
        h_13 = t;
        t = SSLsetAnnotations(h_13, m_69);
        p_69 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, p_69);
        i_13 = t;
        t = SSLsetAnnotations(i_13, k_69);
        LocalPopChoice(v_15);
      }
    else
      {
        t = u_15;
        t = debug_1_0(f_6, t);
      }
  }
  c_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_62, c_62);
  j_13 = t;
  t = SSLsetAnnotations(j_13, z_61);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_x_15;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(a_6, _fail, default_system_usage_0_0, t);
  return(t);
}
