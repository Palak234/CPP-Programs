#include<iostream>
using namespace std;
class Binary_op_overload{
    private:
    int a;
    public:
    Binary_op_overload(int x){
        a=x;
    }
    void operator +(const Binary_op_overload &obj){
        int c;
        c=a+obj.a;
        cout<<"Using member function:"<<c<<endl;
    }
    friend void operator -(Binary_op_overload &obj1,const Binary_op_overload &obj2);
};
void operator -(Binary_op_overload &obj1,const Binary_op_overload &obj2){
    int c;
    c=obj1.a+obj2.a;
    cout<<"Using friend functon:"<<c<<endl;
}
int main(){
    Binary_op_overload num1(4),num2(3);
    num1+num2;
    operator - (num1,num2);
    return 0;
}