/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is true */

#line 1 "cilcode.tmp/ex44.c"
__inline int foo(void) ;
#line 2 "cilcode.tmp/ex44.c"
int firstuse(void) 
{ 
  int tmp ;

  {
#line 2
  tmp = foo();
#line 2
  return (tmp);
}
}
#line 5 "cilcode.tmp/ex44.c"
__inline int foo(void) 
{ 


  {
#line 5
  return (2);
}
}
#line 7 "cilcode.tmp/ex44.c"
int main(void) 
{ 
  int tmp ;
  int tmp___0 ;

  {
#line 8
  tmp = foo();
#line 8
  tmp___0 = firstuse();
#line 8
  return (tmp + tmp___0);
}
}