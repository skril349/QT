# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Teaser_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Teaser_autogen.dir\\ParseCache.txt"
  "Teaser_autogen"
  )
endif()
