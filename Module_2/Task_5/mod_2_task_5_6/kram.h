float opr(int x, float mat[x][x]);
float oprs(int x, float mat[x][x],int i, float s[x]);
int count(void);

float opr(int x, float mat[x][x]){
	extern int coun ;
	count();
	float mx[x-1][x-1], det=0;
	int i, a, b,n;
		if(x==1)
			return mat[0][0];
		else{
			while(x!=1){
				for(b=0; b<x; b++){
					for(i = 1; i<x; i++){
						for (a=0, n = 0; a<x; a++){
							if (a!=b){
								mx[i-1][n]=mat[i][a];
								n++;
							}
						}
					}
					if (b%2==0)
						det+=mat[0][b]*opr(x-1, mx);
					else
						det-=mat[0][b]*opr(x-1, mx);
				}
			return det;
			}
		
		}
}

float oprs(int x, float mat[x][x],int i, float s[x]){
	extern int coun;
	count();
	int j,l,m;
	float obr[x][x];
		for (l=0;l<x;++l)
				for (m=0;m<x;++m)
					obr[l][m]=mat[l][m];
		for (j=0;j<x;++j)
			obr[j][i]=s[j];
	return(opr(x,obr));
}

int count(){
	static int count=0;
	count++;
	return (count);}