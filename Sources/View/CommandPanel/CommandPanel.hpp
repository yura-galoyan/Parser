#ifndef COMMAND_PANEL_HPP
#define COMMAND_PANEL_HPP

#include <QWidget>

#include "../../Items/Document.hpp"
#include "../../CommandExecuter/CommandExecuter.hpp"


class QTextEdit;
class QLineEdit;

class CommandPanel : public QWidget
{
    Q_OBJECT
public:
    CommandPanel(std::shared_ptr<Document> doc,  QWidget* parent);

public slots:
    void logCommand();

private:
    QTextEdit* m_pLogger;
    QLineEdit* m_pInputLine;

    std::shared_ptr<Document> m_pDocument;



};


#endif //COMMAND_PANEL_HPP