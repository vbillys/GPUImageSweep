# Minimum cmake version
cmake_minimum_required(VERSION 2.6)

# Libary name
set(LIB_NAME image)

# Internal files for this module
set(SRC image_acquirer.cpp image_acquirer_single_camera.cpp clgl_image.cpp)
set(C_FLAGS -std=c++11)

# Compiler flags
add_definitions(${C_FLAGS})

# Headers files definitions
include_directories(${CMAKE_SOURCE_PATH}/${LIB_NAME}/include)
include_directories(${CMAKE_SOURCE_PATH}/utils/include)
include_directories(${CMAKE_SOURCE_PATH}/clgl/include)

# Adds the library name
add_library(${LIB_NAME} ${SRC})

