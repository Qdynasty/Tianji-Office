//
// Created by trunk on 2023/7/12.
//

#ifndef C_PRO_SEARCHTREE_H
#define C_PRO_SEARCHTREE_H
#include <vector>

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x), left(NULL), right(NULL) {}
};

//

//
class Solution {
public:
    // 定义一个函数 dfs，用于生成所有可能的 BST
    std::vector<TreeNode*> dfs(int l,int r){
        // 定义一个向量 res，用于存储所有可能的 BST
        std::vector<TreeNode*> res;
        // 如果 l > r，说明该子树为空，将空指针加入 res 中，并返回
        if(l > r){
            res.push_back(nullptr);
            return res;
        }
        // 枚举根节点 i，i 从 l 到 r
        for(int i = l; i <= r; i++){
            // 递归生成所有可能的左子树，存储在向量 j 中
            for(auto &j : dfs(l, i - 1)){
                // 递归生成所有可能的右子树，存储在向量 k 中
                for(auto &k : dfs(i + 1, r)){
                    // 创建一个新的节点 root，将 i 作为 root 的值
                    TreeNode* root = new TreeNode(i);
                    // 将左子树 j 和右子树 k 分别作为 root 的左子树和右子树
                    root->left = j;
                    root->right = k;
                    // 将生成的 BST 加入 res 中
                    res.push_back(root);
                }
            }
        }
        // 返回所有可能的 BST
        return res;
    }
    // 定义一个函数 generateTrees，用于生成所有可能的 BST
    std::vector<TreeNode*> generateTrees(int n) {
        // 调用 dfs 函数，生成所有可能的 BST
        return dfs(1, n);
    }
};


#endif //C_PRO_SEARCHTREE_H
