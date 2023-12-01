
#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "Producto.h"

class Inventario {
private:
    Producto* productos;
    int capacidad;
    int cantidad;
    int topePila;
    int frenteCola;

public:
    Inventario(int capacidad);
    ~Inventario();
    void agregarProducto(const Producto& producto);
    void quitarProducto();
    void cambiarPrecioProducto();
    void mostrarInventario() const;
};

#endif
