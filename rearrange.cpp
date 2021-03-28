#include <iostream>
using namespace std;

int main()
{
    int i = 0, j = 0, k = 0;

    int n ;
    cin >> n;
    int a[n];
    int inc = 0;
    while( inc < n)
    {
        cin >> a[inc];
        inc++;
    }
    inc = 0;
    i = 0;
    j = n - 1; //pointing j to  the last element 
    //jab i j se bada hojayega tab loop exit hoga

     //   [1 , 2 ,-3, 5,-6 ,-7] this is our array so after this while loop we will get a
    while(i<=j){

      if(a[i]<0 && a[j]>0){

          swap(a[i],a[j]); //so first no is negative and last is positive , we are grouping negatives and second half and 
          //positives at first half so we swap the negative to last and positive to first 
          i++;
          j--;

      }
      else if(a[i]>0 && a[j]<0)  //similarly checking for the negatives if first no is negative and last is positive then just increasing the pointer
      {
          i++;
          j--;
        }
        else if(a[i]>0)  //now chekcing if the no is in first half or not , here we get the condition in which both are positive so we dont iterrate the pointer of the no which is negative section  
        {
            i++;
        }
        else if(a[j]<0)  //same like above checking if the no is second half or not
        { 
            j--;
        }
    }
    //now the elements ar sorted in two groups
    // [1,2,5 , -3,-6,-7]

    //lets check if our i is at 0 which will mean that all the no are negative or else
    //if the i is at last position then all the elements are positive so swaping can be done only if both positive and negative are present 
    if(i ==0 || i == n)
   {
       for (int m = 0; m < n;m++)
       {
           cout << a[m] << " ";
       }
   }




   //now we have good combination of positive and neg nos 
   else
   {
       while(k<n && i<n)  //till both pointers reach the end 
       {
           swap(a[k], a[i]);   //so we will swap the first element (i.e the pos no ) and first neg no 
           k = k + 2;
           i++;
       }
       for (int m = 0; m < n;m++)
       {
           cout << a[m] << " ";
       }
       cout<<endl;
   }
    return 0;

}
