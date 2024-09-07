cmake_minimum_required(VERSION 3.23)
project(arcade_marioKart)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")

file( GLOB SRC src/*.cpp src/Menu/*.cpp src/SFML/*.cpp src/marioKart/*.cpp)
file (GLOB HEADERS src/*.hpp src/Menu/*.hpp src/SFML/*.hpp src/marioKart/*.hpp)

add_executable(arcade_marioKart
        ${SRC}
        ${HEADERS}
)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/SFML/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(C:/SFML/include)
target_link_libraries(arcade_marioKart sfml-system sfml-window sfml-graphics sfml-audio sfml-network)

