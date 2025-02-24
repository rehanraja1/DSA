# Insertion in Binary Search Tree

## Introduction
Insertion in a Binary Search Tree (BST) involves adding a node while maintaining the binary search property of the tree. Each node in a BST has at most two children, where the left child contains values smaller than the parent node, and the right child contains values greater than the parent node.

## Input
- A Binary Search Tree (BST)
- A value to be inserted into the BST

## Output
- A BST with the new value inserted while preserving the BST property

# Deletion in Binary Search Tree

## Introduction
Deletion in a Binary Search Tree (BST) involves deleting a node while maintaining the binary search property of the tree.

## Algorithm
The task is to delete a node in the BST, which can be broken down into three cases:

- **Deleting a leaf node**: Remove the node by pointing it to null.
- **Deleting a node with one child**: Replace the node with its child.
- **Deleting a node with two children**: Replace the node with an in-order successor or predecessor.

## Example 1:
### Input:
BST before deletion:
```
       50
      /  \
    30    70
   /  \   /  \
  20  40 60  80
```
Delete 50

### Output:
BST after deletion:
```
       60
      /  \
    30    70
   /  \      \
  20  40     80
```

