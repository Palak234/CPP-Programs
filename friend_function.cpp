#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
    string name;
    int age;
    string department;
    string course;
    public:
    Student(string n, int a, string d, string c){
        name=n;
        age=a;
        department=d;
        course=c;
    }
    friend void display(const Student &s);
};
void display(const Student &s){
    cout<<"Name:"<<s.name<<endl;
    cout<<"Age:"<<s.age<<endl;
    cout<<"Department:"<<s.department<<endl;
    cout<<"Course:"<<s.course<<endl;
}
int main(){
    Student obj("Palak",19,"Computer Science","C++");
    display(obj);
    return 0;
}