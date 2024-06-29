#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* createTree() {
    int data; cout << "Enter Data: "; cin >> data;

    if(data == -1) return NULL;

    Node* currNode = new Node(data);

    currNode->left = createTree();
    currNode->right = createTree();

    return currNode;
}
//Height of binary tree
int height_of_tree(Node* root) {
    if(root == NULL) return 0;

    int height_of_left_Subtree = height_of_tree(root->left);
    int height_of_right_Subtree = height_of_tree(root->right);

    int height = max(height_of_left_Subtree, height_of_right_Subtree) + 1;
    return height;
}

//Diameter of binary tree
int diamter_of_binaryTree(Node* root) {

    if(root == NULL) return 0;

    //option1: longest distance between any two nodes can be present in left subtree
    int option1 = diamter_of_binaryTree(root->left);

    //option2: longest distance between any two nodes could be present in right subtree
    int option2 = diamter_of_binaryTree(root->right);

    //option3: one node can be present in the left subtree and the other present in right subtree
    int option3 = height_of_tree(root->left) + height_of_tree(root->right);

    //final diamter = max of (op1,op2,op3)
    int diameter = max(option1, max(option2,option3));

    return diameter;
}

int main() {
    Node* root = createTree();

    cout << diamter_of_binaryTree(root) << endl;
    return 0;
}