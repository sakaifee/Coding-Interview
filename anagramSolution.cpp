//Anagram Solution

vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    vector< vector<int> > ans;
    int n=A.size(),i,j;
    if(n==0) return ans;
    vector< pair<string,int> > v;
    for(i=0;i<n;i++) {
        string s=A[i];
        sort(s.begin(),s.end());
        v.push_back(make_pair(s,i+1));
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;) {
        j=i;
        vector<int> temp;
        while(j<n && v[i].first==v[j].first) {
            temp.push_back(v[j].second);
            j++;
        }
        ans.push_back(temp);
        i=j;
    }
    return ans;
}

