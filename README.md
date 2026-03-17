# CPP Module 01 - Memory Management, Pointers & References

![C++98](https://img.shields.io/badge/C++-98-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Memory Management](https://img.shields.io/badge/Skill-Memory_Management-orange?style=for-the-badge)
![Pointers](https://img.shields.io/badge/Concept-Pointers_&_References-blue?style=for-the-badge)
![42School](https://img.shields.io/badge/School-42-000000?style=for-the-badge&logo=42&logoColor=white)
![Critical Thinking](https://img.shields.io/badge/Skill-Critical_Thinking-purple?style=for-the-badge)

## Descripcion

Modulo formativo de C++ que domina la gestion manual de memoria en el heap, comprendiendo la diferencia entre stack y heap, y dominando punteros/referencias. Cada ejercicio resuelve un problema real de manejo de recursos y ciclo de vida de objetos, siguiendo la filosofia de 42School: aprender haciendo.

## Caracteristicas Principales

- **ex00 - Zombie Class**: Creacion y destruccion de objetos en heap vs stack, gestion del ciclo de vida conconstructores/destructores
- **ex01 - Zombie Horde**: Alojamiento de arrays dinamicos con `new[]` y liberacion segura con `delete[]`
- **ex02 - Memory Addresses**: Visualizacion de direcciones de memoria y diferencias semantincas entre punteros dereferencias
- **ex03 - Weapon System**: Composicion de clases con punteros vs referencias (dependencia opcional vs obligatoria)
- **ex04 - File Replacer**: Manipulacion de archivos con `std::ifstream`/`std::ofstream`, busqueda y reemplazo sin modificacion del original
- **ex05 - Harl Filter**: Punteros a funciones miembro (`(this->*f_ptr[i])()`) y dispatch dinamicosin if/else chains
- **ex06 - Switch Filter**: Filtrado de niveles de log con `enum` y `switch` para implementar logging condicional (DEBUG->ERROR)

## Stack Tecnologico

| Componente | Tecnologia |
|------------|------------|
| Lenguaje | C++98 |
| Compilador | g++ (c++98) |
| Build System | Makefile con dependencias automaticas (-MMD -MP) |
| Paradigma | POO (Programacion Orientada a Objetos) |
| I/O | std::ifstream / std::ofstream |
| Estandar | -Wall -Werror -Wextra |

## Decisiones Tecnicas y Arquitectura

El modulo emplea **C++98** como estandar para garantizar compatibilidad yforzar al desarrollador a gestionar recursos manualmente sin las comodidades de C++11/14 (smart pointers, move semantics). Esta restriccion tiene un proposito pedagogico: comprender el ciclo de vida **RAII** (Resource Acquisition Is Initialization) desde cero.

La separacion en ejercicios incrementales (ex00-ex06) sigue un enfoque **bottom-up**:
1. Primero se aprende a crear/destruir objetos individuales
2. Luego arrays de objetos con gestion de memoria colectiva
3. Se profundiza en la relacion punteros/referencias a nivel de memoria
4. Se aplica en composicion de clases (dependencias obligatorias vs opcionales)
5. Se introduce I/O de archivos con manipulacion de strings
6. Finalmente, punteros a funciones miembro con dispatch dinamico

## Diagrama de Arquitectura

```mermaid
graph TB
    subgraph Ex00-01["Gestion de Memoria"]
        Z[Zombie Class] --> |new/delete| HEAP[Heap Memory]
        ZH[ZombieHorde] --> |new[]/delete[]| HEAP
        HEAP --> RAII[Patron RAII]
    end

    subgraph Ex02["Punteros vs Referencias"]
        VAR[Variable] --> PTR[Puntero *]
        VAR --> REF[Referencia &amp;]
        PTR --> ADDR[Direccion de Memoria]
        REF --> ADDR
    end

    subgraph Ex03["Composicion de Clases"]
        WA[HumanA] --> |Referencia obligatoria| W[Weapon]
        WB[HumanB] --> |Puntero opcional| W
    end

    subgraph Ex04["File I/O"]
        INPUT[Input File] --> READ[ifstream]
        READ --> REPLACE[Search &amp; Replace]
        REPLACE --> WRITE[ofstream]
        WRITE --> OUTPUT[Output .replace]
    end

    subgraph Ex05-06["Function Dispatch"]
        HARL[Harl Class] --> FPTR[f_ptr Array]
        FPTR --> |this->*f_ptr[i]()| DISPATCH[Dispatch Dinamico]
        DISPATCH --> SWITCH[Switch/Enum Filter]
    end
```

## Guia de Instalacion

```bash
# 1. Clonar el repositorio
git clone https://github.com/samuelhm/CPP-Module-01.git
cd CPP-Module-01

# 2. Compilar cualquier ejercicio
cd ex00 && make

# 3. Ejecutar el binario generado
./TheWalkingDead

# 4. Limpiar objetos
make fclean
```

### Compilacion especifica por ejercicio

| Ejercicio | Comando | Ejecutable |
|-----------|---------|------------|
| ex00 | `cd ex00 && make` | `./TheWalkingDead` |
| ex01 | `cd ex01 && make` | `./TheWalkingDead` |
| ex02 | `cd ex02 && make` | `./brain` |
| ex03 | `cd ex03 && make` | `./survivors` |
| ex04 | `cd ex04 && make` | `./replace <file> <s1> <s2>` |
| ex05 | `cd ex05 && make` | `./harlFilter` |
| ex06 | `cd ex06 && make` | `./harlFilter` |

## Lecciones Aprendidas

- **Gestion de memoria**: Diferencia critica entre `new`/`delete` y `new[]`/`delete[]` para evitar memory leaks
- **Punteros vs Referencias**: Referencias siempre inicializadas, punteros pueden ser NULL - uso semanticos distintos
- **Composicion**: Referencia para dependencias obligatorias, puntero para opcionales
- **Function Dispatch**: Punteros a funciones miembro para evitar chains de `if/else` y lograr polimorfismo
- **RAII**: Recursos adquiridos en constructor, liberados en destructor - garantiza cleanup automatico

## Contacto

[![GitHub](https://img.shields.io/badge/GitHub-samuelhm-181717?style=flat-square&logo=github)](https://github.com/samuelhm/)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-shurtado--m-0A66C2?style=flat-square&logo=linkedin)](https://www.linkedin.com/in/shurtado-m/)