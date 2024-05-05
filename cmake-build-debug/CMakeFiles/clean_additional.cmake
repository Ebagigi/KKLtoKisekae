# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\KKLtoKisekae_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\KKLtoKisekae_autogen.dir\\ParseCache.txt"
  "KKLtoKisekae_autogen"
  )
endif()
