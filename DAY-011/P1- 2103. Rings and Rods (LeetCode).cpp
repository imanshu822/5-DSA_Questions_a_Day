// Problem Link: https://leetcode.com/problems/rings-and-rods/description/
// Problem Name: 2103. Rings and Rods (LeetCode)
// Solution: accepted Submission

// Approach 1: (Map and Set) ✅

class Solution {
public:
    int countPoints(string rings) {
       unordered_map<int,set<char>>m;
        for(int i=0;i<rings.size();i+=2){
            m[rings[i+1]-'0'].insert(rings[i]);
        }
        int count=0;
        for(auto it:m){
            if(it.second.size()==3)count++;
        }
        return count;
    }
};



// Approach 2: (Counting Arrays ) ✅




class Solution {
public:
    int countPoints(string rings) {
        int r[10] = {0};
        int g[10] = {0};
        int b[10] = {0};
        
        int rod  = 0;
        for(int i=0;i<rings.size();i+=2){
		 //convert char to integer
            rod = rings[i+1] - '0';
            
			//wherever rings are present add it in that colour array
            if(rings[i] == 'R'){
                r[rod]++;
            }
            else if(rings[i] == 'G'){
                g[rod]++;
            }
            else if(rings[i]== 'B'){
                b[rod]++;
            }
        }
        
		 //if all three rings are present increase count
        int count = 0;
        
        for(int j=0;j<10;j++){
            if(r[j] > 0 && g[j] > 0 && b[j] > 0){
                count++;
            }
        }
        return count;
    }
};

// Approach 1: (Bits) ✅
// Code colors with bits (1, 2 and 4), and use the OR operation for each rod.

// Return number of rods that have all 3 bits (colors) set - which value of 7.


int countPoints(string rings) {
    int rods[10] = {};
    for (int i = 0; i < rings.size(); i += 2) {
        int color = rings[i] == 'R' ? 1 : rings[i] == 'G' ? 2 : 4;
        rods[rings[i + 1] - '0'] |= color;
    }
    return count(begin(rods), end(rods), 7);
}
