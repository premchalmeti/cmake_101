cmake_minimum_required(VERSION 3.16)

project(
	"calculator"
	VERSION "1.0.0"
	DESCRIPTION "An app for math related operations"
)

add_subdirectory(my_math_dir)

add_subdirectory(my_print_dir)


# the executable name must be globally unique
# the source files can be added later target_sources()
add_executable(
	calculator
	main.cpp
)

target_link_libraries(calculator math_lib print_lib)
