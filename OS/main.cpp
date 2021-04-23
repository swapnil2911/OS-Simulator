#include<bits/stdc++.h>
#include "bestfit_mft.h"
#include "firstfit_mft.h"
#include "worstfit_mft.h"
#include "mvt.h"
#include "CPU_Scheduling_SRTF.h"
using namespace std; 

int main() { 
	int choice; 

	cout<<"---->Enter the choice as per the following menu:\n"; 
       	cout<<"---->1 for CPU Scheduling\n---->2 for Producer Consumer\n---->3 for Reader Writer\n---->4 for Banker's problem\n---->5 for MFT\n---->6 for MVT\n---->7 for Paging\n---->8 for Disk Scheduling\nEnter Choice\n";
	cin>>choice; 
	switch(choice) { 
		case 1: //Schedule_CPU();
			break; 
		case 2: //Prod_Cons(); 
			break; 
		case 3: //Reader_Writer(); 
			break; 
		case 4: //Banker(); 
			break; 
		case 5:	{
  			int choice;
  			cout<<"Select type \n0. Exit\n1. Best fit Memory Management in Fixed size partitioning.\n2. First fit Memory Management in Fixed size partitioning.\n3. Worst fit Memory Management in Fixed size partitioning.\n";

  			while(1){
  				cout<<"\nEnter type : ";
  				cin>>choice;
   	 			if(choice==1){
      					bestfit_mft();
    				}
    				if(choice==2){
      					firstfit_mft();
    				}
    				if(choice==3){
      					worstfit_mft();
    				}
    				if(choice==0)
    					break;
  			}
		}
		break;
		case 6: //MVT(); 
			break; 
		case 7: //Paging(); 
			break; 
		case 8: //Disk(); 
			break; 
		default: cout<<"---->Invalid option\n";
	} 

} 

