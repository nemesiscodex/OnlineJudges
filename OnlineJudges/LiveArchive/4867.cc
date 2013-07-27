/**
*	4867 - Maximum Square
*       Live Archive
*       Author: Shinuk
*/
#include <iostream>
#include <cmath>	
#include <vector>
#define MIN(a,b) ((a<b)?a:b)
#define MIN3(a,b,c) MIN(MIN(a,b),c)
using namespace std;
typedef long long LL;
#define FOR(i,j,k) for(i=j;i<k;i++)
#define FORL(i,k) FOR(i,0,k)
typedef vector<vector<int> > MAT; 
int main(){
	int N,M,i,j;
	while(1){
		cin >> N >> M;
		if(N==0 && M==0)break;
		MAT in,aux;
		in.resize(N);
		aux.resize(N);
		FORL(i,N){
			in[i].resize(M,0);
			aux[i].resize(M,0);
			FORL(j,M){
				cin>>in[i][j];
			}
		}
		FORL(i,M){
			aux[0][i] = in[0][i];
		}
		FORL(i,N){
			aux[i][0] = in[i][0];
		}
		int max=0;
		FOR(i,1,N){
			FOR(j,1,M){
				aux[i][j] = MIN3(aux[i-1][j],aux[i-1][j-1],aux[i][j-1]);
				aux[i][j]+=in[i][j];
				if(aux[i][j]>max)max = aux[i][j];	
			}
		}
		cout << max << endl;
	}
	return 0;
}
