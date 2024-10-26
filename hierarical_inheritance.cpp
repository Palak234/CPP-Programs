#include<iostream>
using namespace std;
class Numbers{
    public:
        int a,b;
};
class Num1:public Numbers{
    public:
        Num1(int x){
            a=x;
        }
        void da(){          // da = display a
            cout<<"First number:"<<a<<endl;   
        }; 
};
class Num2:public Numbers{
    public: 
        Num2(int y){
            b=y;            
        }
        void db(){         // db = display b
            cout<<"Second number:"<<b<<endl;
        }
};
int main(){
    int x,y;
    cout<<"Enter two numbers:"<<endl;
    cin>>x>>y;
    Num1 obj1(x);
    Num2 obj2(y);
    obj1.da();
    obj2.db();
    return 0;
}