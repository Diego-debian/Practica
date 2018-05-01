//Correr con "g++ Sumar.cpp -o suma"
//Se invoca a la libreria para usar cout y cin
#include <iostream>

//Se crea un spacio nuevo para iniciar el programa
using namespace std;
//Se declara primero la función y su forma.
float Suma(float, float);

//se declara la función main
int main(){
  //Se declara dos variables para almacenar la interacción con usuario.
  float valor1, valor2;
  //Se declara una variable para almacenar el llamado a la función
  float R;

  //Información que se le brinda al usuario.
  cout<<"Programa que suma dos números"<<endl;
  //Se le pide al usuario un número, si el número es decimal utilice el "."
  cout<<"Ingrese el primer número: "<<endl;

  //interacción con el usuario
  cin>>valor1;

  //Se le pide al usuario un número, si el número es decimal utilice el "."
  cout<<"Ingrese el segúndo número: "<<endl;
  //interacción con el usuario
  cin>>valor2;

  //Se llama la función y se le pasa, los parametros de interacción con el usuario; esta información se almacena en la variable R
  R = Suma(valor1, valor2);

  //Se imprime por consola el valor de R
  cout<<"La suma es:"<<R<<endl;
  return 0;
}


//Se crea la función suma la cual recibe dos parametros y devuelve uno.
float Suma(float a, float b){
  float suma;
  suma = a + b;
  return suma;
}
