#include <bits/stdc++.h>
using namespace std;
struct tree
{
    int root;
    struct tree *left,*right;
};
struct tree* NewNode(int root)
{
    struct tree *node = (struct tree*)malloc(sizeof(struct tree));
    node->root = root;
    node->left = node->right = NULL;
    return node;
}

struct tree* create(int *arr,int i,int n)
{
    struct tree *root = NULL;
    if(i < n)
    {
        root = NewNode(arr[i]);
        root->left = create(arr,(2*i+1),n);
        root->right = create(arr,(2*i+2),n);
    }
    return root;
}

void preorder(struct tree *root)
{
    if(root!=NULL)
    {
        printf("%d ",root->root);
        preorder(root->left);
        preorder(root->right);
    }
}
void Preorder (struct tree *root)
{
    if(root==NULL) return;
    stack <struct tree*> st;
    while(root!=NULL){
        cout << root->root << " ";                      // 1, 2, 4, 8, 9, 5, 10, 11, 3, 6, 12, 13, 7, 14, 15
        if(root->right!=NULL) st.push(root->right);     //  Stack- *3, *5, *9, *11, *7, *13, *15
        if(root->left!=NULL) root = root->left;         // root = 2, 4, 8, 9, 5, 10, 11, 3, 6, 12, 13,7, 14, 15 
        else{                                           
            if(!st.empty())
            {
                root = st.top();
                st.pop();
            }
            else root = NULL;
        }
    }
    cout << endl;
}

void inorder(struct tree *root)
{
    if(root!=NULL){
        inorder(root->left);
        cout << root->root << " ";
        inorder(root->right);
    }
}
void Inorder(struct tree *root)
{
    stack<struct tree *> st;
    while (root!=NULL || st.empty() == false)
    {
        while (root!=NULL)
        {
            st.push(root);                 // stack - *1, *2, *3
            root = root->left;
        }
        root = st.top();                   // root - 2, 1, 3
        st.pop();
        cout << root->root << " ";         //  2, 1, 3
        root = root->right;                // root - null, 3, 
    }
}

void postorder(struct tree *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->root << " ";
    }
}
void Postorder(struct tree *root)
{
    if(root == NULL) return;
    stack<struct tree *> s1, s2;
    s1.push(root);                    // stack.1 - *1, *2, *3, *6, *7, *4, *5
    struct tree *node;             
    while (!s1.empty())
    {      
        node = s1.top();              // node - 1, 3, 7, 6, 2, 5, 4
        s1.pop();                     // stack.1 - emp. 
        s2.push(node);                // stack.2 - 1, 3, 7, 6, 2, 5, 4
        if (node->left) s1.push(node->left); 
        if (node->right) s1.push(node->right);
    }
    while (!s2.empty())
    {
        node = s2.top();
        s2.pop();
        cout << node->root << " ";      // 4, 5, 2, 6, 7, 3, 1
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    /*
                       1

               2               3

          4        5       6      7

        8   9   10  11  12  13  14  15

        preorder -> 1 2 4 8 9 5 10 11 3 6 12 13 7 14 15
        inorder -> 8 4 9 2 10 5 11 1 12 6 13 3 14 7 15

         
    */
    int n = sizeof(arr)/sizeof(arr[0]);
    struct tree *root = create(arr, 0, n);
    
    // preorder(root);
    // cout << endl;
    // Preorder(root);
    // inorder(root);
    // cout << endl;
    // Inorder(root);
    // postorder(root);
    // cout << endl;
    // Postorder(root);
    
    return 0;
}