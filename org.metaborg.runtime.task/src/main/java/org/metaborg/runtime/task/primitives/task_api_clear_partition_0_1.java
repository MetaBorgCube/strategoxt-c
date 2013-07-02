package org.metaborg.runtime.task.primitives;

import org.metaborg.runtime.task.TaskEngine;
import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.library.AbstractPrimitive;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;

public class task_api_clear_partition_0_1 extends AbstractPrimitive {
	public static task_api_clear_partition_0_1 instance = new task_api_clear_partition_0_1();

	public task_api_clear_partition_0_1() {
		super("task_api_clear_partition", 0, 1);
	}

	@Override
	public boolean call(IContext env, Strategy[] svars, IStrategoTerm[] tvars) throws InterpreterException {
		final TaskEngine taskEngine = TaskManager.getInstance().getCurrent();
		final IStrategoString partition = (IStrategoString) tvars[0];
		for(IStrategoTerm taskID : taskEngine.getInPartition(partition)) {
			taskEngine.removeTask(taskID);
		}
		return true;
	}
}