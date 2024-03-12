#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    void getA(int x){
        a=x;
    }
    void displayA(){
        cout<<"The value of a: "<<a<<endl;
    }
};
class B: public A{
    int b, p;
    public:
    void getB(int x, int y){
        getA(x);
        b=y;
    }
    void displayB(){
        displayA();
        cout<<"The value of b: "<<b<<endl;
    }
    void product(){
        p=b*a;
        cout<<"The product is: "<<p<<endl;
    }
};
int main(){
    B obj;
    obj.getB(4,5);
    obj.displayB();
    obj.product();
    return 0;
}
