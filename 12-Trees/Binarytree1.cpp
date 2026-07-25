#include <bits/stdc++.h>
using namespace std;

class Node{
 public:
  int data;
  Node *left,*right;
  Node(int val)
  {
    this->data=val;
    left=right=NULL;

  }
};
int main()
{
    queue<Node*>q;
    cout<<"Enter root value:";
    int x;
    cin>>x;
    Node *root =new Node(x);
    q.push(root);
    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        int l;
        cout<< "Enter Left data :";
        cin>>l;

        if(l != -1)
        {
          temp->left = new Node(l);
          q.push(temp->left);
        }

        int r;
        cout<<"Enter right data :";
        cin>>r;

        if(r != -1)
        {
            temp->right =new Node(r);
            q.push(temp->right);
        }
    }
}