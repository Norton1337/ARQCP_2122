int rotate_left(int n, int nbits)
{
   return (n << nbits)|(n >> (32 - nbits));
}
 
