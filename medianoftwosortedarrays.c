

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int len = nums1Size + nums2Size;
    int numbers[len];

    int n1 = 0, n2 = 0, i = 0;

    while (n1 < nums1Size || n2 < nums2Size){
        if(n1 < nums1Size && n2 < nums2Size)
            if(nums1[n1] < nums2[n2])
                numbers[i++] = nums1[n1++];
            else
                numbers[i++] = nums2[n2++];
        else if (n1 < nums1Size)
            numbers[i++] = nums1[n1++];
        else
            numbers[i++] = nums2[n2++];
    }
    int mid = len / 2;
    if(len % 2 == 0)
        return (numbers[mid-1] + numbers[mid]) / 2.0;
    else
        return numbers[mid] * 1.0;
    
}