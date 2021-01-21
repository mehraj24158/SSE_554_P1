# CMake generated Testfile for 
# Source directory: C:/Users/Mehraj_Ahmed/Workspace/SSE_554/P1/test
# Build directory: C:/Users/Mehraj_Ahmed/Workspace/SSE_554/P1/build/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test([=[test_main]=] "C:/Users/Mehraj_Ahmed/Workspace/SSE_554/P1/build/test/Debug/test_main.exe")
  set_tests_properties([=[test_main]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Mehraj_Ahmed/Workspace/SSE_554/P1/test/CMakeLists.txt;16;add_test;C:/Users/Mehraj_Ahmed/Workspace/SSE_554/P1/test/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test([=[test_main]=] "C:/Users/Mehraj_Ahmed/Workspace/SSE_554/P1/build/test/Release/test_main.exe")
  set_tests_properties([=[test_main]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Mehraj_Ahmed/Workspace/SSE_554/P1/test/CMakeLists.txt;16;add_test;C:/Users/Mehraj_Ahmed/Workspace/SSE_554/P1/test/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test([=[test_main]=] "C:/Users/Mehraj_Ahmed/Workspace/SSE_554/P1/build/test/MinSizeRel/test_main.exe")
  set_tests_properties([=[test_main]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Mehraj_Ahmed/Workspace/SSE_554/P1/test/CMakeLists.txt;16;add_test;C:/Users/Mehraj_Ahmed/Workspace/SSE_554/P1/test/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test([=[test_main]=] "C:/Users/Mehraj_Ahmed/Workspace/SSE_554/P1/build/test/RelWithDebInfo/test_main.exe")
  set_tests_properties([=[test_main]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Mehraj_Ahmed/Workspace/SSE_554/P1/test/CMakeLists.txt;16;add_test;C:/Users/Mehraj_Ahmed/Workspace/SSE_554/P1/test/CMakeLists.txt;0;")
else()
  add_test([=[test_main]=] NOT_AVAILABLE)
endif()
