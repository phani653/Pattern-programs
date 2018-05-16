class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& A) {
        int n=A.size();
        if(!n) return {};
        int m=A[0].size();
        int i=0, j=0, count=0, down=1;
        vector<int> ans;
        ans.push_back(A[i][j]); count++;
        while(count<n*m){
            if(down){
                (j+1)<m ? j++ : i++;
                ans.push_back(A[i][j]); count++;
                if(count>=n*m) break;
                while(i+1<n && j-1>=0){
                    i++; j--;
                    ans.push_back(A[i][j]); count++;
                }
                if(count>=n*m) break;
                down=1-down;
            }
            if(!down){
                (i+1)<n ? i++ : j++;
                ans.push_back(A[i][j]); count++;
                if(count>=n*m) break;
                while(i-1>=0 && j+1<m){
                    i--; j++;
                    ans.push_back(A[i][j]); count++;
                }
                down=1-down;
            }
        }
        return ans;
    }
};
