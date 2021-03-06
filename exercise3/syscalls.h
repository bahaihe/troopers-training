/*
 * Copyright (C) 2016 Tamas K Lengyel
 * ACADEMIC PUBLIC LICENSE
 * For details please read the LICENSE file.
 */

#ifndef SYSCALLS_H
#define SYSCALLS_H

#include <stdint.h>

#define NUMBER_OF_SYSCALLS 398

struct syscall {
    const char* name;
    uint64_t addr;
};

static struct syscall syscalls[NUMBER_OF_SYSCALLS] = {
  { .name = "sys_accept", .addr = 18446744071583067280u },
  { .name = "sys_accept4", .addr = 18446744071583067264u },
  { .name = "sys_access", .addr = 18446744071580576640u },
  { .name = "sys_acct", .addr = 18446744071579750496u },
  { .name = "sys_add_key", .addr = 18446744071581131200u },
  { .name = "sys_adjtimex", .addr = 18446744071579285488u },
  { .name = "sys_alarm", .addr = 18446744071579323344u },
  { .name = "sys_arch_prctl", .addr = 18446744071578919232u },
  { .name = "sys_bdflush", .addr = 18446744071580792688u },
  { .name = "sys_bind", .addr = 18446744071583067104u },
  { .name = "sys_brk", .addr = 18446744071580350976u },
  { .name = "sys_call_table", .addr = 18446744071585141824u },
  { .name = "sys_capget", .addr = 18446744071579304112u },
  { .name = "sys_capset", .addr = 18446744071579304464u },
  { .name = "sys_chdir", .addr = 18446744071580577168u },
  { .name = "sys_chmod", .addr = 18446744071580578016u },
  { .name = "sys_chown", .addr = 18446744071580578384u },
  { .name = "sys_chown16", .addr = 18446744071579719648u },
  { .name = "sys_chroot", .addr = 18446744071580577472u },
  { .name = "sys_clock_adjtime", .addr = 18446744071579400912u },
  { .name = "sys_clock_getres", .addr = 18446744071579400928u },
  { .name = "sys_clock_gettime", .addr = 18446744071579400752u },
  { .name = "sys_clock_nanosleep", .addr = 18446744071579401088u },
  { .name = "sys_clock_settime", .addr = 18446744071579400576u },
  { .name = "sys_clone", .addr = 18446744071579266224u },
  { .name = "sys_close", .addr = 18446744071580574176u },
  { .name = "sys_connect", .addr = 18446744071583067296u },
  { .name = "sys_copyarea", .addr = 18446744071582096336u },
  { .name = "sys_creat", .addr = 18446744071580580032u },
  { .name = "sys_delete_module", .addr = 18446744071579733152u },
  { .name = "sys_dmi_attribute_group", .addr = 18446744071587979008u },
  { .name = "sys_dmi_attribute_groups", .addr = 18446744071587978976u },
  { .name = "sys_dmi_attributes", .addr = 18446744071590255264u },
  { .name = "sys_dmi_bios_date_attr", .addr = 18446744071587980032u },
  { .name = "sys_dmi_bios_vendor_attr", .addr = 18446744071587980160u },
  { .name = "sys_dmi_bios_version_attr", .addr = 18446744071587980096u },
  { .name = "sys_dmi_board_asset_tag_attr", .addr = 18446744071587979392u },
  { .name = "sys_dmi_board_name_attr", .addr = 18446744071587979584u },
  { .name = "sys_dmi_board_serial_attr", .addr = 18446744071587979456u },
  { .name = "sys_dmi_board_vendor_attr", .addr = 18446744071587979648u },
  { .name = "sys_dmi_board_version_attr", .addr = 18446744071587979520u },
  { .name = "sys_dmi_chassis_asset_tag_attr", .addr = 18446744071587979072u },
  { .name = "sys_dmi_chassis_serial_attr", .addr = 18446744071587979136u },
  { .name = "sys_dmi_chassis_type_attr", .addr = 18446744071587979264u },
  { .name = "sys_dmi_chassis_vendor_attr", .addr = 18446744071587979328u },
  { .name = "sys_dmi_chassis_version_attr", .addr = 18446744071587979200u },
  { .name = "sys_dmi_field_show", .addr = 18446744071582924848u },
  { .name = "sys_dmi_modalias_attr", .addr = 18446744071587979040u },
  { .name = "sys_dmi_modalias_show", .addr = 18446744071582925280u },
  { .name = "sys_dmi_product_name_attr", .addr = 18446744071587979904u },
  { .name = "sys_dmi_product_serial_attr", .addr = 18446744071587979776u },
  { .name = "sys_dmi_product_uuid_attr", .addr = 18446744071587979712u },
  { .name = "sys_dmi_product_version_attr", .addr = 18446744071587979840u },
  { .name = "sys_dmi_sys_vendor_attr", .addr = 18446744071587979968u },
  { .name = "sys_dup", .addr = 18446744071580699280u },
  { .name = "sys_dup2", .addr = 18446744071580699008u },
  { .name = "sys_dup3", .addr = 18446744071580698752u },
  { .name = "sys_epoll_create", .addr = 18446744071580849200u },
  { .name = "sys_epoll_create1", .addr = 18446744071580848848u },
  { .name = "sys_epoll_ctl", .addr = 18446744071580849552u },
  { .name = "sys_epoll_pwait", .addr = 18446744071580853040u },
  { .name = "sys_epoll_wait", .addr = 18446744071580852816u },
  { .name = "sys_eventfd", .addr = 18446744071580863952u },
  { .name = "sys_eventfd2", .addr = 18446744071580863840u },
  { .name = "sys_execve", .addr = 18446744071580613216u },
  { .name = "sys_exit", .addr = 18446744071579280192u },
  { .name = "sys_exit_group", .addr = 18446744071579280384u },
  { .name = "sys_faccessat", .addr = 18446744071580576112u },
  { .name = "sys_fadvise64", .addr = 18446744071580160736u },
  { .name = "sys_fadvise64_64", .addr = 18446744071580160176u },
  { .name = "sys_fallocate", .addr = 18446744071580576000u },
  { .name = "sys_fanotify_init", .addr = 18446744071580841072u },
  { .name = "sys_fanotify_mark", .addr = 18446744071580841696u },
  { .name = "sys_fchdir", .addr = 18446744071580577328u },
  { .name = "sys_fchmod", .addr = 18446744071580577744u },
  { .name = "sys_fchmodat", .addr = 18446744071580577872u },
  { .name = "sys_fchown", .addr = 18446744071580578784u },
  { .name = "sys_fchown16", .addr = 18446744071579719744u },
  { .name = "sys_fchownat", .addr = 18446744071580578160u },
  { .name = "sys_fcntl", .addr = 18446744071580653024u },
  { .name = "sys_fdatasync", .addr = 18446744071580769504u },
  { .name = "sys_fgetxattr", .addr = 18446744071580728880u },
  { .name = "sys_fillrect", .addr = 18446744071582094016u },
  { .name = "sys_finit_module", .addr = 18446744071579744112u },
  { .name = "sys_flistxattr", .addr = 18446744071580729328u },
  { .name = "sys_flock", .addr = 18446744071580885424u },
  { .name = "sys_fork", .addr = 18446744071579266160u },
  { .name = "sys_fremovexattr", .addr = 18446744071580729840u },
  { .name = "sys_fsetxattr", .addr = 18446744071580728384u },
  { .name = "sys_fstat", .addr = 18446744071580603344u },
  { .name = "sys_fstatfs", .addr = 18446744071580774320u },
  { .name = "sys_fstatfs64", .addr = 18446744071580774336u },
  { .name = "sys_fsync", .addr = 18446744071580769488u },
  { .name = "sys_ftruncate", .addr = 18446744071580575968u },
  { .name = "sys_futex", .addr = 18446744071579715568u },
  { .name = "sys_futimesat", .addr = 18446744071580771264u },
  { .name = "sys_get_mempolicy", .addr = 18446744071580448848u },
  { .name = "sys_get_robust_list", .addr = 18446744071579711872u },
  { .name = "sys_get_thread_area", .addr = 18446744071578981472u },
  { .name = "sys_getcpu", .addr = 18446744071579358928u },
  { .name = "sys_getcwd", .addr = 18446744071580681920u },
  { .name = "sys_getdents", .addr = 18446744071580659536u },
  { .name = "sys_getdents64", .addr = 18446744071580659792u },
  { .name = "sys_getegid", .addr = 18446744071579353488u },
  { .name = "sys_getegid16", .addr = 18446744071579721584u },
  { .name = "sys_geteuid", .addr = 18446744071579353392u },
  { .name = "sys_geteuid16", .addr = 18446744071579721392u },
  { .name = "sys_getgid", .addr = 18446744071579353440u },
  { .name = "sys_getgid16", .addr = 18446744071579721488u },
  { .name = "sys_getgroups", .addr = 18446744071579428656u },
  { .name = "sys_getgroups16", .addr = 18446744071579720688u },
  { .name = "sys_gethostname", .addr = 18446744071579355888u },
  { .name = "sys_getitimer", .addr = 18446744071579282272u },
  { .name = "sys_getpeername", .addr = 18446744071583067328u },
  { .name = "sys_getpgid", .addr = 18446744071579354256u },
  { .name = "sys_getpgrp", .addr = 18446744071579354368u },
  { .name = "sys_getpid", .addr = 18446744071579353216u },
  { .name = "sys_getppid", .addr = 18446744071579353296u },
  { .name = "sys_getpriority", .addr = 18446744071579349760u },
  { .name = "sys_getresgid", .addr = 18446744071579352656u },
  { .name = "sys_getresgid16", .addr = 18446744071579720352u },
  { .name = "sys_getresuid", .addr = 18446744071579352096u },
  { .name = "sys_getresuid16", .addr = 18446744071579720016u },
  { .name = "sys_getrlimit", .addr = 18446744071579357008u },
  { .name = "sys_getrusage", .addr = 18446744071579357744u },
  { .name = "sys_getsid", .addr = 18446744071579354416u },
  { .name = "sys_getsockname", .addr = 18446744071583067312u },
  { .name = "sys_getsockopt", .addr = 18446744071583067616u },
  { .name = "sys_gettid", .addr = 18446744071579353264u },
  { .name = "sys_gettimeofday", .addr = 18446744071579284960u },
  { .name = "sys_getuid", .addr = 18446744071579353344u },
  { .name = "sys_getuid16", .addr = 18446744071579721296u },
  { .name = "sys_getxattr", .addr = 18446744071580728608u },
  { .name = "sys_imageblit", .addr = 18446744071582099008u },
  { .name = "sys_init_module", .addr = 18446744071579743888u },
  { .name = "sys_inotify_add_watch", .addr = 18446744071580836592u },
  { .name = "sys_inotify_init", .addr = 18446744071580836496u },
  { .name = "sys_inotify_init1", .addr = 18446744071580836368u },
  { .name = "sys_inotify_rm_watch", .addr = 18446744071580837408u },
  { .name = "sys_io_cancel", .addr = 18446744071580873552u },
  { .name = "sys_io_destroy", .addr = 18446744071580872144u },
  { .name = "sys_io_getevents", .addr = 18446744071580873808u },
  { .name = "sys_io_setup", .addr = 18446744071580869616u },
  { .name = "sys_io_submit", .addr = 18446744071580873536u },
  { .name = "sys_ioctl", .addr = 18446744071580658240u },
  { .name = "sys_ioperm", .addr = 18446744071578933184u },
  { .name = "sys_iopl", .addr = 18446744071578933664u },
  { .name = "sys_ioprio_get", .addr = 18446744071581539376u },
  { .name = "sys_ioprio_set", .addr = 18446744071581538624u },
  { .name = "sys_ipc", .addr = 18446744071579404528u },
  { .name = "sys_kcmp", .addr = 18446744071579654496u },
  { .name = "sys_kexec_load", .addr = 18446744071579755024u },
  { .name = "sys_keyctl", .addr = 18446744071581137328u },
  { .name = "sys_kill", .addr = 18446744071579341872u },
  { .name = "sys_lchown", .addr = 18446744071580578592u },
  { .name = "sys_lchown16", .addr = 18446744071579719696u },
  { .name = "sys_lgetxattr", .addr = 18446744071580728752u },
  { .name = "sys_link", .addr = 18446744071580651600u },
  { .name = "sys_link", .addr = 18446744071580651600u },
  { .name = "sys_linkat", .addr = 18446744071580650800u },
  { .name = "sys_listen", .addr = 18446744071583067120u },
  { .name = "sys_listxattr", .addr = 18446744071580729072u },
  { .name = "sys_llistxattr", .addr = 18446744071580729200u },
  { .name = "sys_llseek", .addr = 18446744071580582272u },
  { .name = "sys_lookup_dcookie", .addr = 18446744071581052032u },
  { .name = "sys_lremovexattr", .addr = 18446744071580729680u },
  { .name = "sys_lseek", .addr = 18446744071580581952u },
  { .name = "sys_lsetxattr", .addr = 18446744071580728160u },
  { .name = "sys_lstat", .addr = 18446744071580603328u },
  { .name = "sys_madvise", .addr = 18446744071580305456u },
  { .name = "sys_mbind", .addr = 18446744071580453568u },
  { .name = "sys_memfd_create", .addr = 18446744071580252768u },
  { .name = "sys_migrate_pages", .addr = 18446744071580448368u },
  { .name = "sys_mincore", .addr = 18446744071580333296u },
  { .name = "sys_mkdir", .addr = 18446744071580650000u },
  { .name = "sys_mkdirat", .addr = 18446744071580649776u },
  { .name = "sys_mknod", .addr = 18446744071580649248u },
  { .name = "sys_mknodat", .addr = 18446744071580648720u },
  { .name = "sys_mlock", .addr = 18446744071580338704u },
  { .name = "sys_mlockall", .addr = 18446744071580339104u },
  { .name = "sys_mmap", .addr = 18446744071578943264u },
  { .name = "sys_mmap_pgoff", .addr = 18446744071580346688u },
  { .name = "sys_modify_ldt", .addr = 18446744071578934976u },
  { .name = "sys_mount", .addr = 18446744071580716624u },
  { .name = "sys_move_pages", .addr = 18446744071580503072u },
  { .name = "sys_mprotect", .addr = 18446744071580359024u },
  { .name = "sys_mq_getsetattr", .addr = 18446744071581117648u },
  { .name = "sys_mq_notify", .addr = 18446744071581116640u },
  { .name = "sys_mq_open", .addr = 18446744071581113200u },
  { .name = "sys_mq_timedreceive", .addr = 18446744071581115280u },
  { .name = "sys_mq_timedsend", .addr = 18446744071581114384u },
  { .name = "sys_mq_unlink", .addr = 18446744071581114000u },
  { .name = "sys_mremap", .addr = 18446744071580362528u },
  { .name = "sys_msgctl", .addr = 18446744071581085920u },
  { .name = "sys_msgget", .addr = 18446744071581085840u },
  { .name = "sys_msgrcv", .addr = 18446744071581088496u },
  { .name = "sys_msgsnd", .addr = 18446744071581087040u },
  { .name = "sys_msync", .addr = 18446744071580363824u },
  { .name = "sys_munlock", .addr = 18446744071580338992u },
  { .name = "sys_munlockall", .addr = 18446744071580339488u },
  { .name = "sys_munmap", .addr = 18446744071580353888u },
  { .name = "sys_name_to_handle_at", .addr = 18446744071580936992u },
  { .name = "sys_nanosleep", .addr = 18446744071579417728u },
  { .name = "sys_newfstat", .addr = 18446744071580603408u },
  { .name = "sys_newfstatat", .addr = 18446744071580603392u },
  { .name = "sys_newlstat", .addr = 18446744071580603376u },
  { .name = "sys_newstat", .addr = 18446744071580603360u },
  { .name = "sys_newuname", .addr = 18446744071579354784u },
  { .name = "sys_ni_syscall", .addr = 18446744071579404528u },
  { .name = "sys_nice", .addr = 18446744071579457968u },
  { .name = "sys_old_getrlimit", .addr = 18446744071579356304u },
  { .name = "sys_old_readdir", .addr = 18446744071580659376u },
  { .name = "sys_oldumount", .addr = 18446744071580710816u },
  { .name = "sys_olduname", .addr = 18446744071579355216u },
  { .name = "sys_open", .addr = 18446744071580579984u },
  { .name = "sys_open_by_handle_at", .addr = 18446744071580938192u },
  { .name = "sys_openat", .addr = 18446744071580580016u },
  { .name = "sys_pause", .addr = 18446744071579344768u },
  { .name = "sys_pciconfig_iobase", .addr = 18446744071579404528u },
  { .name = "sys_pciconfig_read", .addr = 18446744071579404528u },
  { .name = "sys_pciconfig_write", .addr = 18446744071579404528u },
  { .name = "sys_perf_event_open", .addr = 18446744071580117312u },
  { .name = "sys_perf_refcount_enter", .addr = 18446744071590096612u },
  { .name = "sys_perf_refcount_exit", .addr = 18446744071590096608u },
  { .name = "sys_personality", .addr = 18446744071579268080u },
  { .name = "sys_pipe", .addr = 18446744071580618640u },
  { .name = "sys_pipe2", .addr = 18446744071580618480u },
  { .name = "sys_pivot_root", .addr = 18446744071580716976u },
  { .name = "sys_poll", .addr = 18446744071580666272u },
  { .name = "sys_ppoll", .addr = 18446744071580666512u },
  { .name = "sys_prctl", .addr = 18446744071579357872u },
  { .name = "sys_pread64", .addr = 18446744071580586240u },
  { .name = "sys_preadv", .addr = 18446744071580587984u },
  { .name = "sys_prlimit64", .addr = 18446744071579357104u },
  { .name = "sys_process_vm_readv", .addr = 18446744071580392512u },
  { .name = "sys_process_vm_writev", .addr = 18446744071580392544u },
  { .name = "sys_pselect6", .addr = 18446744071580664272u },
  { .name = "sys_ptrace", .addr = 18446744071579309984u },
  { .name = "sys_pwrite64", .addr = 18446744071580586400u },
  { .name = "sys_pwritev", .addr = 18446744071580588176u },
  { .name = "sys_quotactl", .addr = 18446744071580956976u },
  { .name = "sys_read", .addr = 18446744071580585920u },
  { .name = "sys_readahead", .addr = 18446744071580196384u },
  { .name = "sys_readlink", .addr = 18446744071580603728u },
  { .name = "sys_readlinkat", .addr = 18446744071580603424u },
  { .name = "sys_readv", .addr = 18446744071580587568u },
  { .name = "sys_reboot", .addr = 18446744071579425360u },
  { .name = "sys_recv", .addr = 18446744071583067392u },
  { .name = "sys_recvfrom", .addr = 18446744071583067376u },
  { .name = "sys_recvmmsg", .addr = 18446744071583069200u },
  { .name = "sys_recvmsg", .addr = 18446744071583068608u },
  { .name = "sys_remap_file_pages", .addr = 18446744071580300912u },
  { .name = "sys_removexattr", .addr = 18446744071580729504u },
  { .name = "sys_rename", .addr = 18446744071580652256u },
  { .name = "sys_renameat", .addr = 18446744071580652240u },
  { .name = "sys_renameat2", .addr = 18446744071580652224u },
  { .name = "sys_request_key", .addr = 18446744071581131712u },
  { .name = "sys_restart_syscall", .addr = 18446744071579339280u },
  { .name = "sys_rmdir", .addr = 18446744071580650224u },
  { .name = "sys_rt_sigaction", .addr = 18446744071579343792u },
  { .name = "sys_rt_sigpending", .addr = 18446744071579340144u },
  { .name = "sys_rt_sigprocmask", .addr = 18446744071579339792u },
  { .name = "sys_rt_sigqueueinfo", .addr = 18446744071579341968u },
  { .name = "sys_rt_sigreturn", .addr = 18446744071578922928u },
  { .name = "sys_rt_sigsuspend", .addr = 18446744071579344960u },
  { .name = "sys_rt_sigtimedwait", .addr = 18446744071579341856u },
  { .name = "sys_rt_tgsigqueueinfo", .addr = 18446744071579342000u },
  { .name = "sys_sched_get_priority_max", .addr = 18446744071579459968u },
  { .name = "sys_sched_get_priority_min", .addr = 18446744071579460032u },
  { .name = "sys_sched_getaffinity", .addr = 18446744071579459680u },
  { .name = "sys_sched_getattr", .addr = 18446744071579459072u },
  { .name = "sys_sched_getparam", .addr = 18446744071579458864u },
  { .name = "sys_sched_getscheduler", .addr = 18446744071579458752u },
  { .name = "sys_sched_rr_get_interval", .addr = 18446744071579460096u },
  { .name = "sys_sched_setaffinity", .addr = 18446744071579464288u },
  { .name = "sys_sched_setattr", .addr = 18446744071579458352u },
  { .name = "sys_sched_setparam", .addr = 18446744071579458320u },
  { .name = "sys_sched_setscheduler", .addr = 18446744071579458288u },
  { .name = "sys_sched_yield", .addr = 18446744071579459808u },
  { .name = "sys_select", .addr = 18446744071580664032u },
  { .name = "sys_semctl", .addr = 18446744071581098720u },
  { .name = "sys_semget", .addr = 18446744071581098608u },
  { .name = "sys_semop", .addr = 18446744071581099360u },
  { .name = "sys_semtimedop", .addr = 18446744071581099344u },
  { .name = "sys_send", .addr = 18446744071583067360u },
  { .name = "sys_sendfile", .addr = 18446744071580588784u },
  { .name = "sys_sendfile64", .addr = 18446744071580588896u },
  { .name = "sys_sendmmsg", .addr = 18446744071583068448u },
  { .name = "sys_sendmsg", .addr = 18446744071583068064u },
  { .name = "sys_sendto", .addr = 18446744071583067344u },
  { .name = "sys_set_mempolicy", .addr = 18446744071580448256u },
  { .name = "sys_set_robust_list", .addr = 18446744071579711808u },
  { .name = "sys_set_thread_area", .addr = 18446744071578981312u },
  { .name = "sys_set_tid_address", .addr = 18446744071579264960u },
  { .name = "sys_setdomainname", .addr = 18446744071579356032u },
  { .name = "sys_setfsgid", .addr = 18446744071579353024u },
  { .name = "sys_setfsgid16", .addr = 18446744071579720656u },
  { .name = "sys_setfsuid", .addr = 18446744071579352816u },
  { .name = "sys_setfsuid16", .addr = 18446744071579720624u },
  { .name = "sys_setgid", .addr = 18446744071579350672u },
  { .name = "sys_setgid16", .addr = 18446744071579719840u },
  { .name = "sys_setgroups", .addr = 18446744071579428944u },
  { .name = "sys_setgroups16", .addr = 18446744071579720928u },
  { .name = "sys_sethostname", .addr = 18446744071579355616u },
  { .name = "sys_setitimer", .addr = 18446744071579283152u },
  { .name = "sys_setns", .addr = 18446744071579418784u },
  { .name = "sys_setpgid", .addr = 18446744071579353808u },
  { .name = "sys_setpriority", .addr = 18446744071579349152u },
  { .name = "sys_setregid", .addr = 18446744071579350320u },
  { .name = "sys_setregid16", .addr = 18446744071579719792u },
  { .name = "sys_setresgid", .addr = 18446744071579352256u },
  { .name = "sys_setresgid16", .addr = 18446744071579720288u },
  { .name = "sys_setresuid", .addr = 18446744071579351584u },
  { .name = "sys_setresuid16", .addr = 18446744071579719952u },
  { .name = "sys_setreuid", .addr = 18446744071579350880u },
  { .name = "sys_setreuid16", .addr = 18446744071579719872u },
  { .name = "sys_setrlimit", .addr = 18446744071579357584u },
  { .name = "sys_setsid", .addr = 18446744071579354528u },
  { .name = "sys_setsockopt", .addr = 18446744071583067408u },
  { .name = "sys_settimeofday", .addr = 18446744071579285296u },
  { .name = "sys_setuid", .addr = 18446744071579351312u },
  { .name = "sys_setuid16", .addr = 18446744071579719920u },
  { .name = "sys_setxattr", .addr = 18446744071580727936u },
  { .name = "sys_sgetmask", .addr = 18446744071579344592u },
  { .name = "sys_shmat", .addr = 18446744071581106240u },
  { .name = "sys_shmctl", .addr = 18446744071581104400u },
  { .name = "sys_shmdt", .addr = 18446744071581106288u },
  { .name = "sys_shmget", .addr = 18446744071581104320u },
  { .name = "sys_shutdown", .addr = 18446744071583067808u },
  { .name = "sys_sigaltstack", .addr = 18446744071579342496u },
  { .name = "sys_signal", .addr = 18446744071579344688u },
  { .name = "sys_signalfd", .addr = 18446744071580856416u },
  { .name = "sys_signalfd4", .addr = 18446744071580855984u },
  { .name = "sys_sigpending", .addr = 18446744071579343424u },
  { .name = "sys_sigprocmask", .addr = 18446744071579343568u },
  { .name = "sys_sigsuspend", .addr = 18446744071579345120u },
  { .name = "sys_socket", .addr = 18446744071583066368u },
  { .name = "sys_socketcall", .addr = 18446744071583069392u },
  { .name = "sys_socketpair", .addr = 18446744071583066560u },
  { .name = "sys_splice", .addr = 18446744071580765760u },
  { .name = "sys_spu_create", .addr = 18446744071579404528u },
  { .name = "sys_spu_run", .addr = 18446744071579404528u },
  { .name = "sys_ssetmask", .addr = 18446744071579344624u },
  { .name = "sys_stat", .addr = 18446744071580603312u },
  { .name = "sys_statfs", .addr = 18446744071580774288u },
  { .name = "sys_statfs64", .addr = 18446744071580774304u },
  { .name = "sys_stime", .addr = 18446744071579284880u },
  { .name = "sys_subpage_prot", .addr = 18446744071579404528u },
  { .name = "sys_swapoff", .addr = 18446744071580411184u },
  { .name = "sys_swapon", .addr = 18446744071580400976u },
  { .name = "sys_symlink", .addr = 18446744071580650576u },
  { .name = "sys_symlinkat", .addr = 18446744071580650336u },
  { .name = "sys_sync", .addr = 18446744071580769120u },
  { .name = "sys_sync_file_range", .addr = 18446744071580769536u },
  { .name = "sys_sync_file_range2", .addr = 18446744071580769872u },
  { .name = "sys_syncfs", .addr = 18446744071580769360u },
  { .name = "sys_sysctl", .addr = 18446744071579303168u },
  { .name = "sys_sysfs", .addr = 18446744071580700304u },
  { .name = "sys_sysinfo", .addr = 18446744071579359024u },
  { .name = "sys_syslog", .addr = 18446744071579605440u },
  { .name = "sys_table", .addr = 18446744071587741856u },
  { .name = "sys_tee", .addr = 18446744071580767552u },
  { .name = "sys_tgkill", .addr = 18446744071579341888u },
  { .name = "sys_time", .addr = 18446744071579284800u },
  { .name = "sys_timer_create", .addr = 18446744071579397808u },
  { .name = "sys_timer_delete", .addr = 18446744071579399872u },
  { .name = "sys_timer_getoverrun", .addr = 18446744071579399296u },
  { .name = "sys_timer_gettime", .addr = 18446744071579399040u },
  { .name = "sys_timer_settime", .addr = 18446744071579399376u },
  { .name = "sys_timerfd_create", .addr = 18446744071580860640u },
  { .name = "sys_timerfd_gettime", .addr = 18446744071580861104u },
  { .name = "sys_timerfd_settime", .addr = 18446744071580860944u },
  { .name = "sys_times", .addr = 18446744071579353712u },
  { .name = "sys_tkill", .addr = 18446744071579341920u },
  { .name = "sys_tracepoint_refcount", .addr = 18446744071590075044u },
  { .name = "sys_truncate", .addr = 18446744071580575936u },
  { .name = "sys_tz", .addr = 18446744071589747796u },
  { .name = "sys_umask", .addr = 18446744071579357824u },
  { .name = "sys_umount", .addr = 18446744071580710528u },
  { .name = "sys_uname", .addr = 18446744071579355008u },
  { .name = "sys_unlink", .addr = 18446744071580650304u },
  { .name = "sys_unlinkat", .addr = 18446744071580650256u },
  { .name = "sys_unshare", .addr = 18446744071579266256u },
  { .name = "sys_uselib", .addr = 18446744071580610480u },
  { .name = "sys_ustat", .addr = 18446744071580774576u },
  { .name = "sys_utime", .addr = 18446744071580770992u },
  { .name = "sys_utimensat", .addr = 18446744071580771120u },
  { .name = "sys_utimes", .addr = 18446744071580771456u },
  { .name = "sys_vfork", .addr = 18446744071579266192u },
  { .name = "sys_vhangup", .addr = 18446744071580580064u },
  { .name = "sys_vm86", .addr = 18446744071579404528u },
  { .name = "sys_vm86old", .addr = 18446744071579404528u },
  { .name = "sys_vmsplice", .addr = 18446744071580765152u },
  { .name = "sys_wait4", .addr = 18446744071579280816u },
  { .name = "sys_waitid", .addr = 18446744071579280448u },
  { .name = "sys_waitpid", .addr = 18446744071579281040u },
  { .name = "sys_write", .addr = 18446744071580586080u },
  { .name = "sys_writev", .addr = 18446744071580587776u }
};

#endif
