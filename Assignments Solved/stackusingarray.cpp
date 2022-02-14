#include <iostream>
using namespace std;
int stacky[100];
int size=100; 
int stacktop=-1;

void pop(){
    if(stacktop<=-1){
      cout<<"Stack Underflow";
      cout<<endl;}
    else{
         cout<<"The deleted item is: "<< stacky[stacktop] <<endl;
         stacktop--;
        }
   }
void print(){
   if(stacktop>=0){
      cout<<"Stacks items are:"<<" ";
      for (int i=stacktop;i>=0;i--)
      cout<<stacky[i]<<" ";
      cout<<endl;
   }else{
      cout<<"Empty Stack";
   }
}
void push(int val){
   if(stacktop>=size-1)
   cout<<"Stack is Overflowing"<<endl;
   else{
      stacktop++;
      stacky[stacktop]=val;
   }
}

int main(){
   push(56);
   
   push(45);
   
   push(68);
  
   print();
   cout<<endl;
   pop();
   print();
}