# My Algorithms Repository

Welcome to my personal collection of algorithm implementations in C! This repository serves as a dedicated space for honing my skills and gaining a deeper understanding of algorithms and data structures. Inspired by my journey of learning through courses, lectures, and personal exploration, this project is a manifestation of my commitment to mastering these fundamental concepts, including a focus on understanding the efficiency of algorithms through concepts like Big O notation.

## Motivation

The idea behind this project emerged from a simple desire — to practice and truly comprehend the algorithms I encountered in various educational resources. As a student, I found that implementing algorithms and understanding their running times were essential steps in the learning process. This repository encapsulates my journey of exploration and serves as a tangible record of the algorithms I've encountered, implemented, and studied.

## Sharing Knowledge

By publishing this repository on GitHub, I aim to provide a resource for fellow learners. Access to organized and condensed examples, along with insights into the efficiency of algorithms (as denoted by Big O notation), can be immensely beneficial for students navigating the intricate landscape of algorithms. Whether you are just starting your journey or seeking additional examples to reinforce your understanding, this collection is designed to support and enhance your learning experience.

## Table of Contents

- [Sorting](#sorting)
- [Searching](#searching)
- [Linked Lists](#linked-lists)
- [Trees](#trees)
- [Queues](#queues)
- [Stacks](#stacks)
- [Pathfinding](#pathfinding)
- [Algorithmic Challenges](#algorithmic-challenges)
- [Algorithmic Patterns](#algorithmic-patterns)
- [Algorithmic Analysis](#algorithmic-analysis)
- [Manual Tests](#manual-tests)

## Sorting

Explore various sorting algorithms to understand their efficiency and implementation details.

- [Bubble Sort](sorting/bubble_sort.c): A simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
- [Merge Sort](sorting/merge_sort.c): A divide-and-conquer algorithm that divides the array into two halves, sorts them, and then merges the sorted halves.
- [Quick Sort](sorting/quick_sort.c): A fast, in-place sorting algorithm that uses a divide-and-conquer strategy.
- [Insertion Sort](sorting/insertion_sort.c): Builds the sorted array one item at a time by repeatedly taking an element from the unsorted part and inserting it into its correct position.
- [Selection Sort](sorting/selection_sort.c): A simple sorting algorithm that divides the input list into a sorted and an unsorted region. It repeatedly selects the smallest (or largest) element from the unsorted region and swaps it with the first element of the unsorted region.

## Searching

Discover different searching algorithms to find elements efficiently in various data structures.

- [Binary Search](searching/binary_search.c): An efficient algorithm for finding an item from a sorted list of items.
- [Linear Search](searching/linear_search.c): A simple search algorithm that looks at each element in sequence.
- [Interpolation Search](searching/interpolation_search.c): An algorithm that estimates the position of the target value and performs binary search accordingly.

## Linked Lists

Explore linked list structures with variations such as singly linked lists, doubly linked lists, and circular linked lists.

- [Singly Linked List](linked_lists/singly_linked_list.c): A basic linked list where each node points to the next node in the sequence.
- [Doubly Linked List](linked_lists/doubly_linked_list.c): A linked list in which each node contains a data element and two pointers, one pointing to the next node and one pointing to the previous node.
- [Circular Linked List](linked_lists/circular_linked_list.c): A linked list in which the last node points back to the first node.

## Trees

Understand tree structures and tree traversal algorithms.

- [Binary Tree](trees/binary_tree.c): A tree data structure in which each node has at most two children.
- [AVL Tree](trees/AVL_tree.c): A self-balancing binary search tree.
- [Post-order Traversal](trees/post_order_traversal.c): Traverse a tree in a post-order manner.

## Queues

Explore queue data structures with different implementations.

- [Queue using Linked List](queues/queue_using_linked_list.c): Implementing a queue using a linked list.
- [Queue using Array](queues/queue_using_array.c): Implementing a queue using an array.
- [Priority Queue](queues/priority_queue.c): A variation of a queue where elements are dequeued based on priority.

## Stacks

Understand stack data structures with various implementations.

- [Stack using Linked List](stacks/stack_using_linked_list.c): Implementing a stack using a linked list.
- [Stack using Array](stacks/stack_using_array.c): Implementing a stack using an array.
- [Enhanced Stack](stacks/enhanced_stack.c): A variation of a stack with additional functionalities.

## Pathfinding

Discover pathfinding algorithms for traversing graphs.

- [Recursive Pathfinder](pathfinding/recursive_pathfinder.c): A pathfinding algorithm that uses recursion.
- [Dijkstra Pathfinder](pathfinding/dijkstra_pathfinder.c): An algorithm for finding the shortest paths between nodes in a graph.

## Algorithmic Challenges

Take on algorithmic challenges to enhance your problem-solving skills.

- [Longest Increasing Subsequence](algorithmic_challenges/longest_increasing_subsequence.c): Find the length of the longest subsequence of a given array of integers.

## Algorithmic Patterns

Explore common algorithmic patterns to improve your problem-solving toolbox.

- [Sliding Window](algorithmic_patterns/sliding_window.c): A technique for efficiently processing arrays or lists by maintaining a set of elements related to a contiguous subarray.

## Algorithmic Analysis

Learn about time complexity analysis and understand the efficiency of various algorithms.

- [Time Complexity Analysis](algorithmic_analysis/time_complexity_analysis.md): Documentation discussing the time complexity of algorithms and their analysis.

## Manual Tests

Conduct manual tests for various algorithms to ensure their correctness.

- [Manual Test for Bubble Sort](tests/manual_test_bubble_sort.c): A manual test for the bubble sort algorithm.

## Build Instructions for Testing

To build the project and run the tests, follow these steps:

1. Install CMake: Visit [CMake](https://cmake.org/download/) to download and install CMake for your platform.
2. Create a build directory: `mkdir build`
3. Navigate to the build directory: `cd build`
4. Generate build files using CMake: `cmake ..`
5. Build the project: `cmake --build .`

### Run Manual Tests

To run manual tests for specific algorithms, use the following command:

- Example for Bubble Sort: `./manual_test_bubble_sort`
- Example for Insertion Sort: `./manual_test_insertion_sort`

The compiled executables will be available in the **test directory**.

#### Runtime Measurement

The manual tests include a runtime measurement feature using the `clock` function. However, the provided arrays in the tests are for illustrative purposes only and may not yield relevant results. To obtain meaningful runtime data:

1. Open the corresponding manual test file.
2. Locate the section that measures and prints the runtime.
3. Customize the test arrays by replacing them with larger, more challenging datasets that better represent real-world scenarios.

**Note:** The default arrays provided are meant as examples and may not sufficiently stress the algorithms for accurate runtime comparisons. Customizing the arrays will ensure more relevant and insightful results.

## Contribution

Feel free to contribute by adding new algorithms, variations, or challenges. Your contributions are highly appreciated!

## License

This repository is licensed under the [MIT License](LICENSE).

Happy coding!