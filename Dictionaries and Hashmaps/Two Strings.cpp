string twoStrings(string s1, string s2) {
    
    set<char> string1_set(begin(s1), end(s1));
    set<char> string2_set(begin(s2), end(s2));
    
    for( auto i : string1_set) {
        for(auto j : string2_set) {
            if(i == j) {
                return "YES";
            }
        }
    }
    return "NO";
}
