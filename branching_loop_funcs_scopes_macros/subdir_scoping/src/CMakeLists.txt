
set(flag "Inside main")

message("Inside main, Before adding subdirectory ${flag}")

add_subdirectory(mod1)

message("Inside main, After adding subdirectory ${flag}")
