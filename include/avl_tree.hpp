#ifndef AVL_TREE_HPP
#define AVL_TREE_HPP

#include "node.hpp"
#include <memory>

// This is a header-only AVL tree implementation, Node is defined in node.hpp

// AVL-Tree class
template<typename key_t, typename data_t>
class AVL_Tree {
    using Node = Node<key_t, data_t>;
    public:
    // Constructors
    AVL_Tree() = default;
    AVL_Tree(Node& node):
        root(std::make_unique(node)),
        size_(1) {}
    AVL_Tree(key_t& key, data_t& data):
        AVL_Tree(Node(key, data)) {}

    // Interface
    // inserttion
    std::unique_ptr<Node> insert(Node& node);
    data_t insert(key_t& key, data_t& data);
    void force_insert(Node& node);
    void force_insert(key_t& key, data_t& data);

    // Getter methods
    Node* get(key_t& key);
    Node* find(data_t& data);
    key_t findkey(data_t& data);

    // Delete methods
    std::unique_ptr<Node> pop(key_t& key);
    void reset();

    //
    size_t size() { return size_; }

    std::unique_ptr<Node> root = nullptr;
    private:
    size_t size_ = 0;
};

#endif
