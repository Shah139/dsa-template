//Simple DFS Template

//for better understanding please check LEETCODE 130
void DFS(vector<vector<int>>matrix,int i,int j){
  if( i < 0 || j<0 || i >= matrix.size() || j >= matrix[0].size() )  return; //here we are checking if it is out of bound or not
  if(matrix[i][j] == 1) return; //its just a simple conditions according to the problem
  matrix[i][j] = 2; //as we checked its not 1 ,here we assign it with value 2

 DFS(matrix,i+1,j);
 DFS(matrix,i-1,j);
 DFS(matrix,i,j+1);
 DFS(matrix,i,j-1);

}



