#include "CommandPanel.hpp"

#include <QVBoxLayout>
#include <QVBoxLayout>

#include <QTextEdit>
#include <QLineEdit>

CommandPanel::CommandPanel(QWidget *parent)
    : QWidget(parent)
{
    logger = new QTextEdit(this);

    logger->setMinimumSize(QSize{240,160});

    inputLine = new QLineEdit(this);

    setLayout(new QVBoxLayout);

    layout()->addWidget(logger);
    layout()->addWidget(inputLine);

}
