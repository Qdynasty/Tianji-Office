#include <iostream>  
#include <algorithm>  
#include <vector>
using namespace std;

struct TreeNode
{
    /* data */
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr){}
    TreeNode(int x): val(x), left(nullptr), right(nullptr){}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x),left(left),right(right)
};



class Solution {
public:
    int goodNodes(TreeNode *root, int mx = INT_MIN) {
        if (root == nullptr)
            return 0;
        int left = goodNodes(root->left, max(mx, root->val));
        int right = goodNodes(root->right, max(mx, root->val));
        return left + right + (mx <= root->val);
    }
};


int main(int argc, char const *argv[])
{
    /* code */
    vector<int> values = {3, 1, 4, 3, 0, 1, 5};  // 输入数组 [3,1,4,3,null,1,5] 的 C++ 版本  
    TreeNode* root = nullptr;
    for (size_t i = 0; i < values.size(); i++)
    {
        /* code */
        if (root == nullptr){
            root = new TreeNode(values[i]);
        }else{
            root->left = new TreeNode(values[i]);
            root = root->left;
        }
        {
            /* code */
            Solution solution;
            int res = solution.goodNodes(root);
            cout<<"GoodNodes:"<< res <<endl;
            return 0;

        }
        
    }
}
