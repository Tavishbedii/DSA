bool isSubsequence(char* s, char* t) {
    int i = 0;
    int j = 0;
       
       if(strlen(s)==0){
        return true;
       }

    while(i<strlen(s) && j<strlen(t)){

        if(s[i]==t[j]){
            i++;
            j++;

        }
        else{
            j++;
        }
    }
    if(i==strlen(s)){
        return true;
    }

    return false;

    
    
}