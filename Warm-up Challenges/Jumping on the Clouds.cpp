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
