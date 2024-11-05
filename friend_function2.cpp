#include<iostream>
using namespace std;
class A{
    private:
    int a;
    protected:
    float b;
    public:
    A(int x,float y){
        a=x;
        b=y;
    }
    friend void friendFunction1(A &t1);
};
class B{
    private:
    float a;
    protected:
    int b;
    public:
    B(float x,int y){
        a=x;
        b=y;
    }
    friend void friendFunction2(B &t2);
};
class C{
    private:
    char a;
    protected:
    double b;
    public:
    C(char x,double y){
        a=x;
        b=y;
    }
    friend void friendFunction3(C &t3);
};
void friendFunction1(A &t1){
    cout<<"Data members of class A: "<<t1.a<<" , "<<t1.b<<endl;
}
void friendFunction2(B &t2){
    cout<<"Data members of class B: "<<t2.a<<" , "<<t2.b<<endl;
}
void friendFunction3(C &t3){
    cout<<"Data members of class C: "<<t3.a<<" , "<<t3.b<<endl;
}
int main(){
    A obj1(2,2.3);
    B obj2(3.2,3);
    C obj3('P',2.345);
    friendFunction1(obj1);
    friendFunction2(obj2);
    friendFunction3(obj3);
    return 0;
}