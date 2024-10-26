#include<iostream>
using namespace std;
class Numbers{
    public:
        int a,b;
};
class Product:public Numbers{
    public:
        Product(int x,int y){
            a=x;
            b=y;
        }
        void dp();     // dp = display product
};
void Product::dp(){
    cout<<"Product is:"<<a*b;
}
int main(){
    int x,y;
    cout<<"Enter two numbers:"<<endl;
    cin >> x >> y;
    Product obj(x,y);
    obj.dp();
    return 0;
}