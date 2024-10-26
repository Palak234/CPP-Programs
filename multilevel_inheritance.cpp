#include<iostream>
using namespace std;
class Num1{
    public:
        int a;
};
class Num2:public Num1{
    public:
        int b;
};
class Sum:public Num2{
    public:
        Sum(int x,int y){
            a=x;
            b=y;
        }
        void ds(); // ds = display sum
};
void Sum::ds(){
    cout<<"Sum is:"<<a+b;
}
int main(){
    int x,y;
    cout<<"Enter two numbers:"<<endl;
    cin >> x >> y;
    Sum obj(x,y);
    obj.ds();
    return 0;
}