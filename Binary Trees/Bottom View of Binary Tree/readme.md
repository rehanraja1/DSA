# Bottom View Of Binary Tree

## Problem Statement
You are given the root of a binary tree. Find the bottom view of the tree by listing the nodes from left to right.

## Note
The bottom view of a binary tree is the collection of nodes visible when the tree is viewed from the bottom.
If multiple nodes exist at the bottom-most level, then consider the one that appears later in a level order traversal.

## Example 1

### Input:
```
       1
      / \
     2   3
    / \   \
   4   5   6
        \
         7
```

### Output:
```
4 2 5 7 6
```

### Explanation:
The nodes visible from the bottom view are `4, 2, 5, 7, 6` when viewed from left to right.

