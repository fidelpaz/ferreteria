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
  double precio;
  int cantidad;
  string nombre;
  Medida medida;

  // La letra "p" al final indica que son parámetros los cuales tienen valores
  // predeterminados
  Articulo(double precioP = 0.0, int cantidadP = 0,
           string nombreP = "Producto generico", Medida medidaP = UNIDAD) {
    precio = precioP;
    nombre = nombreP;
    cantidad = cantidadP;
    medida = medidaP;
  }
};
