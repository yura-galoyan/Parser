#ifndef MAIN_WINDOW_HPP
#define MAIN_WINDOW_HPP

#include <QMainWindow>

#include "Items/Document.hpp"

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget* parent = nullptr);


// will be changed
private:
    std::shared_ptr<Document> m_pDocument;
};


#endif //MAIN_WINDOW_HPP