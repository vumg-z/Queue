#ifndef NODO_H
#define NODO_H

#include "Persona.h"

class Nodo {
public:
    Nodo(const Persona& persona, Nodo* siguiente = nullptr);

    Persona getPersona() const;
    Nodo* getSiguiente() const;
    void setSiguiente(Nodo* siguiente);

private:
    Persona persona;
    Nodo* siguiente;
};

#endif // NODO_H

