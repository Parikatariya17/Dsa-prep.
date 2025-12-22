#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void RecursionTraverse(Node* root){
    if(root == nullptr){
        return;
    }
    cout<<root->data<<' ';
    RecursionTraverse(root->left);
    RecursionTraverse(root->right);
}

void Display(vector<int>& result){
    for(int i = 0;i<result.size();i++){
        cout<<result[i]<<' ';
    }
}

void IterativeTraverse(Node *root){
    stack<Node*>st;
    vector<int>result;
    st.push(root);
    while(!st.empty()){
       root = st.top();
       st.pop();
        result.push_back(root->data);

        if(root->right){
            st.push(root->right);
        }

        if(root->left){
            st.push(root->left);
        }
    }
    Display(result);
}

//PreOrder: root,left,right
int main(){
    //new Node(4) returns a Node* (pointer)
    Node* root = new Node(4);       
    root->left = new Node(2);
    root->left->left = new Node(3);
    root->left->left->right = new Node(9);
    root->left->left->right->left = new Node(1);
    root->right = new Node(5);
    root->right->left = new Node(7);
    root->right->right = new Node(6);
    root->right->right->left = new Node(8);

    // RecursionTraverse(root);
    IterativeTraverse(root);
}