# Vertical Order Traversal of Binary Tree

## Problem Statement
You are given the root of a binary tree that contains `N` nodes. Your task is to perform a vertical-order traversal of this binary tree.

## Traversal Rules
- For any node at position `(x, y)`, its left child is at `(x + 1, y - 1)` and the right child at `(x + 1, y + 1)`. Assume the root is at `(0, 0)`.
- Traverse along imaginary vertical lines from `x = -infinity` to `x = +infinity`, starting from the leftmost line.
- Access nodes in higher vertical positions first. For nodes in the same vertical position, access them in ascending order of their values.

## Example 1

### Input:
```
      3
     / \
    9   20
       /  \
      15   7
```

### Output:
```
[[9], [3, 15], [20], [7]]
```

### Explanation:
- Column `-1`: `[9]`
- Column `0`: `[3, 15]` (sorted by value)
- Column `1`: `[20]`
- Column `2`: `[7]`

