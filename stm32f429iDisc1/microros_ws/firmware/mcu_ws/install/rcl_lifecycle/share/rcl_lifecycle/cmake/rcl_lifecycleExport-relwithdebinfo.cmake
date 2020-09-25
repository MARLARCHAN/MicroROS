#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rcl_lifecycle::rcl_lifecycle" for configuration "RelWithDebInfo"
set_property(TARGET rcl_lifecycle::rcl_lifecycle APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(rcl_lifecycle::rcl_lifecycle PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELWITHDEBINFO "C"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/librcl_lifecycle.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS rcl_lifecycle::rcl_lifecycle )
list(APPEND _IMPORT_CHECK_FILES_FOR_rcl_lifecycle::rcl_lifecycle "${_IMPORT_PREFIX}/lib/librcl_lifecycle.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
