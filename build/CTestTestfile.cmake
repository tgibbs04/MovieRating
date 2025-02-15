# CMake generated Testfile for 
# Source directory: C:/Spring2025/ECE3574/HWs/A3_MovieRating/MovieRating
# Build directory: C:/Spring2025/ECE3574/HWs/A3_MovieRating/MovieRating/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(MovieRatingTest "C:/Spring2025/ECE3574/HWs/A3_MovieRating/MovieRating/build/Debug/MovieRatingTest.exe")
  set_tests_properties(MovieRatingTest PROPERTIES  _BACKTRACE_TRIPLES "C:/Spring2025/ECE3574/HWs/A3_MovieRating/MovieRating/CMakeLists.txt;29;add_test;C:/Spring2025/ECE3574/HWs/A3_MovieRating/MovieRating/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(MovieRatingTest "C:/Spring2025/ECE3574/HWs/A3_MovieRating/MovieRating/build/Release/MovieRatingTest.exe")
  set_tests_properties(MovieRatingTest PROPERTIES  _BACKTRACE_TRIPLES "C:/Spring2025/ECE3574/HWs/A3_MovieRating/MovieRating/CMakeLists.txt;29;add_test;C:/Spring2025/ECE3574/HWs/A3_MovieRating/MovieRating/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(MovieRatingTest "C:/Spring2025/ECE3574/HWs/A3_MovieRating/MovieRating/build/MinSizeRel/MovieRatingTest.exe")
  set_tests_properties(MovieRatingTest PROPERTIES  _BACKTRACE_TRIPLES "C:/Spring2025/ECE3574/HWs/A3_MovieRating/MovieRating/CMakeLists.txt;29;add_test;C:/Spring2025/ECE3574/HWs/A3_MovieRating/MovieRating/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(MovieRatingTest "C:/Spring2025/ECE3574/HWs/A3_MovieRating/MovieRating/build/RelWithDebInfo/MovieRatingTest.exe")
  set_tests_properties(MovieRatingTest PROPERTIES  _BACKTRACE_TRIPLES "C:/Spring2025/ECE3574/HWs/A3_MovieRating/MovieRating/CMakeLists.txt;29;add_test;C:/Spring2025/ECE3574/HWs/A3_MovieRating/MovieRating/CMakeLists.txt;0;")
else()
  add_test(MovieRatingTest NOT_AVAILABLE)
endif()
