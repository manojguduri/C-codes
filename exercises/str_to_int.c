int myAtoi(char* s) {
    // Skip leading whitespaces
    while (*s == ' ') {
        s++;
    }

    // Check for sign
    int sign = 1;
    if (*s == '-' || *s == '+') {
        sign = (*s++ == '-') ? -1 : 1;
    }

    // Process digits
    long result = 0;
    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s++ - '0');

        // Check for overflow
        if (result * sign > INT_MAX) {
            return INT_MAX;
        } else if (result * sign < INT_MIN) {
            return INT_MIN;
        }
    }
    return (int)(result * sign);
}
