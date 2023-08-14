#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<"THIS IS A PROGRAM DESIGNED TO CALCULATE STUDENTS GRADE ACCORDING TO THE AAU GRADE GUIDLINE\n"
        <<"------------------------------------------------------------------------------------------\n";
    int asst1,asst2,mid,final,total;
    string grade;
    cout<<"Enter the students first assignment marks(10%)\n";
while(!(cin>>asst1)){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout<<"Invalid input. Please enter a number: ";
}
    cout<<"Enter the students second assignment marks(10%)\n";
    while(!(cin>>asst2)){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout<<"Invalid input. Please enter a number: ";
}
    cout<<"Enter the students mid exam result(30%)\n";
    while(!(cin>>mid)){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout<<"Invalid input. Please enter a number: ";
}
    cout<<"Enter the students final exam result(50%)\n";
    while(!(cin>>final)){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout<<"Invalid input. Please enter a number: ";
}
   total=asst1+asst2+mid+final;
    if(total<=100)
    {
       if(total>=90)
       {
        grade="A+";
        }
        else if(total>=83)
        {
            grade="A";
        }
        else if(total>=80)
        {
            grade="A-";
        }
        else if(total>=75)
        {
            grade="B+";
        }
        else if(total>=68)
        {
            grade="B";
        }
         else if(total>=65)
        {
            grade="B-";
        }
         else if(total>=60)
        {
            grade="C+";
        } else if(total>=50)
        {
            grade="C";
        }
         else if(total>=45)
        {
            grade="C-";
        }
         else if(total>=40)
        {
            grade="D";
        }
        else{
            grade="F";
        }

    }
    else{
        cout<<"Results should be maximum of 100 marks\n";
    }
    cout<<left<<setw(22)<<"Assignment 1"
     <<setw(22)<<"Assignment 2"
     <<setw(18)<<"Mid exam"
     <<setw(20)<<"Final Exam"
     <<setw(16)<<"Total"
     <<setw(10)<<"Final"<<endl;
     cout<<left<<setw(22)<<"(10%)"
     <<setw(22)<<"(10%)"
     <<setw(18)<<"(30%)"
     <<setw(20)<<"(50%)"
     <<setw(16)<<"(100%)"
     <<setw(10)<<"Grade"<<endl;
 cout<<left<<setw(22)<<asst1
     <<setw(22)<<asst2
     <<setw(18)<<mid
     <<setw(20)<<final
     <<setw(16)<<total
     <<setw(10)<<grade;
     
    return 0;
}
