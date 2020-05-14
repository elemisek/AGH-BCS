; i<N; i++)
        sum_xy[i]='0';
        srand(time(NULL));
        draw(sum_x);
        draw(sum_y);
        printf("Wylosowane skladniki:\n\n");
        write(sum_x);
        write(sum_y);
        for(i=N-2; i>=0; i--){
                xy=sum_x[i]+sum_y[i];
                if(move){
                        if(xy-2*'0'>=9)
                                sum_xy[i+1]='0'+(xy-2*'0'+move)%10;
                        else{
                                sum_xy[i+1]=-'0'+xy+move;
                                move=false;
                        }
                }
                else{

