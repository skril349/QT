# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QDir_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QDir_autogen.dir\\ParseCache.txt"
  "QDir_autogen"
  )
endif()
