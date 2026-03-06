// my-algorithm-didndt-copy-from-anywhere-and-gives-optimised-approach
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        


        //first lets reverse.
        int rows=matrix.size();
        int columns=0;
        if(rows!=0){
            columns=matrix[0].size();
        }
        for(int s=0; s<columns; s++){
            int l=rows-1;
            for(int m=0; m<rows/2; m++){
                swap(matrix[l][s], matrix[m][s]);
                l--;
            }
        } //O(n^2)

        //now swap to do 90*

        
        int i=0;
        int j=0;

        int k=columns-1;
        int z=rows-1;
        while(i<columns-1){
            for(int k=columns-1; k>=i; k--){
                swap(matrix[i][k], matrix[z][j]);
                z--;
            }
            i++;
            j++;
            z=rows-1;
        }
      

        
        
    }
};

//kinda goated feat ngl.