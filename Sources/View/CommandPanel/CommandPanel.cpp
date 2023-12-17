#include "CommandPanel.hpp"

#include <QVBoxLayout>

#include <QTextEdit>
#include <QLineEdit>
#include <QKeyEvent>

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
    currCommandIt = logs.begin();
}

void CommandPanel::logCommand(){
    auto text = m_pInputLine->text();
    currentIt = logs.size() + 1;
    logs.push_back(text);
    CommandExecuter m_commandExecuter{};
    m_commandExecuter.setCommand(text.toStdString());

    if(m_commandExecuter.isAppropriateCommand()){
        m_commandExecuter.execute();
    }

    m_pLogger->append(text);
    m_pLogger->append( QString::fromStdString(m_commandExecuter.getLogMessage())  );
    m_pInputLine->clear();
}


void CommandPanel::keyPressEvent(QKeyEvent *event){
    if(event->type() == QEvent::KeyPress){
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        if (keyEvent->key() == Qt::Key_Up)
        {
            --currentIt;
            if(currentIt >= 0)
            {
                m_pInputLine->setText(logs[currentIt]);
                
            }
            else
            {
                ++currentIt;
            }
        }
        if (keyEvent->key() == Qt::Key_Down)
        {
            ++currentIt;
            if(currentIt < logs.size())
            {
                
                m_pInputLine->setText(logs[currentIt]);
            }
            else{
                if(logs.size() + 1 == currentIt)
                {
                    --currentIt;
                }
                m_pInputLine->clear();
            }
        }

    }
}
