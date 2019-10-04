#include <iostream>
#include <unordered_set>

using namespace std;

bool sumN(int *array, int k, int size){
	unordered_set<int> set;
	for(int i=0;i<size;i++){
		if(set.find(array[i])!=set.end()){
            return true;
		}
		int rest = k-array[i];
		set.insert(rest);
		
	}
	return false;
}

int main(){
	
	int array[]={10,15,3,7};
	int k = 17;
	int size = sizeof(array)/sizeof(array[0]);
	
	if(sumN(array,k,size)){
		cout << "true";
	}else{
		cout << "false";
	}
	
	return 0;
}
