#include<iostream>
#include<ctime>
#include<cstdlib>
#include<iomanip>
#include<windows.h>
using namespace std;
int main(void){
	int gen=0, rnd_d, rnd, q=0, dead=0, alive=0; // q - sasiedzi
	const int n=20, m=30;
	char t[n][m];
	char T[n+2][m+2]={0};
	char TT[n][m]={0};
	srand(time(NULL));
	for(int a=0; a<n; a++) // losowanie
	for(int x=0; x<m; x++){
		rnd=rand()%2;
		if(rnd==1)
			t[a][x]=(char)254;
		else
			t[a][x]=' ';
	}
	for(int a=0; a<n; a++) // losowanie mniej pseudo
	for(int x=0; x<m; x++){
		rnd_d=rand()%n;
		t[rnd_d][x]=' ';
	}
	for(int a=0; a<n; a++){ // pierwsze pokolenie
	for(int x=0; x<m; x++)
		cout<<setw(2)<<t[a][x];
		cout<<endl;
	}
	system("cls");
	while(gen<60){		// przebieg dla 40 pokolen
		for(int a=0; a<n; a++) // przepisanie do wiekszej
		for(int x=0; x<m; x++){
			T[a+1][x+1]=t[a][x];
		}
		for(int x=0; x<m; x++){ // ramka
			T[0][x+1]=t[n-1][x];
			T[n+1][x+1]=t[0][x];
		}
		for(int a=0; a<n; a++){ // ramka cd
			T[a+1][m+1]=t[a][0];
			T[a+1][0]=t[a][m-1];
		}
		T[n+2][m+2]=t[0][0]; 		// narozniki
		T[0][m+2]=t[n][0];
		T[n+2][0]=t[0][m];
		T[0][0]=t[n][m];

		for(int a=1; a<n+1; a++) // sprawdzenie ilosci zywych sasiadow
		for(int x=1; x<m+1; x++){
			if(T[a-1][x-1]==(char)254)	q++;
			if(T[a-1][x]==(char)254)	q++;
			if(T[a-1][x+1]==(char)254)	q++;
			if(T[a][x-1]==(char)254)	q++;
			if(T[a][x+1]==(char)254)	q++;
			if(T[a+1][x-1]==(char)254)	q++;
			if(T[a+1][x]==(char)254)	q++;
			if(T[a+1][x+1]==(char)254)	q++;

			if(T[a][x]==(char)254){ // okreslenie przezycia komorki
				if(q==2||q==3){
  					TT[a-1][x-1]=(char)254;
        			alive++;
		    	}
				else{
		    		dead++;
	    			TT[a-1][x-1]=' ';
				}
		    }
			else{			// okreslenie odzycia martwej komorki
				if(q==3){
					alive++;
					TT[a-1][x-1]=(char)254;
				}
				else{
					dead++;
					TT[a-1][x-1]=' ';
				}
			}
			q=0;		// zerowanie licznika!
		}
		for(int a=0; a<n; a++){	// wypisanie pokolenia
		for(int x=0; x<m; x++)
			cout<<setw(2)<<TT[a][x];
			cout<<endl;
		}
		for(int a=0; a<n; a++)	// zamiana tablic
		for(int x=0; x<m; x++){
			t[a][x]=TT[a][x];
		}
		for(int a=0; a<n+2; a++)	// czyszczenie tablic
		for(int x=0; x<m+2; x++){
			T[a][x]=0;
		}
		for(int a=0; a<n; a++)	// j. w.
		for(int x=0; x<m; x++){
			TT[a][x]=0;
		}
		Sleep(300);
		system("cls");
		gen++;
	}
	for(int a=0; a<n; a++){	// ostatnie pokolenie
	for(int x=0; x<m; x++)
		cout<<setw(2)<<t[a][x];
		cout<<endl;
	}
	cout<<endl<<"Stop";
	return 0;
}
