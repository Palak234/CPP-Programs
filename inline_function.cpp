#include<iostream>
using namespace std;
class Student{
    public:
    int a,b;
    inline int displaySum(){
        return a+b;
    }
};
int main(){
    Student s;
    s.a=4;
    s.b=6;
    int c=s.displaySum();
    cout<<c;
    return 0;
}