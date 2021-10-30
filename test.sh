#!/bin/bash

cd ./code
make fclean
make
make clean
cd ..

gcc main.c ./code/ft_printf.h ./code/libftprintf.a -o execPrint
./execPrint