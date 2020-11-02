#define ll long long int
int Solution::solve(int A, vector<int> &B) {
    ll tot=0;
    //Calculate the total sum
    for(int i=0;i<A;i++){
        tot+=B[i];
    }
    //Check whethere it is divisible by 3
    if(tot%3!=0){
        return 0;
    }
    ll sum=0;
    ll ans=0;
    ll next=0;
    
    for(int i=0;i<A-1;i++){
        sum+=B[i];
        //When Second Sum is Formed
        //For each zero encountered we increase the way sum is formed.
        if(sum==2*(tot/3) && i>0){
            ans+=next;
        }
        //Ways to Form First Sum
        //If ke jagah else if lagaya toh [0,0,0,0,0,0]
        //It will ignore this case because there are can be multiple ways to form
        //first and second subarray
        if(sum==(tot/3)){
            next++;
        }
    }
    return ans;
}
