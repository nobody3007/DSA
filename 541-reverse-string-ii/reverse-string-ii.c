char* reverseStr(char* s, int k) {
    int n = strlen(s);

    for (int start = 0; start < n; start += 2 * k) {

        int left = start;
        int right = start + k - 1;

        if (right >= n)
            right = n - 1;

        while (left < right) {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;

            left++;
            right--;
        }
    }

    return s;
}