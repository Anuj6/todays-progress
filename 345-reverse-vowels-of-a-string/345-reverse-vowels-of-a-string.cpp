class Solution {
public:
    string reverseVowels(string s) {
        // two pointer approach 
        // left pointer
        int l=0;
        //right pointer
        int r=s.length()-1;
        if(s.length()==1){
            return s;
        }
        while(l<r){
            char ch1=s[l];
            char ch2= s[r];
            if(isvowel(ch1) and isvowel(ch2)){

                swap(s, l,r);
                l++,r--;
            }
            else if(isvowel(ch1)){
                r--;
            }
            else if(isvowel(ch2)){
                l++;
            }
            else{
                l++;
                r--;
            }
        }
        return s;
    }
    
    //step 1---lets make an function to see if the char is vowel or not
    
    bool isvowel(char s){

        if(s=='a'){
            return true;
        }
        if(s=='e'){
            return true;
        }
        if(s=='i'){
            return true;
        }
        if(s=='o'){
            return true;
        }
        if(s=='u'){
            return true;
        }
        if(s=='A'){
            return true;
        }
        if(s=='E'){
            return true;
        }if(s=='I'){
            return true;
        }if(s=='O'){
            return true;
        }if(s=='U'){
            return true;
        }return false;
        
    }
    void swap(string& s, int i, int j){
        char temp= s[i];
        s[i]=s[j];
        s[j]=temp;
    
    }
};