#ifndef LINALG_H_GUARD
#define LINALG_H_GUARD

#ifdef __cplusplus
extern "C" {
#endif

#include "solnp.h"
#include <math.h>



solnp_float SOLNP(vec_mean)
(
      solnp_float *x,
      solnp_int len
);

void SOLNP(set_as_scaled_array)
(
	solnp_float *x, 
	const solnp_float *a, 
	const solnp_float b, 
	solnp_int len
);

void SOLNP(set_as_sqrt)
(
	solnp_float *x, 
	const solnp_float *v, 
	solnp_int len
);

void SOLNP(set_as_sq)
(
	solnp_float *x, 
	const solnp_float *v, 
	solnp_int len
);

void SOLNP(scale_array)
(
	solnp_float *a, 
	const solnp_float b, 
	solnp_int len
);


solnp_float SOLNP(dot)
(
	const solnp_float *x, 
	const solnp_float *y, 
	solnp_int len
);

solnp_float SOLNP(norm_sq)
(
	const solnp_float *v, 
	solnp_int len
);

solnp_float SOLNP(norm_1)
(
	const solnp_float *x, 
	const solnp_int len
);

solnp_float SOLNP(cone_norm_1)
(
	const solnp_float *x,
	 const solnp_int len
);

solnp_float SOLNP(norm)
(
	const solnp_float *v, 
	solnp_int len
);

solnp_float SOLNP(norm_inf)
(
	const solnp_float *a, 
	solnp_int len
);

void SOLNP(add_array)
(
	solnp_float *a, 
	const solnp_float b, 
	solnp_int len
);

void SOLNP(add_scaled_array)
(
	solnp_float *a, 
	const solnp_float *b, 
	solnp_int n, 
	const solnp_float sc
);

solnp_float SOLNP(norm_diff)
(
	const solnp_float *a, 
	const solnp_float *b, 
	solnp_int len
);

solnp_float SOLNP(norm_inf_diff)
(
	const solnp_float *a, 
	const solnp_float *b, 
	solnp_int len
);

void SOLNP(Ax)
(
	solnp_float *ax,
	const solnp_float *a,
	const solnp_float *x,
	solnp_int m,
	solnp_int n
);

/* Rank 1 update of matrix :h  =  h + alpha * x x^T*/
void SOLNP(rank1update)
(
	solnp_int n,
	solnp_float* h,
	solnp_float alpha,
	solnp_float* x
);
// /* Cholesky Decomposition: chol(h+ mu* diag(dx))*/
// void SOLNP(chol)
// (
// 	solnp_int n,
// 	SOLNPMatrix* h,
// 	solnp_float* dx,
// 	solnp_float** result,
// 	solnp_float mu
// );

void SOLNP(transpose)
(
      const solnp_int m,
      const solnp_int n,
      const solnp_float *A,
      solnp_float *AT
);

void SOLNP(AB)
(
      solnp_float *c,
	const solnp_float *a,
	const solnp_float *b,
	solnp_int m,
	solnp_int n,
	solnp_int p
);
solnp_float SOLNP(cond)
(
	solnp_int n,
	solnp_float* a
	);
solnp_float SOLNP(min)(solnp_float* a, solnp_int len);
solnp_float SOLNP(max)(solnp_float* a, solnp_int len);

#ifdef __cplusplus
}
#endif
#endif
