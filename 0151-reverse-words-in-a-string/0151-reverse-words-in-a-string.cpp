class Solution {
public:
    string reverseWords(string s) {
    int n =s.length();
    reverse(s.begin(),s.end());
    int i = 0;
    int l = 0,r = 0;
    while(i<n){
        while(s[i] != ' ' && i<n){
            s[r] = s[i];
            r++, i++;
        }
        if(l<r){
            reverse(s.begin()+l,s.begin()+r);
            s[r] = ' ';
            r++;
            l = r;
        }
        i++;
    }
    s = s.substr(0,r-1);
    return s;
}
};