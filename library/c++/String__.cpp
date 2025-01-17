//
// Created by Ruslan on 15.09.2023.
//
#include <iostream>
#include <ctime>

class String__ {
    public:
        static std::string to_string(const time_t &i)
        {
                return std::to_string(i);
        }
        static std::string to_string(const int &i)
        {
            return std::to_string(i);
        }
        static std::string to_string(const float &i)
        {
            return std::to_string(i);
        }
        static std::string to_string(const std::string &i) {
            return i;
        }
        static std::string to_string(const char &i)
        {
            std::string string(1, i);
            return string;
        }
        static std::string to_string(const char *i) {
            std::string string(i);
            return string;
        }
        static std::string to_string(const bool &i)
        {
            return std::to_string(i);
        }
};
