#include<iostream>
using namespace std;
void divide(double x, double y){
    try{
        if(y==0.0)
        throw y;
        else cout<<"Division= "<<x/y<<"\n";
    }
    catch(double d){
        cout<<"Caught double inside function"<<endl;
        throw;
    }
cout<<"End of function"<<endl;
}
int main(){
    cout<<"Inside Main Function\n";
    try{
        divide(10.0, 5.0);
       divide(10.0, 0.0);
    }
    catch(double d){
        cout<<"Caught double inside main\n";
    }
    cout<<"End of main\n";
    return 0;
}
