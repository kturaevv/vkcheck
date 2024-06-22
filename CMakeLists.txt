cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Access the environment variable PROJECT_NAME
if(DEFINED ENV{PROJECT_NAME})
  set(PROJECT_NAME $ENV{PROJECT_NAME})
else()
  message(FATAL_ERROR "Environment variable PROJECT_NAME is not set")
endif()

project(${PROJECT_NAME})

find_package(fmt CONFIG REQUIRED)
find_package(Vulkan REQUIRED)

add_executable(${PROJECT_NAME} ./src/main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE fmt::fmt)
target_link_libraries(${PROJECT_NAME} PRIVATE glfw Vulkan::Vulkan dl pthread X11 Xxf86vm Xrandr Xi)