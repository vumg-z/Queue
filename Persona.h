#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona {
public:
    Persona(const std::string& nombre, const std::string& apellido, int edad, int registro);

    std::string getNombre() const;
    std::string getApellido() const;
    int getEdad() const;
    int getRegistro() const;

private:
    std::string nombre;
    std::string apellido;
    int edad;
    int registro;
};

#endif // PERSONA_H
