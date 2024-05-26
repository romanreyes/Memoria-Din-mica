#include "library.h"

int min (int old_size, int new_size){ 
    if(old_size>new_size){
        return new_size;
    }
    return old_size;
}
int* resize(int *old_array, int old_size, int new_size){
    int *aux = new int[new_size]; //creo un nuevo vector con el nuevo tamaño
    int smallest = min(old_size, new_size);
    for (int i=0; i<smallest; i++){
        aux[i] = old_array[i];
    }
    delete []old_array;
    return aux;
}
int* removeItem(int *vec,int vec_size,int item_pos){
    if( item_pos<0 || item_pos>= vec_size){
         // Si item_pos está fuera de los límites, retornamos el mismo vector.
        return vec;
    }
    int *aux= new int [vec_size-1];
    int j=0; 
    for (int i = 0; i < vec_size; i++){
        if(i!=item_pos){
            aux[j]=vec[i];
            j++;
        }
    }
    delete[]vec;
    return aux;
}
int* insertItem(int* vec,int vec_size,int insert_pos,int insert_value) {
    if(insert_pos<0 || insert_pos>=vec_size){
        return vec;
    }
    int* aux = new int [vec_size+1];
    int j=0;
    for (int i = 0; i < vec_size+1; i++){
        if(i!=insert_pos){
            aux[i]=vec[j];
            j++;
        }else{
            aux[i]=insert_value;
        }
    }
    delete[]vec;
    return aux;
}
int* concat(int* vec_left,int left_size,int* vec_right,int right_size){
    int* aux = new int [left_size+right_size];
    for(int i=0; i<left_size; i++){
        aux[i]=vec_left[i];
    }
    for (int i = 0; i < right_size; i++){
        aux[left_size+i]=vec_right[i];
    }
    return aux;
}