cmake_minimum_required(VERSION 3.22)
project(algos_de_tri)

set(CMAKE_CXX_STANDARD 14)

# Diriger le produit de la compilation au sous-répertoire bin
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY  ${PROJECT_SOURCE_DIR}/bin)

# Définir la librairie à compiler
add_library(algos_de_tri insert_sort_int.cpp)

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.12.0
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_subdirectory(tests)
