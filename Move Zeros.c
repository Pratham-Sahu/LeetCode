void moveZeroes(int* a, int n){
    int c=0;
   for(int i=0;i<n;i++)
   {
       if(a[i]!=0)
           a[c++]=a[i];
   }
    while(c<n)
        a[c++]=0;
}
