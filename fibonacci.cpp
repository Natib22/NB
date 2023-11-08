#include<iostream>
using namespace std;
int main(){
    int num1=0;
    int num2=1;
    int temp;
    cout<<num1<<" "<<num2<<" ";
    for(int i=0;i<20;i++)
    {    
        temp=num1+num2;
        cout<<temp<<" ";
        num1=num2;
        num2=temp;
        cout<<" ("<<" "<<static_cast<float>(num2) / num1<<") ";
    }
    return 0;
}
