#include "FileMenu.hpp"

#include <QLabel>

FileMenu::FileMenu(QMenu *parent)
    : QMenu("file", parent)
{

    auto newAction = new QAction("New");
    addAction(newAction);

    auto exitAction = new QAction("exit");
    addAction(exitAction);
}
