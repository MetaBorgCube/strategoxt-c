#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_FILE_1;
static void init_module_constructors (void)
{
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
}
ATerm term_p_2;
ATerm term_g_2;
ATerm term_f_2;
ATerm term_e_2;
ATerm term_d_2;
ATerm term_c_2;
ATerm term_b_2;
ATerm term_a_2;
ATerm term_z_1;
ATerm term_y_1;
ATerm term_x_1;
ATerm term_w_1;
ATerm term_v_1;
ATerm term_u_1;
ATerm term_t_1;
ATerm term_s_1;
ATerm term_r_1;
ATerm term_q_1;
ATerm term_p_1;
ATerm term_o_1;
ATerm term_n_1;
ATerm term_m_1;
ATerm term_l_1;
ATerm term_k_1;
ATerm term_j_1;
ATerm term_i_1;
ATerm term_h_1;
ATerm term_g_1;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_g_1));
  term_g_1 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-tables", 0, ATtrue));
  ATprotect(&(term_h_1));
  term_h_1 = (ATerm) ATmakeAppl(ATmakeSymbol("->", 0, ATtrue));
  ATprotect(&(term_i_1));
  term_i_1 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\rightarrow}", 0, ATtrue));
  ATprotect(&(term_j_1));
  term_j_1 = (ATerm) ATmakeAppl(ATmakeSymbol("\\/", 0, ATtrue));
  ATprotect(&(term_k_1));
  term_k_1 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vee}", 0, ATtrue));
  ATprotect(&(term_l_1));
  term_l_1 = (ATerm) ATmakeAppl(ATmakeSymbol("/\\", 0, ATtrue));
  ATprotect(&(term_m_1));
  term_m_1 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\wedge}", 0, ATtrue));
  ATprotect(&(term_n_1));
  term_n_1 = (ATerm) ATmakeAppl(ATmakeSymbol("==", 0, ATtrue));
  ATprotect(&(term_o_1));
  term_o_1 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\equiv}", 0, ATtrue));
  ATprotect(&(term_p_1));
  term_p_1 = (ATerm) ATmakeAppl(ATmakeSymbol("++", 0, ATtrue));
  ATprotect(&(term_q_1));
  term_q_1 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{+\\kern-.4em+}", 0, ATtrue));
  ATprotect(&(term_r_1));
  term_r_1 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free syntax", 0, ATtrue));
  ATprotect(&(term_s_1));
  term_s_1 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free~syntax", 0, ATtrue));
  ATprotect(&(term_t_1));
  term_t_1 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_u_1));
  term_u_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-w", 0, ATtrue));
  ATprotect(&(term_v_1));
  term_v_1 = (ATerm) ATmakeAppl(ATmakeSymbol("output", 0, ATtrue));
  ATprotect(&(term_w_1));
  term_w_1 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_1));
  term_x_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_y_1));
  term_y_1 = (ATerm) ATmakeAppl(ATmakeSymbol("--alltt", 0, ATtrue));
  ATprotect(&(term_z_1));
  term_z_1 = (ATerm) ATmakeAppl(sym__2, term_v_1, term_y_1);
  ATprotect(&(term_a_2));
  term_a_2 = (ATerm) ATmakeAppl(ATmakeSymbol("--alltt          Produce verbatim-like output with alltt environment", 0, ATtrue));
  ATprotect(&(term_b_2));
  term_b_2 = (ATerm) ATmakeAppl(ATmakeSymbol("--boxenv", 0, ATtrue));
  ATprotect(&(term_c_2));
  term_c_2 = (ATerm) ATmakeAppl(sym__2, term_v_1, term_b_2);
  ATprotect(&(term_d_2));
  term_d_2 = (ATerm) ATmakeAppl(ATmakeSymbol("--boxenv         Produce fully formatted LaTeX output (default)", 0, ATtrue));
  ATprotect(&(term_e_2));
  term_e_2 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-table", 0, ATtrue));
  ATprotect(&(term_f_2));
  term_f_2 = (ATerm) ATmakeAppl(ATmakeSymbol("-t|--latex-table f  Use LaTeX abbreviaitions from file f", 0, ATtrue));
  ATprotect(&(term_g_2));
  term_g_2 = (ATerm) ATmakeAppl(ATmakeSymbol("-w|--width w        Use page width w", 0, ATtrue));
  ATprotect(&(term_p_2));
  term_p_2 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-latex", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm get_config_0_0 (ATerm t);
ATerm try_1_0 (ATerm a_108 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm write_to_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm map_1_0 (ATerm g_93 (ATerm), ATerm t);
ATerm create_table_file_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
static ATerm b_0 (ATerm t);
ATerm create_abox2latex_args_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm t);
ATerm xtc_io_1_0 (ATerm n_112 (ATerm), ATerm t);
ATerm io_options_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm o_3 (ATerm), ATerm p_3 (ATerm), ATerm q_3 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm l_3 (ATerm), ATerm m_3 (ATerm), ATerm n_3 (ATerm), ATerm t);
static ATerm d_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm abox2latex_options_0_0 (ATerm t);
ATerm option_wrap_2_0 (ATerm m_114 (ATerm), ATerm n_114 (ATerm), ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm create_table_file_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL;
  ATerm e_1 = t;
  int f_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_1;
      t = get_config_0_0(t);
      LocalPopChoice(f_1);
    }
  else
    {
      t = e_1;
      t = (ATerm) ATempty;
    }
  t = map_1_0(ReadFromFile_0_0, t);
  e_0 = t;
  t = (ATerm) ATinsert(CheckATermList(e_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_s_1), term_r_1)), (ATerm) ATinsert(ATinsert(ATempty, term_q_1), term_p_1)), (ATerm) ATinsert(ATinsert(ATempty, term_o_1), term_n_1)), (ATerm) ATinsert(ATinsert(ATempty, term_m_1), term_l_1)), (ATerm) ATinsert(ATinsert(ATempty, term_k_1), term_j_1)), (ATerm) ATinsert(ATinsert(ATempty, term_i_1), term_h_1)));
  t = concat_0_0(t);
  t = write_to_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      c_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_0;
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm l_0 = NULL,m_0 = NULL;
  m_0 = t;
  t = term_t_1;
  t = get_config_0_0(t);
  l_0 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(m_0), l_0), term_u_1);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm n_0 = NULL,o_0 = NULL;
  o_0 = t;
  t = term_v_1;
  t = get_config_0_0(t);
  n_0 = t;
  t = (ATerm) ATinsert(CheckATermList(o_0), n_0);
  return(t);
}
ATerm create_abox2latex_args_0_0 (ATerm t)
{
  ATerm g_0 = NULL,j_0 = NULL;
  t = term_w_1;
  t = create_table_file_0_0(t);
  g_0 = t;
  t = term_w_1;
  t = pass_verbose_0_0(t);
  j_0 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(j_0), g_0), term_x_1);
  t = try_1_0(a_0, t);
  t = try_1_0(b_0, t);
  return(t);
}
static ATerm d_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--alltt", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_z_1;
  t = set_config_0_0(t);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = term_a_2;
  return(t);
}
static ATerm i_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--boxenv", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = term_c_2;
  t = set_config_0_0(t);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = term_d_2;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm s_0 = NULL;
  s_0 = t;
  if(match_string(t, "-t"))
    {
      t = s_0;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--latex-table", 0, ATtrue)))
        _fail(t);
      t = s_0;
    }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm t_0 = NULL;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_2, t_0);
  t = set_config_0_0(t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_f_2;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm u_0 = NULL;
  u_0 = t;
  if(match_string(t, "-w"))
    {
      t = u_0;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = u_0;
    }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm v_0 = NULL;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_1, v_0);
  t = set_config_0_0(t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_g_2;
  return(t);
}
ATerm abox2latex_options_0_0 (ATerm t)
{
  ATerm h_2 = t;
  int i_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_0, f_0, h_0, t);
      LocalPopChoice(i_2);
    }
  else
    {
      t = h_2;
      {
        ATerm j_2 = t;
        int k_2 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(i_0, k_0, p_0, t);
            LocalPopChoice(k_2);
          }
        else
          {
            t = j_2;
            {
              ATerm l_2 = t;
              int m_2 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(q_0, r_0, w_0, t);
                  LocalPopChoice(m_2);
                }
              else
                {
                  t = l_2;
                  t = ArgOption_3_0(x_0, y_0, z_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm n_2 = t;
  int o_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2latex_options_0_0(t);
      LocalPopChoice(o_2);
    }
  else
    {
      t = n_2;
      t = io_options_0_0(t);
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = xtc_io_1_0(c_1, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = xtc_transform_2_0(d_1, create_abox2latex_args_0_0, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_p_2;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_2_0(a_1, b_1, t);
  return(t);
}
