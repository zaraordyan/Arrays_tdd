
// Problem 2 
float average(const float arr[], int size) {
    float sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    if (size == 0) {
        return 0;
    } 
    else {
    return (float)(sum / size);
    }
}
