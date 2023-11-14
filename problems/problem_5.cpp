float problemSolution5(float x, float y, char operation) {
    float result;

    switch (operation) {
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            if (y != 0) {
                result = x / y;
            } else {
                result = 0;
            }
            break;
        default:
            result = 0;
    }

    return result;
}
