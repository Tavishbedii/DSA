/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findAnagrams(char* s, char* p, int* returnSize) {
    int n = strlen(s);
    int m = strlen(p);

    *returnSize = 0;

    if(m>n){
        return NULL;
    }
    int freqP[26] = 0;
    int freqS[26] = 0;

    for(int i =0;i<m;i++){
        freqP[p[i] - 'a']++;
        freqS[s[i] - 'a']++;
    }
    int* ans = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i <= n - m; i++) {

        int match = 1;

        for (int j = 0; j < 26; j++) {
            if (freqP[j] != freqS[j]) {
                match = 0;
                break;
            }
        }

        if (match) {
            ans[*returnSize] = i;
            (*returnSize)++;
        }

        if (i + m < n) {
            freqS[s[i] - 'a']--;
            freqS[s[i + m] - 'a']++;
        }
    }

    return ans;
}
    
