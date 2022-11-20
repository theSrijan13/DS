public class Solution{
    public int[][] Reshapematrix(int[][] nums,int r,int c){
        int row=nums.length;
        if(row==0)
        {
            return nums;
        }
        int col=nums[0].length;
        if(col==0)
        {
            return nums;
        }
        int newsize=r * c;
        int currentsize=row*col;
        if(newsize != currentsize)
        {
            return nums;
        }
        int[][] result = new int[r][c];
        int k=0;
        iny l=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                result[i][j]=nums[k][l];
            }
            if(l==col-1)
            {
                k++;
            }
            l=(l+1)%col;
        }
    }
    return result;
    public static void main(String args[])
    {
        
    }
}