int maxArea(int* height, int heightSize) {
    int temp_max;
    int max_value = 0;
    int i = 0;
    int j = heightSize - 1;/*height size gives the no. of elements in the input array. So the index is taken size-1*/
    while (i < j) {
        int h = height[i] < height[j] ? height[i] : height[j];//Checks smaller height and takes its value as height
        temp_max = h * (j - i);/*PS: that is I not 1 :( */
        if (max_value < temp_max) {
            max_value = temp_max;
        }
        if (height[i] < height[j]) {
            i++;
        } else {
            j--;
        }
    }
    return max_value;
}
