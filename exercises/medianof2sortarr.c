double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int merged = nums1Size+nums2Size;
    int arr[merged];
    int i=0,j=0,k=0;
    while( i<nums1Size && j<nums2Size ){ //works for if both arrays of same length
        if(nums1[i] < nums2[j]){
            arr[k++] = nums1[i++];
        }
        else{
            arr[k++] = nums2[j++];
        }
    }
    while(i<nums1Size){  // to deal with additional elements for case if 1st array is bigger than second
        arr[k++] = nums1[i++];
    }
    while(j<nums2Size){  //to deal with additional elements for case if 2nd array is bigger than first 
        arr[k++] = nums2[j++];
    }
    if(merged%2 == 0){
        return ((arr[merged/2]+arr[(merged/2)-1])/2.0); // For even number of elements in merged array
    }
    else{
        return arr[merged/2]; // FOr Odd
    }
}
