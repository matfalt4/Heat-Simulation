#include<stdlib.h>
#include<stdio.h>

#include "heat.h"


Plate* create_plate(int rows, int cols, double initial_temperature){

    Plate* plate = malloc(sizeof(Plate));

    plate->rows = rows;
    plate->cols = cols;

    plate->temperature = malloc(rows*sizeof(double*));

    for(int i = 0; i < rows; i++){
        plate->temperature[i] = malloc(cols*sizeof(double));

        for(int j = 0; j < cols; j++)
            plate->temperature[i][j] = initial_temperature;
    }

    if(plate->temperature == NULL){
        printf("Error of memory allocation!");
        exit(0);
    }

    return plate;
}
