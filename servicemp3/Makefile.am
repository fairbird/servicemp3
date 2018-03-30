AM_CFLAGS = \
	-Wall

AM_CPPFLAGS = \
	@PYTHON_CPPFLAGS@ \
	-include Python.h

AM_CXXFLAGS = \
	-Wall \
	@ENIGMA2_CFLAGS@ \
	@GSTREAMER_CFLAGS@

plugindir = $(libdir)/enigma2/python/Plugins/SystemPlugins/ServiceMP3

plugin_LTLIBRARIES = servicemp3.la

servicemp3_la_SOURCES = \
	servicemp3.cpp \
	servicemp3record.cpp \
	pythonmodule.cpp

servicemp3_la_LDFLAGS = \
	@GSTREAMER_LIBS@ \
	-avoid-version \
	-module \
	-shared
