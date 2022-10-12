
vector<int> rotLeft(vector<int> a, int d) {
    int arr_length = a.size();
    vector<int> rotate_arr;
    for(int i = d; i < arr_length; i++) {
        rotate_arr.push_back(a[i]);
    }
    for(int i = 0; i < d; i++){
        rotate_arr.push_back(a[i]);
    }
    return rotate_arr;
}

/*
 * The key idea is : 
 * For example: we have an array : 1 2 3 4 5 and we have to rotate it for 2 times
 * After 2 times rotatation, the array will be : 3 4 5 1 2
 *
 * In this example: Firstly we move the items from  3rd(index after d) to last index(To make it beggining of the new array)
 * Then need to move 0 index to d index to add rest of the items.
 * 
 * Here :
 * 1. INTEGER_ARRAY a
 * 2. INTEGER d
 */
