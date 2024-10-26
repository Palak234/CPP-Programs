#include<iostream>
using namespace std;
class SumOfn{
    int n,sum;
    public:
        SumOfn(){
            sum=0;
            n=5;
            for(int i=1;i<=n;i++){
                sum+=i;
            }
            cout<<"Sum:"<<sum<<endl;
        }
};
int main(){
    SumOfn obj;
    return 0;
}