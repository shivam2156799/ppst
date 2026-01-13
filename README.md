#include<iostream>
using namespace std;
int main ()
{
  int a, b ,c;
  cout<< "Enter number a :";
  cin>> a;
   cout<< "Enter number b :";
  cin>> b;
   cout<< "Enter number c :";
  cin>> c;

  if (a>b && b>c)
  {
    cout<< "a is largest";
  }
  else if (b>a && b>c)
  {
    cout<< "b is largest ";

  }
  else
   {
   cout<<"c is largest";
  }


}
