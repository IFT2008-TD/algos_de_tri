//
// Created by Pascal Charpentier on 2024-09-02.
//

#include <gtest/gtest.h>
#include "insert_sort_int.h"

TEST(insert_sort_int, un_element_inchange) {
    std::vector<int> v1 {1} ;
    std::vector<int> attendu {1} ;
    insert_sort_int(v1) ;
    EXPECT_EQ(attendu, v1) ;
}

TEST(insert_sort_int, deux_elements_inverses) {
    std::vector<int> v2 {2, 1} ;
    std::vector<int> attendu {1, 2} ;
    insert_sort_int(v2) ;
    EXPECT_EQ(attendu, v2) ;
}

TEST(insert_sort_int, dix_elements) {
    std::vector<int> v10 {9, 4, 0, 1, 3, 2, 5, 7, 6, 8} ;
    std::vector<int> attendu {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    insert_sort_int(v10) ;
    EXPECT_EQ(attendu, v10) ;
}
