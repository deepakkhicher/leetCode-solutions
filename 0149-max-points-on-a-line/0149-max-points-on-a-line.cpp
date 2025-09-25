class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();

        int result = 0;

        if(n==1){
            return 1;
        }
        for(int i =0;i<n;i++){//first point
            for(int j = i+1;j<n;j++){//second point 
                int count = 2;

                int dx = points[j][0] - points[i][0];
                int dy = points[j][1] - points[i][1];

                for(int k=0;k<n;k++){
                    if(k != i && k!= j){
                        int dx_ = points[k][0] - points[j][0];
                        int dy_ = points[k][1] - points[j][1];

                        if(dx*dy_ == dy*dx_){
                            count++;
                        }
                    }
                }
                result = max(result,count);
            }
            
        }
        return result;
    }
};