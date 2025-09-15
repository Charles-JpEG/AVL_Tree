#ifndef NODE_HPP
#define NODE_HPP

// This is node definition for AVL-Tree

template<typename key_t, typename data_t>
class Node {
    public:
    // Constructors
    Node<key_t, data_t>() {}
    Node(key_t key, data_t data) {
        key_ = key;
        data_ = data;
    }

    // getter
    key_t key() { return key_; }
    data_t value() { return data_; }

    private:
    key_t key_;
    data_t data_;
};

#endif
