#include<iostream>
using namespace std;
class SumOfArray{
    int size,a[20],sum;
    public:
        SumOfArray(int arr[],int s){
           size=s;
           sum=0;
           for(int i=0;i<size;i++){
               a[i]=arr[i];
               if(a[i]>0){
                   sum+=a[i];
                }
            }
        }
        SumOfArray(const SumOfArray &obj){
            size=obj.size;
            sum=obj.sum;
            for(int i=0;i<size;i++){
                a[i]=obj.a[i]; 
            }
        }
        void display(){
            cout<<"Sum of all positive numbers in the array:"<<sum<<endl;
        }
};
int main(){
    int n,a[20];
    cout<<"Enter the size of the array (should be under 20):";
    cin>>n;
    cout<<"Enter elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    SumOfArray obj1(a,n);
    SumOfArray obj2=obj1;
    obj2.display();
    return 0;
}