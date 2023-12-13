#ifndef DIRECTOR_HPP
#define DIRECTOR_HPP

#include <memory>
#include "../Logic/Items/Document.hpp"

#include <QLabel>
#include <QWidget>

class Director : public QWidget
{
    Q_OBJECT
public:
    static Director& getInstance();
    Document& getDocument();
    void setCanvas(QWidget* canvas);
    QWidget* getCanvas();

    void onDocumentChanged();

signals:
    void refreshDocument();

private:
    Director(QWidget* parent = nullptr) :QWidget(parent){
        
    };
    QLabel* m_pLabel{nullptr};
    Document m_document;
    QWidget* m_pCanvas{nullptr};


private:
    inline static std::unique_ptr<Director> m_director{nullptr};

};
#endif //DIRECTOR_HPP
