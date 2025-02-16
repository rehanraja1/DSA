# Zig-Zag Level Order Traversal

## Problem Statement
You are given the root node of a binary tree consisting of `N` nodes. Your task is to return the zig-zag level order traversal of the binary tree.

In a zig-zag level order traversal, nodes are visited level by level. The nodes at each level are visited from left to right on the first level, then from right to left on the next level, and this pattern alternates for each subsequent level.

## Example 1

### Input:

```
        3
       / \
      4   5
     / \ / \
    6  7 8  9
```

### Output:
```
[[3], [5, 4], [6, 7, 8, 9]]
```

### Explanation:
- **Level 1**: Start from root → `[3]`
- **Level 2**: Right to left → `[5, 4]`
- **Level 3**: Left to right → `[6, 7, 8, 9]`

## Constraints
- `1 <= N <= 10^5`
- `-10^3 <= Node Value <= 10^3`

