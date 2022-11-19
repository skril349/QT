# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\MemoryManagment_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\MemoryManagment_autogen.dir\\ParseCache.txt"
  "MemoryManagment_autogen"
  )
endif()
