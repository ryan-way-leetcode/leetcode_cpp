add_library(leetCode_Sources STATIC $<TARGET_OBJECTS:easy_sources> $<TARGET_OBJECTS:med_sources>)

target_link_libraries(leetCode_Sources leetCode_Includes)

add_subdirectory(easy)
add_subdirectory(med)
