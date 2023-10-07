void ClearRangeOfBit(int &n, int i, int j){
    int maskA=(-1<<j);
    int maskB=(1<<i)-1;
    int mask=maskA | maskB;
    n=n & mask;
    
}