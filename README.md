# Libft

Este proyecto es el primero de los proyectos de 42 Madrid.

### ft_atoi

##### Prototipo - `int ft_atoi(const char \*str)`

##### Descripción

- La función atoi() convierte una cadena de caracteres en un valor entero. La cadena de entrada es una secuencia de caracteres que se puede interpretar como un valor numérico del tipo de retorno especificado. La función deja de leer la cadena de entrada en el primer carácter que no puede reconocer como parte de un número. Este carácter puede ser el carácter nulo que finaliza la cadena.

##### Valor devuelto

- El int resultante

### ft_bzero

##### Prototipo - `void	ft_bzero(void *s, size_t n)`

##### Descripción

- La función bzero() toma como argumentos un string, y una longitud n. Rellena los n primeros bytes del area de s con '\0'

##### Valor devuelto

- La función bzero() devuelve un puntero al área de memoria s. El string modificado

### ft_calloc

##### Prototipo - `void	*ft_calloc(size_t count, size_t size)`

##### Descripción

- La función calloc() indica la cantidad de elementos deseados en ese espacio count, la longitud y el tamaño de datos size y lo rellena con ceros.

##### Valor devuelto

- Un puntero a la memoria alocada/asignada

### ft_isalnum()

##### Prototipo - `int	ft_isalnum(int c)`

##### Descripción

- La función isalnum() toma un único argumento en forma de número entero.

##### Valor devuelto

- Devuelve 0 si no es parte del alfabeto o está dentro de los numeos y devuelve 1 si lo está.

### ft_isalpha()

##### Prototipo - `int	ft_isalpha(int c)`

##### Descripción

- La función isalpha() toma un único argumento en forma de número entero.

##### Valor devuelto

- Devuelve 0 si no es parte del alfabeto y devuelve 1 si lo es.

### ft_isascii()

##### Prototipo - `int	ft_isascii(int c)`

##### Descripción

- La función isascii() toma un único argumento en forma de número entero.

##### Valor devuelto

- Devuelve 0 si no pertenece a la tabla ascii y devuelve 1 si si pertenece.

### ft_isdigit()

##### Prototipo - `int	ft_isdigit(int c)`

##### Descripción

- La función isdigit() toma un único argumento en forma de número entero.

##### Valor devuelto

- Devuelve 0 si no es número y devuelve 1 si lo es.

### ft_isprint()

##### Prototipo - `int	ft_isprint(int c)`

##### Descripción

- La función isprint() toma un único argumento en forma de número entero.

##### Valor devuelto

- Devuelve 0 si no es un valor printable y devuelve 1 si lo es.

### ft_itoa()

##### Prototipo - `char	*ft_itoa(int n)`

##### Descripción

- La función itoa() convierte un valor entero a una cadena de caracteres.

##### Valor devuelto

- La cadena resultante

### ft_memchr()

##### Prototipo - `void	*ft_memchr(const void *s, int c, size_t n)`

##### Descripción

- La función memchr() toma como argumento un string, un entero y un size_t. El entero c es el entero que debe localizar, el size_t son los primeros n caracteres donde busca

##### Valor devuelto

- Si no encuentra c en los primeros n caracteres, devuelve NULL. Si lo encuentra, devuelve un puntero con la primera ocurrencia del carácter c en la cadena de caracteres s.

### ft_memcmp()

##### Prototipo - `int	ft_memcmp(const void *s1, const void *s2, size_t n)`

##### Descripción

- La función memcmp() toma como argumento dos strings y un int. Se presupone que la longitud de los strings es de n.

##### Valor devuelto

- Si los dos strings son iguales devuelve 0. Si son distintos devuelve la diferencia entre los caracteres que no coincidan\*/

### ft_memcpy()

##### Prototipo - `void	*ft_memcpy(void *dst, const void *src, size_t n)`

##### Descripción

- La función memcpy() toma como argumentos dos strings, uno src y otro dst, y un size_t n, que es el numero de bytes que se van a copiar de src a dest. Si hay algún solapamiento entre las ubicaciones de origen y destino, el comportamiento es indefinido

##### Valor devuelto

- Devuelve dest

### ft_memmove()

##### Prototipo - `void	*ft_memmove(void *dst, const void *src, size_t len)`

##### Descripción

- La función memmove() copia len bytes de la cadena src a la cadena dst. Las dos cadenas pueden superponerse y controla la gestion de overlap; la copia siempre se realiza de forma no destructiva.

##### Valor devuelto

- La función memmove() devuelve el valor original de dst.

### ft_memset()

##### Prototipo - `void	*ft_memset(void *b, int c, size_t len)`

##### Descripción

- La función memset() toma como argumentos un string, un valor c (convertido a unsigned char) y una longitud len. Rellena los n primeros bytes del area de s con la constante c.

##### Valor devuelto

- La función memset() devuelve un puntero al área de memoria s. El string modificado

### ft_putchar_fd()

##### Prototipo - `void	ft_putchar_fd(char c, int fd)`

##### Descripción

- La función putchar_fd() toma como argumento un char y un int, el character a escribir y el file descriptor del write.

##### Valor devuelto

- VOID - Pinta el char

### ft_putendl_fd()

##### Prototipo - `void	ft_putendl_fd(char *s, int fd)`

##### Descripción

- La función putendl_fd() toma como argumento un char string y un int, el string es el string a escribir y el file descriptor del write.

##### Valor devuelto

- VOID - Pinta el string y un salto de línea.

### ft_putnbr_fd()

##### Prototipo - `void	ft_putnbr_fd(int n, int fd)`

##### Descripción

- La función putnbr_fd() toma como argumento dos ints, uno el int que queremos pintar, el otro el file descriptor del write.

##### Valor devuelto

- VOID - Pinta el número

### ft_putstr_fd()

##### Prototipo - `void	ft_putstr_fd(char *s, int fd)`

##### Descripción

- La función putstr_fd() toma como argumento un char string y un int, el string es el string a escribir y el file descriptor del write.

##### Valor devuelto

- VOID - Pinta el string y un salto de línea.

### ft_split()

##### Prototipo - `int ft_split(char const *s, char c)`

##### Descripción

- La función split() toma dos argunmentos, el string a separar s y el character delimitador. La función va a separar en strings distintos cada bloque del string que esté entre los delimitadores.

* VALOR DEVUELTO

##### Valor devuelto

- Devuelve un array de arrays, una matriz, con las strings resultantes de la separación

### ft_strchr()

##### Prototipo - `char	*ft_strchr(const char *s, int c)`

##### Descripción

- La función strchr() toma como argumento un string y un entero. El entero c es el entero que debe localizar

##### Valor devuelto

- Si no encuentra c, devuelve NULL, si lo encuentra, devuelve un puntero a la primera ocurrencia del carácter c en la cadena de caracteres s.

### ft_strdup()

##### Prototipo - `char	*ft_strdup(const char *s1)`

##### Descripción

- La función strdup() asigna suficiente memoria para hacer una copia de la cadena de s1, hace la copia, y devuelve un apuntador a ella.

##### Valor devuelto

- Devuelve un puntero al nuevo objeto.

### ft_striteri()

##### Prototipo - `void	ft_striteri(char *s, void (*f)(unsigned int, char*))`

##### Descripción

- La función striteri() toma como argumentos un string de caracteres s y una funcion. Esta función toma como argumentos un int que equivale al indice del string y el char equivale a el contenido del string en esa posicion concreta. Esta función transforma de alguna manera caracter a caracter.

##### Valor devuelto

- VOID - Rellena el string

### ft_strjoin()

##### Prototipo - `char	*ft_strjoin(char const *s1, char const *s2)`

##### Descripción

- La función strjoin() toma como argumentos dos strings s1 y s2.

##### Valor devuelto

- La concatenación de los dos strings.

### ft_strlcat()

##### Prototipo - `size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)`

##### Descripción

- NON-SENSE
- La función strlcat() agrega una copia de la cadena s1 a s2 (incluye el carácter nulo de terminación) al final de la cadena s1. Es carácter inicial de s2 sobreescribe el carácter nulo existente al final de s1.Si la copia se lleva a cabo entre objetos que se superponen, el comportamiento queda indefinido.

##### Valor devuelto

- Devuelve la sum de la longitud de s1 sumado a dstsize

### ft_strlcpy()

##### Prototipo - `size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)`

##### Descripción

- La función strlcpy() toma como argumentos dos strings y la longitud del string destino. Copia en el string destino el string src.

##### Valor devuelto

- La función strlcpy() devuelve la longitud del string src.

### ft_strlen()

##### Prototipo - `size_t	ft_strlen(const char *s)`

##### Descripción

- La función strlen() toma un único argumento en forma de string.

##### Valor devuelto

- Devuelve un entero con la longitud del string.

### ft_strmapi()

##### Prototipo - `char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))`

##### Descripción

- La función strmapi() toma como argumentos un string de caracteres s y una funcion. Esta función toma como argumentos un int que equivale al indice del string y el char equivale a el contenido del string en esa posicion concreta. Esta función transforma de alguna manera caracter a caracter.

##### Valor devuelto

- Devuelve el string resultante de ejecutar la función del argumento.

### ft_strncmp()

##### Prototipo - `int	ft_strncmp(const char *s1, const char *s2, size_t n)`

##### Descripción

- La funcion strncmp() compara lexicográficamente las cadenas s1 y s2. La función strncmp() no compara más de n caracteres. Debido a que strncmp() está diseñado para comparar cadenas en lugar de datos binarios, los caracteres que aparecen después de un `\0' los personajes no se comparan.

##### Valor devuelto

- Si los dos strings son iguales devuelve 0. Si son distintos devuelve la diferencia entre los caracteres que no coincidan

### ft_strnstr()

##### Prototipo - `char	*ft_strnstr(const char *haystack, const char *needle, size_t len)`

##### Descripción

- La función strnstr() en C es una función que busca una subcadena dentro de otra. Toma como argumento dos strings y un size_t. size_t es el número max de caracteres donde busca desde el incio de haystack.

##### Valor devuelto

- Devuelve un puntero al primer carácter de la subcadena si se encontró, si no encuentra nada en needle, devuelve haystack directamente. line 35 casteamos haystack desde el return

### ft_strrchr()

##### Prototipo - `char	*ft_strrchr(const char *s, int c)`

##### Descripción

- La función strrchr() toma como argumento un string y un entero. El entero c es el entero que debe localizar. Busca de atrás hacua delante.

##### Valor devuelto

- Si no encuentra c, devuelve NULL, si lo encuentra, devuelve un puntero a la primera ocurrencia del carácter c en la cadena de caracteres s.

### ft_strtrim()

##### Prototipo - `char	*ft_strtrim(char const *s1, char const *set)`

##### Descripción

- La función strtrim() toma como argumentos dos strings, por un lado s1 que es la string que debe ser cortada y por otro lado set, donde aparecen los caracteres a eliminar de ese string. Elimina todos los caracteres que aparecen en set desde el principio hasta el final, hasta encontrar un caracter no perteneciente a set.

##### Valor devuelto

- La string recortada.

### ft_substr()

##### Prototipo - `char	*ft_substr(char const *s, unsigned int start, size_t len)`

##### Descripción

- La función substr() tiene tres parámetros s: La string desde la que crear la substring. start: El índice del caracter en ’s’ desde el que empezar la substring. len: La longitud máxima de la substring.

##### Valor devuelto

- La substring resultante. NULL si falla la reserva de memoria.

### ft_tolower()

##### Prototipo - `int	ft_tolower(int c)`

##### Descripción

- La función tolower() toma un único argumento en forma entero.

##### Valor devuelto

- Devuelve el entero sumandole las 32 posiciones que hacen que pase de mayúscula a minúscula

### ft_toupper()

##### Prototipo - `int	ft_toupper(int c)`

##### Descripción

- La función toupper() toma un único argumento en forma entero.

##### Valor devuelto

- Devuelve el entero restandole las 32 posiciones que hacen que pase de minuscula a mayuscula.


## BONUS

### ft_lstadd_back

##### Prototipo - `void ft_lstadd_back(t_list **lst, t_list *new)`

##### Descripción

- Añade el nodo ’new’ al final de la lista ’lst’. lst: el puntero al primer nodo de una lista. new: el puntero a un nodo que añadir a la lista. si no encuentra tmp el primer elementoo es el ultimo, por lo tanto añade despues de ese ---    *lst = new;

##### Valor devuelto

- NADA

### ft_

##### Prototipo - `dfasghed`

##### Descripción

- 

##### Valor devuelto

- 
### ft_

##### Prototipo - `dfasghed`

##### Descripción

- 

##### Valor devuelto

- 
### ft_

##### Prototipo - `dfasghed`

##### Descripción

- 

##### Valor devuelto

- 
### ft_

##### Prototipo - `dfasghed`

##### Descripción

- 

##### Valor devuelto

- 
### ft_

##### Prototipo - `dfasghed`

##### Descripción

- 

##### Valor devuelto

- 
### ft_

##### Prototipo - `dfasghed`

##### Descripción

- 

##### Valor devuelto

- 
### ft_

##### Prototipo - `dfasghed`

##### Descripción

- 

##### Valor devuelto

- 
### ft_

##### Prototipo - `dfasghed`

##### Descripción

- 

##### Valor devuelto

- 
