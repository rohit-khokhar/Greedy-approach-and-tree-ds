#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

Node(int data){
     this->data = data;
     left = right = NULL;

}  };

static int idx = -1;

Node* buildTree(vector<int> nodes){
     
     idx++;
     if (nodes[idx] == -1)
     {
        return NULL;
     }
     

 Node* currNode = new Node (nodes[idx]);
   currNode-> left = buildTree(nodes);
   currNode-> right = buildTree(nodes);
   
    return currNode;
}

int height(Node* root){
    if (root == NULL)
    {
       return 0; 
    }
    

    int  leftHt = height(root-> left);
    int  rightHt = height(root-> right);

    int currHt =  max(leftHt , rightHt) + 1;

    return currHt;
}

int count(Node * root ){
    if (root == NULL)
    {
        return 0;
    }
    
    int leftC = count(root->left);
    int rightC = count(root->right);

   return leftC + rightC + 1;

     
}
 
int sum(Node *root){

     if(root == NULL){
        return 0;
     }
    int leftSum = sum(root ->left);
    int rightSum = sum(root ->right);
    
    int currSum = leftSum + rightSum + root-> data;
    cout << "sum : "<< currSum << endl;
    return currSum;
}

int main()
{
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
   Node* root = buildTree(nodes);

    cout << "height : " << height(root) << endl;
    cout << "count : " << count(root) << endl;


    Node* root2 = new Node(5);
    root2->left = new Node(3);
    root2->right = new Node(4);
    cout << "height : " << height(root2) << endl;
    cout << "count2 : " << count(root2) << endl;

    cout << "sum : " << sum(root) << endl;


    return 0;
}