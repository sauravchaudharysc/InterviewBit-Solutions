int Solution::maxSubArray(const vector<int> &A) {
    //Initialise first element
    int currSum=A[0];
    int maxSum=A[0];
    //Now traverse
    for(int i=1;i<A.size();i++){
        //Is the previous sum and A[i] greater
        //If yes include nor exclude the previous sum
        currSum=max(A[i],currSum+A[i]);
        //The max of currSum,maxSum till now
        maxSum=max(currSum,maxSum);
    }
    return maxSum;
}
