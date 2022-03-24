#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int T; scanf("%d", &T);
    while(T--) {
        int N; scanf("%d", &N);
        char A[N][N];
        for(int i=0; i< N;i++) {
            scanf("%s", A[i]);
            sort(A[i], A[i]+N);
        }
        bool b = false;
        for(int i=0; i<N;i++) {
            if(b) break;
            for(int j=0;j<N-1;j++) {
                if(A[j+1][i] < A[j][i]) {
                    b = true;
                    break;
                }
            }
        }
        if(!b) printf("YES\n");
        else printf("NO\n");
    }
	return 0;
}
