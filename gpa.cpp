#include<iostream>
#include<string.h>
#define CLEAR_SCREEN "cls"
using namespace std;
		string grade(int);
		void display(string array[],float);
		float gpa(string array[]);
		void clearScreen();
		float converter(string,int);
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
   float cgpa=gpa(array);
 display(array,cgpa);
 
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

void display(string array[],float cgpa){
	cout<<"Name: Natnael Br\n"
					"  ID: UGR//15\n"
					"Academic Year: 2nd\n"
					"semester: I\n";
	cout<<"course name\t\t\t"<<"Grade"<<"\t"<<"ECTS\n";
	for(int i=0;i<4;i+=1)
	{
     cout<<courses[i]<<"\t\t\t"<<array[i]<<"\t"<<ECTS[i]<<endl;
	}
  cout<<"\t\t"<<"Semester GPA: "<<cgpa;
}


float gpa(string array[]){  
	float cgpa;
	int gpa[5]; 
	for( int i=0;i<4;i+=1)
	   gpa[i]=converter(array[i],i);
	for( int i=0;i<4;i+=1)
      cgpa+=(gpa[i]*ECTS[i]);
    return ((cgpa/76.0)*4);
}

float converter(string array,int i){
	float num;
     if(array=="A+")
	      num= 4.0;
	 if(array=="A")
	      num=4.0;
	 if(array=="A-")
	      num= 3.75;
	if(array=="B+")
	      num=3.5;
	if(array=="B")
	     num= 3.0;
	if(array=="B-")
	      num= 2.75;
	if(array=="C+")
	      num= 2.5;
	if(array=="C")
	      num= 2.0;
	if(array=="C-")
	      num= 1.75;
	if(array=="D")
	      num=1.0;

	return num;

}
