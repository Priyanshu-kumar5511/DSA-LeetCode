#include <bits/stdc++.h>
using namespace std;

// =============================
//        Binary Tree Node
// =============================
class Node
{
public:
    int data;
    Node *left, *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// =============================
//      Preorder Traversal
//      Root -> Left -> Right
// =============================
void preorder(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// =============================
//      Inorder Traversal
//      Left -> Root -> Right
// =============================
void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// =============================
//      Postorder Traversal
//      Left -> Right -> Root
// =============================
void postorder(Node *root)
{
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// =============================
//      Create Binary Tree
//      Input:
//      1 2 -1 -1 3 -1 -1
// =============================
Node *Binarytree()
{
    int x;
    cin >> x;

    if (x == -1)
        return NULL;

    Node *temp = new Node(x);

    temp->left = Binarytree();
    temp->right = Binarytree();

    return temp;
}

// =============================
//            Main
// =============================
int main()
{
    cout << "Enter Binary Tree (-1 for NULL):\n";

    Node *root = Binarytree();

    cout << "\n==============================\n";
    cout << "   Binary Tree Traversals\n";
    cout << "==============================\n";

    cout << "\nPreorder  (Root Left Right): ";
    preorder(root);

    cout << "\nInorder   (Left Root Right): ";
    inorder(root);

    cout << "\nPostorder (Left Right Root): ";
    postorder(root);

    cout << "\n";

    return 0;
}