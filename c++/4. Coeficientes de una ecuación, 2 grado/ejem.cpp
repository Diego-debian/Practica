#include <iostream>
using namespace std;
void suma_y_resta(int, int, int *,int *);
int main()
{
  int n,m,x,y;
  cout<<"Dame un numero";
  cin>>n;
  cout<<"Dame el segundo";
  cin>>m;
  suma_y_resta(n, m, &x,&y);
  cout<<"La suma es: "<<n;
  cout<<"La resta es"<<m;
  return 0;
}

void suma_y_resta(int p, int q, int *r, int *s)
{
  int x, y;
  x=p;
  y=q;
  *r=x+y;
  *s=x-y;
} 
