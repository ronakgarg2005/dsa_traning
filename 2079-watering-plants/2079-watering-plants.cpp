class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int d=capacity;
        int steps=0;
        for(int i=0;i<plants.size();i++){
            if(plants[i]>d){
                steps+=2*i;
                d=capacity;

            }
            
            steps++;
            d-=plants[i];
        }
        return steps;
        
    }
};