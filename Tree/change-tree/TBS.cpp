//
// Created by trunk on 2023/8/21.
//

#include "TBS.h"
#include "vector"

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    TreeNode* sortedArrayToBST(std::vector<int>& nums) {
        if(nums.size() == 0)return nullptr;
        int val = nums.size()/2;   //取中间值
        TreeNode *root = new TreeNode(nums[val]);
        std::vector<int> leftnums(nums.begin(),nums.begin()+val);    //左区间
        std::vector<int> rightnums(nums.begin()+val+1,nums.end());   //右区间
        root->left = sortedArrayToBST(leftnums);
        root->right = sortedArrayToBST(rightnums);
        return root;
    }
};
