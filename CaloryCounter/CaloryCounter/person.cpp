#include "person.h"

Person::Person(QObject *parent)
    : QObject{parent}
{

}


void Person::setWeight(double weight)
{
    if(m_weight != weight){
        m_weight = weight;
        emit weightChanged();
    }
}
