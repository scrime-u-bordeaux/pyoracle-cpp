#include <QApplication>
#include "window.h"
#include <QtGui>

int main(int argc,char *argv[]){

    QApplication app(argc,argv);
    Window window;
    window.show();
    return app.exec();
}
