add_executable(leetCode_Sources $<TARGET_OBJECTS:easy_sources>)

target_link_libraries(leetCode_Sources leetCode_Includes)

add_subdirectory(easy)