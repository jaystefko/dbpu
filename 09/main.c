#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// nwd algorithm taken from: http://www.algorytm.edu.pl/algorytmy-maturalne/algorytm-eulkidesa.html
// both odwr_mod and pot_mod algorithms taken from: https://eduinf.waw.pl/inf/alg/001_search/0067.php

int nwd(int a, int b) {
    if (a < 1 && b < 1) return -1;
    int temporary;
	while(b != 0) {
		temporary = b;
		b = a % b;
		a = temporary;	
	}
    return a;
}

// get the opposite of a modulo n
int odwr_mod ( int a, int n ) {
  int a0, n0, p0, p1, q, r, t;

  p0 = 0; p1 = 1; a0 = a; n0 = n;
  q  = n0 / a0;
  r  = n0 % a0;
  while( r > 0 ) {
    t = p0 - q * p1;
    if( t >= 0 )
      t = t % n;
    else
      t = n - ( ( -t ) % n );
    p0 = p1; p1 = t;
    n0 = a0; a0 = r;
    q  = n0 / a0;
    r  = n0 % a0;
  }
  return p1;
}

// get modulo power of 
int pot_mod ( int a, int w, int n )
{
  int pot, wyn, q;

  pot = a; wyn = 1;
  for( q = w; q > 0; q /= 2 )
  {
    if( q % 2 ) wyn = ( wyn * pot ) % n;
    pot = ( pot * pot ) % n;
  }
  return wyn;
}

int main() {
    // generating the key
    const int tp [10] = { 11, 13, 17, 19, 23, 29, 31, 37, 41, 43 };
    int p, q, phi, n, e, d, c, m1, m2, dp, dq, qinv, h, m, M;
    M = 29;

    do {
        p = tp[rand() % 10];
        q = tp[rand() % 10];
    } while(p == q);

    phi = (p - 1) * (q - 1);
    n = p * q;

    for(e = 3; nwd(e, phi) != 1; e += 2);
    d = odwr_mod (e, phi);

    printf("*** Ciphering process ***\n");
    c = pot_mod ( M, e, n );
    printf("M = %d, c = %d\n\n", M, d);

    printf("*** Deciphering process ***\n");
    dp = d % (p - 1);
    dq = d % (q - 1);
    qinv = odwr_mod(q, p);
    m1 = pot_mod(c, dp, p);
    m2 = pot_mod(c, dq, q);
    h = (qinv * (m1 - m2)) % p;
    m = (m2 + h * q) % (p * q);
    printf("M = %d\n\n", m);

    if (m == M) {
        printf("Ciphered correctly!\n");
    } else {
        printf("There\'s error somewhere!\n");
    }

    return 0;
}