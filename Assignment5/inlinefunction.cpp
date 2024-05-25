#include<iostream>
using namespace std;
class Add{
    int a, b, Sum;
    public:
    void sum();
    void getValues();
};
inline void Add::sum(){
    Sum=a+b;
    cout<<"The sum of two numbers: "<<Sum;
}
inline void Add::getValues(){
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
}
int main(){
    Add a;
    a.getValues();
    a.sum();
    return 0;
}
