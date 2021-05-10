
# create a library: 
# - makes more modular 
# - or you can also use greeter.cpp in add_executable()

# greet_lib is a target
# each target has properties and dependencies
add_library(
    greeter_lib
    greeter.cpp
)

# greeter is a target
# each target has properties and dependencies
add_executable(
    greeter
    main.cpp
)


# link the library with executable
# greeter is target and greeter_lib is its dependency
target_link_libraries(greeter greeter_lib)

# target_link_libraries(greeter PUBLIC greeter_lib)
# target_link_libraries(greeter INTERFACE greeter_lib)
# target_link_libraries(greeter PRIVATE greeter_lib)
