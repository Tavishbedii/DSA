#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int hash[256];

    for (int i = 0; i < 256; i++) {
        hash[i] = -1;
    }
    int n = strlen(s);
    int l = 0;
    int maxLen = 0;
    for (int r = 0; r < n; r++) {
        unsigned char ch = s[r];

        if (hash[ch] >= l) {
            l = hash[ch] + 1;
        }

        hash[ch] = r;

        int len = r - l + 1;
        if (len > maxLen) {
            maxLen = len;
        }
    }

    return maxLen;
}