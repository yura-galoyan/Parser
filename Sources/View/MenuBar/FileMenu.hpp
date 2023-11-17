#ifndef OPTIONS_BAR_HPP
#define OPTIONS_BAR_HPP

#include <QWidget>
#include <QMenu>

class FileMenu : public QMenu
{
public:
    FileMenu(QMenu* parent = nullptr);
};


#endif //OPTIONS_BAR_HPP