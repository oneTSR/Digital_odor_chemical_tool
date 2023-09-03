#include<bits/stdc++.h>
using namespace std;
map<long long,string> m{{0,"(1-1)*4514"},{1,"11/(45-1)*4"},{2,"-11+4-5+14"},{3,"11*(-4)+51-4"},{4,"-11-4+5+14"},{5,"11-4*5+14"},{6,"1-14+5+14"},{7,"11-4+5-1-4"},{8,"11-4+5/1-4"},{9,"11-4+5+1-4"},{10,"-11/4+51/4"}};
void calc(long long num){
    if(num%114514==0){
        for(long long i=1;i<=num/114514;i++){
        	cout<<114514;
			if(i<num/114514-1) cout<<"+";
		}
		cout<<endl; 
        return;
    }
    if(num<=10){
        cout<<m[num]<<endl;
        return;
    }
    long long d=num%10;
    num/=10;
    string ans=m[d];
    long long k=0;
    while(num){
        k++;
        d=num%10;
        num/=10;
        if(d==0)continue;
        ans+="+(("+m[d]+")*("+m[10]+")^("+to_string(k)+"))";
    }
    cout<<ans<<endl;
}

int main(){
    long long num;
    long long i;
    cout<<"Attempts:";
    cin>>i;
	if(i>=LONG_LONG_MAX){
        cout<<"The data is too big.";
        system("pause");
		return 0;
	}
    while(i--){
        cin>>num;
        if(num>=LONG_LONG_MAX){
        	cout<<"The data is too big.";
			continue;
		}
        calc(num);
    }
    system("pause");
    return 0;
}
