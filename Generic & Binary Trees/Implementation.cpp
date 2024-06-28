#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// since this function will return root node of the entire tree
Node *createTree()
{
    // Data input
    int data;
    cout << "Enter Data" << endl;
    cin >> data;

    // Ek parent Node
    Node *parentNode = new Node(data);

    // Tree ka left subtree pehele banega
    parentNode->left = createTree();
    // Phir tree ka right subtree banega
    parentNode->right = createTree();

    return parentNode;
}

// Preorder Traversal
void preOrderTraversal(Node *currNode)
{
    // Base case
    if (currNode == NULL)
    {
        return;
    }

    // Agar base case nahi hai
    // iska matlab currNode null nahi hai

    // N -> prints the data in the current node
    cout << currNode->data << endl;

    // L -> preorder traversal on the left sub tree
    preOrderTraversal(currNode->left);

    // R -> preorder traversal on the right
    preOrderTraversal(currNode->right);
}

void postOrderTraversal(Node *currNode)
{
    // Base case
    if (currNode == NULL)
    {
        return;
    }

    // Agar base case hit nahi hua
    // iska matlab currNode ek valid node hai

    // L
    postOrderTraversal(currNode->left);
    // R
    postOrderTraversal(currNode->right);
    // N
    cout << currNode->data << endl;
}

void inOrderTraversal(Node *currNode)
{
    // Base case
    if (currNode == NULL)
    {
        return;
    }

    // if not base case hit
    // L
    inOrderTraversal(currNode->left);
    // N
    cout << currNode->data << endl;
    // R
    inOrderTraversal(currNode->right);
}

void levelOrderTraversal(Node *root)
{
    // Initial Step: create queue and the push the root node into the queue
    queue<Node *> q;
    q.push(root);

    // TRAVERSAL
    while (!q.empty())
    {
        // Step 1: fetch the front element
        Node *currNode = q.front();

        //print the current Node ka data
        cout << currNode->data << " ";

        // step 2: pop the front element from the queue
        q.pop();

        /** ALWAYS CHECK  WHETHER THE LEFT / RIGHT CHILD OF CURRENT NODE IS NULL OR NOT **/

        // step 3: push left child of the currNode into Queue
        if (currNode->left != NULL)
        {
            q.push(currNode->left);
        }

        // step 4: push right child of the currNode into Queue
        if (currNode->right != NULL)
        {
            q.push(currNode->right);
        }
    }
}

int main()
{
    Node *root = new Node(10);

    Node *node1 = new Node(20);
    Node *node2 = new Node(30);
    Node *node3 = new Node(40);
    Node *node4 = new Node(50);
    Node *node5 = new Node(60);
    Node *node6 = new Node(70);
    Node *node7 = new Node(80);
    Node *node8 = new Node(90);
    Node *node9 = new Node(110);
    Node *node10 = new Node(120);

    root->left = node1;
    root->right = node2;

    node1->left = node3;
    node1->right = node4;

    node3->left = node7;
    node3->right = node8;

    node2->left = node5;
    node2->right = node6;

    node6->left = node9;
    node6->right = node10;

    // preOrderTraversal(root);

    // postOrderTraversal(root);

    // inOrderTraversal(root);

    levelOrderTraversal(root);

    // cout << root->left->data << endl;
    // cout << root->right->data << endl;

    // if(node1->left == NULL) {
    //     cout << "Pointing to NULL" << endl;
    // }
    return 0;
}