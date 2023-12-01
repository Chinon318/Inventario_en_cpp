#include "Inventario.h"
#include <iostream>

Inventario::Inventario(int capacidad) : capacidad(capacidad), cantidad(0), topePila(0), frenteCola(0) {
    productos = new Producto[capacidad];
}

Inventario::~Inventario() {
    delete[] productos;
}

void Inventario::agregarProducto(const Producto& producto) {
    if (cantidad < capacidad) {
        productos[cantidad] = producto;
        cantidad++;
        std::cout << "Producto agregado correctamente.\n";
    } else {
        std::cout << "El inventario está lleno. No se puede agregar más productos.\n";
    }
}

void Inventario::quitarProducto() {
    if (cantidad > 0) {
        std::cout << "Producto eliminado: " << productos[frenteCola].getNombre() << "\n";
        frenteCola = (frenteCola + 1) % capacidad;
        cantidad--;
    } else {
        std::cout << "El inventario está vacio. No hay productos para eliminar.\n";
    }
}

void Inventario::cambiarPrecioProducto() {
    if (cantidad > 0) {
        int indice;
        float nuevoPrecio;
        std::cout << "Ingrese el indice del producto cuyo precio desea cambiar: ";
        std::cin >> indice;

        if (indice >= 0 && indice < cantidad) {
            std::cout << "Ingrese el nuevo precio: $";
            std::cin >> nuevoPrecio;

            productos[indice].setPrecio(nuevoPrecio);
            std::cout << "Precio cambiado correctamente.\n";
        } else {
            std::cout << "Indice invalido.\n";
        }
    } else {
        std::cout << "El inventario esta vacío. No hay productos para cambiar el precio.\n";
    }
}

void Inventario::mostrarInventario() const {
    std::cout << "Inventario:\n";
    for (int i = frenteCola, count = 0; count < cantidad; count++) {
        std::cout << "[" << count << "] " << productos[i].getNombre() << " - Precio: $" << productos[i].getPrecio() << "\n";
        i = (i + 1) % capacidad;
    }
}
