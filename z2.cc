/* Copyright 2015 The math21 Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include <vector>
#include <cstdio>
#include <string>
#include <cassert>
#include <iostream>

typedef unsigned long NumN;

void test_std() {
    std::vector<int> v;
    NumN size = 10;

//    std::cout << v << std::endl;
    std::cout << v.size() << std::endl;
}

int main(int argc, char **) {
    test_std();
    return 0;
}
