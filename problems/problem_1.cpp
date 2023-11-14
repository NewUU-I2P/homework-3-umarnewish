float problemSolution1(float consumed_water) {
    float totalCost;
    
    int fixedCost = 13;
    // Your solution goes here
    if (waterConsumed <= 30) {
        totalCost = fixedCost + (waterConsumed * 0.4);
    }
    else if (waterConsumed > 30 && waterConsumed <= 50) {
        totalCost = fixedCost + ((waterConsumed - 30) * 0.12) + (30 * 0.4);
    }
    else if (waterConsumed > 50 && waterConsumed <= 60) {
        totalCost = fixedCost + ((waterConsumed - 50) * 1.4) + (30 * 0.4) + (20 * 0.12);
    }
    else if (waterConsumed > 60) {
        totalCost = fixedCost + ((waterConsumed - 60) * 1.5) + (30 * 0.4) + (20 * 0.12) + (10 * 1.4);
    }
    return totalCost;

}
