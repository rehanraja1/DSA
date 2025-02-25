# Lowest Common Ancestor in BST

## Problem Statement
You're given the root of a binary search tree and two nodes from the tree, labeled as `p` and `q`. Your task is to find the lowest common ancestor (LCA) of `p` and `q`.

## Note
- The lowest common ancestor (LCA) is the node located deepest in the tree that serves as an ancestor to both nodes.
- A node is considered as its own descendant.

## Example

### Example 1:
#### Input:
```
BST Structure:
        6
       / \
      2   8
     / \ / \
    0  4 7 9
      / \
     3   5

p = 2, q = 8
```

#### Output:
```
LCA = 6
```

### Example 2:
#### Input:
```
BST Structure:
        6
       / \
      2   8
     / \ / \
    0  4 7 9
      / \
     3   5

p = 2, q = 4
```

#### Output:
```
LCA = 2
```

## Constraints
- The number of nodes in the tree is in the range `[2, 10^5]`.
- `-10^9 <= Node.val <= 10^9`
- All `Node.val` values are unique.
- `p` and `q` exist in the BST.

## Applications
Finding the lowest common ancestor in a BST is useful in:
- Hierarchical data structures like organizational charts.
- Genealogical applications (finding common ancestors in family trees).
- Network routing and distributed computing.

## Complexity Analysis
The approach to solving this problem is efficient due to the properties of a BST, where we can eliminate half of the search space at each step.

- **Time Complexity:** `O(h)`, where `h` is the height of the BST (`O(log n)` for balanced trees, `O(n)` for skewed trees).
- **Space Complexity:** `O(1)` for an iterative approach and `O(h)` for a recursive approach due to function call stack usage.

