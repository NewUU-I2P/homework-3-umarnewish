float problemSolution5(float x, float y, char operation) {
   float result;
       double num1, num2;
    char sign;
        switch (sign)
    {
        case '+':
            return "Result: " << num1 + num2 << endl;
            break;
        case '-':
            return "Result: " << num1 - num2 << endl;
            break;
        case '*':
            return "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                return "Result: " << num1 / num2 << endl;
            } else {
                std::return "Error: Division by zero is undefined." << endl;
            }
            break;
        default:
            return "Error: Invalid operation symbol.";
    }

   return result;
}
