#include <QCoreApplication>
#include <QDebug>
# include "animal.h"
#include "laptop.h"
#include "canino.h"

void test(Laptop &machine)
{
    machine.test();
}

void makeLaptops()
{
    Laptop mine(nullptr, "my laptop");
    Laptop yours(nullptr, "your laptop");
    mine.weight = 3;
    yours.weight = 5;

    test(mine);
    test(yours);
}




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Animal cat;
    canino dog;
    Animal fish;
    cat.speak("meow");
    dog.speak("uau uau");
    dog.bark();
    fish.speak("fishhh");

    cat.setObjectName("kitty");
    dog.setObjectName("sabat");
    fish.setObjectName("nemo");


    makeLaptops();

    return a.exec();
}
