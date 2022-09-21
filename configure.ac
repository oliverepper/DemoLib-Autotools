AC_INIT([demo], [0.1], [oliver.epper@gmail.com])

AM_INIT_AUTOMAKE([foreign subdir-objects -Wall -Werror])
AM_PROG_AR

LT_PREREQ()
LT_INIT()

AC_CONFIG_SRCDIR([src/demo_core.c])
AC_CONFIG_FILES([
    Makefile
    demo.pc
])

AC_CONFIG_MACRO_DIRS([m4])

AC_ARG_ENABLE([extra-message],
              [  --enable-extra-message  enable an extra message],
              [extra_msg=${enableval}], [extra_msg=no])

if test "x${extra_msg}" = xyes; then
    AC_DEFINE([EXTRA_MSG], [1], [extra message enabled])
fi

AC_PROG_CC
AC_PROG_CXX

AC_OUTPUT