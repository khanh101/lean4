/*
Copyright (c) 2013 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
*/
// Automatically generated file, DO NOT EDIT
#include "kernel/environment.h"
#include "kernel/decl_macros.h"
namespace lean {
MK_CONSTANT(TypeU, name("TypeU"));
MK_CONSTANT(Bool, name("Bool"));
MK_CONSTANT(not_fn, name("not"));
MK_CONSTANT(or_fn, name("or"));
MK_CONSTANT(and_fn, name("and"));
MK_CONSTANT(implies_fn, name("implies"));
MK_CONSTANT(neq_fn, name("neq"));
MK_CONSTANT(iff_fn, name("iff"));
MK_CONSTANT(exists_fn, name("exists"));
MK_CONSTANT(em_fn, name("em"));
MK_CONSTANT(case_fn, name("case"));
MK_CONSTANT(refl_fn, name("refl"));
MK_CONSTANT(subst_fn, name("subst"));
MK_CONSTANT(funext_fn, name("funext"));
MK_CONSTANT(allext_fn, name("allext"));
MK_CONSTANT(eps_fn, name("eps"));
MK_CONSTANT(eps_ax_fn, name("eps_ax"));
MK_CONSTANT(proof_irrel_fn, name("proof_irrel"));
MK_CONSTANT(substp_fn, name("substp"));
MK_CONSTANT(not_intro_fn, name("not_intro"));
MK_CONSTANT(eta_fn, name("eta"));
MK_CONSTANT(trivial, name("trivial"));
MK_CONSTANT(absurd_fn, name("absurd"));
MK_CONSTANT(eqmp_fn, name("eqmp"));
MK_CONSTANT(boolcomplete_fn, name("boolcomplete"));
MK_CONSTANT(false_elim_fn, name("false_elim"));
MK_CONSTANT(imp_trans_fn, name("imp_trans"));
MK_CONSTANT(imp_eq_trans_fn, name("imp_eq_trans"));
MK_CONSTANT(eq_imp_trans_fn, name("eq_imp_trans"));
MK_CONSTANT(not_not_eq_fn, name("not_not_eq"));
MK_CONSTANT(not_not_elim_fn, name("not_not_elim"));
MK_CONSTANT(mt_fn, name("mt"));
MK_CONSTANT(contrapos_fn, name("contrapos"));
MK_CONSTANT(absurd_elim_fn, name("absurd_elim"));
MK_CONSTANT(not_imp_eliml_fn, name("not_imp_eliml"));
MK_CONSTANT(not_imp_elimr_fn, name("not_imp_elimr"));
MK_CONSTANT(resolve1_fn, name("resolve1"));
MK_CONSTANT(and_intro_fn, name("and_intro"));
MK_CONSTANT(and_eliml_fn, name("and_eliml"));
MK_CONSTANT(and_elimr_fn, name("and_elimr"));
MK_CONSTANT(or_introl_fn, name("or_introl"));
MK_CONSTANT(or_intror_fn, name("or_intror"));
MK_CONSTANT(or_elim_fn, name("or_elim"));
MK_CONSTANT(refute_fn, name("refute"));
MK_CONSTANT(symm_fn, name("symm"));
MK_CONSTANT(trans_fn, name("trans"));
MK_CONSTANT(ne_symm_fn, name("ne_symm"));
MK_CONSTANT(eq_ne_trans_fn, name("eq_ne_trans"));
MK_CONSTANT(ne_eq_trans_fn, name("ne_eq_trans"));
MK_CONSTANT(eqt_elim_fn, name("eqt_elim"));
MK_CONSTANT(eqf_elim_fn, name("eqf_elim"));
MK_CONSTANT(congr1_fn, name("congr1"));
MK_CONSTANT(congr2_fn, name("congr2"));
MK_CONSTANT(congr_fn, name("congr"));
MK_CONSTANT(exists_elim_fn, name("exists_elim"));
MK_CONSTANT(exists_intro_fn, name("exists_intro"));
MK_CONSTANT(exists_to_eps_fn, name("exists_to_eps"));
MK_CONSTANT(axiom_of_choice_fn, name("axiom_of_choice"));
MK_CONSTANT(boolext_fn, name("boolext"));
MK_CONSTANT(iff_intro_fn, name("iff_intro"));
MK_CONSTANT(eqt_intro_fn, name("eqt_intro"));
MK_CONSTANT(eqf_intro_fn, name("eqf_intro"));
MK_CONSTANT(neq_elim_fn, name("neq_elim"));
MK_CONSTANT(eq_id_fn, name("eq_id"));
MK_CONSTANT(or_comm_fn, name("or_comm"));
MK_CONSTANT(or_assoc_fn, name("or_assoc"));
MK_CONSTANT(or_id_fn, name("or_id"));
MK_CONSTANT(or_falsel_fn, name("or_falsel"));
MK_CONSTANT(or_falser_fn, name("or_falser"));
MK_CONSTANT(or_truel_fn, name("or_truel"));
MK_CONSTANT(or_truer_fn, name("or_truer"));
MK_CONSTANT(or_tauto_fn, name("or_tauto"));
MK_CONSTANT(and_comm_fn, name("and_comm"));
MK_CONSTANT(and_id_fn, name("and_id"));
MK_CONSTANT(and_assoc_fn, name("and_assoc"));
MK_CONSTANT(and_truer_fn, name("and_truer"));
MK_CONSTANT(and_truel_fn, name("and_truel"));
MK_CONSTANT(and_falsel_fn, name("and_falsel"));
MK_CONSTANT(and_falser_fn, name("and_falser"));
MK_CONSTANT(and_absurd_fn, name("and_absurd"));
MK_CONSTANT(imp_truer_fn, name("imp_truer"));
MK_CONSTANT(imp_truel_fn, name("imp_truel"));
MK_CONSTANT(imp_falser_fn, name("imp_falser"));
MK_CONSTANT(imp_falsel_fn, name("imp_falsel"));
MK_CONSTANT(not_true, name("not_true"));
MK_CONSTANT(not_false, name("not_false"));
MK_CONSTANT(not_and_fn, name("not_and"));
MK_CONSTANT(not_and_elim_fn, name("not_and_elim"));
MK_CONSTANT(not_or_fn, name("not_or"));
MK_CONSTANT(not_or_elim_fn, name("not_or_elim"));
MK_CONSTANT(not_iff_fn, name("not_iff"));
MK_CONSTANT(not_iff_elim_fn, name("not_iff_elim"));
MK_CONSTANT(not_implies_fn, name("not_implies"));
MK_CONSTANT(not_implies_elim_fn, name("not_implies_elim"));
MK_CONSTANT(not_congr_fn, name("not_congr"));
MK_CONSTANT(eq_exists_intro_fn, name("eq_exists_intro"));
MK_CONSTANT(not_forall_fn, name("not_forall"));
MK_CONSTANT(not_forall_elim_fn, name("not_forall_elim"));
MK_CONSTANT(not_exists_fn, name("not_exists"));
MK_CONSTANT(not_exists_elim_fn, name("not_exists_elim"));
MK_CONSTANT(exists_unfold1_fn, name("exists_unfold1"));
MK_CONSTANT(exists_unfold2_fn, name("exists_unfold2"));
MK_CONSTANT(exists_unfold_fn, name("exists_unfold"));
MK_CONSTANT(left_comm_fn, name("left_comm"));
MK_CONSTANT(and_left_comm_fn, name("and_left_comm"));
MK_CONSTANT(or_left_comm_fn, name("or_left_comm"));
MK_CONSTANT(imp_congrr_fn, name("imp_congrr"));
MK_CONSTANT(imp_congrl_fn, name("imp_congrl"));
MK_CONSTANT(imp_congr_fn, name("imp_congr"));
MK_CONSTANT(or_congrr_fn, name("or_congrr"));
MK_CONSTANT(or_congrl_fn, name("or_congrl"));
MK_CONSTANT(or_congr_fn, name("or_congr"));
MK_CONSTANT(and_congrr_fn, name("and_congrr"));
MK_CONSTANT(and_congrl_fn, name("and_congrl"));
MK_CONSTANT(and_congr_fn, name("and_congr"));
MK_CONSTANT(forall_or_distributer_fn, name("forall_or_distributer"));
MK_CONSTANT(forall_or_distributel_fn, name("forall_or_distributel"));
MK_CONSTANT(forall_and_distribute_fn, name("forall_and_distribute"));
MK_CONSTANT(exists_and_distributer_fn, name("exists_and_distributer"));
MK_CONSTANT(exists_and_distributel_fn, name("exists_and_distributel"));
MK_CONSTANT(exists_or_distribute_fn, name("exists_or_distribute"));
}
