// A) Errado
# include < stdio .h >
 int main () {
 int n = 4000000000;
 printf ( " % d \ n " , n );
 return 0;
 }
// A) Corrigido
#include <stdio.h>
 int main () {
 double n = 4000000000;
 printf ( "%.1lf\n" ,n );
 return 0;
}

//B)
 # include <stdio.h>
 int main () {
 printf ( " % d \ n " , a );
 int a ;
 return 0;
}

// B) Corrigido
 # include < stdio .h >
 int main () {
 int a ;
 printf ( " % d \ n " , a );
 return 0;
}

//C)
 # include < stdio .h >
 int main () {
 
 printf ( " % d " , 4);
 printf ( " % d " , 2);
 return 0;
 }

// C) Corrigido
#include<stdio.h>

int main(){
    printf("%d\n", 4);
    printf("%d\n", 2);
return 0;
}

//D)
# include < stdio .h >
 int main () {
 int a ;
 scanf ( " % d " , a );
 printf ( " % d " , a );
 return 0;
 }

//D) Corrigido
 # include <stdio.h>
 int main () {
 int a ;
 printf ( " % d " , a );
 scanf ( " % d " , &a );
 return 0;
 }



