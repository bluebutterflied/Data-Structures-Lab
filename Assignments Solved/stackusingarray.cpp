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
      cout<<stacky[i]<<" "<<endl;
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
   push(82);
   
   push(39);
   
   push(120);
  
   print();

   pop();
//    pop();
//    pop();
//    pop();
   print();
}