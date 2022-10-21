#include <iostream>
using namespace std; 
int main()
{
    int r1,r2,c1,c2;
    cout<<"Enter the number of rows for the first matrix:"<<"\n";
    cin>>r1;    
    cout<<"Enter the number of columns for the first matrix:"<<"\n";
    cin>>c1;
    cout<<"Enter the number of rows for the second matrix:"<<"\n";
    cin>>r2;
    cout<<"Enter the number of columns for the second matrix:"<<"\n";
    cin>>c2;
    if(c1!=r2)
    {
        cout<<"The matrices cannot be multiplied together";
    }
    else
    {
        int m1[r1][c1],m2[r2][c2];
        cout<<"Enter the elements of the first matrix"<<"\n";    
        for(int i=0;i<r1;i++)    
        {    
            for(int j=0;j<c1;j++)    
            {    
                cin>>m1[i][j];    
            }    
        }    
        cout<<"Enter elements of the second matrix"<<"\n";    
        for(int i=0;i<r2;i++)    
        {    
            for(int j=0;j<c2;j++)    
            {    
                cin>>m2[i][j];    
            }    
        }    
        int mul[r1][c2];
        for(int i=0;i<r1;i++)    
        {    
            for(int j=0;j<c2;j++)    
            {    
                mul[i][j]=0; 
                for(int k=0;k<c1;k++)    
                {    
                    mul[i][j]+=m1[i][k]*m2[k][j];    
                } 
            }    
        }    
        cout<<"The multiplied matrix is:"<<"\n";     
        for(int i=0;i<r1;i++)    
        {    
            for(int j=0;j<c2;j++)    
            {    
                cout<<"\t"<<mul[i][j];    
            }    
            cout<<"\n";    
        } 
    }
    return 0;  
}
