#include <iostream>
#include <queue>
#include <set>

struct Alumno {
    std::string nombre;
    std::string apellido;
    std::string curso;
    std::string contraseña;
    std::string carnet;
};

void CreateWebsite(std::queue<std::string> &WebSite);
void registrarAlumnos(struct Alumno&);

int main(int argc, char *argv[]) {
  Alumno nuevoAlumno;
  int opcion = 0;
  std::queue<std::string> Web_site;
  do {
    std::cout << "-------------------------MENU-------------------------"
                 "\n1.Registrar usuario \n2.Registrar sitio web "
                 "Web\n3.Acceder\n4.Observar\n5.Salir\nOpcion: ";
    std::cin >> opcion;
    switch (opcion) {
      case 1:
        registrarAlumnos(nuevoAlumno);
        break;

      case 2:
        CreateWebsite(Web_site);
        break;

      case 3:

        break;
      case 4:
        /* Observar */
        break;

      default:
        std::cout << "Opcion invalida";
        break;
    }
  } while (opcion != 5);

  return 0;
}


void CreateWebsite(std::queue<std::string> &Web_site) {
  std::string customer_name;
  std::cout << "Ingrese el nombre del sitio web: ";
  std::cin >> customer_name;
  Web_site.push(customer_name);
  std::cout<< "\nEl sitio Web: "<<customer_name<<" fue registrado con exito!!"<<std::endl;
  std::cout<<std::endl;
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

