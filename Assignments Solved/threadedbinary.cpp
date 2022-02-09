#include <iostream>

using namespace std;



struct node 
            { //First of all, i am creatng the basic node structure of Threadedbinarytree
                int value {}; 
                int FLeft {};
                int FRight{};
                node *left,*right;
            };
class threadedbinary
    {
        
    public:
        node *n;
        node *temp;
        node *root;
        node *dummy;
        threadedbinary()
            
            {

                root = temp = NULL;

				dummy = new node;

				dummy->left = dummy;

				dummy-> right = dummy;

				dummy->FRight = 1;

				dummy->FLeft = 0;
            }
        
        void print(node * temp)
            {
                bool t = true;

                while(temp->FLeft != 0)
                    {
                        temp = temp->left;
                    } 

                while (t == true)
                { 
                    
                        cout << "The value is:" << temp->value << endl;
                   
                        
                            temp = temp->right;
        
                    if (temp == dummy)
                        {
                            break;
                        }
                }
            }
        
        void insert(int key , node * &temp)
            {

                	if (root == NULL)
					{

						root = new node;
						root->FLeft = 0;
						root->FRight = 0;
						root->right = dummy;
						root->left = dummy;
						root->value = key;
                        dummy->left = root;
                        dummy->FLeft = 1;
						return;
					}
                if (temp->value == key)
                    {
                        cout << "DUPLICATE..." << endl;
                    }
                if (key < temp->value)
                    {
                        if (temp->FLeft == 0)
                            {

                                n = new node;
                                n->value = key;
                                n->FLeft = temp->FLeft;
                                n->right = temp;
                                n->left = temp->left;
                                temp->left = n;
                                temp->FLeft = 1;
                                return;
                            }
                        else 
                            {
                              return insert(key , temp->left);
                            }
                    }
                if (key > temp->value)
                    {
                          if (temp->FRight == 0)
                            {

                                n = new node;
                                n->value = key;
                                n->FRight = temp->FRight;
                                n->left = temp;
                                n->right = temp->right;
                                temp->right = n;
                                
                                temp->FRight = 1;
                                return;
                            }
                        else 
                            {
                               return insert(key , temp->right);
                            }
                        }
                    }
                };


int main()
    {
        threadedbinary tree;
        tree.insert(12 , tree.root);
        tree.insert(9 , tree.root);
        tree.insert(2 , tree.root);
        tree.insert(25 , tree.root);
        tree.insert(99 , tree.root);
        tree.insert(89 , tree.root);
        tree.insert(100 , tree.root);
        tree.print(tree.root);
    }