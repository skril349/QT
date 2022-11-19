# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\GuessMyNumber_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\GuessMyNumber_autogen.dir\\ParseCache.txt"
  "GuessMyNumber_autogen"
  )
endif()
