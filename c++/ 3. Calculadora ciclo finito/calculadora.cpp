#include <iostream>

using namespace std;

float suma(float, float);
float resta(float, float);
float multiplica(float, float);
float divide(float, float);

int main(){
  float num1;
  float num2;
  float rta;

  cout<<"Prográma que suma, multiplica, resta y divide dos números.\n"<<endl;

  try{
    cout<<"ingrese un número: "<<endl;      
    cin>>num1;

    cout<<"ingrese otro número: "<<endl;
    cin>>num2;
    
    cout<<"La suma de "<<num1<<" y "<<num2<<" es "<<suma(num1, num2)<<endl;
    cout<<"La resta de "<<num1<<" y "<<num2<<" es "<<resta(num1, num2)<<endl;
    cout<<"La multiplicación de "<<num1<<" y "<<num2<<" es "<< multiplica(num1, num2)<<endl;
    cout<<"La división de "<< num1<<" y "<<num2<<" es "<<divide(num1,num2)<<endl;
      
  }
  catch(char *ce)
    {
      cout<<"Error indefinido."<<endl;
    }
  
  return 0;
}

float suma(float a, float b){
  float c;
  c = a+b;
  return c;
}

float resta(float a, float b){
  float c;
  c = a - b;
  return c;
}

float multiplica(float a, float b){
  float c;
  c = a*b;
  return c;
}

float divide(float a, float b){
  float c;
  c = a/b;
  return c;
}

