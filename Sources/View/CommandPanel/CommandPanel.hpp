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

public slots:
    void logCommand();

private:
    QTextEdit* m_pLogger;
    QLineEdit* m_pInputLine;

};


#endif //COMMAND_PANEL_HPP
