#include<iostream>
using namespace std;
void sum(int a,int b){
    cout<<"Sum of two numbers is:"<<a+b<<endl;
}
void sum(int a,int b,int c){
    cout<<"Sum of three numbers is:"<<a+b+c<<endl;
}
void sum(int a,int b,int c,int d){
    cout<<"Sum of three numbers is:"<<a+b+c+d<<endl;
}
int main(){
    sum(2,3);
    sum(4,5,6);
    sum(6,7,8);
    return 0;
}