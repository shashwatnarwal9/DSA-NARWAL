/* 
#include <iostream>
using namespace std;
void display(int arr[] , int n) {
	for(int i=0; i<n ; i++) {
		cout << arr[i] << " " ;
	
	}
}

int insert(int arr[] , int n , int position , int element) { //n is the size of array , element is to be inserted
    for(int i=n; i>=position ; i--) {
        arr[i] = arr[i-1] ;
        
    }
    arr[position-1] = element; //the element to be inserted at index position -1
    n++; // increasing the size of array
    return n; 
 
}


// Delete element at a given position (1-based)
int deleteElement(int arr[], int n, int position) {
    if(position < 1 || position > n) {
        cout << "Invalid position to delete." << endl;
        return n;  // no change in size
    }

    // Shift elements left from position to end
    for(int i = position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;  // reduce size by 1
    return n;
}

int linsearch(int arr[] , int n , int key) {
    for(int i=0; i<n ; i++) {
        if(arr[i]== key) {
            return i;
        }
        else {
            return 0; //element not found
        }
    }
}





int main() {
	int arr[7] = {1,3,5,7,9,11}  ;	//creating an array and arr[7] to hold that extra element
	int n=6; // // current number of elements
	cout << "the entered array is:" << endl;
	display(arr , 6) ;
	int position = 4;
	int element= 999;
    n =	insert(arr , 7 , 4 , 999) ;
	cout << "the new array is:" << endl ;

	display(arr , 7);
	int key= 7; //the element to be found
	deleteElement(arr , 6 , 3) ;
	cout << "the array with deleted element is:" ;
	display(arr , 6) ;
	linsearch(arr , 6 , 7) ;
	
		
	
	
	
	
	return 0;
}
*/

     //QUESTION 2
/*

#include<iostream>
using namespace std;
int main()
{
    int num,arr[20];
    cout<<"Enter number of elements in array: ";
    cin>>num; //taking num as input
    cout<<"Enter elements in array: ";
    for(int i=0;i<num;i++)
    {
        cin>>arr[i]; //taking input of array elements
    }
    for (int i = 0; i < num; i++) 
    {
        for (int j = i + 1; j < num; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                for (int k = j; k < num - 1; k++) 
                {
                    arr[k] = arr[k + 1]; 
                }
                num--;
                j--;
            }
        }
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < num; i++) 
    {
        cout << arr[i] << " ";
    }
}
*/

     //QUESTION 3
     
/*
#include<iostream>
using namespace std;
int main() 
{ 
int i; 
int arr[5] = {1}; 
for (i = 0; i < 5; i++) 
printf("%d",arr[i]); 
return 0; 
}
// Output is: 10000

*/
     // QUESTION 4
/*
#include <iostream>
using namespace std;
void reverse(int arr[] , int n) {
    int start=0;
    int end= n-1;
    while(start<=end) {
        swap(arr[start] , arr[end]) ;
        start++;
        end--;
    }
}
    
void display(int arr[] , int n) {
    for(int i=0; i<n ; i++) {
        cout << arr[i] << " " ;
    }
}
int main() {
    int arr[4]= {1,2,3,4} ;
    reverse(arr , 4) ;
    display(arr , 4) ;
    
    
    
    
    return 0;
}
*/ 
     //question4(2) 
     
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"=== MENU ==="<<endl;
    cout<<"1. Reverse the elements of an array "<<endl;
    cout<<"2. Find the matrix multiplication "<<endl;
    cout<<"3. Find the Transpose of a Matrix "<<endl;
    cout<<"Enter Your Choice"<<endl;
    cin>>n;
    switch (n)
    {
    case 1:{
        int num,a[15];
        cout<<"Enter number of elements in array: ";
        cin>>num;
        for(int j=0;j<num;j++)
        {
            cin>>a[j];
        }
        cout<<"Reverse of array is: ";
        for(int j=num-1;j>=0;j--)
        {
            cout<<a[j]<<"   ";
        }
    }
        break;  
    case 2:{
        int r1,c1,r2,c2,a[10][10],b[10][10],m[10][10];
        cout<<"Enter rows for 1st matrix: "<<endl;
        cin>>r1;
        cout<<"Enter columns for 1st matrix: "<<endl;
        cin>>c1;
        cout<<"Enter values to the 1st matrix"<<endl;
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"Enter rows for 2nd matrix: "<<endl;
        cin>>r2;
        cout<<"Enter columns for 2nd matrix: "<<endl;
        cin>>c2;
        cout<<"Enter values to the 2nd matrix"<<endl;
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                cin>>a[i][j];
            }
        }
        if (r2 == c1)
        {
            for (int i = 0; i < r1; i++)
            {
                for (int j = 0; j < c2; j++)
                {
                    for (int k = 0; k < c1; k++)
                    {
                        m[i][j] += a[i][k] * b[k][j];
                    }
                }
            }
        }
        else
        {
            cout<<"Multiplication not possible!"<<endl;
            break;
        }
        cout<<"Multiplication of matrix is: ";
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                cout<<m[i][j]<<"    ";
            }
            cout<<endl;
        }
        break;
        }
    case 3:{
        int r,c,a[10][10];
        cout<<"Enter number of rows: "<<endl;
        cin>>r;
        cout<<"Enter number of columns: "<<endl;
        cin>>c;
        cout<<"Enter values to the matrix"<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>a[i][j];
            }
        }

        cout<<"Transpose of matrix is:"<<endl;
        for(int i=0;i<c;i++)
        {
            for(int j=0;j<r;j++)
            {
                cout<<a[j][i]<<"    ";
            }
            cout<<endl;
        }
        break;
    }
    default:
        cout<<"Enter a valid choice!";
        break;
    }
}
*/

    //QUESTION 5
/*
#include<iostream>
using namespace std;
int main()
{
    int r,c,a[10][10];
    cout<<"Enter number of rows: "<<endl;
    cin>>r;
    cout<<"Enter number of columns: "<<endl;
    cin>>c;
    cout<<"Enter values to the matrix"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Entered matrix is:"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j];
            cout<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<r;i++)
    {
        int sum=0;
        for(int j=0;j<c;j++)
        {
            sum = sum+a[i][j];
        }
        cout<<"Sum of "<<i<<" row is: "<<sum;
        cout<<endl;
    }

    for(int j=0;j<c;j++)
    {
        int sum=0;
        for(int i=0;i<r;i++)
        {
            sum = sum+a[i][j];
        }
        cout<<"Sum of "<<j<<" column is: "<<sum;
        cout<<endl;
    }
}
*/

