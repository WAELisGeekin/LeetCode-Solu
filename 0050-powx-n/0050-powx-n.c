double myPow(double x, int n) {

 /* if(n<0){
x=1/x;
n=-n;

  }
      double temp=1.0;
    for (int i=0 ; i<n ; i++){
        temp*=x;
    }
   return temp; OG CODE BUT GOT THE TIME LIMIT EXCEEDED*/
 

    long long N = n;   // to avoid overflow

    if (N < 0) {
        x = 1 / x;
        N = -N;
    }

    double temp = 1.0;

    while (N > 0) {
        if (N % 2 == 1) {
            temp *= x;
        }
        x *= x;
        N /= 2;
    }

    return temp;
}

