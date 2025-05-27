cmake_minimum_required(VERSION 3.24)
project(virtual-cpu)
set(SOURCE_FILES
    main.cpp
    Cpu.cpp
    Memory.cpp
    ALU.cpp
    )
add_executable(${PROJECT_NAME} ${SOURCE_FILES})