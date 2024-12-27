cmake_minimum_required(VERSION 3.24)
project(iGraph
        LANGUAGES CXX
        VERSION 0.1
        DESCRIPTION "Graph implementation for tp autumn 2024"
        )

set(CMAKE_CXX_STANDARD 20)

set(SOURCES
        main.cpp
        src/Algorithms.cpp
        src/ArcGraph.cpp
        src/IGraph.cpp
        src/MatrixGraph.cpp
        src/ListGraph.cpp
        src/SetGraph.cpp)

set(HEADERS
        include/Algorithms.h
        include/ArcGraph.h
        include/IGraph.h
        include/MatrixGraph.h
        include/ListGraph.h
        include/SetGraph.h)


add_executable(iGraph
        ${SOURCES}
        ${HEADERS})
