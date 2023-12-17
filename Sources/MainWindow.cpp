#include "MainWindow.hpp"

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMenuBar>


#include "View/Canvas/Canvas.hpp"
#include "Director/Director.hpp"


#include "View/MenuBar/OptionsMenu.hpp"
#include "View/MenuBar/FileMenu.hpp"
#include "View/CommandPanel/CommandPanel.hpp"
#include "View/ToolBar/ToolBar.hpp"
#include "View/Renderer/Renderer.hpp"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), m_pDocument{std::make_shared<Document>()}
{
    setCentralWidget(new QWidget);

    auto qvbox = new QVBoxLayout;
    auto qhbox = new QHBoxLayout;

    auto toolBar = new ToolBar;

    m_pSlidesTab = new SlidesTab;

    auto pMenuBar = new QMenuBar;
    auto pFileMenu = new FileMenu;
    auto pOptionsMenu = new OptionsMenu;

    auto canvas = new Canvas;

    auto commandPanel = new CommandPanel;

    Director::getInstance().setMainWindow(this);
    Director::getInstance().setCanvas(canvas);
    
    connect(&Director::getInstance(), SIGNAL(refreshDocument()),
     m_pSlidesTab, SLOT(refreshTabs()));

    pMenuBar->addMenu(pFileMenu);
    pMenuBar->addMenu(pOptionsMenu);
    setMenuBar(pMenuBar);

    addToolBar(toolBar);

    centralWidget()->setLayout(qvbox);


    auto canvasBox = new QVBoxLayout;
    canvasBox->addWidget(canvas);

    qhbox->addWidget(m_pSlidesTab);
    qhbox->addLayout(canvasBox);

    qvbox->addLayout(qhbox);
    qvbox->addWidget(commandPanel);
    
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    Director::getInstance().onDocumentChanged();
    QMainWindow::resizeEvent(event);
}
