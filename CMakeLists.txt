cmake_minimum_required(VERSION 3.10)
project(3DDataProcessing VERSION 1.0.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF) # Do not use compiler-specific extensions

# Define the executable and its source files
add_executable(${PROJECT_NAME}
    src/json_parser.cpp
    src/data_object_3d.cpp
    src/main.cpp
)

# Specify include directories for the target
target_include_directories(${PROJECT_NAME}
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

# Link any additional libraries if necessary
# target_link_libraries(${PROJECT_NAME} <library_name>)

# If you have tests, consider using CTest
# enable_testing()
# add_subdirectory(tests)

# If you have examples, add them under a conditional to avoid build in all configurations
# option(BUILD_EXAMPLES "Build example programs" ON)
# if(BUILD_EXAMPLES)
#     add_subdirectory(examples)
# endif()
