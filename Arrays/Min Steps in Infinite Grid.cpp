/*One way to reach from a point (x1, y1) to (x2, y2) is to move 
abs(x2-x1) steps in the horizontal direction and abs(y2-y1) steps 
in the vertical direction, but this is not the shortest path to 
reach (x2, y2). The best way would be to cover the maximum 
possible distance in a diagonal direction and remaining in 
horizontal or vertical direction.If we look closely this just 
reduces to the maximum of abs(x2-x1) and abs(y2-y1).*/

int count(int x1,int y1,int x2,int y2){
    //Steps along x-axis
    int dx=abs(x1-x2);
    //Steps along y-axis
    int dy=abs(y1-y2);
    //The max of dx and dy which is at distance from diagonals
    return max(dx,dy);
}


int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int n=A.size();
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=count(A[i],B[i],A[i+1],B[i+1]);
    }
    return sum;
}
