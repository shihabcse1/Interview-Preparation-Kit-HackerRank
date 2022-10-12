void minimumBribes(vector<int> q) {
    
    int total_elements = q.size();
    int temp, total_bribes = 0, consecutive_bribes = 0, previous_bribes = 0;
    
    for (int i = 0; i < total_elements; i++){
        consecutive_bribes = 0;
        previous_bribes = total_bribes;
        for (int j = 0; j < total_elements - i - 1; j++){
            if(q[j] > q[j+1]){
                temp = q[j];
                q[j] = q[j+1];
                q[j+1] = temp;
                total_bribes++;
                consecutive_bribes++;
                if(consecutive_bribes > 2){
                    break;
                }
            }else{
                consecutive_bribes = 0;
            }
        }
        if(consecutive_bribes > 2){
            break;
        }
        if(previous_bribes == total_bribes){
            break;
        }
    }
    if(consecutive_bribes > 2){
        cout<<"Too chaotic"<<endl;
    }else{
        cout<<total_bribes<<endl;
    }
}

/**

---> Space Complexity: 0(1) because no extra array needed. no matter the size the q, we still need same number of variables.
---> Time Complexity: 0(n^2) because bubble sort is going like n + (n-2) + (n-3)+...

--> 1. In this problem, the total number of bribes will be number of swaps occurs.
--> 2. consecutive_bribe will be how many swap happaned for every steps of i
--> 3. previous_bribes is used for optimization(logically). If all numbers(given input) are already sorted then we don't need to do any swap for the next time.

**/
