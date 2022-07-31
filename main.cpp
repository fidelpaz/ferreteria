#include <iostream>
// Esto lo hacemos para importar los archivos .cpp que creamos
#include "./Articulo.cpp"
#include "./Menu.cpp"
#include "./Pega3.cpp"

using namespace std;

int main() {
  // Herramientas
  Articulo tenaza(314.79, 10, "Tenaza", UNIDAD);
  Articulo taladro(866.14, 4, "Taladro", UNIDAD);
  Articulo sierra(124.84, 6, "Sierra", UNIDAD);
  Articulo martillo(149.49, 5, "Martillo", UNIDAD);

  // Fontanería.
  /* Articulo tubo();
  Articulo codos();
  Articulo desague();
  Articulo grifo(); */

  int opcion = 0;
  do {
    // Mostramos las instrucciones
    mostrarMenu();
    cout << "Ingrese una opcion: ";
    cin >> opcion;

    switch (opcion) {
      case 1:
        cout << endl << "Vender articulo." << endl;
        break;

      case 2:
        cout << endl << "Consulta de precios." << endl;
        break;

      case 3:
        cout << endl << "Ver inventario." << endl;
        break;

      case 4:
        cout << endl << "Ventas por producto." << endl;
        break;

      case 5:
        cout << endl << "Total ventas detalle." << endl;
        break;
      case 6:
        jugarPega3();

        break;
      case 7:
        cout << endl << "Mostrar creditos" << endl;
        break;

      default:
        cout << endl << "Opcion invalida" << endl;
        break;
    }
cout<<"Hola"<<endl;
  } while (opcion != 7);

  return 0;
}
