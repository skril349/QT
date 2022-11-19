# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Lambdas_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Lambdas_autogen.dir\\ParseCache.txt"
  "Lambdas_autogen"
  )
endif()
