#include "main.h"                                                       
/**                                                                     
*main - entry block                                                     
*@void no agrument                                                      
*Return 0;                                                              
**/                                                                     
int main (void)                                                         
{                                                                       
char temesgen[]= "_putchar";                                            
                                                                        
int c;                                                                  
for (c=0;c<8;c++)                                                       
{                                                                       
  _putchar(temesgen[c]);                                                
}      
_putchar('\n');
return (0);
}
