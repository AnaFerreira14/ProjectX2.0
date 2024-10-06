#add_library(<name> <file.cpp>)
add_library(calculator_lib calculator.cpp)
#target_sources(<name> PUBLIC <file.h>)
target_sources(calculator_lib PUBLIC calculator.h)

#Provide names of source code and header file here. For example if your source code is source.cpp you could replace
#<name> with source and <file.cpp> with source.cpp
