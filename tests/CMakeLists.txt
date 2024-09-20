add_executable(testeur_algos_tri tests_insert_sort_int.cpp ${PROJECT_SOURCE_DIR}/insert_sort_int.cpp)
target_include_directories(testeur_algos_tri PRIVATE ${PROJECT_SOURCE_DIR})
target_link_libraries(
        testeur_algos_tri
        gtest
        gtest_main
        pthread
)

include(GoogleTest)
gtest_discover_tests(testeur_algos_tri)