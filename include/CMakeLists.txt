add_library(leetCode_Includes INTERFACE)

target_include_directories(leetCode_Includes 
INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}"
)

target_link_libraries(leetCode_Includes 
INTERFACE easy_Includes
INTERFACE med_Includes
)

add_subdirectory(easy)
add_subdirectory(med)
