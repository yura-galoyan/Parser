#ifndef DIRECTOR_HPP
#define DIRECTOR_HPP

#include <memory>
#include "../Logic/Items/Document.hpp"

#include <QWidget>

class Director
{
    Q_OBJECT
public:
    static Director& getInstance();
    Document& getDocument();
    void setCanvas(QWidget* canvas);
    QWidget* getCanvas();

signals:
    void drawOnScreen(const Slide& slide,QPaintDevice& device);

private:
    Director() = default;
    Document m_document;
    QWidget* m_pCanvas;


private:
    inline static std::unique_ptr<Director> m_director{nullptr};

};
#endif //DIRECTOR_HPP
