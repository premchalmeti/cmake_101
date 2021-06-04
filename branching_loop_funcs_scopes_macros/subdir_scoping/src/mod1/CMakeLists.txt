
message("Inside Module, Before Modification, ${flag}")

# PARENT_SCOPE will alter variable in parent scope
set(flag "Inside module" PARENT_SCOPE)

message("Inside Module, After modification, ${flag}")

