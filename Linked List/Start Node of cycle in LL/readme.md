# Find Start Node of a Cycle in Linked List

## Problem Statement
You're given the head of a singly linked list that may or may not have a cycle.

Your task is to return the node where the cycle begins, if a cycle exists; otherwise, return `NULL`.

## Note
A linked list has a cycle if a node points back to a previous node instead of pointing to `NULL`.

## Sample Input and Output

### Example 1
#### Input:
```
head = [3, 2, 0, -4]
cycle at index = 1
```
#### Output:
```
Node with value 2
```

### Example 2
#### Input:
```
head = [1, 2]
cycle at index = 0
```
#### Output:
```
Node with value 1
```

### Example 3
#### Input:
```
head = [1]
cycle at index = -1 (no cycle)
```
#### Output:
```
NULL
```

