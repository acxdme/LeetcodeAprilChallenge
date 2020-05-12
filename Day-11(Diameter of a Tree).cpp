*/
Time complexity: 
Space complexity:
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    
int height(TreeNode* node)
        {
            if(node==NULL)
                return 0;
            else
            {
                return 1+ max(height(node->left),height(node->right));
            }
        }
public:
    int diameterOfBinaryTree(TreeNode* root) 
    {
        int a,b,dr,dl,h;
        if(root==NULL)
            return 0;
            a=height(root->left);
            b=height(root->right);
            dl=diameterOfBinaryTree(root->left);
            dr=diameterOfBinaryTree(root->right);
        
        return max(a+b,max(dl,dr));
       
        
    }
};
