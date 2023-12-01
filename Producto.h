#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

class Producto {
private:
    std::string nombre;
    float precio;

public:
    Producto();  
    Producto(std::string nombre, float precio);
    std::string getNombre() const;
    float getPrecio() const;
    void setPrecio(float nuevoPrecio);
};

#endif

