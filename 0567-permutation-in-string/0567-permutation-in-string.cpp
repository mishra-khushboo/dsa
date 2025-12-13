class Solution {
public:
    bool isfreqsame(int freq1[],int freq2[]){
        for(int i =0;i<26;i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for(int i = 0; i< s1.size();i++){
            int idx = s1[i] - 'a';
            freq[idx]++;
        }
        int windsize = s1.size();

        for(int i = 0;i<s2.size();i++){
            int winidx = 0,idx = i;
            int windfreq[26] = {0};
            while(winidx < s1.size() && idx < s2.size()){
                int id = s2[idx] - 'a';
                windfreq[id]++;
                winidx++,idx++;
            }
            if(isfreqsame(freq,windfreq)){
                return true;
            }
        }
        return false;
    }
};