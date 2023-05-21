# Binary Trees

This repository contains C functions used to manipulate binary trees.

## Files

Here's a brief description of each file:

- `binary_trees.h`: Header file that includes all the prototypes of the functions and the data structure to handle binary trees.

- `0-binary_tree_node.c`: Contains a function that creates a binary tree node.

- `1-binary_tree_insert_left.c`: Contains a function that inserts a node as the left-child of another node.

- `2-binary_tree_insert_right.c`: Contains a function that inserts a node as the right-child of another node.

- `3-binary_tree_delete.c`: Contains a function that deletes an entire binary tree.

- `4-binary_tree_is_leaf.c`: Contains a function that checks if a node is a leaf.

- `5-binary_tree_is_root.c`: Contains a function that checks if a given node is a root.

- `6-binary_tree_preorder.c`: Contains a function that goes through a binary tree using pre-order traversal.

- `7-binary_tree_inorder.c`: Contains a function that goes through a binary tree using in-order traversal.

- `8-binary_tree_postorder.c`: Contains a function that goes through a binary tree using post-order traversal.

- `9-binary_tree_height.c`: Contains a function that measures the height of a binary tree.

- `10-binary_tree_depth.c`: Contains a function that measures the depth of a node in a binary tree.

- `11-binary_tree_size.c`: Contains a function that measures the size of a binary tree.

- `12-binary_tree_leaves.c`: Contains a function that counts the leaves in a binary tree.

- `13-binary_tree_nodes.c`: Contains a function that counts the nodes with at least 1 child in a binary tree.

- `14-binary_tree_balance.c`: Contains a function that measures the balance factor of a binary tree.

- `15-binary_tree_is_full.c`: Contains a function that checks if a binary tree is full.

- `16-binary_tree_is_perfect.c`: Contains a function that checks if a binary tree is perfect.

- `17-binary_tree_sibling.c`: Contains a function that finds the sibling of a node.

- `18-binary_tree_uncle.c`: Contains a function that finds the uncle of a node.

## Usage

Each file contains a function that can be used separately. Make sure to include the "binary_trees.h" header file to have access to the function prototypes and the data structure.



## Additional Resources

In addition to the main C files, there is also a helpful function for visualization. This function is not necessary for the operation of the other functions, but it can be very useful for debugging and understanding the binary tree structures. It prints binary trees in a human-readable format, which is very helpful for visualizing the tree structures.

This function was originally found at [this StackOverflow post](http://stackoverflow.com/a/13755911/5184480) and is included in a separate repo at [this link](https://github.com/hs-hq/0x1C.c). Please note that this function is **not** included in the main repository as it is not part of the tasks. You will have to download it separately if you wish to use it.

To use this function:

1. Navigate to [this link](https://github.com/hs-hq/0x1C.c).
2. Download the `print_t.c` file. This file contains the print function.
3. Place the downloaded `print_t.c` in your project directory.
4. Ensure that your main file includes the `binary_trees.h` header file that contains the prototype for the print function.

The function prints the binary tree in a two-dimensional format where the value in each node is printed inside parentheses. The parent-child relationships are represented by lines connecting the nodes.


## Author

[Ismail Mejdoub]

## Acknowledgements

This project is part of the Holberton School curriculum.