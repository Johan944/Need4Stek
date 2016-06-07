QT += core gui widgets

TARGET = v_repExtCustomUI
TEMPLATE = lib

DEFINES -= UNICODE
DEFINES += QT_COMPIL
# DEFINES += DEBUG
CONFIG += shared debug_and_release
INCLUDEPATH += "../include"

*-msvc* {
	QMAKE_CXXFLAGS += -O2
	QMAKE_CXXFLAGS += -W3
}
*-g++*|*clang* {
	QMAKE_CXXFLAGS += -O3 -Wno-unused-parameter
	QMAKE_CFLAGS += -O3 -Wno-unused-parameter
}

win32 {
    DEFINES += WIN_VREP
	INCLUDEPATH += "c:/boost_1_54_0"
}

macx {
    DEFINES += MAC_VREP
    INCLUDEPATH += "/usr/local/Cellar/boost/1.60.0_1/include/"
}

unix:!macx {
    DEFINES += LIN_VREP
}

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}

HEADERS += \
    v_repExtCustomUI.h \
    ../include/v_repLib.h \
    stubs.h \
    UIFunctions.h \
    UIProxy.h \
    widgets/Button.h \
    widgets/Checkbox.h \
    widgets/Combobox.h \
    widgets/Edit.h \
    widgets/Event.h \
    widgets/Group.h \
    widgets/HSlider.h \
    widgets/Image.h \
    widgets/Label.h \
    widgets/LayoutWidget.h \
    widgets/Radiobutton.h \
    widgets/Slider.h \
    widgets/Spinbox.h \
    widgets/Tabs.h \
    widgets/VSlider.h \
    widgets/Widget.h \
    widgets/Window.h \
    LuaCallbackFunction.h \
    Proxy.h \
    XMLUtils.h \
    tinyxml2.h

SOURCES += \
    v_repExtCustomUI.cpp \
    ../common/v_repLib.cpp \
    stubs.cpp \
    UIFunctions.cpp \
    UIProxy.cpp \
    widgets/Button.cpp \
    widgets/Checkbox.cpp \
    widgets/Combobox.cpp \
    widgets/Edit.cpp \
    widgets/Event.cpp \
    widgets/Group.cpp \
    widgets/HSlider.cpp \
    widgets/Image.cpp \
    widgets/Label.cpp \
    widgets/LayoutWidget.cpp \
    widgets/Radiobutton.cpp \
    widgets/Slider.cpp \
    widgets/Spinbox.cpp \
    widgets/Tabs.cpp \
    widgets/VSlider.cpp \
    widgets/Widget.cpp \
    widgets/Window.cpp \
    LuaCallbackFunction.cpp \
    Proxy.cpp \
    XMLUtils.cpp \
    tinyxml2.cpp


