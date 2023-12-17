TEMPLATE = app
QT += core gui widgets
QMAKE_CXXFLAGS += -std=c++17


SOURCES += Sources/main.cpp \
           Sources/Director/Director.cpp \
           Sources/MainWindow.cpp \
           Sources/View/Canvas/Canvas.cpp \
           Sources/View/Canvas/CanvasGraphicsView/CanvasGraphicsView.cpp \
           Sources/View/MenuBar/FileMenu.cpp \
           Sources/View/MenuBar/OptionsMenu.cpp \
           Sources/View/ToolBar/ToolBar.cpp \
           Sources/View/CommandPanel/CommandPanel.cpp \
           Sources/View/SlidesTab/SlidesTab.cpp \
           Sources/View/SlidesTab/SlideWidget.cpp \
           Sources/View/GraphicItems/GraphicRect.cpp \
           Sources/View/GraphicItems/GraphicsCircle.cpp \
           Sources/View/Visual/IVisualDisplayable.cpp \
           Sources/InputOutput/InputOutputSystem.cpp \
           Sources/Logic/CommandExecuter/CommandExecuter.cpp \
           Sources/Logic/Serializer/TxtDeserializer.cpp \ 
           Sources/Logic/Serializer/TxtSerializer.cpp \ 
           Sources/Logic/ParsingUtils/CommandParser.cpp \
           Sources/Logic/ParsingUtils/Tokenizer.cpp \
           Sources/Logic/Items/Item.cpp \
           Sources/Logic/Items/Circle.cpp \
           Sources/Logic/Items/Document.cpp \
           Sources/Logic/Items/Rect.cpp \
           Sources/Logic/Items/Slide.cpp \
           Sources/Logic/Items/Text.cpp \
           Sources/Logic/Items/Utils/BoundingBox.cpp \
           Sources/Logic/ItemFactories/CircleFactory.cpp \
           Sources/Logic/ItemFactories/ItemFactoryRegistry.cpp \
           Sources/Logic/ItemFactories/RectFactory.cpp \
           Sources/Logic/ItemFactories/TextFactory.cpp \
           Sources/Logic/Commands/AddCommand.cpp \
           Sources/Logic/Commands/AddSlideCommand.cpp \
           Sources/Logic/Commands/DisplayCommand.cpp \
           Sources/Logic/Commands/LoadCommand.cpp \
           Sources/Logic/Commands/RemoveCommand.cpp \
           Sources/Logic/Commands/SaveCommand.cpp \
           Sources/Logic/Commands/DrawCommand.cpp \
           Sources/Logic/CommandFactories/AddCommandFactory.cpp \
           Sources/Logic/CommandFactories/AddSlideCommandFactory.cpp \
           Sources/Logic/CommandFactories/CommandFactoryRegistry.cpp \
           Sources/Logic/CommandFactories/DisplayCommandFactory.cpp \
           Sources/Logic/CommandFactories/LoadCommandFactory.cpp \
           Sources/Logic/CommandFactories/RemoveCommandFactory.cpp \
           Sources/Logic/CommandFactories/SaveCommandFactory.cpp \
           Sources/Logic/CommandFactories/DrawCommandFactory.cpp \
           Sources/Logic/CommandFactories/ChangeSlideCommandFactory.cpp \
           Sources/Logic/Commands/ChangeSlideCommand.cpp

HEADERS += Sources/MainWindow.hpp \
           Sources/Director/Director.hpp \
           Sources/View/Canvas/Canvas.hpp \
           Sources/View/Canvas/CanvasGraphicsView/CanvasGraphicsView.hpp \
           Sources/View/MenuBar/FileMenu.hpp \
           Sources/View/MenuBar/OptionsMenu.hpp \
           Sources/View/Renderer/Renderer.hpp \
           Sources/View/ToolBar/ToolBar.hpp \
           Sources/View/CommandPanel/CommandPanel.hpp \
           Sources/View/SlidesTab/SlidesTab.hpp \
           Sources/View/SlidesTab/SlideWidget.hpp \
           Sources/View/GraphicItems/GraphicRect.hpp \
           Sources/View/GraphicItems/GraphicsCircle.hpp \
           Sources/View/Visual/IVisualDisplayable.hpp \
           Sources/InputOutput/InputOutputSystem.hpp \
           Sources/Logic/CommandExecuter/CommandExecuter.hpp \
           Sources/Logic/Serializer/TxtDeserializer.hpp \ 
           Sources/Logic/Serializer/TxtSerializer.hpp \ 
           Sources/Logic/ParsingUtils/CommandParser.hpp \
           Sources/Logic/ParsingUtils/Tokenizer.hpp \
           Sources/Logic/Items/Item.hpp \
           Sources/Logic/Items/Circle.hpp \
           Sources/Logic/Items/Document.hpp \
           Sources/Logic/Items/Rect.hpp \
           Sources/Logic/Items/Slide.hpp \
           Sources/Logic/Items/Text.hpp \
           Sources/Logic/Items/Utils/BoundingBox.cpp \
           Sources/Logic/ItemFactories/CircleFactory.hpp \
           Sources/Logic/ItemFactories/ItemFactoryRegistry.hpp \
           Sources/Logic/ItemFactories/RectFactory.hpp \
           Sources/Logic/ItemFactories/TextFactory.hpp \
           Sources/Logic/Commands/AddCommand.hpp \
           Sources/Logic/Commands/AddSlideCommand.hpp \
           Sources/Logic/Commands/DisplayCommand.hpp \
           Sources/Logic/Commands/LoadCommand.hpp \
           Sources/Logic/Commands/RemoveCommand.hpp \
           Sources/Logic/Commands/SaveCommand.hpp \
           Sources/Logic/Commands/DrawCommand.hpp \
           Sources/Logic/CommandFactories/AddCommandFactory.hpp \
           Sources/Logic/CommandFactories/AddSlideCommandFactory.hpp \
           Sources/Logic/CommandFactories/CommandFactoryRegistry.hpp \
           Sources/Logic/CommandFactories/DisplayCommandFactory.hpp \
           Sources/Logic/CommandFactories/LoadCommandFactory.hpp \
           Sources/Logic/CommandFactories/RemoveCommandFactory.hpp \
           Sources/Logic/CommandFactories/SaveCommandFactory.hpp \
           Sources/Logic/CommandFactories/DrawCommandFactory.hpp \
           Sources/Logic/CommandFactories/ChangeSlideCommandFactory.hpp \
           Sources/Logic/Commands/ChangeSlideCommand.hpp
