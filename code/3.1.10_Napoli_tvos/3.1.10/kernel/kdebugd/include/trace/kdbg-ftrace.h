

#ifndef _LINUX_KDBG_FTRACE_H
#define _LINUX_KDBG_FTRACE_H

/* version information */
#define KDEBUGD_FTRACE_VERSION_STRING		" v1.2"

/* maximum func_name length */
#define KDEBUGD_FTRACE_FUNC_NAME_LEN        (128)

/* maximum file path length */
#define KDEBUGD_FTRACE_FILE_PATH_LEN        (128)

/* enable, disable constants */
#define FTRACE_CTRL_ENABLE			"1"
#define FTRACE_CTRL_DISABLE			"0"

/* stack ctrl filename */
#define FTRACE_CTRL_STACK			"/proc/sys/kernel/stack_tracer_enabled"

/*block ctrl file name */
#define FTRACE_CTRL_BLOCK			"/sys/block/%s/trace/enable"

/* tracer types */
enum {
	E_NOP_TRACER = 0,
	E_FUNCTION_TRACER,
	E_LATENCY_TRACER,
	E_STACK_TRACER,
	E_BLOCK_TRACER,
	E_PROFILE_TRACER,
	E_KMEM_TRACER,
	E_EVENTS_TRACER,
	E_OTHER_TRACER
};

enum {
	E_VALIDATE_DEFAULT_MODE = 0, /* default mode */
	E_VALIDATE_CHECK_MODE,
};

enum {
	E_RESET_DEFAULT_MODE = 0, /* default mode */
	E_RESET_CLEAR_MODE,
};

enum {
	/* operations */
	E_MENU_TRACE_START = 1, /* Start tracing */
	E_MENU_TRACE_STOP, /* Stop tracing */
	E_MENU_TRACE_DUMP, /* Dump trace */
	E_MENU_TRACE_RESET, /* Reset tracing */
	E_MENU_TRACE_FILTER, /* Filter trace */
	E_MENU_TRACE_SETUP, /* Setup configuration */

	/* tracers */
	E_MENU_TRACE_FUNCTION = 'A', /* Function Tracer */
	E_MENU_TRACE_FUNCTION_GRAPH, /* Function Graph Tracer */
	E_MENU_TRACE_SCHED_SWITCH, /* Sched_Switch Tracer */
	E_MENU_TRACE_WAKEUP, /* Wakeup Tracer */
	E_MENU_TRACE_IRQS_OFF, /* Irqs Off Tracer */
	E_MENU_TRACE_PREEMPT_OFF, /* Preempt Off Tracer */
	E_MENU_TRACE_STACK, /* Stack Tracer */
	E_MENU_TRACE_MEMORY, /* Memory Tracer */
	E_MENU_TRACE_BRANCH, /* Branch Tracer */
	E_MENU_TRACE_BLOCK, /* Block Tracer */
	E_MENU_TRACE_PROFILE, /* Profile Tracer */
	E_MENU_TRACE_EVENTS, /* Event Tracer */
	E_MENU_TRACE_MAX, /* Max Tracer */
	E_MENU_TRACE_EXIT = 99, /* Exit menu */
};

enum {
	E_SUBMENU_OPTION_SHOW_CONFIG = 1, /* Show Configuration */
	E_SUBMENU_OPTION_OUTPUT_MODE, /* Set output mode */
	E_SUBMENU_OPTION_BUFFER_SIZE, /* Set buffer size */
	E_SUBMENU_OPTION_CPU_MASK, /* Set cpu mask */
	E_SUBMENU_OPTION_TS_NSEC, /* Set timestamp nsec */
	E_SUBMENU_OPTION_EXIT = 99, /* Exit sub menu */
};

enum {
	E_SUBMENU_FILTER_SHOW = 1, /* Show Filter */
	E_SUBMENU_FILTER_RESET, /* Reset Filter */
	E_SUBMENU_FILTER_PID, /* Set trace pid */
	E_SUBMENU_FILTER_LIST, /* Set trace list */
	E_SUBMENU_FILTER_NOT_LIST, /* Set no trace list */
	E_SUBMENU_FILTER_GRAPH_LIST, /* Set trace graph list */
	E_SUBMENU_FILTER_EXIT = 99, /* Exit sub menu */
};

#endif
