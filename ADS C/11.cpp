/* 
#include <bits/stdc++.h>
using namespace std;

int lowerbound(int m[],int a,int x){
    int l=1,r=a,ans=0;
    while(r>=l){
        int mid=(l+r)/2;
        if(m[mid]>=x){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    return ans;
}

int upperbound(int m[],int a,int x){
    int l=1,r=a,ans=0;
    while(r>=l){
        int mid=(l+r)/2;
        if(m[mid]<=x){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    return ans;
}



int main(){
    int m[100000];
    int a,b;
    cin>>a>>b;
    for (int i=1;i<=a;i++){
        cin>>m[i];
    }
    sort(m+1,m+a+1);
    
    while(b--){
        int l1,l2,r1,r2;
        cin>>l1>>r1>>l2>>r2;
        int L1=lowerbound(m,a,l1);
        int R1=upperbound(m,a,r1);
        int cnt1=max(0,R1-L1+1);

        int L2=lowerbound(m,a,l2);
        int R2=upperbound(m,a,r2);
        int cnt2=max(0,R2-L2+1);

        int lm=max(l1,l2);
        int rm=min(r1, r2);
        int cntc=0;
        if(lm<=rm){
            int Lc=lowerbound(m,a,lm);
            int Rc=upperbound(m,a,rm);
            cntc=max(0,Rc-Lc+1);
        }

        cout<<cnt1+cnt2-cntc;
    }
    
} 
    123456765432345678987654323456789876543345678909876543223456782222222223232323233r4dsxfvbc asdfxcvb nmawsedrftgyhu  qawsedrftgy

#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;

int main() {
    int a,b,x,m[1000],p[100000];
    cin>>a;
    for(int i=1;i<=a;i++){
        cin>>m[i];
    }
    sort(m+1,m+1+a);
    p[0]=0;
    for(int i=1;i<=a;i++){
        p[i]=m[i]+p[i-1];
    }
    

    cin>>b;
    for(int i=1;i<=b;i++){
        cin>>x;
        int r=a+1,l=0,mid;

        while(r>l+1){
            mid=(r+l)/2;
            if(m[mid]>x){
                r=mid;
            }else{
                l=mid;
            }
        }
        cout<<l<<p[l];
    }
    
    return 0;
}
    */