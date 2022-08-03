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
