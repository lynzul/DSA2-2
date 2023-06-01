#include<iostream>
using namespace std;

// class for Disjoint Set
class Disjoint_Set{
	int n; 		// num of elements
	int *rank; 	// total num of elements in a set
	int *parent; // parent of the set
	

	/*================
		Make set
	==================*/

	// Make Set (n){
	//		for i = 0 ~ n-1{
 	// 			(note: make i as parent for its own set)
 	//			parent[i] = i
 	//		}
	
	
	/*================
		Find
	==================*/
	
	// Naive Find (x)
		//	if (parent[x] = x): return 
		//	recursively Find(parent[x])
	
	//--------------------------------		
	// Find(x) with Path Compression
	//--------------------------------
	
		// (note: if x is not the parent of itself)
		//	if parent[x] != x {	 	 				
		//		find parent[x] & store it in parent[x]
		//	}			
		// return parent[x]							
	

	/*================
	   Union 
	==================*/

	// Union(x,y)
	
		//	find set x
		//	find set y
		//	if (set x ==  set y): return 				
		
		//	(if x and y are not in the same set, we merge/union them)
		
		// -----------------------------
		//		Naive Union
		// -----------------------------
		
		// parent[set x] = set y 
		
		// -----------------------------
		//		Union with Union Rank
		// -----------------------------
		
		//	if (rank set x > rank set y): 				
		//		{make set x as parent}  	
					
		// else if (rank set y > rank set x):  			
		//		{make set y as parent} 	
						
		// else if same:  								
		//		{make set x as parent (or vice versa)	
		//		rank += 1}								
	
};


int main(void){
	
	// First, Make Set for each element
	DisjSet obj(5); 
	
	// Unite some sets that belongs together (Union)
    obj.Union(0, 2); 
    obj.Union(4, 2); 
    obj.Union(3, 1); 
    
    // Find whether some of the elements are in the same set or not
    if (obj.find(4) == obj.find(0)) 
        cout << "Yes\n"; 
    else
        cout << "No\n"; 
        
    if (obj.find(1) == obj.find(0)) 
        cout << "Yes\n"; 
    else
        cout << "No\n"; 	
		
	return 0;
}
