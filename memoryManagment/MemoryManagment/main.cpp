#include <QCoreApplication>
#include <QDebug>
#include <memory>

#include "house.h"

void do_stuff(){
    //Stack memory
//    House h1(nullptr, "First");
//    h1.print_info();

    //Heap memory
//    House* p_h1 = new House(nullptr,"First");
//    p_h1->print_info();
//    delete p_h1;

    //Unique pointer
    std::unique_ptr<House> up_house_h1 {new House(nullptr,"First")};
    up_house_h1->print_info();

    //Shared pointer
    std::shared_ptr<House> up_house_h2 {new House(nullptr,"Second")};
    up_house_h2->print_info();

    //we re going to create parent pointer and when this is going to be destroyed, it will destroy eery child pointer.

    House* p_parent = new House(nullptr,"Parent");
    House* phouse1 = new House(p_parent, "House1");
    House* phouse2 = new House(phouse1, "House2");

    delete p_parent;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    do_stuff();
    return a.exec();
}
