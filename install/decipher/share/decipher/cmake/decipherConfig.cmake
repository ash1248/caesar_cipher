# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_decipher_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED decipher_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(decipher_FOUND FALSE)
  elseif(NOT decipher_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(decipher_FOUND FALSE)
  endif()
  return()
endif()
set(_decipher_CONFIG_INCLUDED TRUE)

# output package information
if(NOT decipher_FIND_QUIETLY)
  message(STATUS "Found decipher: 0.0.0 (${decipher_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'decipher' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${decipher_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(decipher_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${decipher_DIR}/${_extra}")
endforeach()
