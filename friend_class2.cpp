#include<iostream>
using namespace std;
class A{
    private:
    int a;
    protected:
    int b;
    public:
    A(int x,int y){
        a=x;
        b=y;
    }
    friend class D;
};
class B{
    private:
    float a;
    protected:
    float b;
    public:
    B(float x,float y){
        a=x;
        b=y;
    }
    friend class D;
};
class C{
    private:
    char a;
    protected:
    char b;
    public:
    C(char x,char y){
        a=x;
        b=y;
    }
    friend class D;
};
class D{
    public:
    void display(A &t1){
        cout<<"Data Members of class A are:"<<t1.a<<" "<<t1.b<<endl;
    }
    void display(B &t2){
        cout<<"Data Members of class B are:"<<t2.a<<" "<<t2.b<<endl;
    }
    void display(C &t3){
        cout<<"Data Members of class C are:"<<t3.a<<" "<<t3.b<<endl;
    }
};
int main(){
    A obj1(2,3);
    B obj2(2.3f,3.2f);
    C obj3('m','n');
    D objD;
    objD.display(obj1);
    objD.display(obj2);
    objD.display(obj3);
    return 0;
}