/*

ARRAY BASED LIST
*/



#include<iostream>
#include<string>
using  namespace std;

class list{
private:
	int *arr; //will be used to initialize an empty list and will always point to the first position.
	int size; //total capcity of the list
    int len; //number of current elements in the list
    int *current; //pointer to point the current position
    int *temp; //can be used for temporary works
public:

    //Constructor for initializing List
    //You can initialize size to any value
	list()
	{
		len = 0;
		temp = current = arr = NULL;
		int ar[4];
		current = arr = ar;
		int k = 0;
		while(k < 4)
		{
			*current = -1;
			current++;
			k++;
		}
		    
	}


    //overloaded constructor
    //user will pass decided the size of the list
    list(int userSize)
	{
		temp = arr = current = NULL;
//		current = arr = ar;
		int ar[userSize];
		int q = 0;
		while (q<userSize)
		{
			*current = -1;
			current++;
			q++;
		}
		
	}

    //Deep Copy Constructor
    //write code to create a new list and copy elements of the list passed in the parameter
	list(list& othrList)
	{
        size = otherList.size;
        len=othrList.len;
        for (len = 0; len<size; len++)
        {
            cin >> arr[len];

        }
        othrList.current = NULL;
        othrList.temp=Null;
		
	}


    //Clear Or Empty the List
	void clear()
	{
		r = 0;
		while (r<size)
	{
			current++;
			current = NULL;
			r++;
		}
	}


    //Insert a Value at Specific Position
	void insert(int value,int pos)
	{
		
		for (int q; q<pos; q++)
		{
			if (current == value)
			{
                list.insert()
				
			}
		}
		
	}

    //Insert the given value in the list at the next available position
    void insert(int value)
	{
        for (int q; q<pos; q++)
		{
			if (current == value)
			{
                list.append()
				
			}
		}

		
	}


    //Remove a value at specific position
	void remove(int value, int pos){
        for (int q; q<pos; q++)
		{
			if (q->info == value)
			{
                list.remove(value)
				
			}
		}
        
	
	

	}



    //Get value stored at a specific position
	int get(int pos){
        int key;
        count<<"Enter the value of key:";
        cin>>key;
        for (int q; q<pos; q++)
		{
			if (key == pos)
			{
                cout<<pos->info;
				
			}
		}
        

	
	}

    //Update Existing value at a position
	void update(int value,int pos){
    	int get(int pos){
        int key;
        count<<"Enter the value of key:";
        cin>>key;
        for (int q; q<pos; q++)
		{
			if (key == pos)
			{
                pos->info = value ;
				
			}
		}
        

	
	}
        
	

	}


    //Find a value in the list
	bool find(int value)
	{
		int k = 0;
		while (arr[k]= value)
		{
			k++;
			
		}
        return true;
	

	}
int main(){
    
    cout<<find(5);
    
    return 0;
    
}


    //Return Current Length of the list
	int length()
	{
		int t;
		while (arr[t]!=NULL)
		{
			len++;
			t++;
		}
	
	}


    //Move to starting position of the list
	void start()
	{
		*current = 0;	
	}

    //Move to the end of the list
	void end()
	{
		*current = 3;
		
	}
    

    //checks whehter the list is completely filled or not
    bool isFull()
	{
		if (ar!=NULL)
		{
			return False;
		}
		else 
		return True;
    
    }
    
    //checks whehter the list is completely empty or not    
    bool isEmpty()
	{
		if (ar==NULL)
		{
			return True;
			
		}
		else 
		return False;
    }

};

void main(){

	

	system("pause");
}