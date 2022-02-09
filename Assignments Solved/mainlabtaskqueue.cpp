#include<iostream>
// #include<c.h>
using namespace std;

class Ar_queue
{
	private:
		int *front;
		int *rear;
		int *arr;
		int size;
	public:
		Ar_queue()
		{
			cout<<"\n\tEnter the size of Array: ";
			cin>>size;
			front=NULL;
			rear=NULL;
			arr=new int[size];
		}
		void Enqueue();
		void Dequeue();
		void Display();
};



void Ar_queue::Enqueue()
{
	if(rear==arr+size-1 && front==arr)
	{
		cout<<"\n\tQueue over Flows";
		return;
	}
	if(rear+1==front)
	{
	  cout<<"\n\tQueue over Flows";
	  return;	
	}
	
	if(front==NULL && rear==NULL)
	{
		front=arr;
		rear=arr;
		cout<<"\n\tEnter the value:";
		cin>>*rear;
		return;
	}
	
	if(rear==arr+size-1 && front!=arr)
	{
		rear=arr;
		cout<<"\n\tEnter the value:";
    	cin>>*rear;
    	return;
	}
	rear++;
	cout<<"\n\tEnter the value:";
	cin>>*rear;
		
}

void Ar_queue::Dequeue()
{
	if(front==NULL && rear==NULL)
	{
		cout<<"\n\tUnder Flow";
		return;
	}
	    if(front==rear)
	{
		cout<<"\n\tDeleted Elem is: "<<*front;
		front=NULL;
		rear=NULL;
		return;
	}
	
              if(front==arr+size-1)
	{
		cout<<"\n\tDeleted Elem is: "<<*front;
    	front=arr;
    	return;
	}
	cout<<"\n\tDeleted Elem is: "<<*front;
	front++;
	
}

void Ar_queue::Display()
{
	if(front==NULL && rear==NULL)
	{
		cout<<"\n\tArraY empty";
		return;
	}
	int *tem=front;
	while(tem!=rear)
	{
		cout<<*tem<<endl;
		
		if(tem==arr+size-1)
		{
			tem=arr;
		
		}
		else{
			tem++;
		}
		
	}
	cout<<*tem<<endl;
}
int main()
{

	Ar_queue l;
	l.Dequeue();
	l.Enqueue();
	l.Dequeue();
	l.Enqueue();
	
	l.Enqueue();
	l.Enqueue();
	l.Enqueue();
	l.Enqueue();
	
	l.Dequeue();
	l.Dequeue();
	l.Enqueue();
	
	l.Display();
	
};