#include <iostream>
#include <queue>
#include <set>

struct Alumno {
  std::string nombre;
  std::string apellido;
  std::string curso;
  std::string contraseña;
  std::string carnet;
  std::set<std::string> ingresos;
};

void CreateWebsite(std::queue<std::string> &WebSite);
void registrarAlumnos(std::queue<Alumno> &);
void AccessWebsite(std::queue<Alumno> &students,
                   std::queue<std::string> websites, std::string user,
                   std::string password);
void AskUserAndPassword(std::string &id, std::string &userpassword);
void ShowWebSites(std::queue<std::string> websites);
void ShowStudents(const std::queue<Alumno> &alumnos);

int main(int argc, char *argv[]) {
  int opcion = 0;
  std::queue<std::string> Web_site;
  std::queue<Alumno> Students;
  do {
    std::cout << "\n-------------------------MENU-------------------------"
                 "\n1.Registrar usuario \n2.Registrar sitio web "
                 "Web\n3.Acceder\n4.Observar\n5.Salir\nOpcion: ";
    std::cin >> opcion;
    switch (opcion) {
      case 1:
        registrarAlumnos(Students);
        break;

      case 2:
        CreateWebsite(Web_site);
        break;

      case 3: {
        std::string user, password;
        AskUserAndPassword(user, password);
        AccessWebsite(Students, Web_site, user, password);
        break;
      }

      case 4:
      ShowStudents(Students);
        break;

      case 5:
        std::cout << "\nSaliendo del Programa..." << std::endl;
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
  std::cout << "\nIngrese el nombre del sitio web: ";
  std::cin >> customer_name;
  Web_site.push(customer_name);
  std::cout << "\nEl sitio Web: " << customer_name
            << " fue registrado con exito!!" << std::endl;
  std::cout << std::endl;
}

void registrarAlumnos(std::queue<Alumno> &alumnos) {
  Alumno alumno;
  std::cout << "\nIngrese el nombre del alumno: ";
  std::cin.ignore();
  std::getline(std::cin, alumno.nombre);

  std::cout << "Ingrese el apellido del alumno: ";
  std::getline(std::cin, alumno.apellido);

  std::cout << "Ingrese el curso al que pertenece: ";
  std::getline(std::cin, alumno.curso);

  std::cout << "Ingrese la contraseña: ";
  std::getline(std::cin, alumno.contraseña);

  std::cout << "Ingrese el carnet: ";
  std::getline(std::cin, alumno.carnet);

  alumnos.push(alumno);
  std::cout << "\nRegistro completado\n";
}

void AccessWebsite(std::queue<Alumno> &students,
                   std::queue<std::string> websites, std::string userid,
                   std::string userpassword) {
  std::queue<Alumno> tempStudents;
  std::string website;

  while (!students.empty()) {
    Alumno actualStudent = students.front();

    if (actualStudent.carnet == userid &&
        actualStudent.contraseña == userpassword) {
      std::cout << "\nA continuación se muestran los Sitios Web Registrados: "
                << std::endl;
      ShowWebSites(websites);

      std::cout << "\nIngrese el sitio web al que desea acceder: ";
      std::getline(std::cin, website);
      actualStudent.ingresos.insert(website);
    }
    tempStudents.push(actualStudent);
    students.pop();
  }

  students = tempStudents;
}

void AskUserAndPassword(std::string &id, std::string &userpassword) {
  std::cout << "Ingrese su carnet: ";
  std::cin.ignore();
  std::getline(std::cin, id);
  std::cout << "Ingrese su contraseña: ";
  std::getline(std::cin, userpassword);
}

void ShowWebSites(std::queue<std::string> websites) {
  std::queue<std::string> tempwebsites = websites;

  while (!tempwebsites.empty()) {
    std::cout << "- " << tempwebsites.front() << std::endl;
    tempwebsites.pop();
  }
}

void ShowStudents(const std::queue<Alumno> &alumnos){
  std::queue<Alumno> tempAlumnos = alumnos;

  if (tempAlumnos.empty()){
std::cout <<"No hay alumnos registrados. "<< std::endl;
return;
}
std::cout <<"/n Lista de alumnos registrados: "<<std::endl;
while (!tempAlumnos.empty()){
  Alumno actualAlumno = tempAlumnos.front();
  std::cout<<"Nombre: "<< actualAlumno.nombre
  <<", Apellido: " << actualAlumno.apellido
  <<", Curso: " << actualAlumno.curso
  <<", Carnet: "<< actualAlumno.carnet <<std::endl;
  tempAlumnos.pop();
}

}