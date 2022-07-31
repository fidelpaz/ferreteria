#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

// TODO: Refactorizar la generación de los números aleatorios

void jugarPega3() {
  int nivel = 0, a, b, c, a1, b2, c3;
  srand(time(0));
  cout << "Hola, jugar pega 3 es un juego en donde tendras que adivinar los 3 "
          "numeros.";
  do {
    cout << endl << "Elige la dificultad en la que desees jugar: " << endl;
    cout << "1.Easy.<\n2.Medium.\n3.Hard.\n4.Salir" << endl;
    cout << "Dificultad: ";
    cin >> nivel;
    switch (nivel) {
      case 1:
        a = rand() % 4;
        if (a == 0) {
          a = a + 1;
        }
        b = rand() % 4;
        if (b == 0) {
          b = b + 1;
        }
        c = rand() % 4;
        if (c == 0) {
          c = c + 1;
        }

        cout << "DIFICULTAD FACIL, ELIJE TRES NUMEROS DEL 1 AL 3, SUERTE ;)"
             << endl
             << endl;
        cout << "Digite su primer numero: ";
        cin >> a1;
        cout << "Digite su segundo numero: ";
        cin >> b2;
        cout << "Digite su tercer numero: ";
        cin >> c3;
        if (a1 == a && b2 == b && c3 == c) {
          cout << "Felicidades, Has ganado" << endl;
        } else
          cout << "Ups, has perdido" << endl;
        break;

      case 2:
        a = rand() % 7;
        if (a == 0) {
          a = a + 1;
        }
        b = rand() % 7;
        if (b == 0) {
          b = b + 1;
        }
        c = rand() % 7;
        if (c == 0) {
          c = c + 1;
        }
        cout << "DIFICULTAD MEDIA, ELIJE TRES NUMEROS DEL 1 AL 6, SUERTE ;)"
             << endl
             << endl;
        cout << "Digite su primer numero: ";
        cin >> a1;
        cout << "Digite su segundo numero: ";
        cin >> b2;
        cout << "Digite su tercer numero: ";
        cin >> c3;
        if (a1 == a && b2 == b && c3 == c) {
          cout << "Felicidades, Has ganado" << endl;
        } else
          cout << "Ups, has perdido" << endl;
        break;
      case 3:
        a = rand() % 11;
        if (a == 0) {
          a = a + 1;
        }
        b = rand() % 11;
        if (b == 0) {
          b = b + 1;
        }
        c = rand() % 11;
        if (c == 0) {
          c = c + 1;
        }
        cout << "DIFICULTAD DIFICIL, ELIJE TRES NUMEROS DEL 1 AL 10, SUERTE ;)"
             << endl
             << endl;
        cout << "Digite su primer numero: ";
        cin >> a1;
        cout << "Digite su segundo numero: ";
        cin >> b2;
        cout << "Digite su tercer numero: ";
        cin >> c3;
        if (a1 == a && b2 == b && c3 == c) {
          cout << "Felicidades, Has ganado" << endl;
        } else
          cout << "Ups, has perdido" << endl;
        break;
      case 4:
        cout << "Gracias por jugar ;)";
        break;
      default:
        cout << "Ha puesto un valor incorrecto." << endl;
    }
  } while (nivel != 4);
}