#include<iostream>
using namespace std;
class Swapping{
    int a,b;
    public:
        Swapping(int x,int y){
           a=x;
           b=y;
           a=a+b;
           b=a-b;
           a=a-b;
           cout<<"Numbers after swapping are:"<<"\n"<<a<<"\n"<<b;
        }
};
int main(){
    int n1,n2;
    cout<<"Enter two numbers:"<<endl;
    cin>>n1 >>n2;
    Swapping obj(n1,n2);
    return 0;
}