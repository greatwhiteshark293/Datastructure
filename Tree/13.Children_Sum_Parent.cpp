
Children Sum Parent

https://practice.geeksforgeeks.org/problems/children-sum-parent/1

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.

    int isSumProperty(Node *root)
    {
     if(!root) return 1;
     if(!root->left && !root->right) return 1;
     int val = (root->left ? root->left->data:0) + (root->right ? root->right->data:0);
     return (root->data == val)  &&
                isSumProperty(root->left) && isSumProperty(root->right);

    }
};
