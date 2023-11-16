# Function to add an algorithm (creates a library)
function(add_algorithm ALGORITHM_NAME)
 add_library(${ALGORITHM_NAME} ${CMAKE_SOURCE_DIR}/${ALGORITHM_NAME}/${ALGORITHM_NAME}.c)
endfunction()

# Add searching algorithms
add_algorithm(binary_search)
add_algorithm(linear_search)
add_algorithm(interpolation_search)