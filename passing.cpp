// Returns the double of a given number
int doubled(int x) {
    return x*2;
}

// Doubles the caller's value
void doubleInPlace(int& x) {
    x = x * 2;
}

// Swaps the values of two variables
void swapValues(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Clamps the caller's value within the specified range
void clampInPlace(int& x, int low, int high) {
    if (x < low) {
        x = low;
    } else if (x > high) {
        x = high;
    }
}

// Divides the dividend by the divisor and returns true if successful, false if the divisor is zero
bool divide(int dividend, int divisor, int& quotient, int& remainder) {
    if (divisor == 0) {
        return false;
    }
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    return true;
}

// Sorts the values of three variables in ascending order
void sortThree(int& a, int& b, int& c) {
    if (a > b) {
        swapValues(a, b);
    }
    if (a > c) {
        swapValues(a, c);
    }
    if (b > c) {
        swapValues(b, c);
    }
}