# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\GUIntro_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\GUIntro_autogen.dir\\ParseCache.txt"
  "GUIntro_autogen"
  )
endif()
