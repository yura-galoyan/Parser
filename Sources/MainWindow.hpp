#ifndef MAIN_WINDOW_HPP
#define MAIN_WINDOW_HPP

#include <QMainWindow>

#include "Logic/Items/Document.hpp"
#include "View/SlidesTab/SlidesTab.hpp"

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget* parent = nullptr);
    virtual void resizeEvent(QResizeEvent *event);

// will be changed
private:
    std::shared_ptr<Document> m_pDocument;
    SlidesTab* m_pSlidesTab;
};


#endif //MAIN_WINDOW_HPP
