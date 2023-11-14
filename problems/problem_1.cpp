float problemSolution1(float consumed_water) {
    float cost;
    
    const double fixedAmount = 13;
    const double firstThirty = 0.4;
    const double nextTwenty = 0.12;
    const double nextTen = 1.4;
    const double additional = 1.5;

    double consumption, totalAmount = 0.0;

    if(consumption <= 30)
    {
        totalAmount = fixedAmount + 30 * firstThirty;
    }
    else if(consumption <= 50)
    {
        totalAmount = fixedAmount + 30 * firstThirty + (consumption - 30) * nextTwenty;
    }
    else if(consumption <= 60)
    {
        totalAmount = fixedAmount + 30 * firstThirty + 20 * nextTwenty + (consumption - 50) * nextTen;
    }
    else
    {
        totalAmount = fixedAmount + 30 * firstThirty + 20 * nextTwenty + 10 * nextTen + (consumption - 60) * additional;
    }

    return cost;
}
