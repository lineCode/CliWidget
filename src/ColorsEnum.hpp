#ifndef COLORS_HPP
#define COLORS_HPP

#include <iostream>


namespace CliWidget {

    enum class ForegroundColor {
        NONE    = 0,
        BLACK   = 30,
        RED     = 31,
        GREEN   = 32,
        YELLOW  = 33,
        BLUE    = 34,
        MAGENTA = 35,
        CYAN    = 36,
        WHITE   = 37
    };

    inline std::ostream& operator << (std::ostream& os, const ForegroundColor& fColor){
       return os << static_cast<int>(fColor); 
    }

    enum class BackgroundColor {
        NONE    = 0,
        BLACK   = 40,
        RED     = 41,
        GREEN   = 42,
        YELLOW  = 43,
        BLUE    = 44,
        MAGENTA = 45,
        CYAN    = 46,
        WHITE   = 47
    };

    inline std::ostream& operator << (std::ostream& os, const BackgroundColor& bColor){
       return os << static_cast<int>(bColor);
    }
}

#endif
