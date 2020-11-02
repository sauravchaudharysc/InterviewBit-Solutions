//Read the question it's asking for a max-sub array with non-negative number in it
vector<int> Solution::maxset(vector<int> &A) {
    //Vector to store Final Answer
    vector<int>ans;
    int plow=INT_MAX;
    int low=0;
    int high=0;
    int n=A.size();
    long long int currSum=0,maxSum=0;
    //Traverse the array
    for(int i=0;i<n;i++){
        //If negative encountered we can't make low before it
        if(A[i]<0){
            //Make currSum=0
            currSum=0;
            //Shift low
            low=i+1;
        }else{
            //Add the currSum if non negative
            currSum+=A[i];
            //Check is it equals maxSum
            if(currSum==maxSum){
                //If yes check is it length greater than old one
                if(i-low > high-plow){
                    //MaxSum Low Index Count
                    plow=low;
                    //MaxSum High Index Count
                    high=i;
                }
            }
            //Check if currSum greater than maxSum
            //If yes,Update it
            if(currSum>maxSum){
                plow=low;
                high=i;
                maxSum=currSum;
            }
        }
    }
    //Push them in answer array
    for(int i=plow;i<=high;i++){
        ans.push_back(A[i]);
    }
    return ans;
}
