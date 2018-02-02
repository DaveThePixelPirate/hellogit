#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student{
public:
Student(string name,int age){
	studentName=name;
	studentAge=age;
	}
	
string getName(){
	return studentName;
};
int getAge(){
	return studentAge;
};	
private:
	string studentName;
	int studentAge;
	
};

int main(){
	string nameMain;
	int ageMain;
	//cout<<"Hello World";
	vector<Student> myClass;
	cout<<"Enter student name and age"<<endl;
	cout<<"Name: ";
	cin>>nameMain;
	cout<<"Age: ";
	cin>>ageMain;
	
	Student newStudent(nameMain,ageMain);
	myClass.push_back(newStudent);
	
	for (unsigned int i =0;i<myClass.size();i++){
		cout<<myClass[i].getName()<<" is "<<myClass[i].getAge()<<" years old\n";
	}
	return 0;
	
}
