//codigo modificado de los codigos existentes en el ejercicio 25 y 26 y de https://devcode.la/tutoriales/factorial-en-c++/

#include <fstream>
#include <iostream>
#include<cmath>

//se usa para evitar escribir std::cout y std::endl
using namespace std;

//inicializo variables, funciones y punteros
   int i;
   int N;
   int fact=1;
   void facto(int N, float *a);

//crea la funcion factorial, agrega el valor en la posicion e imprime el arreglo
void facto(int N, float *a){
    
   cout<<"[";
    
   if(N<0){
	    fact =0;
   }
	
   else if(N==0){
	   fact=1;
   }
	
   else{
	   
      for (int i = 1; i <= N; i++){
         fact=fact*i;
          
         a[i] = fact;
    
         cout << a[i] <<"  ";

          
   
      }
       cout<<"]"<<endl;
	   
   }
   
}

//recibe el numero de posiciones que tendra el arreglo y por ende el numero que se tendra en el factorial, llama las funciones
int main () {
	
	cout<<"ingresa un numero: ";
    cin>>N;

	float* lista =new float[N];
    
    facto(N, lista);

   
   delete [] lista;
   return 0;
}

