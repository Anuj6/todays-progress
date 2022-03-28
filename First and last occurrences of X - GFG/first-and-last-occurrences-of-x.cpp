// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        vector<int>ans;
        ans.push_back(firstoccur(arr, n,x));
        ans.push_back(lastoccur(arr,n,x));
        if(ans[0]==-1){
            return {-1};
        }
        return ans;
    }
    
    int firstoccur(vector<int>&arr, int n,  int x){
        int start=0;
        int end=arr.size()-1;
        int ans=-1;
        while(start<=end){
            int mid=start+ (end-start)/2;
            if(x==arr[mid]){
                end=mid-1;
                ans=mid;
            }
            else if(x>arr[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }
    int lastoccur(vector<int>&arr, int n,  int x){
        int start=0;
        int end=n-1;
        int ans=-1;
        while(start<=end){
            int mid=start+ (end-start)/2;
            if(x==arr[mid]){
                ans=mid;
                start=mid+1;
            }
            else if(x>arr[mid]){
                start=mid+1;
            }
            else {
                end=mid-1;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}
  // } Driver Code Ends