#include "Producto.h"

Producto::Producto() : nombre(""), precio(0.0) {}

Producto::Producto(std::string nombre, float precio) : nombre(nombre), precio(precio) {}

std::string Producto::getNombre() const {
    return nombre;
}

float Producto::getPrecio() const {
    return precio;
}

void Producto::setPrecio(float nuevoPrecio) {
    precio = nuevoPrecio;
}
