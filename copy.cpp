#include<iostream>
using namespace std;
class node
{
public:
int data;
node *left;
node *right;
};

node *newNode(int data)
{
node *temp=new node();
temp->data=data;
temp->left=NULL;
temp->right=NULL;
}
bool ford(node *n1,node *n2)
{
if(n1==NULL && n2==NULL)
return true;
if(n1==NULL || n2== NULL)
return false;
if(n1->data==n2->data)
return ford(n1->left,n2->right)&&ford(n1->right,n2->left);
else
return false;
}
bool fordable(node *root)
{
//if(root==NULL)
//return true;
return ford(root,root);
}

int main()
{

   node* root = newNode(1); 
    root->left        = newNode(2); 
    root->right       = newNode(2); 
    root->left->left  = newNode(3); 
    root->left->right = newNode(4); 
    root->right->left  = newNode(4); 
    root->right->right = newNode(13);
fordable(root)?cout<<"true":cout<<"false";

}
