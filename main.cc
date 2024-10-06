#include <iostream>
#include <queue>
#include <set>

void CreateWebsite(std::queue<std::string> &WebSite);

int main() {
  int opcion = 0;
  std::queue<std::string> Web_site;
  do {
    std::cout << "-------------------------MENU-------------------------"
                 "\n1.Registrar usuario \n2.Registrar sitio web "
                 "Web\n3.Acceder\n4.Observar\n5.Salir\nOpcion: ";
    std::cin >> opcion;
    switch (opcion) {
      case 1:
        /* Registrarse */
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