//
// Created by trunk on 2023/7/10.
//

#include "Tree.h"
#include <vector>

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    std::vector<int> inorderTraversal(TreeNode* root) {
        std::vector<int> ret;
        TreeNode* pre=nullptr;
        while(root!=nullptr){
            if(root->left!=nullptr){
                pre=root->left;//从root左子节点开始，一直往右循迹到最右子节点
                while(pre->right!=nullptr && pre->right!=root){
                    pre=pre->right;
                }

                if(pre->right==nullptr){//如果最右子节点的右子节点为空，则与root建立联系，根节点往左移动
                    pre->right=root;
                    root=root->left;
                }
                else{//如果最右子节点的右子节点非空，说明之前已经与root建立了联系，是第二次访问，ret记录root值，同时root往上走两层
                    ret.push_back(root->val);
                    root=root->right;
                    pre->right=nullptr;
                }
            }
            else{//如果root的左子节点为空，说明已经第二次回到最左边了，ret记录根值，同时root网上走两层
                ret.push_back(root->val);
                root=root->right;
            }
        }
        return ret;
    }
};
