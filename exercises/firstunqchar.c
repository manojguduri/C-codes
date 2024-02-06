int firstUniqChar(char* s) {
    int len = strlen(s);
    if (len == 0) {
        return -1; // Return -1 for an empty string
    }

    int result = -1; // Initialize result to -1 (no unique character found)

    for (int i = 0; i < len; i++) {
        int isUnique = 1; // Assume the character is unique
                            //This loop takes the imdex 
        for (int j = 0; j < len; j++) { //This loop compares the index taken in the before loop and compares it with all other indices, if any character matches the loop breaks and the i is incremented and again same process repeats if there is no unique then the "isUnique" becomes zero.

//It only checks until one unique character is found and breaks and stores the i and returns the result
            if (i != j && s[i] == s[j]) {
                isUnique = 0; // The character is not unique
                break;
            }
        }

        if (isUnique) {
            result = i; // Set result to the index of the first unique character
            break;
        }
    }

    return result;
}
