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


template<typename T>
void math21_tool_std_vector_resize(std::vector<T> &A, NumN size) {
    try {
        A.resize(size);
    }
    catch (const std::length_error &le) {
        assert(0);
    }
}

template<typename T>
void m21cout(const T& a){
#ifdef MATH21_ANDROID
    SimpleStreamBuf ssb;
        std::streambuf *backup;
        backup = std::cout.rdbuf();
        std::cout.rdbuf(&ssb);
        std::cout << a;
        std::cout.rdbuf(backup);
#else
    std::cout << a;
#endif

}


template<typename T>
void m21log(T b) {
#if defined(MATH21_DISABLE_LOG)
    return;
#endif

    m21cout(b);
    m21cout("\n");
}

void test_std() {
    m21log(__FUNCTION__);
    std::vector<int> v;
    NumN size = 10;

    math21_tool_std_vector_resize(v, size);
    m21log(v.size());
}

int main(int argc, char **) {
    test_std();
    return 0;
}
