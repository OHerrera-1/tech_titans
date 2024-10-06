#include <iostream>
#include <set>

struct Alumno {
    std::string nombre;
    std::string apellido;
    std::string curso;
    std::string contraseña;
    std::string carnet;
};

void registrarAlumnos(struct Alumno&);

int main(int argc, char *argv[]) {
  Alumno nuevoAlumno;
  int opcion = 0;
  do {
    std::cout << "Ingrese la opcion que desea "
                 "realziar\n1.Registrarte\n2.Acceder\n3.Observar\n4.Salir\nOpcion: ";
    std::cin >> opcion;
    switch (opcion) {
      case 1:
        registrarAlumnos(nuevoAlumno);
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

void registrarAlumnos(Alumno& alumno) {
    std::cout << "Ingrese el nombre del alumno: ";
    std::getline(std::cin, alumno.nombre);
    
    std::cout << "Ingrese el apellido del alumno: ";
    std::getline(std::cin, alumno.apellido);
    
    std::cout << "Ingrese el curso al que pertenece: ";
    std::getline(std::cin, alumno.curso);
    
    std::cout << "Ingrese la contraseña: ";
    std::getline(std::cin, alumno.contraseña);
    
    std::cout << "Ingrese el carnet: ";
    std::getline(std::cin, alumno.carnet);

    std::cout << "\nRegistro completado:\n";
  
  }
