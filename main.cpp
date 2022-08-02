#include <iostream>
#include <string>
// Esto lo hacemos para importar los archivos .cpp que creamos
#include "./Articulo.cpp"
#include "./Menu.cpp"
#include "./Pega3.cpp"

using namespace std;

// 1. Herramientas
Articulo tenaza(314.79, 10, "Tenaza", UNIDAD);
Articulo taladro(866.14, 4, "Taladro", UNIDAD);
Articulo sierra(124.84, 6, "Sierra", UNIDAD);
Articulo martillo(149.49, 5, "Martillo", UNIDAD);
Articulo Herramientas[4] = {tenaza, taladro, sierra, martillo};

// 2. Fontanería.
Articulo tubo(
    180.89, 10,
    "Tubo Cpvc 1/2X20 pies para Conduccion y Precion de Agua Caliente", UNIDAD);
Articulo codos(32.33, 25, "Codo PVC Presion encolar 90 D:16mm", UNIDAD);
Articulo desague(96.15, 10, "Desague 4.1/2 plg Canasta para Lavatrasto",
                 UNIDAD);
Articulo grifo(425.56, 18, "Llave 1/2plg para Pila", UNIDAD);
Articulo Fontaneria[4] = {tubo, codos, desague, grifo};

// 3. Construcción
Articulo varilla(217.82, 20, "Varilla deformada LEG. 3/8", UNIDAD);
Articulo graba(380.12, 16, "Grava de 3/4 pulgada", UNIDAD);
Articulo arena(10.23, 56, "Arena(libra)", UNIDAD);
Articulo cemento(215.63, 24, "Bolsa de cemento piedra azul 42.5kg", UNIDAD);
Articulo Construccion[4] = {varilla, graba, arena, cemento};

// 4. Electricidad
Articulo cableElectrico(
    83.45, 20, "Cable electrico phelps dodge acometida 3X2 500mts Rollo",
    UNIDAD);
Articulo cintaAislante(560.49, 3,
                       "Cinta 3M 3/4plgx66 pies Scotch # 27 Fibra de Vidrio",
                       UNIDAD);
Articulo lampara(569.99, 5, "Lampara Para Techo 2322Boc", UNIDAD);
Articulo manguera(6.15, 16, "Manguera 1/4plg", UNIDAD);
Articulo Electricidad[4] = {cableElectrico, cintaAislante, lampara, manguera};

// 5. Hogar
Articulo cortina(1069.56, 8, "Cortina enrollable", UNIDAD);
Articulo puerta(1747.22, 2, "Puerta madera de pino", UNIDAD);
Articulo ventilador(3717.85, 5, "Ventilador de techo, color madera", UNIDAD);
Articulo mueble(17590.43, 3, "Juego de Sala Nacional Paris", UNIDAD);
Articulo Hogar[4] = {cortina, puerta, ventilador, mueble};

// 6. jardinería
Articulo pico(375.23, 15, "Pico truper", UNIDAD);
Articulo pala(300.12, 16, "Pala truper", UNIDAD);
Articulo azadon(155.17, 12, "Azadon de 110 cm con mango", UNIDAD);
Articulo machete(88.19, 6, "Machete truper", UNIDAD);
Articulo Jardineria[4] = {pico, pala, azadon, machete};
void venderArticulo(int& producto, int& cantidad) {
  cout << "Que producto va  acomprar?: ";
  cin >> producto;
  cout << "Cuantos va  a comprar?: ";
  cin >> cantidad;
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
    cout << i + 1 << ". Nombre: " << arrayCategoria[i].nombre << endl;
    cout << "Unidades disponibles: " << arrayCategoria[i].cantidad << endl;
    cout << "Precio por unidad: " << arrayCategoria[i].precio << endl << endl;
  }
  cout << endl;
  venderArticulo(producto, cantidad);
  if (cantidad < arrayCategoria[producto - 1].cantidad) {
    arrayCategoria[producto - 1].cantidad -= cantidad;
    cout << "Se a realizado su compra :)" << endl;
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
