#include<iostream>
using namespace std;
class Sum{
    int a,b,sum1;
    float c,d,sum2;
    int sum3;
    public:
        Sum(int x,int y){
            a=x;
            b=y;
            sum1=a+b;
        }
        Sum(float p,float q){
            c=p;
            d=q;
            sum2=c+d;
        }
        Sum(char r,char s){
            sum3=r+s;
        }
        void displayInt(){
            cout<<"Sum of two integer values:"<<sum1<<endl;
        }
        void displayFloat(){
            cout<<"Sum of two float values:"<<sum2<<endl;
        }
        void displayChar(){
            cout<<"Sum of two character values:"<<sum3<<endl;
        }
};
int main(){
    int a,b;
    float c,d;
    char e,f;
    cout<<"Enter two integer values:";
    cin>>a >>b;
    cout<<"Enter two float values:";
    cin>>c >>d;
    cout<<"Enter two character values:";
    cin>>e >>f;
    Sum obj1(a,b);
    Sum obj2(c,d);
    Sum obj3(e,f);
    obj1.displayInt();
    obj2.displayFloat();
    obj3.displayChar();
    return 0;
}