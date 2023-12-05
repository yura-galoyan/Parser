#ifndef COMMAND_PANEL_HPP
#define COMMAND_PANEL_HPP

#include <QWidget>

class QTextEdit;
class QLineEdit;

class CommandPanel : public QWidget
{
    Q_OBJECT
public:
    CommandPanel(QWidget* parent);


private:
    QTextEdit* logger;
    QLineEdit* inputLine;




};


#endif //COMMAND_PANEL_HPP