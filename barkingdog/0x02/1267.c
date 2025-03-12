#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int t[n];
    for (int i = 0; i < n; i ++){
        scanf("%d", &t[i]);
    }

    long long y_sum = 0, m_sum = 0;

    for (int i = 0; i < n; i++){
        y_sum += (t[i]/30) * 10;
        if(t[i]%29!=0){ y_sum += 10;}
        m_sum += (t[i]/60) * 15;
        if(t[i]%59!=0) {m_sum += 15;}
    }

    if(y_sum==m_sum) printf("Y M %lld", y_sum);
    else{
        int result;
        result=y_sum>m_sum?m_sum:y_sum;
        if(result==y_sum) printf("Y %lld", y_sum);
        else printf("M %lld", m_sum);
    }

    return 0; 
}