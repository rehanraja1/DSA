# Maximum Width of Binary Tree

## Problem Statement
You are given the root of a binary tree. Your task is to find the maximum width of the tree.

## Note
The width of a level in the tree is defined as the number of positions from the leftmost to rightmost non-null nodes at that level.

This count includes any null nodes that would exist between them in a complete binary tree.

## Example 1

### Input:

```
      1
     / \
    3   2
   /     \
  5       9
 /         \
6           7
```

### Output:
```
4
```

### Explanation:
The widest part of the tree is level 3, which has a maximum width of 4.
This level contains the nodes: 6, 5, null, 9, and 7.

