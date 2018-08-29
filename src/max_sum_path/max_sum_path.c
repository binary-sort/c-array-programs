int max(int x, int y) { return (x > y)? x : y; }

int max_sum_path(int ar1[], int ar2[], int m, int n){
  int i = 0, j = 0;
  int  result = 0, sum1 = 0, sum2 = 0;
  while (i < m && j < n){
    if (ar1[i] < ar2[j])
        sum1 += ar1[i++];
    else if (ar1[i] > ar2[j])
        sum2 += ar2[j++];
    else{
        result += max(sum1, sum2);
        sum1 = 0, sum2 = 0;
        while (i < m &&  j < n && ar1[i] == ar2[j]){
            result = result + ar1[i++];
            j++;
        }
    }
  }
  while (i < m)
    sum1  +=  ar1[i++];
  while (j < n)
    sum2 +=  ar2[j++];
  result +=  max(sum1, sum2);
  return result;
}
