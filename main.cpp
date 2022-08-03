#include <iostream>
#include <string>
// Esto lo hacemos para importar los archivos .cpp que creamos
#include "Articulo.h"
#include "Inventario.h"
#include "Menu.h"
#include "Pega3.h"
using namespace std;

/**
 * Esta función solicita al usuario el número de producto y la cantidad del
 * producto a comprar
 *
 * @param producto El número de producto
 * @param cantidad la cantidad del producto que el usuario quiere comprar
 */
void venderArticulo(int& producto, int& cantidad) {
  cout << "Que producto va  acomprar?: ";
  cin >> producto;
  if (producto >= 1 && producto <= 4) {
    cout << "Cuantos va  a comprar?: ";
    cin >> cantidad;

  } else {
    cout << "Ha puesto un numero invalido ;(" << endl;
  }
}

/**
 * Toma una matriz de objetos de Articulo y una cadena, e imprime la cadena y el
 * contenido de la matriz.
 *
 * @param arrayCategoria una matriz de objetos Item
 * @param nombreCategoria El nombre de la categoría.
 */
void mostrarCategoria(Articulo* arrayCategoria, string nombreCategoria) {
  int producto, cantidad = 0;
  cout << nombreCategoria << endl;
  for (int i = 0; i < 4; i++) {
    if (!(arrayCategoria[i].cantidad == 0)) {
      cout << i + 1 << ". Nombre: " << arrayCategoria[i].nombre << endl;
      cout << "Unidades disponibles: " << arrayCategoria[i].cantidad << endl;
      cout << "Precio por unidad: " << arrayCategoria[i].precio << endl << endl;
    }
  }
  cout << endl;
  venderArticulo(producto, cantidad);
  if (cantidad <= arrayCategoria[producto - 1].cantidad) {
    arrayCategoria[producto - 1].cantidad -= cantidad;
    if (producto >= 1 && producto <= 4) {
      cout << "Se ha realizado su compra ;)" << endl;
    }
  } else {
    int deseaComprarMax;
    cout << "La cantidad maxima que tenemos es: "
         << arrayCategoria[producto - 1].cantidad << endl;
    cout << "Desea comprarlo?(1 para si, 2 para no.): ";
    cin >> deseaComprarMax;
    if (deseaComprarMax == 1) {
      arrayCategoria[producto - 1].cantidad = 0;
      cout << "Se a realizado su compra :)" << endl;
    } else if (deseaComprarMax == 2) {
      cout << "Compra cancelada, vuelva pronto ;)" << endl;
    } else {
      cout << "Ha puesto un numero invalido" << endl;
      cout << "Compra cancelada, vuelva pronto ;)" << endl;
    }
  }
}

void Ventas() {
  int categoria, producto, cantidad = 0;
  cout << "Categorias: " << endl;
  cout << "1.Herramientas." << endl;
  cout << "2.Fontaneria." << endl;
  cout << "3.Construccion." << endl;
  cout << "4.Electricidad." << endl;
  cout << "5.Hogar." << endl;
  cout << "6.Jardineria." << endl;
  cout << "7.Otros." << endl;
  cout << "En que categoria esta el producto que desea comprar?: ";
  cin >> categoria;
  switch (categoria) {
    case 1:
      mostrarCategoria(Herramientas, "Herramientas");

      break;
    case 2:
      mostrarCategoria(Fontaneria, "Fontaneria");
      break;
    case 3:
      mostrarCategoria(Construccion, "Construccion");
      break;
    case 4:
      mostrarCategoria(Electricidad, "Electricidad");
      break;
    case 5:
      mostrarCategoria(Hogar, "Hogar");
      break;
    case 6:
      mostrarCategoria(Jardineria, "Jardineria");
      break;
    case 7:
      cout << "Aqui va la categoria otros: pero alguien no la ha puesto"
           << endl;
      // mostrarCategoria(Otros, "Otros");
      break;
    default:
      cout << "Opcion invalida :(" << endl;
  }
}

void mostrarArticulos(Articulo* arrayArticulos, string Categoria) {
  cout << Categoria << endl;
  for (int i = 0; i < 4; i++) {
    cout << "Nombre: " << arrayArticulos[i].nombre << endl;
    cout << "Cantidad: " << arrayArticulos[i].cantidad << endl;
  }
  cout << endl;
}
void mostrarPrecios(Articulo* arrayArticulos, string Categoria) {
  cout << Categoria << endl;
  for (int i = 0; i < 4; i++) {
    cout << "Nombre: " << arrayArticulos[i].nombre << endl;
    cout << "Precio: " << arrayArticulos[i].precio << " lempiras " << endl;
  }
  cout << endl;
}

int main() {
  int opcion = 0;
  do {
    // Mostramos las instrucciones
    mostrarMenu();
    cout << "Ingrese una opcion: ";
    cin >> opcion;

    switch (opcion) {
      case 1:
        // Función para vender articulo
        Ventas();
        break;

      case 2:
        mostrarPrecios(Herramientas, "Herramientas");
        mostrarPrecios(Fontaneria, "Fontaneria");
        mostrarPrecios(Construccion, "Construccion");
        mostrarPrecios(Electricidad, "Electricidad");
        mostrarPrecios(Hogar, "Hogar");
        mostrarPrecios(Jardineria, "Jardineria");
        break;

      case 3:
        mostrarArticulos(Herramientas, "Herramientas");
        mostrarArticulos(Fontaneria, "Fontaneria");
        mostrarArticulos(Construccion, "Construccion");
        mostrarArticulos(Electricidad, "Electricidad");
        mostrarArticulos(Hogar, "Hogar");
        mostrarArticulos(Jardineria, "Jardineria");
        break;

      case 4:
        // Función de ventas por produto.
        break;

      case 5:
        // Función para el total de ventas de detalle.
        break;
      case 6:
        jugarPega3();

        break;
      case 7:
        // Funión para mostrar los créditos.
        break;

      default:
        cout << endl << "Opcion invalida" << endl;
        break;
    }

  } while (opcion != 7);

  return 0;
}
