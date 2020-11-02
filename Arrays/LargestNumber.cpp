bool compare(int a,int b){
    string Str1=to_string(a);
    string Str2=to_string(b);
    return (Str1.append(Str2)>Str2.append(Str1))?1:0;
}
 
string Solution::largestNumber(const vector<int> &A) {
    vector<int>arr;
    int count=0;
    //Push the numbers in the arr
    for(int i=0;i<A.size();i++){
        arr.push_back(A[i]);
        if(A[i]==0)
            count++;
    }
    //If all the element are zeroes
    if(count==A.size())
        return "0";
    //Else    
    //Sort the array using a comparator     
     sort(arr.begin(),arr.end(),compare);
     //Append the answer in the array
    string ans="";
    for(int i=0;i<arr.size();i++){
        ans+=to_string(arr[i]);
    }
    //return the array
    return ans;
}