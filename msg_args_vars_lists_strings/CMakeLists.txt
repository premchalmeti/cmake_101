cmake_minimum_required(VERSION 3.16)

message("Hello")

# use `cmake -P CMakeLists.txt` to enter into script mode
# note project() is not scriptable hence not used

set(AUTHOR PremChalmeti)

set(PremChalmeti AshokChalmeti)

#note: $<> are generator expressions

message("by ${AUTHOR} ${${AUTHOR}}")

set(
    TOPICS
    "scripting mode using -P"
    "message()"
    "Variables"
    "Strings"
    "Quoted and Unqoted Arguments"
    "Lists"
)

message("Topics to covered in this module are, ${TOPICS}")

#see also, lists() and string()

