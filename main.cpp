#include <iostream>
// Esto lo hacemos para importar los archivos .cpp que creamos
#include "./Articulo.cpp"
#include "./Menu.cpp"
#include "./Pega3.cpp"

using namespace std;

int main() {
  //1. Herramientas
  Articulo tenaza(314.79, 10, "Tenaza", UNIDAD);
  Articulo taladro(866.14, 4, "Taladro", UNIDAD);
  Articulo sierra(124.84, 6, "Sierra", UNIDAD);
  Articulo martillo(149.49, 5, "Martillo", UNIDAD);

  //2. Fontanería.
   Articulo tubo(180.00, 10, "Tubo Cpvc 1/2X20 pies para Conduccion y Precion de Agua Caliente", UNIDAD);
  Articulo codos(32.33, 25, "Codo PVC Presion encolar 90º D:16mm", UNIDAD);
  Articulo desague(96.15, 10, "Desague 4.1/2 plg Canasta para Lavatrasto", UNIDAD);
  Articulo grifo(425, 18, "Llave 1/2plg para Pila", UNIDAD); 

//3. Construcción
  Articulo varilla(217.82, 20, "VARILLA DEFORMADA LEG. 3/8", UNIDAD);
  Articulo graba(380.00, 16, "Grava de 3/4 pulgada", UNIDAD);
  Articulo arena(10, 56, "Arena(libra)", UNIDAD);
  Articulo cemento(215.63, 24, "Bolsa de cemento piedra azul 42.5kg", UNIDAD);
  
  //4. Electricidad
  Articulo cable(83.00, 20, "Cable Electrico Phelps Dodge ACOMETIDA 3X2 500mts Rollo", UNIDAD);
  Articulo cintaaislante(560.00, 3, "Cinta 3M 3/4plgx66 pies Scotch # 27 Fibra de Vidrio", UNIDAD);
  Articulo lampara(570, 5, "Lampara Para Techo 2322Boc", UNIDAD);
  Articulo manguera(6.15, 16, "Manguera 1/4plg", UNIDAD);

  //5. Hogar
  Articulo cortina(1069.56, 8, "Cortina enrollable", UNIDAD);
  Articulo puerta(1747.22, 2, "Puerta madera de pino", UNIDAD);
  Articulo ventilador(3717.85, 5, "Ventilador de techo, color madera", UNIDAD);
  Articulo mueble(17590.00, 3, "Juego de Sala Nacional Paris", UNIDAD);

  //6. jardinería
  Articulo pico(375.00, 15, "Pico truper", UNIDAD);
  Articulo pala(300.00, 16, "pala truper", UNIDAD);
  Articulo azadon(155.00, 12, "Azadon de 110 cm con mango", UNIDAD);
  Articulo machete(88.00, 6, "machete truper", UNIDAD); 
  
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

  } while (opcion != 7);

  return 0;
}
