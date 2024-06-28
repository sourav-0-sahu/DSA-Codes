//When all the nodes of a level are fetched , the next level nodes are print in the next line
#include<iostream>
#include<queue>
using namespace std;

class Node{
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

//lets create tree
Node* createTree() 
{

    int data;
    cout << "Enter Data: " ;
    cin >> data;

    if(data == -1) {
        return NULL;
    }

    //Lets create a parent Node
    Node* parentNode = new Node(data);

    //left subtree
    cout << "Left of Node" << parentNode->data << endl;
    parentNode->left = createTree();

    //Right Subtree
    cout << "Right of Node 10" << parentNode->data << endl;
    parentNode->right = createTree();

    return parentNode;
}

void levelOrderTraversal(Node* root) {
    //Initial Step : create queue and push root along with NULL
    queue<Node* > q;
    q.push(root);
    q.push(NULL);

    //Traversal
    while(q.size() > 1) {
        //fetch front & pop front
        Node* currNode = q.front();
        q.pop();

        //if the current Node is a null node
        if(currNode == NULL) {
            //PRINT NEXT LINE
            cout << endl;

            //PUSH NULL
            q.push(NULL);
        }
        else {
            /** if the current Node is a valid node **/
            //PRINT
            cout << currNode->data << " ";

            /***  Yahan par galti kiya tha ***/
            /* Mistake : before pushing left and right nodes , i m not checking whether they are valid or null*/
            //PUSH LEFT NODE
            if(currNode->left != NULL) {
                q.push(currNode->left);
            }

            //PUSH RIGHT NODE
            if(currNode->right != NULL) {
                q.push(currNode->right);
            }
        }
    }
}

int main() 
{
    Node* root = createTree();

    levelOrderTraversal(root);
    return 0;
}

// -> i/p: 10 30 -1 50 -1 -1 20 25 -1 60 -1 -1 -1
/*
    o/p: 10
         30 20
         50 25
         60
*/