cmake_minimum_required(VERSION 3.10.0)

#if(COMMAND cmake_policy)
#	cmake_policy(SET CMP0054 NEW)
#endif(COMMAND cmake_policy)

project(EMAKE VERSION 1.0.0 LANGUAGES C CXX)
configure_file(EMAKEConfig.h.in EMAKEConfig.h)


option(EMAKE_USE_ADDER "Option for including Adder during build" ON)

if(EMAKE_USE_ADDER)
    add_subdirectory(Adder)
    # list(APPEND EMAKE_INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/Adder")
    # list(APPEND EMAKE_LIB_DIRS "${PROJECT_SOURCE_DIR}/Adder")
    # list(APPEND EMAKE_LIBS Adder)
    message("-- Adder build ON")
endif()


add_executable(add src/numbers_add.cpp)
target_link_libraries(add Adder)


