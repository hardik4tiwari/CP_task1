#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t,n;
    double k;
    int a[4];
    cin>>t;
    while(t--){
        cin>>n>>k;
        int b[n];
        int c[]={n/4,n/4,n/4,n/4};
        // for(int i=0;i<4;i++)cout<<c[i];
        int z=0;
        for(int i=0;i<4;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        sort(a,a+4);
        sort(b,b+n);
        double p[n],q[n],r[n],s[n];
        for(int i=0;i<n;i++){
            p[i]=b[i]/(double)a[0];
            q[i]=b[i]/(double)a[1];
            r[i]=b[i]/(double)a[2];
            s[i]=b[i]/(double)a[3];
        }
        // for(int i=0;i<n;i++)cout<<p[i]<<" ";
        // cout<<endl;
        // for(int i=0;i<n;i++)cout<<q[i]<<" ";
        // cout<<endl;
        // for(int i=0;i<n;i++)cout<<r[i]<<" ";
        // cout<<endl;
        // for(int i=0;i<n;i++)cout<<s[i]<<" ";
        // cout<<endl;
        for(int i=n-1;i>=0;i--){
            if(p[i]<k && c[0]>0){
                c[0]--;
            }
            else if(q[i]<k && c[1]>0){
                c[1]--;
            }
            else if(r[i]<k && c[2]>0){
                c[2]--;
            }
            else if(s[i]<k && c[3]>0){
                c[3]--;
            }
            else{
                if(p[i]>=k && c[0]>0){
                    z++;
                    // cout<<p[i]<<endl;
                    c[0]--;
                }
                else if(q[i]>=k && c[1]>0){
                    z++;
                    // cout<<q[i]<<endl;
                    c[1]--;
                }
                else if(r[i]>=k && c[2]>0){
                    z++;
                    // cout<<r[i]<<endl;
                    c[2]--;
                }
                else if(s[i]>=k && c[3]>0){
                    z++;
                    // cout<<s[i]<<endl;
                    c[3]--;
                }
            }   
        } 
        cout<<z<<endl;
    }
}