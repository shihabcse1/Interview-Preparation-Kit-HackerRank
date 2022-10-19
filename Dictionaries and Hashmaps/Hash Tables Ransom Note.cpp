void checkMagazine(vector<string> magazine, vector<string> note) {
    
    int total_words_of_magazine = magazine.size();
    int total_words_of_note = note.size();
    map<string, int> magazine_map;
    map<string, int> note_map;
    
    for(int i = 0; i < total_words_of_magazine; i++) {
        if(magazine_map.find(magazine[i]) != magazine_map.end()) {
            magazine_map[magazine[i]] += 1;
        }else {
            magazine_map[magazine[i]] = 1;
        }
    }
    
    for(int i = 0; i < total_words_of_note; i++) {
        if(note_map.find(note[i]) != note_map.end()) {
            note_map[note[i]] += 1;
        }else {
            note_map[note[i]] = 1;
        }
    }
    
    for(int i = 0; i < total_words_of_note; i++) {
        if(magazine_map.find(note[i]) == magazine_map.end()) {
           cout<<"No";
           return;
        }else {
            int count_magazine = magazine_map[note[i]];
            int count_note = note_map[note[i]];
            if(count_note > count_magazine){
                cout<<"No"<<endl;
                return;
            }
        }
    }
    cout<<"Yes";
}
