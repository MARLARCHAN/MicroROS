#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rcl::rcl" for configuration "RelWithDebInfo"
set_property(TARGET rcl::rcl APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(rcl::rcl PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELWITHDEBINFO "C"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/librcl.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS rcl::rcl )
list(APPEND _IMPORT_CHECK_FILES_FOR_rcl::rcl "${_IMPORT_PREFIX}/lib/librcl.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
