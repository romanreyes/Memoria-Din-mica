#pragma once
#include <stdio.h>
#include <stdlib.h>
//La función min garantiza que solo se copien hasta el número de elementos que existen en el array original o en el nuevo array, 
//el que sea menor. Esto evita accesos fuera de los límites del array.
int min (int old_size, int new_size);

int* resize(int *old_array, int old_size, int new_size);

int* removeItem(int *vec,int vec_size,int item_pos);

int* insertItem(int* vec,int vec_size,int insert_pos,int insert_value);

int* concat(int* vec_left,int left_size,int* vec_right,int right_size);