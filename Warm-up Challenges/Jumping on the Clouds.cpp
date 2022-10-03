int jumpingOnClouds(vector<int> c) {

    int minimumJump = 0;
    int i = 0;
    
    while (i < c.size() - 1){
        if(c.size() == i+2 || c[i + 2] == 1){
            i = i + 1;
            minimumJump++;
        }else{
            i = i + 2;
            minimumJump++;
        }
    }
    return minimumJump;
}

// if there is thunderheads(1) that mean we can move single step. And check the last element whether we are out bound or not
// else we can move two steps
