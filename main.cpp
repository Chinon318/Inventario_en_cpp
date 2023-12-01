#include "Inventario.h"
#include <iostream>

int main() {
    Inventario inventario(10);

    while (true) {
        std::cout << "\n=== Menu ===\n";
        std::cout << "1. Agregar producto\n";
        std::cout << "2. Quitar producto\n";
        std::cout << "3. Cambiar precio de un producto\n";
        std::cout << "4. Mostrar inventario\n";
        std::cout << "5. Salir\n";

        int opcion;
        std::cout << "Ingrese su opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                std::string nombre;
                float precio;
                std::cout << "Ingrese el nombre del producto: ";
                std::cin >> nombre;
                std::cout << "Ingrese el precio del producto: $";
                std::cin >> precio;
                Producto nuevoProducto(nombre, precio);
                inventario.agregarProducto(nuevoProducto);
                break;
            }
            case 2:
                inventario.quitarProducto();
                break;
            case 3:
                inventario.cambiarPrecioProducto();
                break;
            case 4:
                inventario.mostrarInventario();
                break;
            case 5:
                std::cout << "Saliendo del programa.\n";
                return 0;
            default:
                std::cout << "Opcion invalida. Intentelo de nuevo.\n";
                break;
        }
    }

    return 0;
}
