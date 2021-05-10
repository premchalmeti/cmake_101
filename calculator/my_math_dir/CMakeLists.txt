add_library(
    math_lib 
    src/adder.cpp
    src/substractor.cpp
)

# specify where to find the include files
# this can also be done by specifying the complete path in source files
# ex: #include "./include/adder.h"
# the other way is using following directive
# you can specify multiple include files
# so now we can directly use addition.cpp and division.cpp in source files
# without any relative path
# the target propogates the properties with PUBLIC scope hence this will be
# propogated to root (i.e. main.cpp) and we can directly include header files 
# in main.cpp

# the below directive sets `INTERFACE_INCLUDE_DIRECTORIES` property on math_lib
# target set to full path of include directory

# 3 scopes
# private
# public
# interface

target_include_directories(
    math_lib 
    PUBLIC include
)
