#include<iostream>
using namespace std;
int main(){
	int p[8]={1,1,1,1,0,0,0,0},
	q[8]={1,1,0,0,1,1,0,0},
	r[8]={1,0,1,0,1,0,1,0},
	m[8],n[8],a[8];
	for(int i=0;i<8;i++){
		if(p[i]==1&&q[i]==0){
			m[i]=0;
		}
		else{
			m[i]=1;
		}
	}
	for(int i=0;i<8;i++){
		if(q[i]==1&&r[i]==0){
			n[i]=0;
		}
		else
		{
			n[i]=1;
		}
	}
	for(int i=0;i<8;i++){
		if(p[i]==1&&r[i]==0){
			a[i]=0;
		}
		else{
			
			a[i]=1;
		}
	}
	
	cout<<"-----------------------------------------------------"<<endl;
	cout<<"|p  |"<<"\t"<<"q  |"<<"\t"<<"r  |"<<"\t"<<"(p->q)"<<"  |"<<"(q->r)"<<"  |"<<"(p->r)"<<"    |"<<endl;
	cout<<"-----------------------------------------------------"<<endl;
	for(int i=0;i<8;i++){
		cout<<"|"<<p[i]<<"  |"<<"\t"<<q[i]<<"  |"<<"\t"<<r[i]<<"  |"<<"\t"<<" "<<m[i]<<"\t|"<<" "<<n[i]<<"\t"<<" |"<<"\t"<<a[i]<<"   |"<<endl;
	}
		cout<<"-----------------------------------------------------"<<endl;
	for(int i=0;i<8;i++){
		if(m[i]==1&&n[i]==1&&a[i]==1){
			cout<<"if (p->q) is true and (q->r) is also true  then (p->r) is also true (hypothetical syllogism)";
			break;
		}
	}	
	return 0;
}
