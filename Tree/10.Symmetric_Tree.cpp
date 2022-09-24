10. Symmetric Tree
https://practice.geeksforgeeks.org/problems/symmetric-tree/1


class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool check(struct Node* A, struct Node* B){
      	if(!A && !B) return true;
	    if(!A || !B) return false;
	    if(A->data != B->data) return false;
	    return check(A->left,B->right) && check(A->right,B->left);  
    }
    bool isSymmetric(struct Node* root)
    {
	    if(!root) return true;
	    return check(root->left,root->right);
	    
    }
};
