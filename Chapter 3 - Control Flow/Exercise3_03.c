void expand(char s1[], char s2[]) {
    int j = 0;
    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] == '-' && i > 0 && s1[i+1] != '\0') {
            char start = s1[i-1];
            char end = s1[i+1];
            if ((start >= 'a' && end <= 'z') || (start >= 'A' && end <= 'Z') || (start >= '0' && end <= '9')) {
                for (char c = start+1; c < end; c++) {
                    s2[j++] = c;
                }
            } else {
                s2[j++] = '-';
            }
        } else {
            s2[j++] = s1[i];
        }
    }
    s2[j] = '\0';
}
