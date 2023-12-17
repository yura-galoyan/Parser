#ifndef DIRECTOR_HPP
#define DIRECTOR_HPP

#include <QWidget>
#include <memory>
#include <QLabel>


#include "../Logic/Items/Document.hpp"

class MainWindow;
class Director : public QWidget
{
    Q_OBJECT
public:
    static Director& getInstance();
    Document& getDocument();

    void setCanvas(QWidget* canvas);
    QWidget* getCanvas();

    void setMainWindow(MainWindow* window);
    MainWindow* getMainWindow();

    void onDocumentChanged();

signals:
    void refreshDocument();

private:
    Director(QWidget* parent = nullptr);

private:
    QLabel* m_pLabel{nullptr};
    std::shared_ptr<Document> m_document;

    MainWindow* m_pWindow;
    QWidget* m_pCanvas{nullptr};

private:
    

private:
    inline static std::unique_ptr<Director> m_director{nullptr};

};
#endif //DIRECTOR_HPP
