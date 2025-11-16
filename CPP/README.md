# C++ Programming Projects

Organized collection of C++ implementations covering data structures, algorithms, and advanced concepts.

## 📁 Structure

### DataStructures/
Core data structure implementations:
- **Graph/**: BFS, DFS, Dijkstra, Bellman-Ford, Topological Sort, MST (Prim's, Kruskal's)
- **Tree/**: Binary Tree, BST, AVL Tree, traversals
- **heap/**: Min/Max Heap, Priority Queue implementations
- **unionfind/**: Union-Find (Disjoint Set Union)
- Linked Lists, Queues, Priority Queues

### Algorithms/
Algorithm implementations:
- **Sorting/**: Bubble, Selection, Insertion, Merge, Quick, Heap, Radix, Counting, Bucket, Shell Sort
- **PatternMatching/**: Naive, KMP, Trie, Suffix Tree

### Concepts/
Advanced C++ concepts:
- **OOP/**: Inheritance, Polymorphism, Casting (dynamic_cast, static_cast), constexpr, override
- **Threading/**: Multithreading, Atomics, Custom Lock Guards, Thread Pools
- **SmartPointers/**: unique_ptr, shared_ptr, weak_ptr implementations
- **DesignPatterns/**: Singleton, Factory, Observer, Builder, Chain of Responsibility

### STL/
Standard Template Library examples:
- Map, Set, Vector, Queue, Stack usage
- String manipulation with STL

### Practice/
- **leetcode/**: LeetCode problem solutions
- Custom implementations and practice problems
- Algorithm challenges

### Samples/
Sample code and test files for learning

## 🚀 Building

**Standard compilation:**
```bash
g++ -std=c++17 filename.cpp -o output
./output
```

**With threading:**
```bash
g++ -std=c++17 -pthread Concepts/Threading/filename.cpp -o output
./output
```

**With optimizations:**
```bash
g++ -std=c++17 -O2 filename.cpp -o output
```

## 📚 Topics Covered

**Data Structures**: Graph, Tree, Heap, Linked List, Queue, Stack, Union-Find

**Algorithms**: Sorting (10+ algorithms), Pattern Matching, Graph Algorithms, Tree Traversals

**Advanced C++**: OOP, Templates, Multithreading, Smart Pointers, Design Patterns, STL, Move Semantics

**Problem Solving**: LeetCode challenges, Custom problems, Algorithm implementations
