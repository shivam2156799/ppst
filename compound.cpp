#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
  int P,T  ;
  double A,CI, R;

    cout << "Enter value of principle amount P : ";
    cin >> P;

  cout << " Enter value of Rate R : ";
  cin >> R;

  cout <<"Enter value of Time period T : ";
  cin >> T;
  
  
  A = P*pow((1+(R/100)),T) ;

   cout<< "A = " << A  ;
   CI = A - P ;
   cout<<"Compound interest is :"<< CI ;


}