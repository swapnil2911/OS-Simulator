#include<iostream> 

using namespace std; 

int main() { 
	int choice; 

	cout<<"---->Enter the choice as per the following menu:\n"; 
       	cout<<"---->1 for CPU Scheduling\n---->2 for Producer Consumer\n---->3 for Reader Writer\n---->4 for Banker's problem\n---->5 for MFT\n---->6 for MVT\n---->7 for Paging\n---->8 for Disk Scheduling\n ---->\n";
	cin>>choice; 
	switch(choice) { 
		case 1: Schedule_CPU(); 
			break; 
		case 2: Prod_Cons(); 
			break; 
		case 3: Reader_Writer(); 
			break; 
		case 4: Banker(); 
			break; 
		case 5: MFT(); 
			break; 
		case 6: MVT(); 
			break; 
		case 7: Paging(); 
			break; 
		case 8: Disk(); 
			break; 
		default: cout<<"---->Invalid option\n";
	} 

} 

