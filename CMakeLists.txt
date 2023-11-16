cmake_minimum_required(VERSION 3.12)
project(algorithms_dataStructure)

# Set C standard to C11
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

# Include directories
include_directories(${CMAKE_SOURCE_DIR})

# Function to add an algorithm (creates an executable)
function(add_algorithm ALGORITHM_NAME)
    add_executable(${ALGORITHM_NAME} ${ALGORITHM_NAME}.c)
endfunction()

# Sorting algorithms
add_algorithm(bubble_sort)
add_algorithm(merge_sort)
add_algorithm(quick_sort)
add_algorithm(insertion_sort)

# Searching algorithms
add_algorithm(binary_search)
add_algorithm(linear_search)
add_algorithm(interpolation_search)

# Linked list algorithms
# Add other algorithms similarly...

# Trees algorithms
# Add other algorithms similarly...

# Queues algorithms
# Add other algorithms similarly...

# Stacks algorithms
# Add other algorithms similarly...

# Pathfinding algorithms
# Add other algorithms similarly...

# Algorithmic challenges
# Add other algorithms similarly...

# Algorithmic patterns
# Add other algorithms similarly...

# Algorithmic analysis
# Add other algorithms similarly...

# Manual tests
add_executable(manual_test_bubble_sort tests/manual_test_bubble_sort.c)

# Optionally, you can add a target for building all algorithms
# add_custom_target(all_algorithms DEPENDS bubble_sort merge_sort quick_sort insertion_sort ...)
