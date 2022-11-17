#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{
    connect(&m_timer,&QTimer::timeout, this, &Test::timeout);
    m_timer.setInterval(1000);
    count = 0;
    m_timer.start();


}

void Test::timeout()
{
    qInfo()<<"Testing timer";
    count++;
    if(count >= 3){
        m_timer.stop();
    }
}
