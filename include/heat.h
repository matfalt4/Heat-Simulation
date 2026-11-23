#ifndef HEAT_H
#define HEAT_H

typedef struct{
  int rows;
  int cols;
  double** temperature;
}Plate;

Plate* create_plate(int rows, int cols, double initial_temp);
void free_plate(Plate* plate);



#endif
