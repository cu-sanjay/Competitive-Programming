import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main {

    static final int mod = (int) 1e9 + 7;

    static class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;

        TreeNode() {
        }

        TreeNode(int val) {
            this.val = val;
        }

        TreeNode(int val, TreeNode left, TreeNode right) {
            this.val = val;
            this.left = left;
            this.right = right;
        }
    }

    static TreeNode createBST() {
        Scanner scanner = new Scanner(System.in);
        int rootd = scanner.nextInt();

        if (rootd == -1)
            return null;

        TreeNode root = new TreeNode(rootd);
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);

        while (!q.isEmpty()) {
            TreeNode front = q.poll();
            int leftd = scanner.nextInt();
            if (leftd != -1) {
                TreeNode node = new TreeNode(leftd);
                front.left = node;
                q.add(node);
            }

            int rightd = scanner.nextInt();
            if (rightd != -1) {
                TreeNode node = new TreeNode(rightd);
                front.right = node;
                q.add(node);
            }
        }
        return root;
    }

    static void helpBST(TreeNode root, int[] curr, int[] ans) {
        if (root == null)
            return;
        helpBST(root.right, curr, ans); // reverse inorder traversal
        curr[0] = (curr[0] + root.val) % mod;
        ans[0] = (ans[0] + curr[0]) % mod;
        helpBST(root.left, curr, ans);
    }

    public static void main(String[] args) {
        TreeNode root = createBST();
        int[] ans = {0};
        int[] curr = {0};
        helpBST(root, curr, ans);
        System.out.println(ans[0]);
    }
}
