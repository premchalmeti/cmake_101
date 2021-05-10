
add_library(print_lib src/print_result.cpp)


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
# private: 
    # if the header files are limited to current target
# public:
    # if dependent targets also needs header files 
    # (or needs this property propogated)
# interface
    # if dependent targets needs this property and not current target

target_include_directories(
    print_lib
    PUBLIC include
)
