; i<N; i++)
        ab[i]='0';
      srand(time(NULL));
        rysuj(a);
     rysuj(b);
        wypisz(a);
        wypisz(b);
        for(i=N-2; i>=0; i--){
             xy=a[i]+b[i];
                if(move){
                     if(xy-2*'0'>=9)
                                ab[i+1]='0'+(ab-2*'0'+ruch)%10;
                       else{
                                ab[i+1]=-'0'+ab+ruch;
                                move=0;
                    }
                }
                else{

