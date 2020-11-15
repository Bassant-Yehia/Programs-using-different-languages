#include <iostream>

using namespace std;


struct node{
int data;
node*right;
node*left;
};
node*create(int data)
{
    node*NewNode=new node();
    NewNode->data=data;
    NewNode->right=NULL;
    NewNode->left=NULL;
    return NewNode;
}
void Insert(node*&root,int data)
{
    if(root==NULL)
       root=create(data);
     else
    {
       if(root->data>data)
       Insert(root->left,data);
       else

       Insert(root->right,data);

       }
}

int height(struct node *root)
 {
     if (root == NULL )
        return-1;
     return max(height(root->left),height(root->right))+1;
 }

int main()
{
    node*root=NULL;
    int sizen,n;
    cin>>sizen;
    for(int i=-1;i<sizen-1;i++)
    { cin >>n,Insert(root,n);
      }
      cout<<height(root);


    return 0;
}
