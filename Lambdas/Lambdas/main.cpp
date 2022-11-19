#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //---------Lambda functions
//    auto func = [](){
//        qDebug()<<"Hello World \n";
//    };

//    func();

    //-------------Lambda function that takes params
//    [](int a, int b){
//        qDebug()<<"a + b = "<<a+b;
//    }(7,3);


    //-------------Store the lambda variable
//    auto func = [](int a, int b){
//        qDebug()<<"a+b = "<<a+b;
//    };
//    func(7,3);

    //---------------Capturing list Lambda
    int b = 7;
    int c = 33;
    [b,c](){
        qDebug()<<"a + b = "<<c + b;
    }();

    auto func = [&c](){
        qDebug()<<"The value of c in lambda is "<<c<<"\n";
    };

    for(int i = 1;i<5;i++){
        qDebug()<<"The value of c is "<<c<<"\n";
        func();
        c=c+1;
    }
    return a.exec();
}
