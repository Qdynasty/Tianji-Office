

func dfs(root *TreeNode, mx int) int {
	if root == nil {
		return 0
	}
	left := dfs(root.Left, max(mx, root.Val))
	right := dfs(root.Right, max(mx, root.Val))
	if mx <= root.Val {
		return left + right + 1
	}
	return left + right
}

func goodNodes(root *TreeNode) int {
	return dfs(root, math.MinInt) // 也可以写 root.Val
}

func max(a, b int) int {
	if b > a {
		return b
	}
	return a
}
