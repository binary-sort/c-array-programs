
void merge(int a[], int m, int b[], int n, int sorted[])
{
 int i, j, k;

 j = k = 0;

 for (i = 0; i < m + n;) {
   if (j < m && k < n) {
     if (a[j] < b[k]) {
       sorted[i] = a[j];
       j++;
     }
     else {
       sorted[i] = b[k];
       k++;
     }
     i++;
   }
   else if (j == m) {
     for (; i < m + n;) {
       sorted[i] = b[k];
       k++;
       i++;
     }
   }
   else {
     for (; i < m + n;) {
       sorted[i] = a[j];
       j++;
       i++;
     }
   }
 }
}
