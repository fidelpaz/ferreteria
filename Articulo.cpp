#include <string>
using namespace std;
// FONTANERÍA...
//  Tubería se vende por pies, cada pie cuesta 318.39 lempiras.
//  Codos se venden por unidad, 22.99 dólares cuesta cada uno.
//  Desagüe de 4 pulgadas por unidad, cuesta 96 lempiras.
//  Grifo de cocina por unidad, cuesta 30.99 dólares.

// HERRAMIENTAS...
//  Tenaza Burndy 314.79 lempiras.
//  Taladro shotek 18v por 866.14 lempiras.
//   Sierra de mano 124.84 lempiras.
//  Martillo 149.49 lempiras.
enum Medida {
  METRO_CUADRADO,
  LIBRA,
  UNIDAD,
  PIE,
  PULGADA,
};

class Articulo {
 public:
  double precio = 0.0;
  int cantidad = 0;
  string nombre = "";
  Medida medida = UNIDAD;

  // La letra "p" al final indica que son parámetros
  Articulo(double precioP, int cantidadP, string nombreP, Medida medidaP) {
    precio = precioP;
    nombre = nombreP;
    cantidad = cantidadP;
    medida = medidaP;
  }
  Articulo() {}
};
