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



void preorder(Node* root){
   if(root == NULL){
    return;
   }

  preorder(root->left);

  cout<< root->data;
  preorder(root->right);


}


void inorder(Node* root) {
      if(root == NULL){
    return;
   }
    inorder(root->left);

    cout<< root->data << " ";

    inorder(root->right);

}

void postorder(Node* root){
  if(root == NULL){
    return;
   }


   postorder(root->left);
    postorder(root->right);

    cout<< root->data << " ";




}


int main()
{
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
   Node* root = buildTree(nodes);

//    cout<<"root = "<< root->data << endl;
   
//    preorder(root);
   postorder(root);
   cout<<endl;

    return 0;
}