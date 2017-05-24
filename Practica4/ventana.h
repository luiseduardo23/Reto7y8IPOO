/*
* Autores:
* Juan Camilo Patiño    - Codigo: 1667554
* Luis Eduardo Henao    - Codigo: 1667483
* Jorge Augusto Estacio - Codigo: 1667409
* Nombre: Ventana.h
* Descripción: Este archivo contiene las definiciones de la clase Ventana.
* Fecha de creación: 17/05/2017
* Fecha de modificación: 17/05/2017
*/

#ifndef VENTANA_H
#define VENTANA_H

#include <QMainWindow>
#include "producto.h"
#include <QVector>

namespace Ui {
class Ventana;
}

class Ventana : public QMainWindow
{
    Q_OBJECT

public:
    explicit Ventana(QWidget *parent = 0);
    ~Ventana();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Ventana *ui;
   QVector<Producto*> listaProducto;
};

#endif // VENTANA_H
