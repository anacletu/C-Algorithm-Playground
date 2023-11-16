# Function to add an algorithm (creates a library)
function(add_algorithm ALGORITHM_NAME)
 add_library(${ALGORITHM_NAME} ${ALGORITHM_NAME}.c)
endfunction()

# Add sorting algorithms
add_algorithm(bubble_sort)
add_algorithm(merge_sort)
add_algorithm(quick_sort)
add_algorithm(insertion_sort)