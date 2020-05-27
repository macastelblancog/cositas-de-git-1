#!/bin/bash
echo compilemos main.cpp

g++ main.cpp && ./a.out > datos.txt

python grafica.py

