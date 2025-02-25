# Validate a Binary Search Tree

## Problem Statement
Given the root of a binary tree, determine whether it is a valid binary search tree (BST). A BST is defined as follows:
- The left subtree of a node contains only nodes with values less than the node's value.
- The right subtree of a node contains only nodes with values greater than the node's value.
- Both the left and right subtrees must also be binary search trees.

## Input
- A binary tree represented by its root node.

## Output
- A boolean value indicating whether the given binary tree is a valid BST.

## Constraints
- The number of nodes in the tree is in the range `[1, 10^4]`.
- `-2^31 <= Node.val <= 2^31 - 1`.

## Example
### Example 1
**Input:**
```
    2
   / \
  1   3
```
**Output:** `true`

### Example 2
**Input:**
```
    5
   / \
  1   4
     / \
    3   6
```
**Output:** `false`
**Explanation:** The value `3` is in the right subtree of `5` but is smaller than `5`, violating the BST property.

## Edge Cases
- A tree with only one node.
- A tree with all nodes on one side (skewed tree).
- A tree where all values are the same.
- A tree where values are at the boundary limits of the integer range.

## Applications
- Used in database indexing.
- Forms the basis for self-balancing trees in data structures.
- Efficient searching operations in large datasets.

## Complexity Analysis
- **Time Complexity:** `O(n)`, where `n` is the number of nodes in the tree, as each node is visited once.
- **Space Complexity:** `O(h)`, where `h` is the height of the tree (O(log n) for balanced trees, O(n) for skewed trees).