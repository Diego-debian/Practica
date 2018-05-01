/*
Diego Alberto Parra Garzón
Colombia Bogotá D.C., 2018 
Pedir los coeficientes de una ecuación de 2º grado "cuyos coeficientes estan en los realies", y muestre sus soluciones reales. 
*/
#include <iostream>
#include <math.h>

using namespace std;
int isReal(float, float, float);
void numReal(float, float, float, float *, float *);
void numComplex(float, float, float, float *, float *);
int main(){
  float A, B, C;
  int D;
  float x1, x2;
  cout<<"Programa que resuelve ecuaciones de segundo grado.\n\n"<<endl;
  cout<<"Organice la ecuación de la siguiente forma:\n Ax² + Bx + C "<<endl;
  cout<<"Ingrese el valor de A"<<endl;
  cin>> A;
  if (cin.fail() == true){
    cout<<"Ingreso un caracter, se esperaba un número"<<endl;
    exit(0);
  }
  if ((int)A == 0){
    cout<<"A no puede ser 0"<<endl;
    exit(0);
  }
  
  cout<<"Ingrese el valor de B"<<endl;
  cin>> B;
  if (cin.fail() == true){
    cout<<"Ingreso un caracter, se esperaba un número"<<endl;
    exit(0);
  }

  cout<<"Ingrese el valor de C"<<endl;
  cin>> C;
  if (cin.fail() == true){
    cout<<"Ingreso un caracter, se esperaba un número"<<endl;
    exit(0);
  }

  cout<<"La ecuación queda de la siguiente forma:\n"<< A<<"x² + "<<B<<"x + "<< C <<endl;

  D = isReal(A,B,C);
  
  if (D == 0){
    numComplex(A,B,C, &x1, &x2);
    cout<<"Las raices de la ecuación compleja son: "<<endl;
    cout<<"x1 = ("<<x1<<") + ("<<x2<<")i"<<"\t x2 = ("<<x1<<") - ("<<x2<<")i"<<endl;
    cout<<"Factorizado queda de la siguiente forma: "<<endl;
    cout<<A<<"*(x- (("<<x1<<") + ("<<x2<<")i))*"<<"(x - (("<<x1<<") - ("<<x2<<")i))"<<endl;
    
  }
  if(D == 1){
    numReal(A,B,C, &x1, &x2);
    cout<<"Las raices de la ecuación son: "<<endl;
    cout<<"x1 = "<<x1<<"/"<<2*A<<"\t   x2 = "<<x2<<"/"<<2*A<<endl;
    cout<<"Factorizado queda de la siguiente forma: "<<endl;
    cout<<A<<"*(x + ("<<x1<<"/"<<2*A<<"))*(x + ("<<x2<<"/"<<2*A<<"))"<<endl;
  }
  
  if(D == 2){
    numReal(A,B,C, &x1, &x2);
    cout<<"Las raices de la ecuación son: "<<endl;
    cout<<"x1 = "<<B<<"/"<<2*A<<"\t x2 = "<<B<<"/"<<2*A<<endl;
    cout<<"Factorizado queda de la siguiente forma: "<<endl;
    cout<<A<<"*(x + ("<<B<<"/"<<2*A<<"))²"<<endl;

  }
  return 0;
}

int isReal(float A, float B, float C){
  float var;
  int valor;
  var = B*B - 4*A*C;

  if ((int)var < 0){
    valor = 0;
  }
  else  if ((int)var > 0) {
    valor = 1;
  }
  else  if ((int)var == 0) {
    valor = 2;
  }
  return valor;
}


void numReal(float a, float b, float c, float *x1, float *x2){
  float raiz, x11, x12;
  raiz = sqrt(b*b - 4*a*c);
  x11 = (raiz-b);//(2*a);
  x12 = (-raiz-b);//(2*a);
  *x1 = x11*(-1);
  *x2 = x12*(-1);
  
}


void numComplex(float a, float b, float c, float *x1, float *x2){
  float raiz, x11, x12;

  raiz = sqrt(4*a*c -b*b);
  x11 = b/(2*a);
  x12 = raiz/(2*a);
  *x1 = x11*(-1);
  *x2 = x12*(-1);
  
}
