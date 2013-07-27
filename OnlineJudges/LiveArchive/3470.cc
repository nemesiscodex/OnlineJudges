/**
*	3470 - Pascal Library
*	Live Archive
* 	Author: Shinuk
*/

#include <iostream>
#include <cmath>
using namespace std;
typedef long long LL;
#define FOR(i,j,k) for(i=j;i<k;i++)
#define FORL(i,k) FOR(i,0,k)

int main(){
	int N,M,i,j,aux;
	bool flag;
	while(1){
		cin >> N >> M;
		if(N==0 && M==0) break;
		int I[100];
		FORL(i,N){
			I[i]=0;
		}
		FORL(i,M){
			FORL(j,N){
				cin >> aux;
				I[j]+=aux;			
			}
		}
		flag = false;
		FORL(i,N){
			if(I[i]==M){
				flag = true;
				break;
			}
		}
	        cout << ((flag)? "yes" : "no") <<endl;
	}
	return 0;
}
