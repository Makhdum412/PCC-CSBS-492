#include<iostream>
using namespace std;
class Stack{
  public:
  int capacity;
  int top;
  int *arr;
  //constructor to initialize stack with capacity
  Stack(int size){
      capacity=size;
      top=-1;
      arr= new int[capacity];
  }
  ~Stack(){
      delete[] arr;
  }
  //check if the stack is full or not
  bool isFull(){
      return top==capacity-1;
  }
  //check if the stack is empty
  bool isEmpty(){
      return top==-1;
  }
  void push(int item){
      if(isFull()){
          cout<<"Stack Overflow\n";
          return;
      }
      arr[++top]=item;
      cout<<item<<" pushed into the stack";
  }
  int pop(){
      if(isEmpty()){
          cout<<"Stack underflow\n";
          return -1;
      }
      return arr[top--];
  }
  //displays all the elements from the stack
  void display(){
      if(isEmpty()){
          cout<<"No element to display in the stack\n";
          return;
      }
      for(int i=top;i>=0;i--){
          cout<<arr[i]<<" ";
     
      cout<<endl;
  }
  }
};
  int main(){
      int capacity, choice, item;
      cout<<"Enter the capacity of the array: ";
      cin>>capacity;
      Stack stack(capacity);
      while(1){
          cout<<"\nStack Operations\n";
          cout<<"1.Push an element into the stack\n";
          cout<<"2. Pop an element from the stack\n";
          cout<<"3. Display the elements in the stack\n";
          cout<<"4. Exit\n";
          cout<<"Enter your choice: ";
          cin>>choice;
          switch(choice){
              case 1:
              cout<<"Enter item to be pushed: ";
              cin>>item;
              stack.push(item);
              break;
              case 2:
              item=stack.pop();
              if(item!=-1){
                  cout<<"poped item: "<<item<<endl;
             }
             break;
             case 3: 
             stack.display();
             break;
             case 4:
             cout<<"Exiting";
             return 0;
             default:
             cout<<"Invalid Choice"<<endl;
             
          }
      }
  }
      
