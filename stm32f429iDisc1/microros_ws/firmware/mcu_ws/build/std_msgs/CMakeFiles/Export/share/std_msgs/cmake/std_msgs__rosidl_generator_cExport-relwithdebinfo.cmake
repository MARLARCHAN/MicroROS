#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "std_msgs::std_msgs__rosidl_generator_c" for configuration "RelWithDebInfo"
set_property(TARGET std_msgs::std_msgs__rosidl_generator_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(std_msgs::std_msgs__rosidl_generator_c PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELWITHDEBINFO "C"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libstd_msgs__rosidl_generator_c.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS std_msgs::std_msgs__rosidl_generator_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_std_msgs::std_msgs__rosidl_generator_c "${_IMPORT_PREFIX}/lib/libstd_msgs__rosidl_generator_c.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
