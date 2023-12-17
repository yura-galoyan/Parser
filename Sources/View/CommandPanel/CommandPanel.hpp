#ifndef COMMAND_PANEL_HPP
#define COMMAND_PANEL_HPP

#include <QWidget>

#include "../../Logic/Items/Document.hpp"
#include "../../Logic/CommandExecuter/CommandExecuter.hpp"


class QTextEdit;
class QLineEdit;

class CommandPanel : public QWidget
{
    Q_OBJECT
public:
    CommandPanel( QWidget* parent = nullptr);

public:
    void keyPressEvent(QKeyEvent *event) override;

public slots:
    void logCommand();

private:
    using LogMsgVector = std::vector<QString>;
    LogMsgVector logs;
    int currentIt{0};
    LogMsgVector::iterator currCommandIt;

private:
    QTextEdit* m_pLogger;
    QLineEdit* m_pInputLine;

};


#endif //COMMAND_PANEL_HPP
