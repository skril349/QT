# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\pointers_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\pointers_autogen.dir\\ParseCache.txt"
  "pointers_autogen"
  )
endif()
