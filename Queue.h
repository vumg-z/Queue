#ifndef QUEUE_H
#define QUEUE_H

#include "Nodo.h"

class Queue {
public:
    Queue();
    ~Queue();

    void agregar(const Persona& persona);
    Persona obtener();
    int contar() const;
    bool vacio() const;
    void limpiar();

private:
    Nodo* frente;
    Nodo* final;
    int cantidad;
};

#endif // QUEUE_H
