/* blcr_config.h.  Generated from blcr_config.h.in by configure.  */
/* blcr_config.h.in.  Generated from configure.ac by autoheader.  */

/*
 *  Berkeley Lab Checkpoint/Restart (BLCR) for Linux is Copyright (c)
 *  2012, The Regents of the University of California, through Lawrence
 *  Berkeley National Laboratory (subject to receipt of any required
 *  approvals from the U.S. Dept. of Energy).  All rights reserved.
 *
 *  Portions may be copyrighted by others, as may be noted in specific
 *  copyright notices within specific files.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/* Timestamp of BLCR configuration */
#define BLCR_CONFIG_TIMESTAMP "Mon Apr  1 20:21:36 CST 2013"

/* Define to 1 to enable debugging of BLCR */
#define CRI_DEBUG 0

/* Computed value of 'CR_CHECKPOINT_OMIT' */
#define CR_ASM_CHECKPOINT_OMIT 4

/* Computed value of '_CR_CHECKPOINT_STUB' */
#define CR_ASM_CHECKPOINT_STUB 16384

/* Computed value of '__NR_ioctl' */
#define CR_ASM_NR_ioctl 54

/* Computed value of '__NR_rt_sigreturn' */
#define CR_ASM_NR_rt_sigreturn 173

/* Computed value of 'CR_OP_HAND_ABORT' */
#define CR_ASM_OP_HAND_ABORT 1074045186

/* Computed value of 'CR_OP_HAND_CHKPT' */
#define CR_ASM_OP_HAND_CHKPT 1074045185

/* Computed value of 'offsetof(siginfo_t, si_pid)' */
#define CR_ASM_SI_PID_OFFSET 12

/* Define to address of exported kernel symbol __register_chrdev */
#define CR_EXPORTED_KCODE___register_chrdev 0xc010c7c4

/* Define to address of exported kernel symbol register_blkdev */
#define CR_EXPORTED_KCODE_register_blkdev 0xc0297000

/* Define to address of exported kernel symbol register_chrdev */
/* #undef CR_EXPORTED_KCODE_register_chrdev */

/* Computed value of 'F_GETPIPE_SZ' */
#define CR_F_GETPIPE_SZ 1032

/* Computed value of 'F_SETPIPE_SZ' */
#define CR_F_SETPIPE_SZ 1031

/* Define to 1 if work around for bug 2524 is requested. */
/* #undef CR_HAVE_BUG2524 */

/* Define to the proper incantation for inline functions */
#define CR_INLINE static __inline__ __attribute__ ((__unused__))

/* Define to address of non-exported kernel symbol __audit_syscall_exit, or 0
   if exported */
/* #undef CR_KCODE___audit_syscall_exit */

/* Define to address of non-exported kernel symbol __flush_icache_range, or 0
   if exported */
/* #undef CR_KCODE___flush_icache_range */

/* Define to address of non-exported kernel symbol __kuser_cmpxchg, or 0 if
   exported */
#define CR_KCODE___kuser_cmpxchg 0xc06d0700

/* Define to address of non-exported kernel symbol __kuser_helper_start, or 0
   if exported */
#define CR_KCODE___kuser_helper_start 0xc06d06a0

/* Define to address of non-exported kernel symbol __put_task_struct, or 0 if
   exported */
#define CR_KCODE___put_task_struct 0

/* Define to address of non-exported kernel symbol __put_task_struct_cb, or 0
   if exported */
/* #undef CR_KCODE___put_task_struct_cb */

/* Define to address of non-exported kernel symbol arch_get_unmaped_area, or 0
   if exported */
/* #undef CR_KCODE_arch_get_unmaped_area */

/* Define to address of non-exported kernel symbol arch_pick_mmap_layout, or 0
   if exported */
#define CR_KCODE_arch_pick_mmap_layout 0xc00e4630

/* Define to address of non-exported kernel symbol
   arch_setup_additional_pages, or 0 if exported */
/* #undef CR_KCODE_arch_setup_additional_pages */

/* Define to address of non-exported kernel symbol arch_unmap_area, or 0 if
   exported */
#define CR_KCODE_arch_unmap_area 0xc00f0c84

/* Define to address of non-exported kernel symbol attach_pid, or 0 if
   exported */
#define CR_KCODE_attach_pid 0xc0062bdc

/* Define to address of non-exported kernel symbol audit_syscall_exit, or 0 if
   exported */
/* #undef CR_KCODE_audit_syscall_exit */

/* Define to address of non-exported kernel symbol change_pid, or 0 if
   exported */
#define CR_KCODE_change_pid 0xc0062c50

/* Define to address of non-exported kernel symbol copy_fs_struct, or 0 if
   exported */
#define CR_KCODE_copy_fs_struct 0xc0133c00

/* Define to address of non-exported kernel symbol copy_siginfo_to_user, or 0
   if exported */
#define CR_KCODE_copy_siginfo_to_user 0xc0059b44

/* Define to address of non-exported kernel symbol detach_pid, or 0 if
   exported */
#define CR_KCODE_detach_pid 0xc0062c30

/* Define to address of non-exported kernel symbol do_mmap, or 0 if exported
   */
/* #undef CR_KCODE_do_mmap */

/* Define to address of non-exported kernel symbol do_mmap_pgoff, or 0 if
   exported */
#define CR_KCODE_do_mmap_pgoff 0

/* Define to address of non-exported kernel symbol do_munmap, or 0 if exported
   */
#define CR_KCODE_do_munmap 0

/* Define to address of non-exported kernel symbol do_pipe, or 0 if exported
   */
/* #undef CR_KCODE_do_pipe */

/* Define to address of non-exported kernel symbol do_pipe_flags, or 0 if
   exported */
#define CR_KCODE_do_pipe_flags 0xc01123a8

/* Define to address of non-exported kernel symbol do_sigaction, or 0 if
   exported */
#define CR_KCODE_do_sigaction 0xc005a348

/* Define to address of non-exported kernel symbol do_sigaltstack, or 0 if
   exported */
#define CR_KCODE_do_sigaltstack 0xc005a4ec

/* Define to address of non-exported kernel symbol expand_files, or 0 if
   exported */
#define CR_KCODE_expand_files 0xc0123054

/* Define to address of non-exported kernel symbol find_pid, or 0 if exported
   */
/* #undef CR_KCODE_find_pid */

/* Define to address of non-exported kernel symbol find_task_by_pid_ns, or 0
   if exported */
#define CR_KCODE_find_task_by_pid_ns 0xc0062cfc

/* Define to address of non-exported kernel symbol follow_huge_addr, or 0 if
   exported */
/* #undef CR_KCODE_follow_huge_addr */

/* Define to address of non-exported kernel symbol follow_huge_pmd, or 0 if
   exported */
/* #undef CR_KCODE_follow_huge_pmd */

/* Define to address of non-exported kernel symbol free_fs_struct, or 0 if
   exported */
#define CR_KCODE_free_fs_struct 0xc0133b14

/* Define to address of non-exported kernel symbol free_pid, or 0 if exported
   */
#define CR_KCODE_free_pid 0xc006296c

/* Define to address of non-exported kernel symbol get_dumpable, or 0 if
   exported */
#define CR_KCODE_get_dumpable 0xc01104d0

/* Define to address of non-exported kernel symbol group_send_sig_info, or 0
   if exported */
#define CR_KCODE_group_send_sig_info 0xc0058a7c

/* Define to address of non-exported kernel symbol groups_search, or 0 if
   exported */
#define CR_KCODE_groups_search 0xc006e6a0

/* Define to address of non-exported kernel symbol hugepage_vma, or 0 if
   exported */
/* #undef CR_KCODE_hugepage_vma */

/* Define to address of non-exported kernel symbol init_fpu, or 0 if exported
   */
/* #undef CR_KCODE_init_fpu */

/* Define to address of non-exported kernel symbol is_file_shm_hugepages, or 0
   if exported */
/* #undef CR_KCODE_is_file_shm_hugepages */

/* Define to address of non-exported kernel symbol jiffies_to_timeval, or 0 if
   exported */
#define CR_KCODE_jiffies_to_timeval 0

/* Define to address of non-exported kernel symbol link_pid, or 0 if exported
   */
/* #undef CR_KCODE_link_pid */

/* Define to address of non-exported kernel symbol load_gs_index, or 0 if
   exported */
/* #undef CR_KCODE_load_gs_index */

/* Define to address of non-exported kernel symbol map_vsyscall, or 0 if
   exported */
/* #undef CR_KCODE_map_vsyscall */

/* Define to address of non-exported kernel symbol pipe_fcntl, or 0 if
   exported */
#define CR_KCODE_pipe_fcntl 0xc01125c8

/* Define to address of non-exported kernel symbol pmd_huge, or 0 if exported
   */
/* #undef CR_KCODE_pmd_huge */

/* Define to address of non-exported kernel symbol put_fs_struct, or 0 if
   exported */
/* #undef CR_KCODE_put_fs_struct */

/* Define to address of non-exported kernel symbol set_dumpable, or 0 if
   exported */
#define CR_KCODE_set_dumpable 0xc011043c

/* Define to address of non-exported kernel symbol set_fs_pwd, or 0 if
   exported */
#define CR_KCODE_set_fs_pwd 0xc0133908

/* Define to address of non-exported kernel symbol supplemental_group_member,
   or 0 if exported */
/* #undef CR_KCODE_supplemental_group_member */

/* Define to address of non-exported kernel symbol sys_dup2, or 0 if exported
   */
#define CR_KCODE_sys_dup2 0xc01184b0

/* Define to address of non-exported kernel symbol sys_fchmod, or 0 if
   exported */
#define CR_KCODE_sys_fchmod 0xc01079dc

/* Define to address of non-exported kernel symbol sys_ftruncate, or 0 if
   exported */
#define CR_KCODE_sys_ftruncate 0xc01074bc

/* Define to address of non-exported kernel symbol sys_link, or 0 if exported
   */
#define CR_KCODE_sys_link 0xc01179b8

/* Define to address of non-exported kernel symbol sys_lseek, or 0 if exported
   */
#define CR_KCODE_sys_lseek 0xc01084e8

/* Define to address of non-exported kernel symbol sys_mknod, or 0 if exported
   */
#define CR_KCODE_sys_mknod 0xc0117624

/* Define to address of non-exported kernel symbol sys_mprotect, or 0 if
   exported */
#define CR_KCODE_sys_mprotect 0xc00f4248

/* Define to address of non-exported kernel symbol sys_mremap, or 0 if
   exported */
#define CR_KCODE_sys_mremap 0xc00f5024

/* Define to address of non-exported kernel symbol sys_munmap, or 0 if
   exported */
#define CR_KCODE_sys_munmap 0xc00f2594

/* Define to address of non-exported kernel symbol sys_prctl, or 0 if exported
   */
#define CR_KCODE_sys_prctl 0xc005d090

/* Define to address of non-exported kernel symbol sys_setgroups, or 0 if
   exported */
/* #undef CR_KCODE_sys_setgroups */

/* Define to address of non-exported kernel symbol sys_setitimer, or 0 if
   exported */
#define CR_KCODE_sys_setitimer 0xc00498b0

/* Define to address of non-exported kernel symbol sys_setresgid, or 0 if
   exported */
/* #undef CR_KCODE_sys_setresgid */

/* Define to address of non-exported kernel symbol sys_setresuid, or 0 if
   exported */
/* #undef CR_KCODE_sys_setresuid */

/* Define to address of non-exported kernel symbol sys_unlink, or 0 if
   exported */
#define CR_KCODE_sys_unlink 0xc0117798

/* Define to address of non-exported kernel symbol syscall32_setup_pages, or 0
   if exported */
/* #undef CR_KCODE_syscall32_setup_pages */

/* Define to address of non-exported kernel symbol timeval_to_jiffies, or 0 if
   exported */
#define CR_KCODE_timeval_to_jiffies 0

/* Define to address of non-exported kernel symbol vectors_user_mapping, or 0
   if exported */
#define CR_KCODE_vectors_user_mapping 0xc0018e9c

/* Define to address of non-exported kernel symbol HPAGE_SHIFT, or 0 if
   exported */
/* #undef CR_KDATA_HPAGE_SHIFT */

/* Define to address of non-exported kernel symbol anon_pipe_buf_ops, or 0 if
   exported */
#define CR_KDATA_anon_pipe_buf_ops 0xc054fc20

/* Define to address of non-exported kernel symbol child_reaper, or 0 if
   exported */
/* #undef CR_KDATA_child_reaper */

/* Define to address of non-exported kernel symbol cpu_gdt_descr, or 0 if
   exported */
/* #undef CR_KDATA_cpu_gdt_descr */

/* Define to address of non-exported kernel symbol cpu_gdt_table, or 0 if
   exported */
/* #undef CR_KDATA_cpu_gdt_table */

/* Define to address of non-exported kernel symbol empty_zero_page, or 0 if
   exported */
#define CR_KDATA_empty_zero_page 0

/* Define to address of non-exported kernel symbol hugetlbfs_file_operations,
   or 0 if exported */
/* #undef CR_KDATA_hugetlbfs_file_operations */

/* Define to address of non-exported kernel symbol init_pid_ns, or 0 if
   exported */
#define CR_KDATA_init_pid_ns 0

/* Define to address of non-exported kernel symbol init_pspace, or 0 if
   exported */
/* #undef CR_KDATA_init_pspace */

/* Define to address of non-exported kernel symbol mem_map_zero, or 0 if
   exported */
/* #undef CR_KDATA_mem_map_zero */

/* Define to address of non-exported kernel symbol old_rsp, or 0 if exported
   */
/* #undef CR_KDATA_old_rsp */

/* Define to address of non-exported kernel symbol per_cpu__cpu_gdt_descr, or
   0 if exported */
/* #undef CR_KDATA_per_cpu__cpu_gdt_descr */

/* Define to address of non-exported kernel symbol per_cpu__old_rsp, or 0 if
   exported */
/* #undef CR_KDATA_per_cpu__old_rsp */

/* Define to address of non-exported kernel symbol phys_base, or 0 if exported
   */
/* #undef CR_KDATA_phys_base */

/* Define to address of non-exported kernel symbol pid_cachep, or 0 if
   exported */
/* #undef CR_KDATA_pid_cachep */

/* Define to address of non-exported kernel symbol pid_hash, or 0 if exported
   */
#define CR_KDATA_pid_hash 0xc0773240

/* Define to address of non-exported kernel symbol pidhash_shift, or 0 if
   exported */
#define CR_KDATA_pidhash_shift 0xc072193c

/* Define to address of non-exported kernel symbol pidmap_array, or 0 if
   exported */
/* #undef CR_KDATA_pidmap_array */

/* Define to address of non-exported kernel symbol pidmap_lock, or 0 if
   exported */
#define CR_KDATA_pidmap_lock 0xc07160a0

/* Define to address of non-exported kernel symbol ptrace_utrace_ops, or 0 if
   exported */
/* #undef CR_KDATA_ptrace_utrace_ops */

/* Define to address of non-exported kernel symbol ramfs_file_operations, or 0
   if exported */
#define CR_KDATA_ramfs_file_operations 0xc055ade4

/* Define to address of non-exported kernel symbol shmem_file_operations, or 0
   if exported */
#define CR_KDATA_shmem_file_operations 0xc054cfa0

/* Define to address of non-exported kernel symbol suid_dumpable, or 0 if
   exported */
#define CR_KDATA_suid_dumpable 0xc07e9028

/* Define to address of non-exported kernel symbol tasklist_lock, or 0 if
   exported */
#define CR_KDATA_tasklist_lock 0xc0716020

/* Define to address of non-exported kernel symbol xstate_size, or 0 if
   exported */
/* #undef CR_KDATA_xstate_size */

/* Define to 1 to enable debugging/tracing output from kernel modules,
   controlled by the 'cr_ktrace_mask' module option */
#define CR_KERNEL_TRACING 0

/* Maximum legal size to kmalloc() */
#define CR_KMALLOC_MAX 131072

/* Define to 1 if linux/autoconf.h must be included explicitly */
/* #undef CR_NEED_AUTOCONF_H */

/* Define to 1 to enable restore of uid, gid and supplemental groups when
   invoked by root. (default is no) */
#define CR_RESTORE_IDS 0

/* Positive if stack grows up, negative if it grows down */
#define CR_STACK_GROWTH -1

/* Define to 1 if the kernel has 0-arg alloc_pid(). */
#define HAVE_0_ARG_ALLOC_PID 0

/* Define to 1 if the kernel has 1-arg alloc_pid(). */
#define HAVE_1_ARG_ALLOC_PID 1

/* Define to 1 if the kernel has 1-arg find_pid(). */
#define HAVE_1_ARG_FIND_PID 0

/* Define to 1 if the kernel has 2.6.0 attach_pid. */
#define HAVE_2_6_0_ATTACH_PID 0

/* Define to 1 if the kernel has 2.6.0 restore_fpu_checking. */
/* #undef HAVE_2_6_0_RESTORE_FPU_CHECKING */

/* Define to 1 if the kernel type 'struct task_struct' has member '__pgrp' of
   type 'int'. */
#define HAVE_2_6_0_TASK_IDS 0

/* Define to 1 if the kernel has "
   audit_syscall_exit(NULL,AUDITSC_RESULT(0),0)". */
/* #undef HAVE_2_6_12_AUDIT_SYSCALL_EXIT */

/* Define to 1 if the kernel has " audit_syscall_exit(AUDITSC_RESULT(0),0)".
   */
/* #undef HAVE_2_6_17_AUDIT_SYSCALL_EXIT */

/* Define to 1 if the kernel has "int process_session(NULL)". */
#define HAVE_2_6_20_TASK_IDS 0

/* Define to 1 if the kernel has 2.6.22 attach_pid. */
#define HAVE_2_6_22_ATTACH_PID 0

/* Define to 1 if the kernel has "int task_session_vnr(NULL)". */
#define HAVE_2_6_24_TASK_IDS 1

/* Define to 1 if the kernel has 2.6.26 attach_pid. */
#define HAVE_2_6_26_ATTACH_PID 1

/* Define to 1 if the kernel has 2.6.28 restore_fpu_checking. */
/* #undef HAVE_2_6_28_RESTORE_FPU_CHECKING */

/* Define to 1 if the kernel has " audit_syscall_exit(NULL,0)". */
/* #undef HAVE_2_6_6_AUDIT_SYSCALL_EXIT */

/* Define to 1 if the kernel type 'struct task_struct' has member
   'signal->session' of type 'int'. */
#define HAVE_2_6_6_TASK_IDS 0

/* Define to 1 if the kernel has 2-arg arch_setup_additional_pages(). */
#define HAVE_2_ARG_ARCH_SETUP_ADDITIONAL_PAGES 1

/* Define to 1 if the kernel has 2-arg find_pid(). */
#define HAVE_2_ARG_FIND_PID 0

/* Define to 1 if the kernel has 2-arg pipe_ops.unmap. */
#define HAVE_2_ARG_PIPE_OPS_UNMAP 0

/* Define to 1 if the kernel has 3-arg dentry_open(). */
#define HAVE_3_ARG_DENTRY_OPEN 0

/* Define to 1 if the kernel has 3-arg follow_huge_addr(). */
#define HAVE_3_ARG_FOLLOW_HUGE_ADDR 0

/* Define to 1 if the kernel has 3-arg pipe_ops.unmap. */
#define HAVE_3_ARG_PIPE_OPS_UNMAP 1

/* Define to 1 if the kernel has 4-arg arch_setup_additional_pages(). */
#define HAVE_4_ARG_ARCH_SETUP_ADDITIONAL_PAGES 0

/* Define to 1 if the kernel has 4-arg dentry_open(). */
#define HAVE_4_ARG_DENTRY_OPEN 1

/* Define to 1 if the kernel has 4-arg do_generic_file_read(). */
#define HAVE_4_ARG_DO_GENERIC_FILE_READ 0

/* Define to 1 if the kernel has 4-arg follow_huge_addr(). */
#define HAVE_4_ARG_FOLLOW_HUGE_ADDR 0

/* Define to 1 if the kernel has 5-arg do_generic_file_read(). */
#define HAVE_5_ARG_DO_GENERIC_FILE_READ 0

/* Define to 1 if the kernel has the macro or function alloc_pid(). */
#define HAVE_ALLOC_PID 1

/* Define to 1 if the kernel has the <asm/desc.h> header file. */
#define HAVE_ASM_DESC_H 0

/* Define to 1 if the kernel has the <asm/elf.h> header file. */
#define HAVE_ASM_ELF_H 1

/* Define to 1 if the kernel has the <asm/i387.h> header file. */
#define HAVE_ASM_I387_H 0

/* Define to 1 if the kernel has the <asm/switch_to.h> header file. */
#define HAVE_ASM_SWITCH_TO_H 0

/* Define to 1 if the kernel has the <asm/tls.h> header file. */
#define HAVE_ASM_TLS_H 1

/* Define to 1 if the kernel has the <asm/vsyscall32.h> header file. */
#define HAVE_ASM_VSYSCALL32_H 0

/* Define to 1 if the kernel has the macro or function audit_dummy_context().
   */
/* #undef HAVE_AUDIT_DUMMY_CONTEXT */

/* Define to 1 if the kernel has the macro or function change_pid(). */
#define HAVE_CHANGE_PID 1

/* Define to 1 if the kernel has the macro or function child_reaper(). */
#define HAVE_CHILD_REAPER 0

/* Define to 1 if the kernel has the macro or function close_on_exec(). */
#define HAVE_CLOSE_ON_EXEC 0

/* Define to 1 if the kernel defines the macro CONFIG_AUDITSYSCALL. */
#define HAVE_CONFIG_AUDITSYSCALL 0

/* Define to 1 if the kernel defines the macro CONFIG_HUGETLBFS. */
#define HAVE_CONFIG_HUGETLBFS 0

/* Define to 1 if the kernel defines the macro CONFIG_THUMB2_KERNEL. */
#define HAVE_CONFIG_THUMB2_KERNEL 0

/* Define to 1 if the kernel has cpu_gdt_descr. */
/* #undef HAVE_CPU_GDT_DESCR */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if the kernel defines the macro do_each_pid_task. */
#define HAVE_DO_EACH_PID_TASK 1

/* Define to 1 if the kernel defines the macro do_each_task_pid. */
#define HAVE_DO_EACH_TASK_PID 0

/* Define to 1 if the kernel has the macro or function do_mmap(). */
#define HAVE_DO_MMAP 1

/* Define to 1 if the kernel has the macro or function do_mmap_pgoff(). */
#define HAVE_DO_MMAP_PGOFF 1

/* Define to 1 if the kernel type 'struct fdtable' has member 'next_fd' of
   type 'int'. */
#define HAVE_FDTABLE_NEXT_FD 0

/* Define to 1 if the kernel has the macro or function fd_is_open(). */
#define HAVE_FD_IS_OPEN 0

/* Define to 1 if the kernel type 'struct files_struct' has member 'max_fdset'
   of type 'int'. */
#define HAVE_FILES_STRUCT_MAX_FDSET 0

/* Define to 1 if the kernel type 'struct files_struct' has member 'next_fd'
   of type 'int'. */
#define HAVE_FILES_STRUCT_NEXT_FD 1

/* Define to 1 if the kernel type 'struct file' has member 'f_lock' of type
   'spinlock_t'. */
#define HAVE_FILE_F_LOCK 1

/* Define to 1 if the kernel type 'struct file' has member 'f_mapping' of type
   'struct address_space*'. */
#define HAVE_FILE_F_MAPPING 1

/* Define to 1 if the kernel type 'struct file_operations' has member
   'check_flags'. */
#define HAVE_FILE_OPERATIONS_CHECK_FLAGS 1

/* Define to 1 if the kernel type 'struct file_operations' has member
   'unlocked_ioctl'. */
#define HAVE_FILE_OPERATIONS_UNLOCKED_IOCTL 1

/* Define to 1 if the kernel has the macro or function find_pid_ns(). */
#define HAVE_FIND_PID_NS 1

/* Define to 1 if the kernel has the macro or function find_task_by_pid(). */
#define HAVE_FIND_TASK_BY_PID 0

/* Define to 1 if the kernel has the macro or function find_task_by_pid_ns().
   */
#define HAVE_FIND_TASK_BY_PID_NS 1

/* Define to 1 if the kernel has the macro or function
   find_task_by_pid_type(). */
#define HAVE_FIND_TASK_BY_PID_TYPE 0

/* Define to 1 if the kernel has the macro or function
   find_task_by_pid_type_ns(). */
#define HAVE_FIND_TASK_BY_PID_TYPE_NS 0

/* Define to 1 if the kernel defines the macro for_each_task_pid. */
#define HAVE_FOR_EACH_TASK_PID 0

/* Define to 1 if the kernel type 'struct fs_struct' has member 'lock' of type
   'rwlock_t'. */
#define HAVE_FS_STRUCT_RWLOCK 0

/* Define to 1 if the kernel type 'struct fs_struct' has member 'lock' of type
   'spinlock_t'. */
#define HAVE_FS_STRUCT_SPINLOCK 1

/* Define to 1 if the Fault Tolerance Backplane is available. */
#define HAVE_FTB 0

/* Define to 1 if the kernel defines the macro F_GETPIPE_SZ. */
#define HAVE_F_GETPIPE_SZ 1

/* Define to 1 if the kernel defines the macro F_SETPIPE_SZ. */
#define HAVE_F_SETPIPE_SZ 1

/* Define to 1 if the kernel has the <generated/utsrelease.h> header file. */
#define HAVE_GENERATED_UTSRELEASE_H 1

/* Define to 1 if the kernel has the type 'gfp_t'. */
#define HAVE_GFP_T 1

/* Define to 1 if the kernel has the macro or function init_utsname(). */
#define HAVE_INIT_UTSNAME 1

/* Define to 1 if the kernel type 'struct inode' has member 'i_mapping' of
   type 'struct address_space*'. */
#define HAVE_INODE_I_MAPPING 1

/* Define to 1 if the kernel type 'struct inode' has member 'i_mutex' of type
   'struct mutex'. */
#define HAVE_INODE_MUTEX 1

/* Define to 1 if the kernel has the macro or function inode_permission(). */
#define HAVE_INODE_PERMISSION 1

/* Define to 1 if the kernel type 'struct inode' has member 'i_sem' of type
   'struct semaphore'. */
#define HAVE_INODE_SEM 0

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if the kernel has the macro or function kern_path(). */
#define HAVE_KERN_PATH 1

/* Define to 1 if the kernel has the macro or function kill_pid(). */
#define HAVE_KILL_PID 1

/* Define to 1 if the kernel has the macro or function kill_proc(). */
#define HAVE_KILL_PROC 0

/* Define to 1 if the kernel has the macro or function kmemdup(). */
#define HAVE_KMEMDUP 1

/* Define to 1 if the kmem_cache_t typedef exists and is not deprecated */
#define HAVE_KMEM_CACHE_T 0

/* Define to 1 if the kernel has the macro or function kmem_cache_zalloc(). */
#define HAVE_KMEM_CACHE_ZALLOC 1

/* Define to 1 if the kernel has the macro or function kzalloc(). */
#define HAVE_KZALLOC 1

/* Define to 1 if the kernel has the <linux/audit.h> header file. */
#define HAVE_LINUX_AUDIT_H 1

/* Define to 1 if the kernel has the <linux/compile.h> header file. */
#define HAVE_LINUX_COMPILE_H 0

/* Define to 1 if the kernel has the <linux/fdtable.h> header file. */
#define HAVE_LINUX_FDTABLE_H 1

/* Define to 1 if the kernel has the <linux/lockdep.h> header file. */
#define HAVE_LINUX_LOCKDEP_H 1

/* Define to 1 if the kernel has the <linux/perf_event.h> header file. */
#define HAVE_LINUX_PERF_EVENT_H 1

/* Define to 1 if the kernel has the <linux/pid_namespace.h> header file. */
#define HAVE_LINUX_PID_NAMESPACE_H 1

/* Define to 1 if the kernel has the <linux/pspace.h> header file. */
#define HAVE_LINUX_PSPACE_H 0

/* Define to 1 if the kernel has the <linux/syscalls.h> header file. */
#define HAVE_LINUX_SYSCALLS_H 1

/* Define to 1 if the kernel has the <linux/utrace.h> header file. */
#define HAVE_LINUX_UTRACE_H 0

/* Define to 1 if the kernel has the <linux/utsrelease.h> header file. */
#define HAVE_LINUX_UTSRELEASE_H 0

/* Define to 1 if the kernel has the macro or function map_vsyscall(). */
#define HAVE_MAP_VSYSCALL 0

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if the kernel type 'struct mm_struct' has member
   'cached_hole_size' of type 'unsigned long'. */
#define HAVE_MM_CACHED_HOLE_SIZE 1

/* Define to 1 if the kernel type 'mm_context_t' has member 'vdso' of type
   'unsigned long'. */
#define HAVE_MM_CONTEXT_VDSO 0

/* Define to 1 if the kernel type 'mm_context_t' has member 'vdso_base' of
   type 'unsigned long'. */
#define HAVE_MM_CONTEXT_VDSO_BASE 0

/* Define to 1 if the kernel type 'struct mm_struct' has member 'dumpable' of
   type 'int'. */
#define HAVE_MM_DUMPABLE 0

/* Define to 1 if the kernel type 'struct mm_struct' has member 'exe_file' of
   type 'struct file *'. */
#define HAVE_MM_EXE_FILE 1

/* Define to 1 if the kernel type 'struct mm_struct' has member 'mmap_base' of
   type 'unsigned long'. */
#define HAVE_MM_MMAP_BASE 1

/* Define to 1 if the kernel type 'struct mm_struct' has member 'task_size' of
   type 'unsigned long'. */
#define HAVE_MM_TASK_SIZE 1

/* Define to 1 if the kernel has nameidata.dentry. */
#define HAVE_NAMEIDATA_DENTRY 0

/* Define to 1 if fs functions pass 'struct path' */
#define HAVE_NAMEIDATA_PATH 1

/* Define to 1 if the kernel type 'struct files_struct' has member
   'open_fds->fds_bits' of type 'unsigned long *'. */
#define HAVE_OPEN_FDS_FDS_BITS 1

/* Define to 1 if the kernel has the macro or function PageAnon(). */
#define HAVE_PAGEANON 1

/* Define to 1 if the kernel has the macro or function path_lookup(). */
#define HAVE_PATH_LOOKUP 0

/* Define to 1 if the kernel has the macro or function percpu_read(). */
/* #undef HAVE_PERCPU_READ */

/* Define to 1 if the kernel has the macro or function percpu_write(). */
/* #undef HAVE_PERCPU_WRITE */

/* Define to 1 if the kernel has the macro or function permission(). */
#define HAVE_PERMISSION 0

/* Define to 1 if the kernel defines the constant PIDTYPE_TGID. */
#define HAVE_PIDTYPE_TGID 0

/* Define to 1 if the kernel type 'struct pid_namespace' has member
   'pid_cachep' of type 'void *'. */
#define HAVE_PID_NAMESPACE_PID_CACHEP 1

/* Define to 1 if the kernel type 'struct pipe_buf_operations' has member
   'pin'. */
#define HAVE_PIPE_BUF_OPERATIONS_PIN 0

/* Define to 1 if the kernel has the macro or function pipe_fcntl(). */
#define HAVE_PIPE_FCNTL 1

/* Define to 1 if the kernel type 'struct pipe_inode_info' has member 'base'
   of type 'char*'. */
#define HAVE_PIPE_INODE_INFO_BASE 0

/* Define to 1 if the kernel type 'struct pipe_inode_info' has member
   'buffers' of type 'unsigned int'. */
#define HAVE_PIPE_INODE_INFO_BUFFERS 1

/* Define to 1 if prctl() function is available. */
#define HAVE_PRCTL 1

/* Define to 1 if the kernel has proc_root. */
#define HAVE_PROC_ROOT 0

/* Define to 1 if you have the `pthread_attr_setstacksize' function. */
#define HAVE_PTHREAD_ATTR_SETSTACKSIZE 1

/* Define to 1 if the kernel type 'struct pt_regs' has member 'cs' of type
   'int'. */
/* #undef HAVE_PT_REGS_CS */

/* Define to 1 if the kernel type 'struct pt_regs' has member 'eflags' of type
   'unsigned long'. */
/* #undef HAVE_PT_REGS_EFLAGS */

/* Define to 1 if the kernel type 'struct pt_regs' has member 'flags' of type
   'unsigned long'. */
/* #undef HAVE_PT_REGS_FLAGS */

/* Define to 1 if the kernel type 'struct pt_regs' has member 'fs' of type
   'int'. */
/* #undef HAVE_PT_REGS_FS */

/* Define to 1 if the kernel type 'struct pt_regs' has member 'gs' of type
   'int'. */
/* #undef HAVE_PT_REGS_GS */

/* Define to 1 if the kernel type 'struct pt_regs' has member 'xcs' of type
   'int'. */
/* #undef HAVE_PT_REGS_XCS */

/* Define to 1 if the kernel type 'struct pt_regs' has member 'xfs' of type
   'int'. */
/* #undef HAVE_PT_REGS_XFS */

/* Define to 1 if the kernel type 'struct pt_regs' has member 'xgs' of type
   'int'. */
/* #undef HAVE_PT_REGS_XGS */

/* Define to 1 if the kernel type 'read_descriptor_t' has member 'arg.data' of
   type 'void*'. */
#define HAVE_READ_DESCRIPTOR_T_ARG_DATA 1

/* Define to 1 if the kernel type 'read_descriptor_t' has member 'buf' of type
   'char*'. */
#define HAVE_READ_DESCRIPTOR_T_BUF 0

/* Define to 1 if the kernel has the macro or function read_pda(). */
/* #undef HAVE_READ_PDA */

/* Define to 1 if the kernel defines the macro REMOVE_LINKS. */
#define HAVE_REMOVE_LINKS 0

/* Define to 1 if the kernel has the macro or function restore_fpu_checking().
   */
/* #undef HAVE_RESTORE_FPU_CHECKING */

/* Define to 1 if the kernel has the macro or function set_dumpable(). */
#define HAVE_SET_DUMPABLE 1

/* Define to 1 if the kernel has the macro or function set_task_pgrp(). */
#define HAVE_SET_TASK_PGRP 0

/* Define to 1 if the kernel has the macro or function set_task_session(). */
#define HAVE_SET_TASK_SESSION 0

/* Define to 1 if the kernel type 'struct task_struct' has member
   'signal->rlim0' of type 'struct rlimit'. */
#define HAVE_SIGNAL_RLIM 1

/* Define to 1 if the kernel has the macro or function
   splice_direct_to_actor(). */
#define HAVE_SPLICE_DIRECT_TO_ACTOR 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if the kernel has the type 'struct delayed_work'. */
#define HAVE_STRUCT_DELAYED_WORK 1

/* Define to 1 if the kernel has the type 'struct fdtable'. */
#define HAVE_STRUCT_FDTABLE 1

/* Define to 1 if the kernel has the type 'struct n_desc_struct'. */
/* #undef HAVE_STRUCT_N_DESC_STRUCT */

/* Define to 1 if the kernel has the type 'struct path'. */
#define HAVE_STRUCT_PATH 1

/* Define to 1 if the kernel has the type 'struct pidmap'. */
#define HAVE_STRUCT_PIDMAP 1

/* Define to 1 if the kernel has suid_dumpable. */
#define HAVE_SUID_DUMPABLE 1

/* Define to 1 if the kernel has system_utsname. */
#define HAVE_SYSTEM_UTSNAME 0

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if the kernel has the macro or function task_child_reaper(). */
#define HAVE_TASK_CHILD_REAPER 0

/* Define to 1 if the kernel type 'struct task_struct' has member 'cred' of
   type 'const struct cred *'. */
#define HAVE_TASK_CRED 1

/* Define to 1 if the kernel type 'struct task_struct' has member 'group_info'
   of type 'struct group_info *'. */
#define HAVE_TASK_GROUP_INFO 0

/* Define to 1 if the kernel type 'struct task_struct' has member 'parent' of
   type 'struct task_struct *'. */
#define HAVE_TASK_PARENT 1

/* Define to 1 if the kernel type 'struct task_struct' has member 'pids0' of
   type 'struct pid'. */
#define HAVE_TASK_PIDS_PID 0

/* Define to 1 if the kernel type 'struct task_struct' has member 'pids0' of
   type 'struct pid_link'. */
#define HAVE_TASK_PIDS_PID_LINK 1

/* Define to 1 if the kernel type 'struct task_struct' has member 'ptrace' of
   type 'unsigned long'. */
#define HAVE_TASK_PTRACE 1

/* Define to 1 if the kernel type 'struct task_struct' has member 'ptraced' of
   type 'struct list_head'. */
#define HAVE_TASK_PTRACED 1

/* Define to 1 if the kernel type 'struct task_struct' has member 'ptracees'
   of type 'struct list_head'. */
#define HAVE_TASK_PTRACEES 0

/* Define to 1 if the kernel type 'struct task_struct' has member
   'real_parent' of type 'struct task_struct *'. */
#define HAVE_TASK_REAL_PARENT 1

/* Define to 1 if the kernel type 'struct task_struct' has member 'rlim0' of
   type 'struct rlimit'. */
#define HAVE_TASK_RLIM 0

/* Define to 1 if the kernel type 'struct task_struct' has member
   'thread_group' of type 'struct list_head'. */
#define HAVE_TASK_THREAD_GROUP 1

/* Define to 1 if the kernel has the macro or function this_cpu_read(). */
/* #undef HAVE_THIS_CPU_READ */

/* Define to 1 if the kernel has the macro or function this_cpu_write(). */
/* #undef HAVE_THIS_CPU_WRITE */

/* Define to 1 if the kernel type 'struct thread_struct' has member
   'debugreg0' of type 'unsigned long'. */
/* #undef HAVE_THREAD_DEBUGREG0 */

/* Define to 1 if the kernel type 'struct thread_struct' has member
   'debugreg1' of type 'unsigned long'. */
/* #undef HAVE_THREAD_DEBUGREGS */

/* Define to 1 if the kernel type 'struct thread_struct' has member 'esp0' of
   type 'unsigned long'. */
/* #undef HAVE_THREAD_ESP0 */

/* Define to 1 if the kernel type 'struct thread_struct' has member 'fpu' of
   type 'struct fpu'. */
/* #undef HAVE_THREAD_FPU */

/* Define to 1 if the kernel type 'struct thread_struct' has member 'i387' of
   type 'union i387_union'. */
/* #undef HAVE_THREAD_I387 */

/* Define to 1 if the kernel type 'struct thread_info' has member
   'sysenter_return' of type 'void *'. */
#define HAVE_THREAD_INFO_SYSENTER_RETURN 0

/* Define to 1 if the kernel type 'struct thread_info' has member 'tp_value'
   of type 'unsigned long'. */
#define HAVE_THREAD_INFO_TP_VALUE 1

/* Define to 1 if the kernel type 'struct thread_struct' has member
   'ptrace_bps1' of type 'struct perf_event *'. */
/* #undef HAVE_THREAD_PTRACE_BPS */

/* Define to 1 if the kernel type 'struct thread_struct' has member 'rsp0' of
   type 'unsigned long'. */
/* #undef HAVE_THREAD_RSP0 */

/* Define to 1 if the kernel type 'struct thread_struct' has member 'sp0' of
   type 'unsigned long'. */
/* #undef HAVE_THREAD_SP0 */

/* Define to 1 if the kernel type 'struct thread_struct' has member 'userrsp'
   of type 'unsigned long'. */
/* #undef HAVE_THREAD_USERRSP */

/* Define to 1 if the kernel type 'struct thread_struct' has member 'usersp'
   of type 'unsigned long'. */
/* #undef HAVE_THREAD_USERSP */

/* Define to 1 if the kernel type 'struct thread_struct' has member
   'vdso_base' of type 'unsigned long'. */
#define HAVE_THREAD_VDSO_BASE 0

/* Define to 1 if the kernel type 'struct thread_struct' has member 'xstate'
   of type 'union thread_xstate *'. */
/* #undef HAVE_THREAD_XSTATE */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if the kernel has the macro or function valid_signal(). */
#define HAVE_VALID_SIGNAL 1

/* Define to 1 if the kernel type 'struct vm_area_struct' has member 'vm_mm'
   of type 'struct mm_struct *'. */
#define HAVE_VMA_VM_MM 1

/* Define to 1 if the kernel defines the constant VSYSCALL_BASE. */
#define HAVE_VSYSCALL_BASE 0

/* Define to 1 if the kernel has the macro or function write_pda(). */
/* #undef HAVE_WRITE_PDA */

/* Define to 1 if the kernel has the macro or function __audit_syscall_exit().
   */
/* #undef HAVE___AUDIT_SYSCALL_EXIT */

/* Define to 1 if you have the `__nss_disable_nscd' function. */
#define HAVE___NSS_DISABLE_NSCD 1

/* Define to 1 if the kernel has the macro or function __putname(). */
#define HAVE___PUTNAME 1

/* Define to 1 if you have the `__register_atfork' function. */
#define HAVE___REGISTER_ATFORK 1

/* Define to 1 if the kernel has the macro or function __set_close_on_exec().
   */
#define HAVE___SET_CLOSE_ON_EXEC 0

/* Define to 1 if the kernel has the macro or function __set_open_fd(). */
#define HAVE___SET_OPEN_FD 0

/* Define to 1 to enable debugging/tracing output from libcr, controlled by
   the 'LIBCR_TRACE_MASK' environment variable */
#define LIBCR_TRACING 0

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "blcr"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "http://ftg.lbl.gov/checkpoint"

/* Define to the full name of this package. */
#define PACKAGE_NAME "blcr"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "blcr 0.8.5"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "blcr"

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.8.5"

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 4

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "0.8.5"
