#ifndef SPLASH_FILTER_DEFAULT_HPP
#define SPLASH_FILTER_DEFAULT_HPP

#include "splash/filter/Filter.hpp"

namespace Splash::Filter {
    // Inherits and extends filter to form the default filter.
    // Allows any colour that isn't black, white or near red side of I line.
    class Default : public Filter {
        private:
            // Returns true if the colour is close to black
            bool isBlack(HSL &);
            // Returns true if the colour is close to white
            bool isWhite(HSL &);
            // Returns true if the colour is near the red side of the I line
            bool isNearRedILine(HSL &);

        public:
            // Overrides to provide mentioned checks
            bool isAllowed(Colour &);
    };
};

#endif