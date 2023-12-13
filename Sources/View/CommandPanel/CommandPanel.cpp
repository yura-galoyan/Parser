#include "CommandPanel.hpp"

#include <QVBoxLayout>

#include <QTextEdit>
#include <QLineEdit>

CommandPanel::CommandPanel( QWidget *parent)
    :QWidget(parent)
{
    m_pLogger = new QTextEdit(this);
    m_pLogger->setReadOnly(true);
    m_pInputLine = new QLineEdit(this);
    connect(m_pInputLine,SIGNAL(returnPressed()),SLOT(logCommand()));
    auto vboxLayout = new QVBoxLayout;
    setLayout(vboxLayout);
    layout()->addWidget(m_pLogger);
    layout()->addWidget(m_pInputLine);
    setMaximumHeight(200);
}

void CommandPanel::logCommand(){
    auto text = m_pInputLine->text();


    CommandExecuter m_commandExecuter{};

    m_commandExecuter.setCommand(text.toStdString());

    if(m_commandExecuter.isAppropriateCommand()){
        m_commandExecuter.execute();
    }

    m_pLogger->append(text);
    m_pLogger->append( QString::fromStdString(m_commandExecuter.getLogMessage())  );
    m_pInputLine->clear();
}
