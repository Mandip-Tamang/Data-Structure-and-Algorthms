#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node{
 public:
int data;
node* left;
node* right;
 
 node(int data)
 {
    this -> data = data;
    this -> left = NULL;
    this -> right = NULL;
 }
};

node* bulitTree(node *root)
{
    int data;
  cout << "Enter data :" << endl;
  cin >> data;
  root = new node(data);
   if(data == -1)
   return NULL; 
   cout << "Enter data for inserting in left of  " << data <<endl;
   root -> left = bulitTree(root -> left);
   cout << "Enter data for inserting in right of " << data <<endl;
   root ->right = bulitTree(root -> right);
   return root;
}
// To print node in form of tree
// void levelOrderTraversal(node* root)
// {
//     queue <node*> q;
//     q.push(root);
//      q.push(NULL); //using NULL as a seperator 
//     while(!q.empty())
//     {
//         node* temp = q.front(); 
//         q.pop();
//         if(temp == NULL)
//         {
//             cout << endl;
//             if(!q.empty()) //using seperator if data isnot empty
//             {
//                 q.push(NULL);
                
//             }
//         }
//         else
//         {
//              cout << temp -> data <<" ";
//         if(temp -> left)
//         {
//             q.push(temp -> left);
//         }  

//         if(temp -> right)
//         {
//             q.push(temp -> right);
//         }
          
//         }
//     }
// }
//InOrder Traversal LNR
void inOrder(node *root)
{
 if(root == NULL)
 return;

 inOrder(root -> left);
 cout << root -> data << endl;
 inOrder(root -> right);
}
//preOrder Traversal  NLR
void preOrder(node *root)
{
 if(root == NULL)
 return;

 cout << root -> data << endl;
 inOrder(root -> left);
 inOrder(root -> right);
}
//Post Order Traversal LRN
void postOrder(node *root) 
{
 if(root == NULL)
 return;

 inOrder(root -> left);
 inOrder(root -> right);
 cout << root -> data << endl;
}
int main(){
    node
* root =  NULL;
    root = bulitTree(root);
    // levelOrderTraversal(root);
    cout << "Inorder Traversal is : ";
    inOrder(root);
    cout << "Preorder Traversal is : ";
    preOrder(root);
    cout << "Post order Traversal is : ";
    postOrder(root);
return 0;
}