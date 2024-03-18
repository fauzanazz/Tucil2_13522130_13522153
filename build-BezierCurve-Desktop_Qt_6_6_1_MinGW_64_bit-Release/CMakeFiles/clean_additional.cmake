# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "BezierCurve_autogen"
  "CMakeFiles\\BezierCurve_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\BezierCurve_autogen.dir\\ParseCache.txt"
  )
endif()
