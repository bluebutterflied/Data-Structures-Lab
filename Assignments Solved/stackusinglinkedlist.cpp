#include<iostream>
using namespace std;

struct nodetype {
	int info;
	nodetype* link;
};

class stacks {
private:
	nodetype* stacktop;
public:
	stacks() {
		stacktop = NULL;
	}
	bool isEmpty();

	int top();
	void pop();
	void push(int);
};


void stacks::push(int x){

	nodetype *newnode;
	newnode = new nodetype;
	newnode->info = x;
	newnode->link = NULL;
	if (stacktop == NULL) {
		stacktop = newnode;
	}
	else {
		newnode->link = stacktop;
		stacktop = newnode;
	}
}

bool stacks::isEmpty() {
	if(stacktop==NULL){
		return true;
	}
	else return false;
}

int stacks::top() {
	return stacktop->info;
}



void stacks::pop() {
	nodetype* temp;
	temp = stacktop;
	stacktop = stacktop->link;
	delete temp;
}

int main() {
	stacks s1;
	s1.push(10);
	s1.push(20); 
	s1.push(30); 
	s1.push(40); 
	s1.push(50); 
	s1.push(60); 
	s1.push(70); 
	s1.push(80);
cout<<s1.top()<<"\n";
s1.pop();
cout<<s1.top()<<"\n";
	if (s1.isEmpty()){
		cout<<"empty";
	}
	else{
		cout<<"not empty";
	}
}
