// Names for syscall, etc. in KUtrace
// dick sites 2021.10.08
// These are from linux-5.10.149 ARM64. Others will vary.
//

#ifndef __KUTRACE_CONTROL_NAMES_ANDROID_H__
#define __KUTRACE_CONTROL_NAMES_ANDROID_H__

#include "kutrace_lib.h"

static const NumNamePair PidNames[] = {
  {0, "-idle-"},
  {-1, NULL},		// Must be last
};

static const NumNamePair Syscall32Names[] = {
  {-1, NULL},		// Must be last
};

static const NumNamePair Syscall64Names[] = {
// Rpi4 names from include/uapi/asm-generic/unistd.h
//   via grep NR | sed 's/^.*NR[^_]*_\([^ ]*\) *\([0-9]*\).*$/  {\2, "\1"},/'
//   Since these are just name labels, we don't bother with the NR3264 stuff

  {0, "io_setup"},
  {1, "io_destroy"},
  {2, "io_submit"},
  {3, "io_cancel"},
  {4, "io_getevents"},
  {5, "setxattr"},
  {6, "lsetxattr"},
  {7, "fsetxattr"},
  {8, "getxattr"},
  {9, "lgetxattr"},
  {10, "fgetxattr"},
  {11, "listxattr"},
  {12, "llistxattr"},
  {13, "flistxattr"},
  {14, "removexattr"},
  {15, "lremovexattr"},
  {16, "fremovexattr"},
  {17, "getcwd"},
  {18, "lookup_dcookie"},
  {19, "eventfd2"},
  {20, "epoll_create1"},
  {21, "epoll_ctl"},
  {22, "epoll_pwait"},
  {23, "dup"},
  {24, "dup3"},
  {25, "fcntl"},
  {26, "inotify_init1"},
  {27, "inotify_add_watch"},
  {28, "inotify_rm_watch"},
  {29, "ioctl"},
  {30, "ioprio_set"},
  {31, "ioprio_get"},
  {32, "flock"},
  {33, "mknodat"},
  {34, "mkdirat"},
  {35, "unlinkat"},
  {36, "symlinkat"},
  {37, "linkat"},
  {38, "renameat"},
  {39, "umount2"},
  {40, "mount"},
  {41, "pivot_root"},
  {42, "nfsservctl"},
  {43, "statfs"},
  {44, "fstatfs"},
  {45, "truncate"},
  {46, "ftruncate"},
  {47, "fallocate"},
  {48, "faccessat"},
  {49, "chdir"},
  {50, "fchdir"},
  {51, "chroot"},
  {52, "fchmod"},
  {53, "fchmodat"},
  {54, "fchownat"},
  {55, "fchown"},
  {56, "openat"},
  {57, "close"},
  {58, "vhangup"},
  {59, "pipe2"},
  {60, "quotactl"},
  {61, "getdents64"},
  {62, "lseek"},
  {63, "read"},
  {64, "write"},
  {65, "readv"},
  {66, "writev"},
  {67, "pread64"},
  {68, "pwrite64"},
  {69, "preadv"},
  {70, "pwritev"},
  {71, "sendfile"},
  {72, "pselect6"},
  {73, "ppoll"},
  {74, "signalfd4"},
  {75, "vmsplice"},
  {76, "splice"},
  {77, "tee"},
  {78, "readlinkat"},
  {79, "fstatat"},
  {80, "fstat"},
  {81, "sync"},
  {82, "fsync"},
  {83, "fdatasync"},
  {84, "sync_file_range2"},
  {84, "sync_file_range"},
  {85, "timerfd_create"},
  {86, "timerfd_settime"},
  {87, "timerfd_gettime"},
  {88, "utimensat"},
  {89, "acct"},
  {90, "capget"},
  {91, "capset"},
  {92, "personality"},
  {93, "exit"},
  {94, "exit_group"},
  {95, "waitid"},
  {96, "set_tid_address"},
  {97, "unshare"},
  {98, "futex"},
  {99, "set_robust_list"},
  {100, "get_robust_list"},
  {101, "nanosleep"},
  {102, "getitimer"},
  {103, "setitimer"},
  {104, "kexec_load"},
  {105, "init_module"},
  {106, "delete_module"},
  {107, "timer_create"},
  {108, "timer_gettime"},
  {109, "timer_getoverrun"},
  {110, "timer_settime"},
  {111, "timer_delete"},
  {112, "clock_settime"},
  {113, "clock_gettime"},
  {114, "clock_getres"},
  {115, "clock_nanosleep"},
  {116, "syslog"},
  {117, "ptrace"},
  {118, "sched_setparam"},
  {119, "sched_setscheduler"},
  {120, "sched_getscheduler"},
  {121, "sched_getparam"},
  {122, "sched_setaffinity"},
  {123, "sched_getaffinity"},
  {124, "sched_yield"},
  {125, "sched_get_priority_max"},
  {126, "sched_get_priority_min"},
  {127, "sched_rr_get_interval"},
  {128, "restart_syscall"},
  {129, "kill"},
  {130, "tkill"},
  {131, "tgkill"},
  {132, "sigaltstack"},
  {133, "rt_sigsuspend"},
  {134, "rt_sigaction"},
  {135, "rt_sigprocmask"},
  {136, "rt_sigpending"},
  {137, "rt_sigtimedwait"},
  {138, "rt_sigqueueinfo"},
  {139, "rt_sigreturn"},
  {140, "setpriority"},
  {141, "getpriority"},
  {142, "reboot"},
  {143, "setregid"},
  {144, "setgid"},
  {145, "setreuid"},
  {146, "setuid"},
  {147, "setresuid"},
  {148, "getresuid"},
  {149, "setresgid"},
  {150, "getresgid"},
  {151, "setfsuid"},
  {152, "setfsgid"},
  {153, "times"},
  {154, "setpgid"},
  {155, "getpgid"},
  {156, "getsid"},
  {157, "setsid"},
  {158, "getgroups"},
  {159, "setgroups"},
  {160, "uname"},
  {161, "sethostname"},
  {162, "setdomainname"},
  {163, "getrlimit"},
  {164, "setrlimit"},
  {165, "getrusage"},
  {166, "umask"},
  {167, "prctl"},
  {168, "getcpu"},
  {169, "gettimeofday"},
  {170, "settimeofday"},
  {171, "adjtimex"},
  {172, "getpid"},
  {173, "getppid"},
  {174, "getuid"},
  {175, "geteuid"},
  {176, "getgid"},
  {177, "getegid"},
  {178, "gettid"},
  {179, "sysinfo"},
  {180, "mq_open"},
  {181, "mq_unlink"},
  {182, "mq_timedsend"},
  {183, "mq_timedreceive"},
  {184, "mq_notify"},
  {185, "mq_getsetattr"},
  {186, "msgget"},
  {187, "msgctl"},
  {188, "msgrcv"},
  {189, "msgsnd"},
  {190, "semget"},
  {191, "semctl"},
  {192, "semtimedop"},
  {193, "semop"},
  {194, "shmget"},
  {195, "shmctl"},
  {196, "shmat"},
  {197, "shmdt"},
  {198, "socket"},
  {199, "socketpair"},
  {200, "bind"},
  {201, "listen"},
  {202, "accept"},
  {203, "connect"},
  {204, "getsockname"},
  {205, "getpeername"},
  {206, "sendto"},
  {207, "recvfrom"},
  {208, "setsockopt"},
  {209, "getsockopt"},
  {210, "shutdown"},
  {211, "sendmsg"},
  {212, "recvmsg"},
  {213, "readahead"},
  {214, "brk"},
  {215, "munmap"},
  {216, "mremap"},
  {217, "add_key"},
  {218, "request_key"},
  {219, "keyctl"},
  {220, "clone"},
  {221, "execve"},
  {222, "mmap"},
  {223, "fadvise64"},
  {224, "swapon"},
  {225, "swapoff"},
  {226, "mprotect"},
  {227, "msync"},
  {228, "mlock"},
  {229, "munlock"},
  {230, "mlockall"},
  {231, "munlockall"},
  {232, "mincore"},
  {233, "madvise"},
  {234, "remap_file_pages"},
  {235, "mbind"},
  {236, "get_mempolicy"},
  {237, "set_mempolicy"},
  {238, "migrate_pages"},
  {239, "move_pages"},
  {240, "rt_tgsigqueueinfo"},
  {241, "perf_event_open"},
  {242, "accept4"},
  {243, "recvmmsg"},
  {244, "arch_specific_syscall"},
  {260, "wait4"},
  {261, "prlimit64"},
  {262, "fanotify_init"},
  {263, "fanotify_mark"},
  {264, "name_to_handle_at"},
  {265, "open_by_handle_at"},
  {266, "clock_adjtime"},
  {267, "syncfs"},
  {268, "setns"},
  {269, "sendmmsg"},
  {270, "process_vm_readv"},
  {271, "process_vm_writev"},
  {272, "kcmp"},
  {273, "finit_module"},
  {274, "sched_setattr"},
  {275, "sched_getattr"},
  {276, "renameat2"},
  {277, "seccomp"},
  {278, "getrandom"},
  {279, "memfd_create"},
  {280, "bpf"},
  {281, "execveat"},
  {282, "userfaultfd"},
  {283, "membarrier"},
  {284, "mlock2"},
  {285, "copy_file_range"},
  {286, "preadv2"},
  {287, "pwritev2"},
  {288, "pkey_mprotect"},
  {289, "pkey_alloc"},
  {290, "pkey_free"},
  {291, "statx"},
  {292, "io_pgetevents"},
  {293, "rseq"},
  {294, "kexec_file_load"},
  {403, "clock_gettime64"},
  {404, "clock_settime64"},
  {405, "clock_adjtime64"},
  {406, "clock_getres_time64"},
  {407, "clock_nanosleep_time64"},
  {408, "timer_gettime64"},
  {409, "timer_settime64"},
  {410, "timerfd_gettime64"},
  {411, "timerfd_settime64"},
  {412, "utimensat_time64"},
  {413, "pselect6_time64"},
  {414, "ppoll_time64"},
  {416, "io_pgetevents_time64"},
  {417, "recvmmsg_time64"},
  {418, "mq_timedsend_time64"},
  {419, "mq_timedreceive_time64"},
  {420, "semtimedop_time64"},
  {421, "rt_sigtimedwait_time64"},
  {422, "futex_time64"},
  {423, "sched_rr_get_interval_time64"},
  {424, "pidfd_send_signal"},
  {425, "io_uring_setup"},
  {426, "io_uring_enter"},
  {427, "io_uring_register"},
  {428, "open_tree"},
  {429, "move_mount"},
  {430, "fsopen"},
  {431, "fsconfig"},
  {432, "fsmount"},
  {433, "fspick"},
  {434, "pidfd_open"},
  {435, "clone3"},
  {436, "close_range"},
  {437, "openat2"},
  {438, "pidfd_getfd"},
  {439, "faccessat2"},
  {440, "process_madvise"},
  {448, "process_mrelease"},

  {1535, "-sched-"},	// Fake last syscall. Indicates where __schedule runs
  {-1, NULL},		// Must be last
};

// From cat /proc/interrupts on RPi-4B 64-bit
static const NumNamePair IrqNames[] = {
  {241, "BH"},			/* bottom half of an interrupt handler */
  {232, "unused_ipi"},
  {231, "unused_ipi"},
  {230, "wakeup_ipi"},
  {229, "irq_work_ipi"},
  {228, "timer_ipi"},
  {227, "cpu_crash_stop_ipi"},
  {226, "cpu_stop_ipi"},
  {225, "call_func_ipi"},
  {224, "reschedule_ipi"},
  {-1, NULL},		// Must be last
};

// Export this to raw2event.cc, using above value
static const int kTIMER_IRQ_EVENT = 0x05ec;

// Bottom half BH vectors, from include/linux/interrupt.h
static const NumNamePair SoftIrqNames[] = {
  {0, "HI_SOFTIRQ"},
  {1, "TIMER_SOFTIRQ"},
  {2, "NET_TX_SOFTIRQ"},
  {3, "NET_RX_SOFTIRQ"},
  {4, "BLOCK_SOFTIRQ"},
  {5, "IRQ_POLL_SOFTIRQ"},
  {6, "TASKLET_SOFTIRQ"},
  {7, "SCHED_SOFTIRQ"},
  {8, "HRTIMER_SOFTIRQ"},
  {9, "RCU_SOFTIRQ"},

  {-1, NULL},		// Must be last
};

static const NumNamePair TrapNames[] = {
  {0, "ttbr_addr_size_fault"},
  {1, "addr_size_fault_l1"},
  {2, "addr_size_fault_l2"},
  {3, "addr_size_fault_l3"},
  {4, "translation_fault_l0"},
  {5, "translation_fault_l1"},
  {6, "translation_fault_l2"},
  {7, "translation_fault_l3"},
  {8, "unknown_8"},
  {9,  "page_fault"},
  {10, "page_fault"},
  {11, "page_fault"},
  {12, "unknown_12"},
  {13, "page_fault"},
  {14, "page_fault"},
  {15, "page_fault"},
  {16, "sync_ext_abort"},
  {17, "sync_tag_chk_fault"},
  {18, "unknown_18"},
  {19, "unknown_19"},
  {20, "table_walk_l0"},
  {21, "table_walk_l1"},
  {22, "table_walk_l2"},
  {23, "table_walk_l3"},
  {24, "sync_prty_or_ECC_err" },	// Reserved when RAS is implemented
  {25, "unknown_25"},
  {26, "unknown_26"},
  {27, "unknown_27"},
  {28, "prty_err_l0"},	// Reserved when RAS is implemented
  {29, "prty_err_l1"},	// Reserved when RAS is implemented
  {30, "prty_err_l2"},	// Reserved when RAS is implemented
  {31, "prty_err_l3"},	// Reserved when RAS is implemented
  {32, "unknown_32"},
  {33, "alignment_fault"},
  {34, "unknown_34"},
  {35, "unknown_35"},
  {36, "unknown_36"},
  {37, "unknown_37"},
  {38, "unknown_38"},
  {39, "unknown_39"},
  {40, "unknown_40"},
  {41, "unknown_41"},
  {42, "unknown_42"},
  {43, "unknown_43"},
  {44, "unknown_44"},
  {45, "unknown_45"},
  {46, "unknown_46"},
  {47, "unknown_47"},
  {48, "tlb_cnflct_abort"},
  {49, "atmc_hw_updt_fault"},
  {50, "unknown_50"},
  {51, "unknown_51"},
  {52, "lockdown_abort" },
  {53, "unsupported_exclusive" },
  {54, "unknown_54"},
  {55, "unknown_55"},
  {56, "unknown_56"},
  {57, "unknown_57"},
  {58, "unknown_58" },
  {59, "unknown_59"},
  {60, "unknown_60"},
  {61, "section_domain_fault"},
  {62, "page_domain_fault"},
  {63, "unknown_63"},

  {-1, NULL},		// Must be last
};

// This is just the base set. More could be added later
// see linux-4.19.19/tools/include/uapi/asm-generic/errno-base.h
//  linux-4.19.19/include/linux/errno.h
//  linux-4.19.19/include/uapi/linux/errno.h
//  linux-4.19.19/include/uapi/asm-generic/errno.h

static const NumNamePair ErrnoNames[] = {
  {1, "EPERM"},
  {2, "ENOENT"},
  {3, "ESRCH"},
  {4, "EINTR"},
  {5, "EIO"},
  {6, "ENXIO"},
  {7, "E2BIG"},
  {8, "ENOEXEC"},
  {9, "EBADF"},
  {10, "ECHILD"},
  {11, "EAGAIN"},
  {12, "ENOMEM"},
  {13, "EACCES"},
  {14, "EFAULT"},
  {15, "ENOTBLK"},
  {16, "EBUSY"},
  {17, "EEXIST"},
  {18, "EXDEV"},
  {19, "ENODEV"},
  {20, "ENOTDIR"},
  {21, "EISDIR"},
  {22, "EINVAL"},
  {23, "ENFILE"},
  {24, "EMFILE"},
  {25, "ENOTTY"},
  {26, "ETXTBSY"},
  {27, "EFBIG"},
  {28, "ENOSPC"},
  {29, "ESPIPE"},
  {30, "EROFS"},
  {31, "EMLINK"},
  {32, "EPIPE"},
  {33, "EDOM"},
  {34, "ERANGE"},

  {-1, NULL},		// Must be last

};
#endif	// __KUTRACE_CONTROL_NAMES_ANDROID_H__


