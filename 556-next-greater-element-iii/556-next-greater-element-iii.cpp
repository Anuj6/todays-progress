class Solution {
public:
    int nextGreaterElement(int n) {
        auto digits=to_string(n);
        next_permutation(begin(digits), end(digits));
        auto result=stoll(digits);
        
        return (result>INT_MAX|| result<=n)?-1:result;
        
    }
};