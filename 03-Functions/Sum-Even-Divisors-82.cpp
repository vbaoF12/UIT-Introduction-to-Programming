int Input(){
    int x;
    cin >> x;
    return x;
}

int sum_even_divisor(int n){
    int sum = 0;
    for (int i = 1; i<=n; i++){
        if(n%i == 0 && i%2 ==0){sum += 1;}
    }
    if (sum == 0){return -1;}
    return sum;
}