TEMPLATE = app
QT += core gui widgets
QMAKE_CXXFLAGS += -std=c++17


SOURCES += Sources/main.cpp \
           Sources/MainWindow.cpp \
           Sources/View/Canvas/Canvas.cpp \
           Sources/View/MenuBar/FileMenu.cpp \
           Sources/View/MenuBar/OptionsMenu.cpp \
           Sources/View/ToolBar/ToolBar.cpp

HEADERS += Sources/MainWindow.hpp \
           Sources/View/Canvas/Canvas.hpp \
           Sources/View/MenuBar/FileMenu.hpp \
           Sources/View/MenuBar/OptionsMenu.hpp \
           Sources/View/ToolBar/ToolBar.hpp
