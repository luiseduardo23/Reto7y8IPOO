/*
* Autores:
* Juan Camilo Patiño    - Codigo: 1667554
* Luis Eduardo Henao    - Codigo: 1667483
* Jorge Augusto Estacio - Codigo: 1667409
* Nombre: main.cpp
* Descripción: Este es el main del proyecto
* Fecha de creación: 17/05/2017
* Fecha de modificación: 17/05/2017
*/

#include "ventana.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ventana w;
    w.show();

    return a.exec();
}
