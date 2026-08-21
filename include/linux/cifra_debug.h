#ifndef _CIFRA_DEBUG_H
#define _CIFRA_DEBUG_H

#ifdef CONFIG_CIFRA_DEBUG
struct fault_info_extra {
	int	(*fn)(unsigned long far, unsigned long esr,
		      struct pt_regs *regs);
	int	sig;
	int	code;
	const char *name;
};

extern int (*do_mem_abort_ptr)(unsigned long esr, struct pt_regs *regs, unsigned long far, unsigned long addr, void *fault_info_fn, int fault_info_sig, int fault_info_code, const char *fault_info_name);
#endif

#endif