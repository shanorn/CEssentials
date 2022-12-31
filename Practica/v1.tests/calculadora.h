// aquí no habría que poner #stdio.h??


extern void anadeFraccion(int *memoria_numerador, int *memoria_denominador, int *posicion, int num_nuevo, int denom_nuevo);

extern void imprimeFraccion(int *memoria_numerador, int *memoria_denominador, int posicion);

extern void eliminarFraccion(int *memoria_numerador, int *memoria_denominador, int *tamano, int posicion_eliminar);

extern float mostrarReal(int *memoria_numerador, int *memoria_denominador, int posicion);

extern void simplificarFraccion(int *a, int *b);

extern void sumaFracciones(int num_a, int denom_a, int num_b, int denom_b, int *num_res, int *denom_res);

extern void restaFracciones(int num_a, int denom_a, int num_b, int denom_b, int *num_res, int *denom_res);

extern void multFracciones(int num_a, int denom_a, int num_b, int denom_b, int *num_res, int *denom_res);

extern void divFracciones(int num_a, int denom_a, int num_b, int denom_b, int *num_res, int *denom_res);