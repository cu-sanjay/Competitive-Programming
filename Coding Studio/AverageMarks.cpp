#include <bits/stdc++.h> 
#include <utility>

pair<char, int> averageMarks(char firstLetterOfName, int m1, int m2, int m3) {
    pair<char, int>p;
    int avg=(m1+m2+m3)/3;
    p=make_pair(firstLetterOfName, avg);
    return p;
}
