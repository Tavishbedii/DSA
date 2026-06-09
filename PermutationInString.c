bool checkInclusion(char* s1, char* s2) {
    int n1 = strlen(s1);
    int n2 = strlen(s2);
     if(n1>n2){
        return false;
     }
     int freq1[26] = {0};
     int freq2[26] = {0};

     for(int i = 0; i< n1;i++){
        freq1[s1[i] - 'a']++;
        freq2[s2[i] - 'a']++;
     }
     for (int i = 0; i<=n2-n1;i++){
        int match = 1;
        for(int j=0;j<26;j++){
            if(freq1[j] != freq2[j]){
                match = 0;
                break;
            }
        }
        if(match){
            return true;
        }
        if(i+n1<n2){
            freq2[s2[i] - 'a']--;
            freq2[s2[i+n1] - 'a']++;
        }
     }
   
     return false;
    
}