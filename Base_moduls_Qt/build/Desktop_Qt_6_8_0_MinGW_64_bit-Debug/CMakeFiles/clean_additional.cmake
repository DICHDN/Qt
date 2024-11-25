# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Base_moduls_Qt_autogen"
  "CMakeFiles\\Base_moduls_Qt_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Base_moduls_Qt_autogen.dir\\ParseCache.txt"
  )
endif()
