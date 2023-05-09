#include "Nodo.h"
#include "Persona.h"
#include "Queue.h"
#include <iostream>

Persona::Persona(const std::string &nombre, const std::string &apellido,
                 int edad, int registro)
    : nombre(nombre), apellido(apellido), edad(edad), registro(registro) {}

std::string Persona::getNombre() const { return nombre; }
std::string Persona::getApellido() const { return apellido; }
int Persona::getEdad() const { return edad; }
int Persona::getRegistro() const { return registro; }

Nodo::Nodo(const Persona &persona, Nodo *siguiente)
    : persona(persona), siguiente(siguiente) {}

Persona Nodo::getPersona() const { return persona; }
Nodo *Nodo::getSiguiente() const { return siguiente; }
void Nodo::setSiguiente(Nodo *siguiente) { this->siguiente = siguiente; }

Queue::Queue() : frente(nullptr), final(nullptr), cantidad(0) {}

Queue::~Queue() { limpiar(); }

void Queue::agregar(const Persona &persona) {
  Nodo *nuevoNodo = new Nodo(persona);

  if (vacio()) {
    frente = final = nuevoNodo;
  } else {
    final->setSiguiente(nuevoNodo);
    final = nuevoNodo;
  }
  cantidad++;
}

Persona Queue::obtener() {
  if (vacio()) {
    std::cerr << "La cola está vacía." << std::endl;
    exit(EXIT_FAILURE);
  }

  Nodo *nodoTemporal = frente;
  Persona persona = nodoTemporal->getPersona();
  frente = frente->getSiguiente();
  delete nodoTemporal;
  cantidad--;

  return persona;
}

int Queue::contar() const { return cantidad; }

bool Queue::vacio() const { return frente == nullptr; }

void Queue::limpiar() {
  while (!vacio()) {
    obtener();
  }
}

int main() {
  Queue cola;
  int opcion;
  std::string nombre, apellido;
  int edad, registro;

  do {
    std::cout << "Menú de opciones:" << std::endl;
    std::cout << "1. Agregar persona a la cola" << std::endl;
    std::cout << "2. Obtener persona de la cola" << std::endl;
    std::cout << "3. Contar personas en la cola" << std::endl;
    std::cout << "4. Verificar si la cola está vacía" << std::endl;
    std::cout << "5. Limpiar la cola" << std::endl;
    std::cout << "0. Salir" << std::endl;
    std::cout << "Ingrese la opción deseada: ";
    std::cin >> opcion;

    switch (opcion) {
    case 1:
      std::cout << "Ingrese el nombre: ";
      std::cin >> nombre;
      std::cout << "Ingrese el apellido: ";
      std::cin >> apellido;
      std::cout << "Ingrese la edad: ";
      std::cin >> edad;
      std::cout << "Ingrese el registro: ";
      std::cin >> registro;
      cola.agregar(Persona(nombre, apellido, edad, registro));
      std::cout << "Persona agregada a la cola." << std::endl;
      break;
    case 2:
      if (!cola.vacio()) {
        Persona persona = cola.obtener();
        std::cout << "Persona eliminada de la cola: " << persona.getNombre()
                  << " " << persona.getApellido() << std::endl;
      } else {
        std::cout << "La cola está vacía." << std::endl;
      }
      break;
    case 3:
      std::cout << "Cantidad de personas en la cola: " << cola.contar()
                << std::endl;
      break;
    case 4:
      std::cout << "¿Está vacía la cola?: " << (cola.vacio() ? "Sí" : "No")
                << std::endl;
      break;
    case 5:
      cola.limpiar();
      std::cout << "Se han eliminado todos los datos de la cola." << std::endl;
      break;
    case 0:
      std::cout << "Saliendo del programa..." << std::endl;
      break;
    default:
      std::cout << "Opción no válida. Intente de nuevo." << std::endl;
    }

    std::cout << std::endl;

  } while (opcion != 0);

  return 0;
}
