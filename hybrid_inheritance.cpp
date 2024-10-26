#include<iostream>
using namespace std;
class A{
    public:
        int a;
        A(int x){
            a=x;
        }
        void dA(){     // dA = display a
            cout<<"Number from class A:"<<a<<endl;
        }
};
class B:public A{
    public:
        int b;
        B(int x,int y):A(x){
            b=y;
        }
        void dB(){     // dB = display b
            cout<<"Number from class B:"<<b<<endl;
        }
};
class C:public A{
    public:
        int c;
        C(int x,int z):A(x){
            c=z;
        }
        void dC(){      // dC = display c
            cout<<"Number from class C:"<<c<<endl;
        }
};
class D:public A{
    public:
        int d;
        D(int x,int p):A(x){
            d=p;
        }
        void dD(){      // dD = display d
            cout<<"Number from class D:"<<d<<endl;
        }
};
class E:public B{
    public:
        int e;
        E(int x,int y,int q):B(x,y){
            e=q;
        } 
        void dE(){      // dE = display e
            cout<<"Number from class E:"<<e<<endl;
        }
};
int main(){
    A obj1(1);
    B obj2(2,3);
    C obj3(4,5);
    D obj4(6,7);
    E obj5(8,9,10);
    obj1.dA();
    obj2.dA();
    obj2.dB();
    obj3.dA();
    obj3.dC();
    obj4.dA();
    obj4.dD();
    obj5.dA();
    obj5.dB();
    obj5.dE();
    return 0;
}