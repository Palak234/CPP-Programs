#include<iostream>
using namespace std;
template <class T1,class T2>
T1 Sum(T1 a,T2 b){
    return a+b;
}
int main(){
    cout<<"Sum (integer):"<<Sum(3,4)<<endl;
    cout<<"Sum (float):"<<Sum(2.3,4.8);
    return 0;
}