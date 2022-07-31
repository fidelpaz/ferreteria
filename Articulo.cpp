#include <string>
using namespace std;

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
    if (precioP > 0) {
      precio = precioP;
    }

    if (cantidadP > 0) {
      cantidad = cantidadP;
    }
    nombre = nombreP;
    medida = medidaP;
  }
};
