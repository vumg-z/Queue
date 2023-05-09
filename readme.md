# Cola de Personas en C++

Este programa en C++ implementa una cola (Queue) que almacena objetos Persona. Permite al usuario agregar personas a la cola, obtener personas de la cola, contar personas en la cola, verificar si la cola está vacía y limpiar la cola. El programa utiliza las clases Persona, Nodo y Queue para gestionar la cola.

## Clases

### Persona

La clase Persona contiene información sobre una persona, incluyendo nombre, apellido, edad y registro. Los datos se almacenan en variables miembro privadas y se accede a ellos a través de métodos getter.

### Nodo

La clase Nodo representa un nodo en la cola. Contiene un objeto Persona y un puntero al siguiente nodo en la cola.

### Queue

La clase Queue es la implementación de la cola en sí. Utiliza punteros al frente y al final de la cola, y un contador de cantidad de elementos en la cola. Incluye métodos para agregar, obtener, contar, verificar si está vacía y limpiar la cola.

## Compilación y Ejecución

Para compilar el programa, asegúrate de tener instalado un compilador compatible con C++11 o posterior, como g++ o clang++. Luego, navega a la carpeta del proyecto en la línea de comandos y ejecuta el siguiente comando para compilar el programa:

g++ -std=c++11 main.cpp Persona.cpp Nodo.cpp Queue.cpp -o cola_personas


Después de compilar, ejecuta el programa con el siguiente comando:
./cola_personas

El programa mostrará un menú con opciones para agregar personas a la cola, obtener personas de la cola, contar personas en la cola, verificar si la cola está vacía, limpiar la cola y salir del programa.

## Uso

Al ejecutar el programa, verás un menú de opciones. Ingresa el número correspondiente a la opción que deseas realizar y presiona Enter. Por ejemplo, para agregar una persona a la cola, ingresa "1" y presiona Enter.

A continuación, se te pedirá que ingreses información sobre la persona, como nombre, apellido, edad y registro. Después de ingresar la información, la persona se agregará a la cola y se te presentará el menú de opciones nuevamente.

Puedes realizar varias acciones en la cola utilizando las opciones del menú. Cuando hayas terminado, ingresa "0" para salir del programa.

## Contribuciones

Si deseas contribuir a este proyecto, no dudes en crear un fork del repositorio, realizar cambios y enviar una solicitud de extracción (pull request). Agradecemos cualquier mejora o corrección de errores.

## Licencia

Este proyecto se distribuye bajo la licencia MIT. Consulta el archivo LICENSE para obtener más información.
