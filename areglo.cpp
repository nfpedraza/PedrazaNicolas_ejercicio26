//codigo modificado de los codigos existentes en el ejercicio 26 y de https://devcode.la/tutoriales/factorial-en-c++/
#include <fstream>
#include <iostream>
#include<cmath>
using namespace std;
double* lista; 
   int i;
   int N;
   int fact=1;

int facto(int N){
	
   if(N<0){
	    fact =0;
   }
	
   else if(N==0){
	   fact=1;
   }
	
   else{
	   
      for (int i = 1; i <= N; i++){
         fact*=i;
      }
	   
   }
   cout<<"Factorial de "<<N<<endl;
}

int main (int argc, char **argv) {
	
	cout<<"ingresa un numero: ";
    cin>>N;

	cout << "Argumentos "<< endl;
    for(i=0;i<argc;i++){
    cout << i << " "<< argv[i] << endl;
   }

   N = atoi(argv[1]);

   lista  = new double[N * N];
   
   cout << "Lista sin inicializar"<< endl;
   for (int i=0;i<N*N;i++){
     cout << lista[i] << endl;
   }
   
   cout << "Lista inicializada"<< endl;
   for (int i=0;i<N*N;i++){
     lista[i] = facto(i) ;
     cout << lista[i] << endl;
   }
   
   delete [] lista;
   return 0;
}

