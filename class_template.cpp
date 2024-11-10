#include<iostream>
using namespace std;
template<class T1,class T2,class T3,class T4>
class Student{
    public:
    T1 name;
    T2 age;
    T3 course;
    T4 department;
    Student(T1 n,T2 a,T3 c,T4 d){
        name=n;
        age=a;
        course=c;
        department=d;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Course:"<<course<<endl;
        cout<<"Department:"<<department<<endl;
    }
};
int main(){
    Student obj("Palak",19,"C++","Computer Science");
    obj.display();
    return 0;
}