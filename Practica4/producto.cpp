/*
* Autores:
* Juan Camilo Patiño    - Codigo: 1667554
* Luis Eduardo Henao    - Codigo: 1667483
* Jorge Augusto Estacio - Codigo: 1667409
* Nombre: Producto.cpp
* Descripción: Este archivo contiene el constructor de la clase Producto.
* Fecha de creación: 17/05/2017
* Fecha de modificación: 24/05/2017
*/

#include "producto.h"

Producto::Producto()
{
    this->codigo = 0;
    this->nombre = "";
    this->categoria = "";
    this->numUnidades = 0;
    this->costo = 0;
    this->subTotal = 0;
    this->iva = 0.0;
    this->total = 0.0;
}
Producto::Producto(int codigoIn, QString nombreIn, QString categoriaIn, int numUnidadesIn, int costoIn)
{

    double subtotalIn = numUnidadesIn * costoIn;

    double ivaIn = 0;

    if(categoriaIn.compare("Básica")==0)
    {
        ivaIn = (subtotalIn*5)/100;
    }
    else
    {
        if(categoriaIn.compare("Aseo")==0)
        {
            ivaIn = (subtotalIn*1)/100;
        }
        else
        {
            if(categoriaIn.compare("General")==0)
            {
                ivaIn = (subtotalIn*19)/100;
            }
        }
    }


    double totalIn = ivaIn + subtotalIn;

    this->codigo = codigoIn;
    this->nombre = nombreIn;
    this->categoria = categoriaIn;
    this->numUnidades = numUnidadesIn;
    this->costo = costoIn;
    this->subTotal = subtotalIn;
    this->iva = ivaIn;
    this->total = totalIn;
}

int Producto::getCodigo()
{
    return codigo;
}
QString Producto::getNombre()
{
    return nombre;
}
QString Producto::getCategoria()
{
    return categoria;
}
int Producto::getNumUnidades()
{
    return numUnidades;
}
int Producto::getCosto()
{
    return costo;
}
double Producto::getSubTotal()
{
    return subTotal;
}
double Producto::getIva()
{
    return iva;
}
double Producto::getTotal()
{
    return total;
}

void Producto::setCodigo(int codigoIn)
{
    this->codigo = codigoIn;
}
void Producto::setNombre(QString nombreIn)
{
    this->nombre = nombreIn;
}
void Producto::setCategoria(QString categoriaIn)
{
    this->categoria = categoriaIn;
}
void Producto::setNumUnidades(int numUnidadesIn)
{
    this->numUnidades = numUnidadesIn;
}
void Producto::setCosto(int costoIn)
{
    this->costo = costoIn;
}
void Producto::setSubTotal(double subTotalIn)
{
    this->subTotal = subTotalIn;
}
void Producto::setIva(double ivaIn)
{
    this->iva = ivaIn;
}
void Producto::setTotal(double totalIn)
{
    this->total = totalIn;
}
