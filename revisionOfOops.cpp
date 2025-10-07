#include<iostream>
#include<string>
using namespace std;
class Student{
public:

// Data members
  string name;
  int rno;
  float marks;
// constructor ->used to intialize a value when classs created
  Student(string name,int rno,float marks){
    this->name=name;
    this->rno=rno;
    this->marks=marks;
  }
};

void change(Student *s){
    s->name="Harsh";
}

int main(){
    //Student s("vishwas chauhan",8523158,6.54);
    Student *s=new Student("power",85231,9.67);
    // Student* ptr=&s;
    //(*s).name;
    cout<<s->name<<endl;
    //(*ptr).name;
     change(s);
    //ptr->name="raghav";
    cout<<s->name;
}