#include<iostream>
using namespace std;
void test(int x){
    try{
    if(x==0) throw x;
    if(x==1) throw 'x';
    if(x==-1) throw 1.0;
    cout<<"End of try block"<<endl;
    }
    catch(int i){
        cout<<"Caught an integer\n";
    }
    catch(char c){
        cout<<"Caught a character\n";
    }
    catch(double d){
        cout<<"Caught a double\n";
    }
    cout<<"End of try-catch system\n";
}
int main(){
  /*  cout<<"TESTING MULTIPLE CATCH STATEMENTS\n";
    cout<<"x == 0\n";
    test(0);
    cout<<"x == 1\n";
    test(1);
    cout<<"x == -1\n";
    test(-1);
    cout<<"x == 2\n";
    test(2);*/
    int x;
    cout<<"Enter the value of x: ";
    cin>>x;
    test(x);
    return 0;
}
