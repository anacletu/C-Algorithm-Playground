# Function to add an algorithm (creates a library)
function(add_algorithm ALGORITHM_NAME)
 add_library(${ALGORITHM_NAME} ${ALGORITHM_NAME}.c)
endfunction()

# Add sorting algorithms
add_algorithm(singly_linked_list)