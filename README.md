# 🚀 Programa Híbrido C++/ASM: Calculadora Avanzada

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![ASM](https://img.shields.io/badge/Assembly-NASM-red.svg)](https://nasm.us)
[![C++](https://img.shields.io/badge/C++-17-blue.svg)](https://isocpp.org/)
[![Platform](https://img.shields.io/badge/Platform-Linux%20%7C%20Windows-lightgrey.svg)](https://github.com/tu-usuario/tu-repo)

Programa que combina C++ con ensamblador (NASM) para operaciones avanzadas como cálculo de MCD y suma de arreglos.

## 📋 Características
- Cálculo del Máximo Común Divisor (MCD) en ASM
- Suma optimizada de arreglos en ensamblador
- Interfaz interactiva en C++
- Soporte para 64 bits (x86_64)

## 🛠️ Requisitos
- NASM (Netwide Assembler)
- GCC/G++ (compilador C++)
- Linux (o WSL en Windows)

## 🚀 Compilación y Ejecución
```bash
# Compilar ASM (64 bits)
nasm -f elf64 funciones.asm -o funciones.o

# Compilar C++
g++ -c main.cpp -o main.o

# Enlazar y crear ejecutable
g++ main.o funciones.o -o programa

# Ejecutar
./programa
