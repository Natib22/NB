#include<iostream>
#include<string.h>
#define CLEAR_SCREEN "cls"
using namespace std;
string grade(int);
void display(string array[]);
float gpa();
void clearScreen();
string courses[]={"Programming","Linear Algebra","Applied one","Global Trends"};
int ECTS[]={5,5,5,4};
int main(){
	string array[8];

				cout<<"Name: Natnael Br\n"
					"  ID: UGR//15\n"
					"Academic Year: 2nd\n"
					"semester: I\n";
	for(int i=0;i<4;i+=1)
	     {
			array[i]=grade(i);
			clearScreen();
		 }
 display(array);
	
														//for(int i=0;i<4;i+=1)
														// cout<<array[i]; 
	return 0;
}



string grade(int i){
	string grade;
	int choice;
     cout<<" Enter the grade of the student on "<<courses[i]<<endl;
	 string grades[] = {"A+", "A", "A-", "B+", "B", "B-", "C+", "C", "C-", "D"};
    
						for (int i = 0; i < 10; i++) {
							cout << i + 1 << ". " << grades[i] <<endl;
						}
	cout<<"Enter your choice: ";
	cin>>choice;
  return grades[choice-1];

}




void clearScreen() {
    system(CLEAR_SCREEN);
}

void display(string array[]){
	cout<<"Name: Natnael Br\n"
					"  ID: UGR//15\n"
					"Academic Year: 2nd\n"
					"semester: I\n";
	cout<<"course name\t\t\t"<<"Grade"<<"\t"<<"ECTS\n";
	for(int i=0;i<4;i+=1)
	{
     cout<<courses[i]<<"\t\t\t"<<array[i]<<"\t"<<ECTS[i]<<endl;
	}
  cout<<"\t\t"<<"Semester GPA: "<<"here";
}