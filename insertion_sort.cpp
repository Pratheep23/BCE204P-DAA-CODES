#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> num;
    int x;
    int n;
    cin>>n;
    for(int i= 0;i<n;i++){
        cin>>x;
        num.push_back(x);
    }
    int j;
    int pos;
    for(int i =1 ;i<n;i++){
        pos = num[i];
        j = i -1;
        while(j>=0 && num[j]>pos){
            num[j+1] = num[j];
            j--;
        }
        num[j+1]=pos;
    }
    for(int i =0;i<n;i++){
        cout<<num[i]<<endl;
    }
	return 0;
}
