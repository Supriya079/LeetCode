class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int len = s.size();
        int freq[26]={};     // intializing freq array with 0
        for(int i=0;i<len;i++){
            freq[s[i] - 97]++;
        }
        
        int x= freq[s[0] - 97]; //getting freq of first term in string 
        
        for(int i=0;i<26;i++){
           if(x!=freq[i]&&freq[i]!=0)   //freq!=0 for handling terms not present in string 
               return false;
        }
        return true;
    }
};