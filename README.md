# AVL Tree Library

A high-performance, header-only AVL Tree implementation for C++. AVL trees are self-balancing binary search trees that maintain logarithmic time complexity for insertions, deletions, and searches.

## About AVL Trees

AVL trees (Adelson-Velsky and Landis trees) are binary search trees where the heights of the two child subtrees of any node differ by at most one. This self-balancing property ensures optimal performance for all operations.

## Installation
## Usage
```c++
AVL_Tree<int, std::string> tree();
tree.insert(42, "Hello!");
tree.insert(Node<int, std::string> (64, "another"));

std::cout << tree.size() << std::endl;  // stdout: 2

tree.get(42);  // return iterator of node with key 42
tree.find("Hello!");    // return iterator of node with value "Hello!"

tree.insert(64, "replacement"); // replace with new value and return old node
tree.force_insert(64, "force replacement"); // insert without returning existing node if present

tree.delete(42);
std::cout << tree.size() << std::endl;  // stdout: 1

tree.reset();
std::cout << tree.size() << std::endl;  // stdout: 0
```

## License

This project is licensed under the GNU General Public License v3.0 - see the [LICENSE](LICENSE) file for details.

## Authors

- **Charles-JpEG** - Initial work

## Acknowledgments

- Georgy Adelson-Velsky and Evgenii Landis for the original AVL tree algorithm
- The C++ community for valuable feedback and contributions
