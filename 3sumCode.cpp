int Solution::threeSumClosest(vector<int> &A, int B) {
    long long int n=A.size(),i,j,k,ans=INT_MAX,diff=INT_MAX;
    sort(A.begin(),A.end());
    for(i=0;i<n-2;i++) {
        j=i+1;
        k=n-1;
        while(j<k && j>i) {
            long long int temp=A[i]+A[j]+A[k],t;
            t=abs(B-temp);
            if(t<diff) {
                diff=t;
                ans=temp;
            }
            if(temp<B) {
                j++;
                continue;
            }
            else {
                k--;
                continue;
            }
        }
    }
    return ans;
}
