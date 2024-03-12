#include<iostream>
using namespace std;
class GrandFather{
    public:
    void house(){
        cout<<"Owns a 3bhk house"<<endl;
    }
};
class Father: public GrandFather{
    public:
    void land(){
        cout<<"5 Acres of Land"<<endl;
    }
};
class Son: public Father{
    public:
    void cars(){
        cout<<"owns an audi car";
    }
};
int main(){
    Son o;
    o.house();
    o.land();
    o.cars();
}
