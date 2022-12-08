# C - Essentials

> A compilation of examples/exercises to teach another pleople.

## Cheatsheet

> By Ashlyn Black

Click [here](https://cheatography.com/ashlyn-black/cheat-sheets/c-reference/) to access.

## Basic Concepts

### helloWorld

    First example C code.

### C Pointers

### Strings

### Library Functions

#### Math.h

| Function | Description                                                         |
| -------- | ------------------------------------------------------------------- |
| abs      | Valor absoluto                                                      |
| acos     | Arco coseno                                                         |
| asin     | Arco seno                                                           |
| atan     | Arco tangente                                                       |
| atan2    | Arco tangente usando signos para determinar los cuadrantes          |
| ceil     | Devuelve el entero más pequeño no menor que el valor que se le pasa |
| cos      | Coseno                                                              |
| cosh     | Cosen hiperbólico                                                   |
| exp      | Devuelve "e" elevador o argumentos que se le pasa                   |
| fabs     | Valor absoluto de números reales                                    |
| floor    | Devuelve mayor entero no menor que la cantidad que se le pasa       |
| labs     | Valor absoluto de un long                                           |
| log      | Logaritmo natural                                                   |
| log10    | Logaritmo en base 10                                                |
| pow      | Devuelve el primer parámetro elevado segundo                        |
| sin      | Seno                                                                |
| sinh     | Seno hiperbólico                                                    |
| sqrt     | Raíz cuadrada                                                       |
| tan      | Tangente                                                            |
| tanh     | Tangente hiperbólica                                                |

#### Ctype.h

| Function | Description                                                   |
| -------- | ------------------------------------------------------------- |
| isalnum  | Devuelve 1 si el carácter argumento es alfanumérico           |
| isalpha  | Devuelve 1 si el carácter argumento es alfabético             |
| iscntrl  | Devuelve 1 si el carácter argumento es un carácter de control |
| isdigit  | Devuelve 1 si el carácter argumento es un dígito              |
| islower  | Devuelve 1 si el carácter argumento está en minúscula         |
| isspace  | Devuelve 1 si el carácter argumento es el espacio en blanco   |
| isupper  | Devuelve 1 si el carácter argumento está en mayúscula         |
| tolower  | Convierte un carácter a minúscula                             |
| toupper  | Convierte un carácter en mayúscula                            |

#### Standard C

| Function | Description                                                 |
| -------- | ----------------------------------------------------------- |
| atof     | Convierte un string en un double (stdlib.h)                 |
| atoi     | Convierte un string en un integer (stdlib.h)                |
| atol     | Convierte un string en un long (stdlib.h)                   |
| strcat   | Concatena dos strings (string.h)                            |
| strcmp   | Compara dos strings (string.h)                              |
| strcpy   | Se copia una cadena de caracteres en otra (string.h)        |
| strlen   | Devuelve la longitud de una cadena de caracteres (string.h) |
| strncat  | Concatena dos cadenas de caracteres (string.h)              |
| strtod   | Convierte un string en un double (string.h)                 |
| strtol   | Convierte un string en un long (string.h)                   |
| strtoul  | Convierte un string en un unsigned long (string.h)          |

#### Práctica Palabras

Diseñar un módulo para aceptar como parámetro una cadena de caracteres que contenga una serie de palabras separadas por uno o más espacios en
blanco, y que devuelva el número medio de letras de las palabras

#### Práctica Ahorcado

Implementar el juego del AHORCADO. El programa dispondrá de un menú con tres opciones: introducir palabra, adivinar palabra y salir. La primera opción
permitirá introducir la palabra que otro jugador (o nosotros mismos, para probar el programa) ha de adivinar. La segunda opción sólo podrá llevarse a
cabo si ha sido introducida previamente una palabra. De ser así aparecerá una cadena formada por guiones “-” (tantos como letras contiene la palabra). El
programa irá pidiendo una letra tras otra. Si la letra es válida aparecerá en la cadena en la posición correspondiente, si no es así contaremos un fallo. El programa termina cuando se han destapado todas las letras o se ha fallado seis veces (cabeza, tronco, brazo derecho, brazo izquierdo, pierna derecha y pierna izquierda)

### Exercises

---

#### T4-Ex

> Ejercicios del Tema 4: Control de Flujo.

#### T5-Ex

> Ejercicios del Tema 5: Funciones y Módulos

#### To Do

---

Write a function that takes in a string of one or more words, and returns the same string, but with all five or more letter words reversed (Just like the name of this Kata). Strings passed in will consist of only letters and spaces. Spaces will be included only when more than one word is present.

Examples:

```C
spinWords( "Hey fellow warriors" ) => returns "Hey wollef sroirraw"
spinWords( "This is a test") => returns "This is a test"
spinWords( "This is another test" )=> returns "This is rehtona test"
```

```C
void spin_words(const char *sentence, char *result) {

    //  <----  hajime!

}
```

---

#### Pending task to practice: Fractions

> struct - Fraccion compuesta por numerador y denominador
> scanf / printf - Leer y escribir con formato fraccion: a/b
> array / pointers - Memoria para almacenar fracciones: id, fraccion. Las operaciones se hacen sobre la memoria. La direccion de memoria puede servir de id.

##### Menu

---

> scanf / printf - Escribir menú y leer opciones
> if - Comprobar opciones y si hay datos
> while / if - Mantener en funcionamiento la calculadora o salir

##### Functionality

---

> array / pointers - Introducir multiples fracciones
> array / pointers - Eliminar una fraccion segun direccion de memoria
> array / pointers - Mostrar una fraccion segun direccion de memoria
> for / array / pointers - Mostrar todas las fracciones de la memoria
> functions - Mostrar valor real de la fraccion
> functions - Simplificacion de una fraccion, se mostrará por pantalla y quedará almacenado el resultado
> functions - Operaciones suma, resta, multiplicación y división de fracciones, el resultado siempre será una fracción simplificada.
> La fracción se almacenará en memoria.
> files - Guardar fichero con todas las fracciones en memoria. Solo cuando lo solicite el usuario desde el menu.
> files - Cargar fichero de fracciones previamente almacenado en memoria

##### NFRs

---

> functions - Funciones bien estructuradas con el paso de parametros y devolución de resultados
> organization - 2 Modulos: Uno encargado de toda la funcionalidad, otro que encapsule toda la interaccion con el usuario.
> struct - Representar fraccion e identificador

##### Extra

> dynamic memory - Utilización de memoria dinamica para almacenar las fracciones +1.5

---
