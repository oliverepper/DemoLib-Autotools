ACLOCAL_AMFLAGS = -I m4

bin_PROGRAMS = demo
demo_SOURCES = src/demo.cpp
demo_CPPFLAGS = -Iinclude -std=c++17
demo_LDADD = libdemo_cpp.la

lib_LTLIBRARIES = libdemo.la libdemo_cpp.la
libdemo_la_SOURCES = src/demo_core.c
libdemo_la_CFLAGS = -Iinclude

libdemo_cpp_la_SOURCES = src/demo_core_cpp.cpp
libdemo_cpp_la_CPPFLAGS = -Iinclude -std=c++17
libdemo_cpp_la_LIBADD = libdemo.la

include_HEADERS = include/demo.h include/demo_cpp.hpp
pkginclude_HEADERS = include/demo/demo_types.h

pkgconfigdir = ${libdir}/pkgconfig
pkgconfig_DATA = demo.pc