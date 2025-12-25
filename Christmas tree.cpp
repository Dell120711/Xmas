#include <iostream>
using namespace std;
 
int main()
{
	cout<<" " << endl;
	for (int i=1 ; i<=9 ; i++){
		for(int z = 9 - i ; z > 0;z--){
			cout << " ";
		}
		for(int j = 0; j<2*i-1;j++){
			cout <<"*";
		}
		cout << endl;
	} 
cout<<"       |||"<<endl;
cout<<"       |||"<<endl;
}
