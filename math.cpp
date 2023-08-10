#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<"A program designed to calculate the root of a function"<<endl;
       cout<<"it will have the following form Ax^2+Bx+c=0";
       int A,B,C;
       float x1,x2;
       cout<<"input the respective components of A,B and C\n";
       cin>>A>>B>>C;
       if(pow(B,2)-4*A*C>=0)
       {
          x1=(-B+sqrt(B*B-4*A*C))/2*A;
          x2=(-B-sqrt(B*B-4*A*C))/2*A;
       }
       cout<<x1<<x2;

    return 0;
}