#include <iostream>
#include <queue>
using namespace std;
class Node{ 
    public:
  Node * left;
  Node * right;
  int data;
  Node (int data)
  {
    this -> right = NULL;
    this -> left = NULL;
    this -> data = data;
  }
 
};
 Node* insertInTree(Node* root, int val)
  {
    if(root == NULL)
    {
        root = new Node(val);
        return root;
    }

    if(root -> data > val)
    root -> left = insertInTree(root , val);

    if(root -> data < val)
    root -> right = insertInTree(root , val);
return root;
  }
void levelOrderTraversal(Node* root)
{
    queue <Node*> q;
    q.push(root);
     q.push(NULL); //using NULL as a seperator 
    while(!q.empty())
    {
        Node* temp = q.front(); 
        q.pop();
        if(temp == NULL)
        {
            cout << endl;
            if(!q.empty()) //using seperator if data isnot empty
            {
                q.push(NULL);
                
            }
        }
        else
        {
             cout << temp -> data <<" ";
        if(temp -> left)
        {
            q.push(temp -> left);
        }  

        if(temp -> right)
        {
            q.push(temp -> right);
        }
          
        }
    }
}
void takeInput(Node* &root)
{
    int value;
    cin >> value;
    while(value != -1)
    {
        insertInTree(root , value);
        cin >> value;
    }
}
int main(){
    Node * root = NULL;
    cout << "Enter data to create BST :";
    takeInput(root);
    
    cout <<"printing BST :"<<endl;
    levelOrderTraversal(root);
return 0;
}