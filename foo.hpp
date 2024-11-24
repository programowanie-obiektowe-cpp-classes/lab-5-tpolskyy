#pragma once

#include "Human.hpp"
#include <list>
#include <vector>
#include <algorithm>

std::vector<char> foo(std::list<Human>& people) {
    std::vector<char> result;

   
    for (auto& person : people) {
        person.birthday();
        result.push_back(person.isMonster() ? 'n' : 'y');
    }

    
    std::reverse(result.begin(), result.end());

    return result;
}

