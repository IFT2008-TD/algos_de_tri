//
// Created by Pascal Charpentier on 2024-09-02.
//

#include "insert_sort_int.h"

// Projet

void insert_sort_int(std::vector<int>& v) {
    for (auto i = 1; i < v.size(); ++i) {
        auto tmp = v.at(i) ;
        auto j = i ;
        while (j > 0 && v.at(j - 1) > tmp) {
            v.at(j) = v.at(j - 1) ;
            --j ;
        }
        v.at(j) = tmp ;
    }
}
