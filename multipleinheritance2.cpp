#include<iostream>
using namespace std;
class Father{
    public:
    void fishing(){
        cout<<"Learns Fishing"<<endl;
    }
};
class Mother{
    public:
    void cooking(){
        cout<<"Learns Cooking"<<endl;
    }
};
class Son: public Father, public Mother{
    public:
    void coding(){
        cout<<"Knows Coding";
    }
};
int main(){
    Son o;
    o.fishing();
    o.cooking();
    o.coding();
}
