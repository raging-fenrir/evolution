cmake_minimum_required(VERSION 2.8)

project("evolution" CXX)

set(GCC_COMPILE_FLAGS "--std=c++11")
set(CMAKE_CXX_FLAGS   "${CMAKE_CXX_FLAGS} ${GCC_COMPILE_FLAGS}")

set(SOURCES
  Environment/Environment.cpp
  Environment/Sewer.cpp
  Population/Population.cpp
  Population/Rat.cpp
  Pheno/Pheno.cpp
  Pheno/Fur.cpp
  System/System.cpp
  )

set(HEADERS
  Environment/Environment.h
  Environment/Sewer.h
  Population/Population.h
  Population/Rat.h
  Pheno/Pheno.h
  Pheno/Fur.h
  System/System.h
  )

add_executable(main main/main.cpp ${SOURCES} ${HEADERS})

