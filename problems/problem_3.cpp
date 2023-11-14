#include <string>

std::string problemSolution3(float height, char S) {
string classifyHeight(float height, char S) {
    if (height < 1.7 and S == 'M') {
        return "Short";
    } else if (height >= 1.70 and height < 1.85 and S == 'M') {
        return "Normal";
    } else if (height >= 1.85 and S == 'M') {
        return "Tall";
    } else if (height < 1.6 and S == 'F') {
        return "Short";
    } else if (height >= 1.6 and height < 1.75 and S == 'F') {
        return "Normal";
    } else if (height >= 1.75 and S == 'F') {
        return "Tall";
    }
}

}
