/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* api version */
#define API_VERSION 8

/* Determine the block size */
#define FS_STAT_BLOCK_SIZE (m_stat.f_frsize)

/* Type of block count member in stat struct */
#define FS_STAT_COUNT_TYPE fsblkcnt_t

/* Function to determine filesystem stats from fd */
#define FS_STAT_FD fstatvfs(fd, &m_stat) == 0

/* Function to determine filesystem stats from filename */
#define FS_STAT_FN statvfs(fn, &m_stat) == 0

/* Type of block size member in stat struct */
#define FS_STAT_SIZE_TYPE unsigned long

/* Type of second argument to statfs function */
#define FS_STAT_STRUCT struct statvfs

/* true if config.h was included */
#define HAVE_CONFIG_H 1

/* Define to 1 if a SysV or X/Open compatible Curses library is present */
#define HAVE_CURSES 1

/* Define to 1 if library supports color (enhanced functions) */
#define HAVE_CURSES_COLOR 1

/* Define to 1 if library supports X/Open Enhanced functions */
/* #undef HAVE_CURSES_ENHANCED */

/* Define to 1 if <curses.h> is present */
/* #undef HAVE_CURSES_H */

/* Define to 1 if library supports certain obsolete features */
#define HAVE_CURSES_OBSOLETE 1

/* Define to 1 if your C++ compiler has support for C++11. */
/* #undef HAVE_CXX11 */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if the Ncurses library is present */
#define HAVE_NCURSES 1

/* Define to 1 if the NcursesW library is present */
/* #undef HAVE_NCURSESW */

/* Define to 1 if <ncursesw/curses.h> is present */
/* #undef HAVE_NCURSESW_CURSES_H */

/* Define to 1 if <ncursesw.h> is present */
/* #undef HAVE_NCURSESW_H */

/* Define to 1 if <ncurses/curses.h> is present */
/* #undef HAVE_NCURSES_CURSES_H */

/* Define to 1 if <ncurses.h> is present */
#define HAVE_NCURSES_H 1

/* Define to 1 if you have the `posix_memalign' function. */
#define HAVE_POSIX_MEMALIGN 1

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD 1

/* Have PTHREAD_PRIO_INHERIT. */
/* #undef HAVE_PTHREAD_PRIO_INHERIT */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/mount.h> header file. */
/* #undef HAVE_SYS_MOUNT_H */

/* Define to 1 if you have the <sys/param.h> header file. */
/* #undef HAVE_SYS_PARAM_H */

/* Define to 1 if you have the <sys/statfs.h> header file. */
#define HAVE_SYS_STATFS_H 1

/* Define to 1 if you have the <sys/statvfs.h> header file. */
#define HAVE_SYS_STATVFS_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/vfs.h> header file. */
#define HAVE_SYS_VFS_H 1

/* Define to 1 if your C++ library supports the extensions from Technical
   Report 1 */
#define HAVE_TR1 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Support for XMLRPC-C. */
/* #undef HAVE_XMLRPC_C */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Largest L1 cache size we know of should work on all archs. */
#define LT_SMP_CACHE_BYTES 128

/* Name of package */
#define PACKAGE "rtorrent"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "sundell.software@gmail.com"

/* Define to the full name of this package. */
#define PACKAGE_NAME "rtorrent"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "rtorrent 0.9.4"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "rtorrent"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.9.4"

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* enable ipv6 stuff */
/* #undef RAK_USE_INET6 */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define this if the compiler supports the unused attribute */
#define SUPPORT_ATTRIBUTE_UNUSED 1

/* Http user agent */
#define USER_AGENT std::string(PACKAGE "/" VERSION "/") + torrent::version()

/* Use __builtin_popcount. */
#define USE_BUILTIN_POPCOUNT 1

/* Use execinfo.h */
#define USE_EXECINFO 1

/* Enable extra debugging checks. */
/* #undef USE_EXTRA_DEBUG */

/* defined when we allow the use of fd_set's of any size */
#define USE_VARIABLE_FDSET 1

/* Version number of package */
#define VERSION "0.9.4"

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Null-wrapper if unused attribute is unsupported */
#define __UNUSED __attribute__((unused))

/* LibTorrent defined cacheline aligned. */
#define lt_cacheline_aligned __attribute__((__aligned__(LT_SMP_CACHE_BYTES)))
