#include<iostream>
using namespace std;
int main()
{
    cout<<"checking whether a number is prime or composite\n";
    cout<<"enter the number:\n";
    int n;
    string number;
    cin>>n;
  if(n%2!=0&&n%3!=0&&n%5!=0)
  {
    number="prime";

  }
  else{
    number="composite";
  }
  cout<<number;

return 0;
}
