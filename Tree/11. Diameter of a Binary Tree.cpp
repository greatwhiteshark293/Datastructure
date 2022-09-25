Diameter of a Binary Tree
https://leetcode.com/problems/diameter-of-binary-tree/
https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int check(Node* root, int &dm){
        if(!root) return 0;
        int ld = check(root->left,dm);
        int rd = check(root->right,dm);
        dm = max(dm,ld+rd);
        return max(ld,rd)+1;
        
    }
    int diameter(Node* root) {
        int dm = 0;
        check(root,dm);
        return dm+1;
    }
};
