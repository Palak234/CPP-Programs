#include<iostream>
using namespace std;
class Number{
    private:
    int a;
    public:
    Number (int num){
        a=num;
    }
    friend class IsPrime;
};
class IsPrime{
    public:
    void checkPrime(Number &t){
        int n=t.a;
        if(n<=1){
            cout<<"Enter a valid number"<<endl;
        }
        bool isPrime = true;
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime){
            cout<<"Prime"<<endl;
        }
        else{
            cout<<"Not Prime"<<endl;
        }
    }
};
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    Number obj1(num);
    IsPrime obj2;
    obj2.checkPrime(obj1);
    return 0;
}