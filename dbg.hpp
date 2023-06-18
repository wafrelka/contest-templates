#include <vector>
#include <array>
#include <iostream>

template<typename T>
std::ostream& operator<<(std::ostream& stream, std::vector<T>& vec) {
    stream << '{';
    for(size_t i = 0; i < vec.size(); i++) {
        stream << vec[i] << (i + 1 == vec.size() ? "" : ", ");
    }
    stream << '}' << std::endl;
    return stream;
}

template<typename T, size_t N>
std::ostream& operator<<(std::ostream& stream, std::array<T, N>& arr) {
    stream << '{';
    for(size_t i = 0; i < arr.size(); i++) {
        stream << arr[i] << (i + 1 == arr.size() ? "" : ", ");
    }
    stream << '}' << std::endl;
    return stream;
}

#define DBG_PRINT_VALUE(expr, delim) { \
    std::cerr << (#expr) << " \e[2m=\e[m \e[1m" << (expr) << "\e[m" << (delim); \
}


#define DBG_PRINT_LAST(expr) DBG_PRINT_VALUE(expr, std::endl)
#define DBG_PRINT_FIRST(expr) DBG_PRINT_VALUE(expr, ", ")
#define DBG_PRINT_LINE() { std::cerr << "\e[2m[L" << __LINE__ << "]\e[m "; }

#define dbg1(x) DBG_PRINT_LAST(x)
#define dbg2(x, ...) DBG_PRINT_FIRST(x) dbg1(__VA_ARGS__)
#define dbg3(x, ...) DBG_PRINT_FIRST(x) dbg2(__VA_ARGS__)
#define dbg4(x, ...) DBG_PRINT_FIRST(x) dbg3(__VA_ARGS__)
#define dbg5(x, ...) DBG_PRINT_FIRST(x) dbg4(__VA_ARGS__)
#define dbg6(x, ...) DBG_PRINT_FIRST(x) dbg5(__VA_ARGS__)
#define dbg7(x, ...) DBG_PRINT_FIRST(x) dbg6(__VA_ARGS__)
#define dbg8(x, ...) DBG_PRINT_FIRST(x) dbg7(__VA_ARGS__)
#define dbg9(x, ...) DBG_PRINT_FIRST(x) dbg8(__VA_ARGS__)
#define dbg10(x, ...) DBG_PRINT_FIRST(x) dbg9(__VA_ARGS__)

#define DBG_SELECT_11TH(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, ...) x11
#define dbg(...) DBG_PRINT_LINE() \
    DBG_SELECT_11TH(__VA_ARGS__, dbg10, dbg9, dbg8, dbg7, dbg6, dbg5, dbg4, dbg3, dbg2, dbg1)(__VA_ARGS__)
