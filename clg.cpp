//DAA
/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int i,j,k,l,m,t=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the number do u want to search ";
    cin>>k;
    for(i=0;i<n;i++){
        if(a[i]==k){
            cout<<"the element of "<<k<<"is found at index "<<i<<endl;
            t=1;
            break;
        }
    }
    if(t==0){
        cout<<"the element is not found "<<endl;
    }
    return 0;
}*/

/////////////////Binary Search//////////////////
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n],i,j,k,m,t=0;
//     vector<int>v;
//     cout<<"enter the elements which do u wanna find "<<endl;
//     cin>>k;
//     for(i=0;i<n;i++){
//         cin>>m;
//         v.push_back(m);
//     }
//     int l=0;
//     int h=n-1;
//     cout<<"enter the elements which do u wanna find "<<endl;
//     cin>>k;
    
//     cout<<m<<endl;
//     while(l<=h){
//         int mid=(l+h)/2;
//         if(a[mid]==k){
//             cout<<"elements is found at "<<mid<<" position"<<endl;
//             t=1;
//             break;
//         }
//         else if(a[mid]>k){
//             l=mid+1;
//         }
//         else{
//             h=mid-1;
//         }
//     }
//     if(t==0)
//     cout<<"elements is not found "<<endl;
//     return 0;
// }
//////////////////////////JUMP SEARCH///////////////////////////////////////
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n],i,j,k,l,m,t=0;
//     for(i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<<"enter the key which u wanna search "<<endl;
//     cin>>k;
//     int start=0;
//     int end=sqrt(n);
//     while(a[end]<=k&&end<n){
//         start= end;
//         end=end+sqrt(n);
//         if(end>n-1){
//             end=n;
//         }
//     }
//     for(i=start;i<end;i++){
//         if(a[i]==k){
//             cout<<"the element is present "<<endl;
//             t=1;
//             break;
//         }
//     }
//     if(t==0){
//         cout<<"the element is not present "<<endl;
//     }
//     return 0;
// }
//////////////////////////////////////////////////////////////
//week -2 (1)//
/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n],i,j,k,l,t=0,m=1;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the key which u want to search ";
    cin>>k;
    l=0;
    int h=n-1;
    int mid;
    while(l<=h){
        mid=(l+h)/2;
        if(arr[mid]==k){
            m=0;
            cout<<"the element of "<<k<<" is present"<<endl;
            j=mid;
            while(j>=0){
                if(arr[--j]==k){
                    t++;
                }
                else{
                    break;
                }
            }
            while(mid<n){
                if(arr[mid++]==k){
                    t++;
                }
                else{
                    break;
                }
            }
            cout<<"total number of occurrence is "<<t<<endl;
            break;
        }
        else if(arr[mid]>=k){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    if(m==1){
        cout<<"the element is not found "<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}*/
