#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main(){
    freopen("1.in","r",stdin);
    int n,m,c;
    scanf("%d %d %d",&n,&m,&c);
    // printf("n = %d, m = %d, c = %d\n", n,m,c);
    int mCnt  = 0;
    map<int,int> color2cnt;
    map<int,int> color2step;
    for(int i = 0; i <= c; ++i){
        color2cnt[i] = 0;
        color2step[i] = 0;
    }
    for(int i = 0; i < n; ++i){
        int jMax;
        scanf("%d",&jMax);
        // printf("jMax = %d\n", jMax);
        if(jMax == 0){
            for(auto it = color2step.begin(); it != color2step.end(); ++it){
                it->second++;
            }
            for(auto it = color2cnt.begin(); it != color2cnt.end(); ++it){
                it->second;
            }
        }
        for(int j = 0; j < jMax; ++j){
            int temp;
            scanf("%d", &temp);
            printf("temp = %d\n", temp);
            color2cnt[temp]++;
            color2step[temp]++;
            if (color2step[temp] <= m)
            {
                color2cnt[temp];
            }
            else{
                color2step[temp] = color2cnt[temp] >= 2 : 
            }
            printf("%d,%d,%d\n",ans,color2cnt[temp],color2step[temp]);
        }
        
    }
    cout << ans << endl;
    return 0;
}