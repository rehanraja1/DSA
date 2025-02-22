# Children Sum Property in Binary Tree

## Problem Statement
You are given the root of a binary tree. Return `true` if every non-leaf node satisfies the children sum property; otherwise, return `false`.

Assume `0` value for null nodes.

## Note
The **Children Sum Property** states that for every non-leaf node in a binary tree, the node's value must be equal to the sum of its direct children's values.

## Example 1:

### Input:
```
      10
     /  \
    7    3
   / \    \
  5   2    3
```

### Output:
```
true
```

### Explanation:
- Root node `10` equals the sum of its children (`7 + 3`).
- Node `7` equals the sum of its children (`5 + 2`).
- Node `3` equals the sum of its children (`3 + 0`).

Hence, the given binary tree satisfies the **Children Sum Property**.