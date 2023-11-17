#include "MainWindow.hpp"

#include <QVBoxLayout>
#include <QMenuBar>


#include "View/Canvas/Canvas.hpp"


#include "View/MenuBar/OptionsMenu.hpp"
#include "View/MenuBar/FileMenu.hpp"

#include "View/ToolBar/ToolBar.hpp"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setCentralWidget(new QWidget);
    centralWidget()->setLayout(new QVBoxLayout);


    setMenuBar(new QMenuBar);
    menuBar()->addMenu(new FileMenu);
    menuBar()->addMenu(new OptionsMenu);
    
    auto toolBar = new ToolBar;
    addToolBar(toolBar);
    
    auto canvas = new Canvas;

    centralWidget()->layout()->addWidget(canvas);

}
