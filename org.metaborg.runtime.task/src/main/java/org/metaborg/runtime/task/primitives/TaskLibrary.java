package org.metaborg.runtime.task.primitives;

import org.spoofax.interpreter.library.AbstractStrategoOperatorRegistry;

public class TaskLibrary extends AbstractStrategoOperatorRegistry {
	public static final String REGISTRY_NAME = "TASK";

	public TaskLibrary() {
		add(task_api_add_combinator_0_3.instance);
		add(task_api_add_dependency_0_2.instance);
		add(task_api_add_message_0_2.instance);
		add(task_api_add_read_0_2.instance);
		add(task_api_add_task_0_3.instance);
		add(task_api_becomes_cyclic_0_2.instance);
		add(task_api_evaluate_2_1.instance);
		add(task_api_exists_0_1.instance);
		add(task_api_get_dependencies_0_1.instance);
		add(task_api_get_messages_0_1.instance);
		add(task_api_get_results_0_1.instance);
		add(task_api_has_failed_0_1.instance);
		add(task_api_persist_0_0.instance);
		add(task_api_reset_0_0.instance);
		add(task_api_setup_0_1.instance);
		add(task_api_start_collection_0_1.instance);
		add(task_api_stop_collection_0_1.instance);
		add(task_api_task_id_0_1.instance);
		add(task_api_unload_0_1.instance);
		add(task_api_debug_info_0_1.instance);
	}

	public String getOperatorRegistryName() {
		return REGISTRY_NAME;
	}
}