#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "trajectory_msgs::trajectory_msgs__rosidl_generator_c" for configuration "RelWithDebInfo"
set_property(TARGET trajectory_msgs::trajectory_msgs__rosidl_generator_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(trajectory_msgs::trajectory_msgs__rosidl_generator_c PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELWITHDEBINFO "C"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libtrajectory_msgs__rosidl_generator_c.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS trajectory_msgs::trajectory_msgs__rosidl_generator_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_trajectory_msgs::trajectory_msgs__rosidl_generator_c "${_IMPORT_PREFIX}/lib/libtrajectory_msgs__rosidl_generator_c.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
