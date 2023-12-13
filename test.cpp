#include <iostream>
#include <memory>

class Base{
public:
    virtual void foo() {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};

class iShape{
public:
    virtual void something() {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};


class VisualComponent{
public:
    virtual void draw() {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};


class RectShape : public iShape, public VisualComponent {
public:
    virtual void something(){
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    virtual void draw() {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};

int main(){

    iShape* d1 = new RectShape;

    VisualComponent* d2 = dynamic_cast<VisualComponent*>(d1);

    d2->draw();



}   