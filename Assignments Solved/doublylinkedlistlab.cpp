#include<iostream>
using namespace std;
struct nodeType{
    int data;
    nodeType *link;
    nodeType *previi;

};
    nodeType *first;
    nodeType *last;
    nodeType *newnode; 
    nodeType *temp;
    nodeType *newnode_lag;
void insertion_after_a_specific_value(int size){
    int num;
    temp=first;
    int key;
    cout<<"Enter the number you want to put after in the list:";
    cin>>key;
    cout<<"Enter the data you want to put in the list:";
    cin>>num;
    for(int i=0;i<=size;i++){
        if(i==key){
            temp->data=num;
            temp=temp->link;

        }
    }
}
void insertion(int size){
    temp=first;
    int key;
    cout<<"Enter the key you want to add in the last node:";
    cin>>key;
    for(int i=0; i<=size;i++)
    if(temp->data!=key){
        newnode->data=key;

    }
    else{
        "The data key is already present in the linked list";
    }
}
// void deletetion(int size){
//     temp=first;
//     for(int i=0;i<2;i++){
//         if()
//     }
// }
void print(int size){
    temp=first;
    for(int i=0;i<size;i++){
        cout<<"The number stored in the link list is:";
        cout<<temp->data<<endl;
        temp=temp->link;
    }
    
}
void print2(int size){
    temp=last;
    for(int i=0;i<size;i++){
        cout<<"The number stored in the link list is:";
        cout<<temp->data<<endl;
        temp=temp->previi;
    }
}

void build_link_link(int size){
    
    first=NULL;
    last=NULL;
    int num;
    for(int i=0; i<size; i++){
        newnode = new nodeType;
        cout<<"Enter the number you want to put in the node:";
        cin>>num;
        newnode->data=num;
        newnode->link=NULL;
        if (first==NULL)
        {
            first=newnode;
            last=newnode;
            first->previi=NULL;
            
            
        }
        else{
            last->link=newnode;
            newnode_lag=last;
            last=newnode;
            last->previi=newnode_lag;



        }

        


    }

    


    
}

int main(){
    int size;
    cout<<"Enter the no of node you want to enter in the linklist:";
    cin>>size;
    build_link_link(size);
    print2(size);
    insertion(size);
    print(size);
    insertion_after_a_specific_value(size);
    print(size);
}