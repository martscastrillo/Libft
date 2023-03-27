# Libft
Este proyecto es el primero de los proyectos de 42 Madrid.
### ft_atoi
##### Descripción
- La función atoi() convierte una cadena de caracteres en un valor entero. La cadena de entrada es una secuencia de caracteres que se puede interpretar como un valor numérico del tipo de retorno especificado. La función deja de leer la cadena de entrada en el primer carácter que no puede reconocer como parte de un número. Este carácter puede ser el carácter nulo que finaliza la cadena.

### ft_bzero
##### Descripción
- La función bzero() toma como argumentos un string, y una longitud n. Rellena los n primeros bytes del area de s con '\0'
##### Valor devuelto
- La función bzero() devuelve un puntero al área de memoria s. El string modificado

### ft_calloc            
##### Descripción
- La función calloc() indica la cantidad de elementos deseados en ese espacio count, la longitud y el tamaño de datos size y lo rellena con ceros.
##### Valor devuelto
- Un puntero a la memoria alocada/asignada

### ft_isalnum()             
##### Descripción
- La función isalnum() toma un único argumento en forma de número entero.
##### Valor devuelto
- Devuelve 0 si no es parte del alfabeto o está dentro de los numeos y devuelve 1 si lo está.

### ft_isalpha()            
##### Descripción
- La función isalpha() toma un único argumento en forma de número entero.
##### Valor devuelto
- Devuelve 0 si no es parte del alfabeto y devuelve 1 si lo es.

### ft_isascii()            
##### Descripción
- La función isascii() toma un único argumento en forma de número entero. 
##### Valor devuelto
- Devuelve 0 si no pertenece a la tabla ascii y devuelve 1 si si pertenece.

### ft_isdigit()             
##### Descripción
- La función isdigit() toma un único argumento en forma de número entero.
##### Valor devuelto
- Devuelve 0 si no es número y devuelve 1 si lo es.

### ft_isprint()             
##### Descripción
- La función isprint() toma un único argumento en forma de número entero.
##### Valor devuelto
- Devuelve 0 si no es un valor printable y devuelve 1 si lo es.

### ft_itoa()             
##### Descripción
- 
##### Valor devuelto
- 

### ft_strchr()             
##### Descripción
- La función strchr() toma como argumento un string, un entero y un size_t. El entero c es el entero que debe localizar, el size_t son los primeros n caracteres donde busca 
##### Valor devuelto
- Si no encuentra c en los primeros n caracteres, devuelve NULL. Si lo encuentra, devuelve un puntero con la primera ocurrencia del carácter c en la cadena de caracteres s.

### ft_memcmp()           
##### Descripción
- La función memcmp() toma como argumento dos strings y un int. Se presupone que la longitud de los strings es de n. 
##### Valor devuelto
- Si los dos strings son iguales devuelve 0. Si son distintos devuelve la diferencia entre los caracteres que no coincidan*/

### ft_memcpy()             
##### Descripción
- La función memcpy() toma como argumentos dos strings, uno src y otro dst, y un size_t n, que es el numero de bytes que se van a copiar de src a dest. Si hay algún solapamiento entre las ubicaciones de origen y destino, el comportamiento es indefinido 
##### Valor devuelto
- Devuelve dest

### ft_memmove()             
##### Descripción
- La función memmove() copia len bytes de la cadena src a la cadena dst. Las dos cadenas pueden superponerse y controla la gestion de overlap; la copia siempre se realiza de forma no destructiva.
##### Valor devuelto
- La función memmove() devuelve el valor original de dst.

### ft_memset()            
##### Descripción
- La función memset() toma como argumentos un string, un valor c (convertido a unsigned char) y una longitud len. Rellena los n primeros bytes del area de s con la constante c.
##### Valor devuelto
- La función memset() devuelve un puntero al área de memoria s. El string modificado 

### ft_putchar_fd()             
##### Descripción
- La función putchar_fd() toma como argumento un char y un int, el character a escribir y el file descriptor del write.
##### Valor devuelto
- VOID - Pinta el char

### ft_putendl_fd()             
##### Descripción
- La función ft_putendl_fd() toma como argumento un char string y un int, el string es el string a escribir y el file descriptor del write.
##### Valor devuelto
- VOID - Pinta el string y un salto de línea.

### ft_putnbr_fd()             
##### Descripción
- La función ft_putnbr_fd() toma como argumento dos ints, uno el int que queremos pintar, el otro el file descriptor del write.
##### Valor devuelto
- VOID - Pinta el número

### ft_putstr_fd()             
##### Descripción
- La función ft_putstr_fd() toma como argumento un char string y un int, el string es el string a escribir y el file descriptor del write.
##### Valor devuelto
- VOID - Pinta el string y un salto de línea. 

### ft_strchr()             
##### Descripción
- La función strchr() toma como argumento un string y un entero. El entero c es el entero que debe localizar
##### Valor devuelto
- Si no encuentra c, devuelve NULL, si lo encuentra, devuelve un puntero a la primera ocurrencia del carácter c en la cadena de caracteres s.

### ft_strdup()            
##### Descripción
- La función strdup() asigna suficiente memoria para hacer una copia de la cadena de s1, hace la copia, y devuelve un apuntador a ella.
##### Valor devuelto
- Devuelve un puntero al nuevo objeto.

### ft_striteri()            
##### Descripción
- 
##### Valor devuelto


### ft_strjoin()            
##### Descripción
- 
##### Valor devuelto
- 

### ft_strlcat()           
##### Descripción
- NON-SENSE
- La función strlcat() agrega una copia de la cadena s1 a s2 (incluye el carácter nulo de terminación) al final de la cadena s1. Es carácter inicial de s2 sobreescribe el carácter nulo existente al final de s1.Si la copia se lleva a cabo entre objetos que se superponen, el comportamiento queda indefinido. 
##### Valor devuelto
-  Devuelve la sum de la longitud de s1 sumado a dstsize

### ft_strlcpy()          
##### Descripción
- La función strlcpy() toma como argumentos dos strings y la longitud del string destino. Copia en el string destino el string src.
##### Valor devuelto
- La función strlcpy() devuelve la longitud del string src.

### ft_strlen()          
##### Descripción
- La función strlen() toma un único argumento en forma de string.
##### Valor devuelto
- Devuelve un entero con la longitud del string.

### ft_strmapi()          
##### Descripción
- 
##### Valor devuelto
- 

### ft_strncmp()          
##### Descripción
- La funcion strncmp() compara lexicográficamente las cadenas  s1 y s2. La función strncmp() no compara más de n caracteres. Debido a que strncmp() está diseñado para comparar cadenas en lugar de datos binarios, los caracteres que aparecen después de un `\0' los personajes no se comparan.
##### Valor devuelto
- Si los dos strings son iguales devuelve 0. Si son distintos devuelve la diferencia entre los caracteres que no coincidan 

### ft_strnstr()          
##### Descripción
- La función strnstr() en C es una función que busca una subcadena dentro de otra. Toma como argumento dos strings y un size_t. size_t es el número max de caracteres donde busca desde el incio de haystack. 
##### Valor devuelto
- Devuelve un puntero al primer carácter de la subcadena si se encontró, si no encuentra nada en needle, devuelve haystack directamente. line 35 casteamos haystack desde el return

### ft_strrchr()          
##### Descripción
- La función strrchr() toma como argumento un string y un entero. El entero c es el entero que debe localizar. Busca de atrás hacua delante.
##### Valor devuelto
- Si no encuentra c, devuelve NULL, si lo encuentra, devuelve un puntero a la primera ocurrencia del carácter c en la cadena de caracteres s.

### ft_strtrim()        
##### Descripción
- La función ft_strtrim()
- La función ft_strchr(set, s1[i]) si nos devuelve 0 es que no encuentra coincidencia, 
de modo, que si lo encuentra entra en el bucle
##### Valor devuelto
- 

### ft_substr()          
##### Descripción
- La función substr() tiene tres parámetros s: La string desde la que crear la substring. start: El índice del caracter en ’s’ desde el que empezar la substring. len: La longitud máxima de la substring. 
##### Valor devuelto 
- La substring resultante. NULL si falla la reserva de memoria.

### ft_toupper()          
##### Descripción
- La función toupper() toma un único argumento en forma entero.
##### Valor devuelto
- Devuelve el entero restandole las 32 posiciones que hacen que pase de minuscula a mayuscula.*/

------------
### ft_          
##### Descripción
- 
##### Valor devuelto
- 
