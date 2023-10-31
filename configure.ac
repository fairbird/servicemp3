AC_INIT([servicemp3], [0.1], [])
AM_INIT_AUTOMAKE([subdir-objects foreign dist-bzip2 no-define tar-pax])
AC_CONFIG_MACRO_DIR([m4])
LT_INIT

AC_PROG_CC
AC_PROG_CXX
AM_PATH_PYTHON
AX_PYTHON_DEVEL
AC_LANG(C++)

PKG_CHECK_MODULES(ENIGMA2, enigma2)
PKG_CHECK_MODULES(GSTREAMER, gstreamer-1.0 gstreamer-pbutils-1.0)

AC_DEFINE([DEBUG])

AC_CONFIG_FILES([
Makefile
servicemp3/Makefile
plugin/Makefile
])
AC_OUTPUT
