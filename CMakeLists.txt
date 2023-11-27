cmake_minimum_required(VERSION 3.27.8)
project(C-Algorithm-Playground)

# Set C standard to C11
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

# Include directories
include_directories(${CMAKE_SOURCE_DIR})

# Set the output directory for executables
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/tests)

# Function to add an algorithm (creates a library)
function(add_algorithm ALGORITHM_NAME)
    add_subdirectory(${ALGORITHM_NAME})
endfunction()

# Add subdirectories
add_subdirectory(sorting)
# Add other directories similarly...

# Manual tests
add_executable(manual_test_bubble_sort tests/sorting_lib/manual_test_bubble_sort.c)
target_link_libraries(manual_test_bubble_sort PRIVATE bubble_sort)

add_executable(manual_test_selection_sort tests/sorting_lib/manual_test_selection_sort.c)
target_link_libraries(manual_test_selection_sort PRIVATE selection_sort)

add_executable(manual_test_insertion_sort tests/sorting_lib/manual_test_insertion_sort.c)
target_link_libraries(manual_test_insertion_sort PRIVATE insertion_sort)

add_executable(manual_test_quick_sort tests/sorting_lib/manual_test_quick_sort.c)
target_link_libraries(manual_test_quick_sort PRIVATE quick_sort)

add_executable(manual_test_merge_sort tests/sorting_lib/manual_test_merge_sort.c)
target_link_libraries(manual_test_merge_sort PRIVATE merge_sort)

# Add other tests similarly...