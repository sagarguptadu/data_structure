#include <iostream>
using namespace std;
int main()
{
  
    int r1 , c1 ;
    cout<<"row the first matrix : ";
    cin>>r1;
    cout<<"column the first matrix : ";
    cin>>c1;
    int a1[r1][c1] ;
    for(int i=0;i<r1;i++){
      for(int j=0; j<c1;j++){
        cin>>a1[i][j];
      }
    }
    int r2 , c2 ;  
     cout<<"row the 2nd matrix : ";
    cin>>r2;
     cout<<"column the 2nd matrix : ";
    cin>>c2;                  
    int a2[r2][c2] ;
    for(int i=0;i<r2;i++){
      for(int j=0; j<c2;j++){
        cin>>a2[i][j];
      }
    }

    int choice;
    do
    {
      
        cout << "1 for addition of both matrices "<<endl;
        cout << "2 for transpose of both  matrix "<<endl;
        cout << "3 for multiplication of both matrices "<<endl;
        cout<<"Choose 4 for exit "<<endl;
        cout << "Enter your choice :";
        cin >> choice;
        switch (choice)
        {
       
        case 1:
        {
            if (c1 == c2 && r1 == r2)
            {
                int sum[r1][c1]; 
                cout << "Sum of both matrix : \n";
                for (int i = 0; i < r1; i++)
                {
                    for (int j = 0; j < c1; j++)
                    {
                        sum[i][j] = a1[i][j] + a2[i][j];
                        cout << sum[i][j] << " ";
                    }
                    cout << "\n";
                }
            }
            else
            {
                cout << "Cannot add both matrices .\n";
            }
            break;
        }

       
        case 2:
        {
       
            int T1[c1][r1]; 
            int T2[c2][r2]; 
            for (int i = 0; i < r1; i++)
            {
                for (int j = 0; j < c1; j++)
                {
                    T1[j][i] = a1[i][j];
                 
                }
            }
             for (int i = 0; i < r2; i++)
            {
                for (int j = 0; j < c2; j++)
                {
                  
                    T2[j][i] = a2[i][j];
                }
            }

           
            cout << "Transpose of a1 is -> \n";
            for (int i = 0; i < c1; i++)
            {
                for (int j = 0; j < r1; j++)
                {
                    cout << T1[i][j] << " ";
                }
                cout << "\n";
            }
            cout << "\n";
            cout << "Transpose of matrix2 is -> \n";
            for (int i = 0; i < c2; i++)
            {
                for (int j = 0; j < r2; j++)
                {
                    cout << T2[i][j] << " ";
                }
                cout << "\n";
            }
            break;
        }
       
        case 3:
        {
            if (c1 != r2)
            {
                cout << "Multiplication of both matrix is not possible.\n";
            }
            else
            {
                int res[r1][c2]; 
                
                for (int i = 0; i < r1; ++i)
                {
                    for (int j = 0; j < c2; ++j)
                    {
                        res[i][j]=0;
                        for (int k = 0; k < c1; ++k)
                        {
                            res[i][j]=res[i][j]+(a1[i][k]*a2[k][j]);
                        }
                    }
                }

                cout << "Resultant matrix after multiplication of matrix1 and matrix2 : -> \n";
                for (int i = 0; i < r1; i++)
                {
                    for (int j = 0; j < c2; j++)
                    {
                        cout << res[i][j] << " ";
                    }
                    cout << "\n";
                }
            }
            break;
        }
        case 4:{
            cout<<"exit.";
            break;
        }
        }
        cout << endl;
    } while (choice!=4);
    return 0;
}