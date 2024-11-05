#include<iostream>
using namespace std;
class A{
    public:
    virtual void displaySum(int x,int y,int z){
        cout<<"Sum(base class) is:"<<x+y+z<<endl;
    }
};
class B:public A{
    void displaySum(int x,int y,int z){
        cout<<"Sum(derived class) is:"<<x+y+z<<endl;
    }
};
int main(){
    A *ptr,obj1;
    B obj2;
    obj2.A::displaySum(2,3,4);
    ptr=&obj2;
    ptr->displaySum(2,3,4);
    return 0;
}