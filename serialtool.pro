QT = gui core
CONFIG += qt \
 warn_on \
 console \
 staticlib \
 build_all \
 qtestlib \
 lib_bundle \
 app_bundle \
 debug \
 -nomake
DESTDIR = bin
OBJECTS_DIR = build
MOC_DIR = build
UI_DIR = build
SOURCES = src/comtoolmain.cpp src/serialtool.cpp
FORMS += ui/serialtool.ui
RESOURCES += ui/myresource.qrc
HEADERS += src/serialtool.h build/myqcombobox.h build/myqlineedit.h
TEMPLATE = app
