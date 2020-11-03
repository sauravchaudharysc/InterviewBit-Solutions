bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    vector<pair<int,int>> ans;
    int n=arrive.size();
    //Arrival as +1 and Departure as -1
    for(int i=0; i<n; i++){
        ans.push_back( make_pair(arrive[i],1));
       ans.push_back( make_pair(depart[i],-1));
    }
    int count = 0;
    sort(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++){
            count += ans[i].second;
            //If no of room needed is greater than available
        if(count > K)
            return 0;
    }
    return 1;
}