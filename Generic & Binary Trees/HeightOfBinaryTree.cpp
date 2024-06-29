#include<iostream>
using namespace std;

//Tree Node Implementation
class Node {
    public:
    int data;
    Node* left;
    Node* right;

    //Ctor
    Node(int val) {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

//create Tree
Node* createTree() {
    int data;
    cout << "Enter Data: ";
    cin >> data;

    /****  if data is INVALID ****/
    if(data == -1) return NULL;

    /****  if data is VALID ****/
    Node* currNode = new Node(data);

    //First Create Left subtree 
    currNode->left = createTree();

    //then create Right subtree
    currNode->right = createTree();

    return currNode;
}


//HEIGHT OF BINARY TREE
int height_of_Binary_Tree(Node* root) {
    //base case
    if(root == NULL) return 0;

    int height_of_left_subTree = height_of_Binary_Tree(root->left);
    int height_of_right_subTree = height_of_Binary_Tree(root->right);
    int maxHeight = max(height_of_left_subTree, height_of_right_subTree) + 1;

    return maxHeight;

}

int main() {
    Node* root = createTree();

    cout << height_of_Binary_Tree(root) << endl;
    return 0;
}