#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "requests" for configuration ""
set_property(TARGET requests APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(requests PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/librequests.a"
  )

list(APPEND _cmake_import_check_targets requests )
list(APPEND _cmake_import_check_files_for_requests "${_IMPORT_PREFIX}/lib/librequests.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
