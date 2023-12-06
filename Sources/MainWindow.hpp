#ifndef MAIN_WINDOW_HPP
#define MAIN_WINDOW_HPP

#include <QMainWindow>

#include "Items/Document.hpp"
#include "View/SlidesTab/SlidesTab.hpp"

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget* parent = nullptr);


// will be changed
private:
    std::shared_ptr<Document> m_pDocument;
    SlidesTab* m_pSlidesTab;


};


#endif //MAIN_WINDOW_HPP