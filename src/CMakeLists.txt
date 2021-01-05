add_library(leetCode_Sources STATIC 
  $<TARGET_OBJECTS:easy_sources> 
  $<TARGET_OBJECTS:med_sources>
  $<TARGET_OBJECTS:hard_sources>
  $<TARGET_OBJECTS:template_sources>)

target_link_libraries(leetCode_Sources leetCode_Includes)

set(template_source_files
  template.cpp
)

add_library(template_sources OBJECT "${template_source_files}")

add_subdirectory(easy)
add_subdirectory(med)
add_subdirectory(hard)
