int fun ( int a , int b ) {
return a + b ;
}
int main ( ) {
int a = 3 ;
int b = 5 ;
int c = a + b ;
return c + fun ( a , b ) ;
}