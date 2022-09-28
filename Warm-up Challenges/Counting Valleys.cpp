int countingValleys(int steps, string path) {
    int tracker = 0;
    int valleys = 0;
    for (int i = 0; i<steps; i++) {
        if(path[i] == 'U'){
            tracker++;
        }else{
            tracker--;
        }
        if(path[i] == 'D' && tracker == -1){
            valleys++;
        }
    }
    return valleys;
}

/*

Sample input: "DDDUUUUUD"

Steps    =>     D  D  D  U  U  U  U  U  D
Tracker  => 0  -1 -2 -3 -2 -1  0  1  2  1

Solution:

 a. if goes down then tracker is -1, otherwise +1
 b. Then need to how many times are going down(D) and tracker is 1

*/
