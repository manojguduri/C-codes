int lengthOfLongestSubstring(char* s) {
    int len = strlen(s);
    if (len == 0) {
        return 0;
    }
    int maxLen = 0;//Length of maximum non repeating characters
    int start = 0;//
    for (int i = 0; i < len; i++) { //updates the index after comparing for each letter in input with preceeding letter
        for (int j = start; j < i; j++) { //checks s[i] with all values of s[j] for example if i = 4, then it compares with s[0],s[1],s[2] and s[3]
            if (s[j] == s[i]) {
                start = j + 1;//`start` to mark the beginning of our current window or subsection of `s` being considered for unique characters.For example,'abcaxyzpb'start is 0 until second a
                break;
            }
        }
        maxLen = (i - start + 1 > maxLen) ? i - start + 1 : maxLen;//updates max length until a repetition letter is found and keeps it unchanged until another larger non repeating string is found. And stores the value of index where the second non repeating string ends if there is another
    }
    return maxLen;
}
