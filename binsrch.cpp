#include <bits/stdc++.h>

using namespace std;



int binarySearch(int a[], int l, int r, int target)

{

   if(r>=l){


   int mid = l + (r-l)/2;



   if(a[mid] == target) return mid;

   if(a[mid] > target) return binarySearch(a, l, mid-1, target);

   return binarySearch(a, mid+1, r, target);

   }

   return -1;


}


int main() {


   int n; 

   cin>>n;

   int a[n];

   int i;

   for(i=0; i<n; i++)

   {

      cin>>a[i];

   }

   int target;

   cin>>target;

   int index = binarySearch(a, 0, n, target );

   cout<<index;


   return 0;

}
