//#include <iostream>
//#include <vector>
//#include <math.h>
#include <bits/stdc++.h>
using namespace std;

double average(vector<int> salary){
	double sum=0.0;
    int cnt=0;
    sort(salary.begin(),salary.end());
    for(int i=1;i<salary.size()-1;i++){
        sum+=salary[i];
        cnt++;
    }
    return (sum/cnt);	
}
int main(){
    vector<int> data;
    data.push_back(1000);
    data.push_back(2000);
    data.push_back(3000);
    
	cout<<average(data);
	return 0;
}


//class Solution {
//public:
//    double average(vector<int>& salary) {
//        double sum=0.0;
//        int cnt=0;
//        sort(salary.begin(),salary.end());
//        for(int i=1;i<salary.size()-1;i++){
//            sum+=salary[i];
//            cnt++;
//        }
//        return (sum/cnt);
//    }
//};