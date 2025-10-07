#include<iostream>
using namespace std;

class Student {
  public:
  int rollNo;
  float percent;
  string name;
   
  void show(){
    cout<<rollNo<<endl;
    cout<<percent<<endl;
    cout<<name<<endl;
  }

};
void change(int &x){
    x=9;
    
}

int main(){
    Student s1;
    s1.rollNo=123;
    s1.percent=78.90;
    s1.name="Vishwas";
    s1.show();
    int x=7;
    cout<<x<<endl;
    change(x);
    cout<<x<<endl;

}