#include <string>

std::string problemSolution3(float height, char S) {



        if (S == 'm' && height < 1.7)
        return "Short";
    else if (S == 'm' && height < 1.85)
        return "Normal";
    else if (S == 'm' && height >= 1.85)
        return "Tall";
    else if (S == 'f' && height < 1.6)
        return "Short";
    else if (S == 'f' && height < 1.75)
        return "Normal";
   else if (S  == 'f' && height >= 1.75)
        return "Tall";

    // write your code here

    // use return to return your result
    // make use of control flow statements
}