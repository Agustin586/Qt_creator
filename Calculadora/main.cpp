#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");           // Setea el estilo de la ventana
    Widget w;
    w.show();
    return a.exec();
}
