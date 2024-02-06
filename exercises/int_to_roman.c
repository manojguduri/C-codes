char* intToRoman(int num) {
    int temp_num = num;
    int thousands = (temp_num / 1000) * 1000;
    temp_num = temp_num % 1000;
    int hundreds = (temp_num / 100) * 100;
    temp_num = temp_num % 100;
    int tens = (temp_num / 10) * 10;
    temp_num = temp_num % 10;
    int ones = (temp_num / 1);

    // Allocates memory for the result string
    char* result = (char*)malloc(16);

    int index = 0;

    while (thousands > 0) {
        result[index++] = 'M';
        thousands -= 1000;
    }

    if (hundreds == 900) {
        result[index++] = 'C';
        result[index++] = 'M';
    } else if (hundreds >= 500) {
        result[index++] = 'D';
        hundreds -= 500;
        while (hundreds >= 100) {
            result[index++] = 'C';
            hundreds -= 100;
        }
    } else if (hundreds == 400) {
        result[index++] = 'C';
        result[index++] = 'D';
    } else {
        while (hundreds >= 100) {
            result[index++] = 'C';
            hundreds -= 100;
        }
    }

    if (tens == 90) {
        result[index++] = 'X';
        result[index++] = 'C';
    } else if (tens >= 50) {
        result[index++] = 'L';
        tens -= 50;
        while (tens >= 10) {
            result[index++] = 'X';
            tens -= 10;
        }
    } else if (tens == 40) {
        result[index++] = 'X';
        result[index++] = 'L';
    } else {
        while (tens >= 10) {
            result[index++] = 'X';
            tens -= 10;
        }
    }

    if (ones == 9) {
        result[index++] = 'I';
        result[index++] = 'X';
    } else if (ones >= 5) {
        result[index++] = 'V';
        ones -= 5;
        while (ones > 0) {
            result[index++] = 'I';
            ones--;
        }
    } else if (ones == 4) {
        result[index++] = 'I';
        result[index++] = 'V';
    } else {
        while (ones > 0) {
            result[index++] = 'I';
            ones--;
        }
    }

    // ENds the string when null
    result[index] = '\0';

    return result;
}
