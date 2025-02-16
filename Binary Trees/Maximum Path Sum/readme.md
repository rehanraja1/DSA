# Maximum Path Sum of a Binary Tree

## Problem Statement
You are provided with a binary tree consisting of `N` nodes, where each node contains an integer. Your task is to determine the maximum sum achievable from a path connecting any two nodes in the tree, which could be the same node.

A **path** refers to a route connecting any two nodes in a tree without repeating any edges. The sum of a path is calculated by adding up the values of all the nodes along that path.

## Example 1

### Input:

```
      10
     /  \
    2   10
   / \    \
  20  1   -25
           /  \
         3    4
```

### Output:
```
42
```

### Explanation:
The maximum path sum is obtained from the path `20 -> 2 -> 10 -> 10` which gives `20 + 2 + 10 + 10 = 42`.

