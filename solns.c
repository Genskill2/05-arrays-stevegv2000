/* Enter your solutions in this file */
#include <stdio.h>

//max
int max(int [], int);

int max(int a[], int N) {
int largest = a[0];
for(int i=0; i<=N-1; i++) {
  if (a[i] > largest) {
    largest = a[i];
    }
  }
return largest;
}

//min
int min(int [], int);

int min(int a[], int N) {
int smallest = a[0];
for(int i=0; i<=N-1; i++) {
  if (a[i] < smallest) {
    smallest = a[i];
    }
  }
return smallest;
}

//average
float average(int [], int);

float average(int a[], int N) {
float sum = 0;
for (int i=0; i<=N-1; i++) {
  sum += a[i];
  }
float average = sum/N;
return average;
}

//mode
int mode(int [], int);
int mode(int a[], int N) {
  int count[N];
  for(int j=0; j<=N-1; j++) {
    count[j] = 0;
    for(int i=0; i<=N-1; i++) {
    	if (a[j] == a[i]) {
    	  count[j] += 1;
    	}
    }
  }
  int mode;
  int largest = count[0];
  for (int k=0; k<=N-1; k++) {
    if (count[k] >= largest) {
      mode = a[k];
    }
  }
  return mode;
}

//factors

int factors(int, int []);	
int factors(int x, int f[]) {
  //prime number selection
  int p_nos[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
  int t = x;
  int count = 0;
  int i=0;
  for (int j=0; j<=9; j++) {
    while(1) {
      if (t%p_nos[j] == 0) {
      	f[i] = p_nos[j];
      	t = t/p_nos[j];
      	i++;
      	count++;
      } else {
        break;
      }
    }
  }
  return count;
}

