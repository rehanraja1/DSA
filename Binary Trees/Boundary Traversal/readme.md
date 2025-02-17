# Boundary Traversal of Binary Tree

## Problem Statement
You are given a binary tree with `n` nodes. Determine the boundary nodes of the binary tree, tracing them in an anti-clockwise direction beginning from the root node.

The boundary nodes of this tree consist of nodes from its left and right edges, as well as all leaf nodes, with each node counted only once.

## Example 1

### Input:

```
      10
     /  \
    70   30
   /  \    \
  40   50   20
```

### Output:
```
10, 70, 40, 50, 20, 30
```

### Explanation:
The tree's boundary traversal sequence consists of the following elements: `10, 70, 40, 50, 20, 30`.

## Example 2

### Input:

```
        10
       /  \
     20    30
    /  \   /  \
   40  70 60  50
        \      \
        90     80
```

### Output:
```
10, 20, 40, 70, 90, 50, 80, 60, 30
```

### Explanation:
The tree's boundary traversal sequence consists of the following elements: `10, 20, 40, 70, 90, 50, 80, 60, 30`.

## Constraints
- `1 <= n <= 10^5`
- `0 <= Data <= 10^5`

Where:
- `n` is the number of nodes in the binary tree.
- `Data` is a node value in the binary tree.

