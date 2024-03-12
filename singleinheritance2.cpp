#include<iostream>
using namespace std;
class A{
    public:
    int a;
    void getA(){
        cout<<"Enter the value of a: ";
        cin>>a;
    }
    void displayA(){
        cout<<"The value of a: "<<a<<endl;
    }
};
class B: public A{
    int b, p;
    public:
    void getB(){
        getA();
        cout<<"Enter the value of b: ";
        cin>>b;
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
    obj.getB();
    obj.displayB();
    obj.product();
    return 0;
}
