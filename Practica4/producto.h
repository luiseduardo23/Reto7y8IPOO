/*
* Autores:
* Juan Camilo Patiño    - Codigo: 1667554
* Luis Eduardo Henao    - Codigo: 1667483
* Jorge Augusto Estacio - Codigo: 1667409
* Nombre: Ventana.h
* Descripción: Este archivo contiene las definiciones de la clase Producto.
* Fecha de creación: 17/05/2017
* Fecha de modificación: 17/05/2017
*/

#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <QString>

class Producto
{
    private:
        int codigo;
        QString nombre;
        QString categoria;
        int numUnidades;
        int costo;
        double subTotal;
        double iva;
        double total;

    public:
        Producto();
        Producto(int codigoIn, QString nombreIn, QString categoriaIn, int numUnidadesIn, int costoIn);

        int getCodigo();
        QString getNombre();
        QString getCategoria();
        int getNumUnidades();
        int getCosto();
        double getSubTotal();
        double getIva();
        double getTotal();

        void setCodigo(int codigoIn);
        void setNombre(QString nombreIn);
        void setCategoria(QString categoriaIn);
        void setNumUnidades(int numUnidadesIn);
        void setCosto(int costoIn);
        void setSubTotal(double subTotalIn);
        void setIva(double ivaIn);
        void setTotal(double totalIn);
};

#endif // PRODUCTO_H
