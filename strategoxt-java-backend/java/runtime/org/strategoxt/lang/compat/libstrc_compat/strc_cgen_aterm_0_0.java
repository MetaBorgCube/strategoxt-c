package org.strategoxt.lang.compat.libstrc_compat;

import org.spoofax.NotImplementedException;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class strc_cgen_aterm_0_0 extends Strategy {
	public static strc_cgen_aterm_0_0 instance = new strc_cgen_aterm_0_0();
	
	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current) {
		throw new NotImplementedException(); // TODO: strc_cgen_aterm_0_0
	}
}