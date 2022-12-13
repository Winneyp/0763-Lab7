#include<iostream>

using namespace std;

int adiff(int a, int b)
{
  int c=0;
  if (a>360 or a<-360)
  {
    a = a%360;
  }
  if (b>360 or b<-360)
  {
    b = b%360;
  }

  if (a<0)
  {
    a = 360+a;
  }
  if (b<0)
  {
    b = 360+b;
  }

  c = b-a;
  if (c<0)
  {
    c=-c;
  }

  if (c>180)
  {
    c = 360-c;
  }
  return c;

}

int main(){
  int a=0, b=0;

  cout << "a = ";
  cin >> a;
  cout << "b = ";
  cin >> b;

  cout << adiff(a,b);

}
