#include<iostream>
using namespace std;
class Unary_op_overload{
    private:
    int a;
    public:
    Unary_op_overload(int x){
        a=x;
    }
    void operator ++(){
        a+=5;
        cout<<"Increment using member function:"<<a<<endl;

    }
    void operator --(){
        a-=1;
        cout<<"Decrement using member function:"<<a<<endl;
    }
    void operator ~(){
        a=-a;
        cout<<"Negation using memebr function:"<<a<<endl;
    }
    friend void operator +(Unary_op_overload &t);
    friend void operator -(Unary_op_overload &t);
    friend void operator !(Unary_op_overload &t);
};
void operator +(Unary_op_overload &t){
    t.a+=5;
    cout<<endl<<"Increment using friend function:"<<t.a<<endl;
}
void operator -(Unary_op_overload &t){
    t.a-=1;
    cout<<"Decrement using friend function:"<<t.a<<endl;
}
void operator !(Unary_op_overload &t){
    t.a=-t.a;
    cout<<"Negation using friend function:"<<t.a<<endl;
}
int main(){
    Unary_op_overload obj(10);
    ++obj;
    --obj;
    ~obj;
    Unary_op_overload obj2(10);
    +obj2;
    -obj2;
    !obj2;
    return 0;
}