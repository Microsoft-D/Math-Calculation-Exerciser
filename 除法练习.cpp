#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;
int main(){
	int n,in,sum=0,sum1=0;
	cout<<"Here are ten division problems"<<endl;
	for(int i=1;i<11;i++){
		int res=rand()%1000+1;
		int res1=rand()%1000+1;
	    cout<<res<<"¡Â"<<res1<<"=";
		n=res/res1;
		cin>>in;
		if(n==in){
			cout<<"The answer is correct"<<endl;
			cout<<"========================================================================================================================"<<endl;
			sum++;
		} else {
			cout<<"The answer is wrong, the correct answer is:"<<n<<endl;
			cout<<"========================================================================================================================"<<endl;
			sum1++;
		}
	}
	cout<<"You answered question "<<sum<<" correctly,You answered question "<<sum1<<" incorrectly"<<endl;	
	return 0;
}
