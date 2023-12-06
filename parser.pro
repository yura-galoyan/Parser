TEMPLATE = app
QT += core gui widgets
QMAKE_CXXFLAGS += -std=c++17


SOURCES += Sources/main.cpp \
           Sources/MainWindow.cpp \
           Sources/View/Canvas/Canvas.cpp \
           Sources/View/Canvas/CanvasGraphicsView/CanvasGraphicsView.cpp \
           Sources/View/MenuBar/FileMenu.cpp \
           Sources/View/MenuBar/OptionsMenu.cpp \
           Sources/View/ToolBar/ToolBar.cpp \
           Sources/View/CommandPanel/CommandPanel.cpp \
           Sources/View/SlidesTab/SlidesTab.cpp \
           Sources/CommandExecuter/CommandExecuter.cpp \
           Sources/Serializer/TxtDeserializer.cpp \ 
           Sources/Serializer/TxtSerializer.cpp \ 
           Sources/ParsingUtils/CommandParser.cpp \
           Sources/ParsingUtils/Tokenizer.cpp \
           Sources/Items/Item.cpp \
           Sources/Items/Circle.cpp \
           Sources/Items/Document.cpp \
           Sources/Items/Rect.cpp \
           Sources/Items/Slide.cpp \
           Sources/ItemFactories/CircleFactory.cpp \
           Sources/ItemFactories/ItemFactoryRegistry.cpp \
           Sources/ItemFactories/RectFactory.cpp \
           Sources/InputOutput/InputOutputSystem.cpp \
           Sources/Commands/AddCommand.cpp \
           Sources/Commands/AddSlideCommand.cpp \
           Sources/Commands/DisplayCommand.cpp \
           Sources/Commands/LoadCommand.cpp \
           Sources/Commands/RemoveCommand.cpp \
           Sources/Commands/SaveCommand.cpp \
           Sources/CommandFactories/AddCommandFactory.cpp \
           Sources/CommandFactories/AddSlideCommandFactory.cpp \
           Sources/CommandFactories/CommandFactoryRegistry.cpp \
           Sources/CommandFactories/DisplayCommandFactory.cpp \
           Sources/CommandFactories/LoadCommandFactory.cpp \
           Sources/CommandFactories/RemoveCommandFactory.cpp \
           Sources/CommandFactories/SaveCommandFactory.cpp \

HEADERS += Sources/MainWindow.hpp \
           Sources/View/Canvas/Canvas.hpp \
           Sources/View/Canvas/CanvasGraphicsView/CanvasGraphicsView.hpp \
           Sources/View/MenuBar/FileMenu.hpp \
           Sources/View/MenuBar/OptionsMenu.hpp \
           Sources/View/ToolBar/ToolBar.hpp \
           Sources/View/CommandPanel/CommandPanel.hpp \
           Sources/View/SlidesTab/SlidesTab.hpp \
           Sources/CommandExecuter/CommandExecuter.hpp \
           Sources/Serializer/TxtDeserializer.hpp \ 
           Sources/Serializer/TxtSerializer.hpp \ 
           Sources/ParsingUtils/CommandParser.hpp \
           Sources/ParsingUtils/Tokenizer.hpp \
           Sources/Items/Item.hpp \
           Sources/Items/Circle.hpp \
           Sources/Items/Document.hpp \
           Sources/Items/Rect.hpp \
           Sources/Items/Slide.hpp \
           Sources/ItemFactories/CircleFactory.hpp \
           Sources/ItemFactories/ItemFactoryRegistry.hpp \
           Sources/ItemFactories/RectFactory.hpp \
           Sources/InputOutput/InputOutputSystem.hpp \
           Sources/Commands/AddCommand.hpp \
           Sources/Commands/AddSlideCommand.hpp \
           Sources/Commands/DisplayCommand.hpp \
           Sources/Commands/LoadCommand.hpp \
           Sources/Commands/RemoveCommand.hpp \
           Sources/Commands/SaveCommand.hpp \
           Sources/CommandFactories/AddCommandFactory.hpp \
           Sources/CommandFactories/AddSlideCommandFactory.hpp \
           Sources/CommandFactories/CommandFactoryRegistry.hpp \
           Sources/CommandFactories/DisplayCommandFactory.hpp \
           Sources/CommandFactories/LoadCommandFactory.hpp \
           Sources/CommandFactories/RemoveCommandFactory.hpp \
           Sources/CommandFactories/SaveCommandFactory.hpp \
