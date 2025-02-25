# Kth Smallest Element in BST

## Problem Statement
You are given the root of a Binary Search Tree (BST) and an integer K. Your task is to determine the Kth smallest element in the tree, where K is 1-indexed.

## Example 1

**Input:**
```
    3
   / \
  1   4
   \
    2
```
K = 1

**Output:**
```
1
```

## Example 2

**Input:**
```
    5
   / \
  3   6
 / \
2   4
/
1
```
K = 3

**Output:**
```
3
```

## Constraints
- The number of nodes in the BST is `n`.
- `1 <= K <= n`
- `0 <= Node.val <= 10^4`
- The BST follows the properties of a Binary Search Tree.

## Expected Output
The function should return the Kth smallest element in the BST.

## Notes
- The BST property ensures that an in-order traversal of the tree produces elements in sorted order.
- The problem guarantees that K is valid and within the range of available elements in the BST.