# AVL Tree Library

A high-performance, header-only AVL Tree implementation for C++. AVL trees are self-balancing binary search trees that maintain logarithmic time complexity for insertions, deletions, and searches.

## About AVL Trees

AVL trees (Adelson-Velsky and Landis trees) are binary search trees where the heights of the two child subtrees of any node differ by at most one. This self-balancing property ensures optimal performance for all operations.

### Key Features

- **Self-balancing**: Automatically maintains balance through rotations
- **Guaranteed O(log n)** time complexity for search, insert, and delete operations
- **Header-only library**: Easy integration into existing projects
- **Template-based**: Works with any comparable data type
- **STL-compatible**: Familiar interface for C++ developers

## Quick Start

```cpp
#include "avl_tree.h"

// Create an AVL tree for integers
AVLTree<int> tree;

// Insert elements
tree.insert(10);
tree.insert(5);
tree.insert(15);

// Search for elements
if (tree.find(10)) {
    std::cout << "Found 10!" << std::endl;
}

// Remove elements
tree.remove(5);

// Iterate through elements (in sorted order)
for (const auto& value : tree) {
    std::cout << value << " ";
}
```

## Installation

Since this is a header-only library, simply include the header files in your project:

```bash
git clone https://github.com/Charles-JpEG/AVL_Tree.git
cd AVL_Tree
```

Include the headers in your C++ project:

```cpp
#include "include/avl_tree.h"
```

## Building and Testing

Requirements:
- C++11 or later
- CMake 3.10 or later (for building tests and examples)

```bash
mkdir build
cd build
cmake ..
make
```

Run tests:
```bash
make test
```

## Documentation

- [API Reference](docs/api.md) - Detailed class and method documentation
- [Examples](examples/) - Usage examples and tutorials
- [Performance](docs/performance.md) - Benchmarks and complexity analysis

## Contributing

Contributions are welcome! Please read our [contributing guidelines](CONTRIBUTING.md) before submitting pull requests.

1. Fork the repository
2. Create a feature branch
3. Add tests for new functionality
4. Ensure all tests pass
5. Submit a pull request

## License

This project is licensed under the GNU General Public License v3.0 - see the [LICENSE](LICENSE) file for details.

## Authors

- **Charles-JpEG** - Initial work

## Acknowledgments

- Georgy Adelson-Velsky and Evgenii Landis for the original AVL tree algorithm
- The C++ community for valuable feedback and contributions
