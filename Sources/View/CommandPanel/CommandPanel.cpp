#include "CommandPanel.hpp"

#include <QVBoxLayout>


#include <QTextEdit>
#include <QLineEdit>

CommandPanel::CommandPanel(std::shared_ptr<Document> doc, QWidget *parent)
    : m_pDocument{doc}, QWidget(parent)
{
    m_pLogger = new QTextEdit(this);
    m_pLogger->setMinimumSize(QSize{240,160});
    m_pLogger->setReadOnly(true);
    m_pInputLine = new QLineEdit(this);
    connect(m_pInputLine,SIGNAL(returnPressed()),SLOT(logCommand()));
    setLayout(new QVBoxLayout);
    layout()->addWidget(m_pLogger);
    layout()->addWidget(m_pInputLine);

}

void CommandPanel::logCommand(){
    auto text = m_pInputLine->text();


    CommandExecuter m_commandExecuter{m_pDocument};

    m_commandExecuter.setCommand(text.toStdString());

    if(m_commandExecuter.isAppropriateCommand()){
        m_commandExecuter.execute();
    }

    m_pLogger->append(text);
    m_pLogger->append( QString::fromStdString(m_commandExecuter.getLogMessage())  );
    m_pInputLine->clear();
}