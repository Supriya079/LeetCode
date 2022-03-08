#include <iostream>
using namespace std;

int countOdd(int low, int high){
	int total_number = (high - low) + 1;
    total_number/=2;
    if(low&1 and high&1)
        return total_number + 1;

    return total_number;
}

int countOdds(int low, int high){
	
	int count;	
	for(int i = low; i <= high ; i++){
		if(i%2 != 0){
			count++;
		}
	}
	return count;	
}
int main(){

//	cout<<countOdds(3,7); // Time limit exceeded error
	cout<<countOdd(3,7);
	return 0;
}


//class Solution {
//public:
//    int countOdds(int low, int high) {
//        // int count=0;	
//        // for(int i = low; i <= high ; i++){
//        //     if(i%2 != 0){
//        //         count++;
//        //     }
//        // }
//        // return count;	
//        //Time Limit Exceeded Error 
//        
//        int total_number = (high - low) + 1;
//        total_number/=2;
//
//        if(low&1 and high&1)
//            return total_number + 1;
//
//        return total_number;
//    }
//};