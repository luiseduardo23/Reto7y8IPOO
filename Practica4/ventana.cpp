/*
* Autores:
* Juan Camilo Patiño    - Codigo: 1667554
* Luis Eduardo Henao    - Codigo: 1667483
* Jorge Augusto Estacio - Codigo: 1667409
* Nombre: ventana.cpp
* Descripción: Este archivo contiene el constructor de la clase Ventana.
* Fecha de creación: 17/05/2017
* Fecha de modificación: 17/05/2017
*/

#include "ventana.h"
#include "ui_ventana.h"

Ventana::Ventana(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ventana)
{
    ui->setupUi(this);
}

Ventana::~Ventana()
{
    delete ui;
}

void Ventana::on_pushButton_clicked()
{
    int codigo = ui->objCodigo->text().toInt();
    QString nombre = ui->objNombre->text();
    QString categoria = ui->objCategoria->currentText();
    int numUnidades = ui->objUnidades->text().toInt();
    int costo = ui->objCosto->text().toInt();

    Producto * objProducto = new Producto(codigo, nombre, categoria, numUnidades, costo);
    listaProducto.push_back(objProducto);
    ui->objCodigo->setText("");
    ui->objNombre->setText("");
    ui->objCategoria->setCurrentIndex(0);
    ui->objUnidades->setText("");
    ui->objCosto->setText("");
}

void Ventana::on_pushButton_2_clicked()
{
    QString salida = "Codigo\tNombre\tCategoria\tUnidades\tCosto\tSubtotal\tIVA\tTotal\n\n";
    for(int i=0;i<(int)listaProducto.size(); i++)
    {
        salida+= QString::number(listaProducto[i]->getCodigo());
        salida+= "\t";
        salida+= listaProducto[i]->getNombre();
        salida+= "\t";
        salida+= listaProducto[i]->getCategoria();
        salida+= "\t";
        salida+= QString::number(listaProducto[i]->getNumUnidades());
        salida+= "\t";
        salida+= QString::number(listaProducto[i]->getCosto());
        salida+= "\t";
        salida+= QString::number(listaProducto[i]->getSubTotal());
        salida+= "\t";
        salida+= QString::number(listaProducto[i]->getIva());
        salida+= "\t";
        salida+= QString::number(listaProducto[i]->getTotal());
        salida+= "\n";
    }

    ui->objSalida->setText(salida);
}
