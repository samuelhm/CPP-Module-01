# CPP Module 01 - MemoryAddresses, Pointers & References

![C++](https://img.shields.io/badge/C++-98-00599C?styTengo toda lainfo. Creoel README.md:
README.md creado exitosamente. Incluye:

- **Badges**: C++98, Memory Management, Pointers/References, 42 School
- **7 ejercicios** documentados (ex00-ex06)
- **Diagrama Mermaid** con arquitectura de memoria, punteros, composición, I/O y function dispatch
- **Decisiones técnicas**: Justificación de C++98 para RAII y enfoque bottom-up
- **Guía de instalación** con comandos específicos por ejercicio
- **Contacto** con links aGitHub y LinkedIn
o/badge/Skill-Critical_Thinking-purple?style=for-the-badge)

## Descripción

Módulo formativo deC++ que domina la gestión manual de memoria en el heap, comprendiendo la diferencia entre stack y heap, y dominando punteros/referencias. Cada ejercicio resuelve un problema real de manejo dereursos y ciclo de vida de objetos.

## Características Principales

- **Ex00 - Zombie Class**: Creación y destrucción de objetos en heap vs stack, gestión del ciclo de vida
- **Ex01 - Zombie Horde**: Alojamiento de arrays dinámicos con `new[]` y liberación con `delete[]`
- **Ex02 - Memory Addresses**: Visualización de direcciones de memoria y diferencias entre punteros y referencias
- **Ex03 - Weapon System**: Composición de clases con punteros vs referencias (dependencia opcional vs obligatoria)
- **Ex04 - File Replacer**: Manipulación de archivos con `std::ifstream`/`std::ofstream`, búsqueda y reemplazo
- **Ex05 - Harl Filter**: Punterosa funciones miembro (`(this->*f_ptr[i])()`) y dispatch dinámico
- **Ex06 - Switch Filter**: Punteros a funciones miembro con `enum` y `switch` para filtrado de niveles (DEBUG→ERROR)

## Stack Tecnológico

| Componente | Tecnología |
|------------|------------|
| Lenguaje | C++98 |
| Compilador | g++ (c++98) |
| Build System | Makefile |
| Paradigma | POO (Programación Orientada a Objetos) |
| I/O | std::ifstream / std::ofstream |

## Decisiones Técnicas yArquitectura

El módulo emplea **C++98** como estándar para garantizar compatibilidad yforzar al desarrollador a gestionar recursos manualmente sin las comodidades de C++11/14 (smart pointers, move semantics). Esta restricción tiene un propósito pedagógico: comprender el ciclo de vida **RAII** (Resource Acquisition Is Initialization) desde cero.

La separación en ejercicios incrementales (ex00-ex06) sigue un enfoque **bottom-up**:
1. Primerose aprende a crear/destruir objetos individuales
2. Luego arrays de objetos
3. Se profundiza en la relación punteros/referencias
4. Se aplica en composición de clases
5. Se introduce I/O de archivos
6. Finalmente, punteros a funciones miembro con dispatch dinámico

## Diagrama deArquitectura

```mermaid
graph TB
    subgraph Ex00-01["Ejercicios deMemoria"]
        Z[Zombie Class] --> |new/delete| HEAP[Heap Memory]
        ZH[ZombieHorde] --> |new[]/delete[]| HEAP
    end

    subgraph Ex02["Punteros vs Referencias"]
        VAR[Variable] --> PTR[Puntero *]
        VAR --> REF[Referencia &amp;]
        PTR --> ADDR[Dirección de Memoria]
        REF --> ADDR
    end

    subgraph Ex03["Composición de Clases"]
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
        HARL[Harl Class] --> FPTR[Punteros aMiembros]
        FPTR --> SWITCH[Switch/Enum Filter]
    end

    HEAP --> RAII[Patrón RAII]
```

## Guía de Instalación

```bash
# 1. Clonar el repositorio
git clone https://github.com/samuelhm/CPP-Module-01.git
cd CPP-Module-01

#2. Compilar cualquier ejercicio
cd ex00 && make

# 3. Ejecutar el binario generado
./TheWalkingDead

# 4. Limpiar objetos
make fclean
```

### Compilación específica por ejercicio

| Ejercicio | Comando | Ejecutable |
|-----------|---------|------------|
| ex00 | `cd ex00 && make` | `./TheWalkingDead` |
| ex01 | `cd ex01 && make` | `./TheWalkingDead` |
| ex02 | `cd ex02 && make` | `./ brain` |
| ex03 | `cd ex03 && make` | `./ survivors` |
| ex04 | `cd ex04 && make` | `./replace <file> <s1> <s2>` |
| ex05 | `cd ex05 && make` | `./harlFilter` |
| ex06 | `cd ex06 && make` | `./harlFilter` |

## LeccionesAprendidas

- **Gestión de memoria**: Diferencia entre `new`/`delete` y `new[]`/`delete[]`
- **Punteros vs Referencias**: Referencias siempre inicializadas, punteros pueden ser NULL
- **Composición**: Referencia para dependencias obligatorias, puntero para opcionales
- **Function Dispatch**: Punteros a funciones miembro para evitar chains de `if/else`
- **RAII**: Recursos adquiridos en constructor, liberados en destructor

## Contacto

[![GitHub](https://img.shields.io/badge/GitHub-samuelhm-181717?style=flat-square&logo=github)](https://github.com/samuelhm/)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-shurtado--m-0A66C2?style=flat-square&logo=linkedin)](https://www.linkedin.com/in/shurtado-m/)