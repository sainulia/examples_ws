add_library(Adder src/adder.cpp)
target_include_directories(Adder PUBLIC "${PROJECT_SOURCE_DIR}/Adder/include")

target_sources(Adder INTERFACE 
    FILE_SET HEADERS
    BASE_DIRS ${PROJECT_SOURCE_DIR}/Adder/include
    FILES include/Adder/adder.h)

message(${PROJECT_SOURCE_DIR})
install(TARGETS Adder FILE_SET HEADERS)
# install(FILES include/Adder/adder.h DESTINATION include/Adder)        