#include <iostream>
#include <set>

int main(int argc, char *argv[]) {
  int opcion = 0;
  do {
    std::cout << "Ingrese la opcion que desea "
                 "realziar\n1.Registrarte\n2.Acceder\n3.Observar\n4.Salir\nOpcion: ";
    std::cin >> opcion;
    switch (opcion) {
      case 1:
        /* Registrarse */
        break;

      case 2:
        /* Ingresar */
        break;

      case 3:
        /* Observar */
        break;

      default:
        std::cout << "Opcion invalida";
        break;
    }
  } while (opcion != 4);

  return 0;
}

