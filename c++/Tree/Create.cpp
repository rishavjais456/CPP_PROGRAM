#include<iostream>
using namespace std;
class tree{
    public:
    int data;
    tree*left;
    tree*right;
    tree(int data){
        this->data=data;
        this->right=NULL;
        this->left=NULL;
    }
};
tree*createTree(){
    int data;
    cout<<"Enter the data"<<endl;
    
    cin>>data;
    if(data==-1)
    return NULL;
    tree*root=new tree(data);
    root->left=createTree();
    root->right=createTree();
    return root;
}
void PreorderTraverse(tree*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    PreorderTraverse(root->left);
    PreorderTraverse(root->right);
}
void PostorderTraverse(tree*root){
    if(root==NULL)
    return;
    PreorderTraverse(root->left);
    PreorderTraverse(root->right);
    cout<<root->data<<" ";
}
void InorderTraverse(tree*root){
    if(root==NULL)
    return;
    InorderTraverse(root->left);
    cout<<root->data<<" ";
    InorderTraverse(root->right);
    }
int main(){
    tree*root=createTree();
    PreorderTraverse(root);
    return 0;
}