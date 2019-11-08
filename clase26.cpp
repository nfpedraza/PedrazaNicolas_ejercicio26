//Para este ejercicio me guie enteramente del ejercicio suma.cpp, cambiandole algunos valores para poder multiplicar
#include <fstream>
#include <iostream>
#include <string.h>
// para evitar el uso de std::cout y std::endl
using namespace std; 

// se define varibles y funciones
float * read_file(string filename, int *n_points);
float mul_values(float *x, float *y, int n_points);

//lee los archivos .txt y los usa en la funcion que multiplica valor por valor
int main(){
  float *x=NULL;
  float *y=NULL;
  int n_x=0;
  int n_y=0;

  x = read_file("valores_x.txt", &n_x);
  y = read_file("valores_y.txt", &n_y);
  
   mul_values(x, y, n_x);
  
   return 0;
}
// funcion que recibe valor por valor encontrado en el archivo.txt
float * read_file(string filename, int *n_points){
  int n_lines=0;
  ifstream infile; 
  string line;
  int i;
  float *array;

  /*cuenta lineas*/
  infile.open(filename); 
  getline(infile, line);
  while(infile){
    n_lines++;
    getline(infile, line);
  }
  infile.close();
  *n_points = n_lines;

  /*reserva la memoria necesaria*/
  array = new float[n_lines];

  /*carga los valores*/
  i=0;
  infile.open(filename); 
  getline(infile, line);  
  while(infile){
    array[i] = atof(line.c_str());
    i++;
    getline(infile, line);
  }
  infile.close();

  return array;
}
// multiplica punto a punto las dos columnas
float mul_values(float *x, float *y, int n_points){
  float a=0;
  int i;
  
  for(i=0;i<n_points;i++){
    a = x[i]*y[i];
      cout<<a<<endl;
  }
  return 0.0;
	
}
