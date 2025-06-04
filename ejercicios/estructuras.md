# Ejercicios Guiados - Estructuras en C++ (Nivel Básico)

## Introducción
Las estructuras (`struct`) en C++ permiten agrupar diferentes tipos de datos bajo un solo nombre. Estos ejercicios te ayudarán a entender cómo declarar, inicializar y manipular estructuras básicas.

---

## Ejercicio 1: Declarar y usar una estructura simple

**Objetivo:** Crear una estructura `Persona` con nombre y edad, asignar valores e imprimirlos.

**Pasos:**
1. Define la estructura con campos `nombre` (string) y `edad` (int).
2. Declara una variable de tipo `Persona`.
3. Asigna valores a los campos.
4. Imprime los valores en consola.

---

## Ejercicio 2: Inicialización directa de una estructura

**Objetivo:** Crear e inicializar una estructura en una sola línea.

**Pasos:**
1. Define la estructura `Punto` con campos `x` y `y` (float).
2. Declara e inicializa una variable de tipo `Punto` con valores `(3.5, 4.5)`.
3. Imprime los valores.

---

## Ejercicio 3: Modificar campos de una estructura

**Objetivo:** Cambiar valores de una estructura después de creada.

**Pasos:**
1. Usa la estructura `Persona` del ejercicio 1.
2. Crea una variable e imprime sus valores.
3. Modifica los campos `nombre` y `edad`.
4. Imprime los nuevos valores.

---

## Ejercicio 4: Array de estructuras

**Objetivo:** Crear un arreglo de estructuras y recorrerlo.

**Pasos:**
1. Define la estructura `Producto` con `nombre` y `precio`.
2. Crea un arreglo de 3 productos.
3. Pide al usuario que ingrese datos para cada producto.
4. Imprime la lista completa.

---

## Ejercicio 5: Estructuras anidadas

**Objetivo:** Definir una estructura dentro de otra.

**Pasos:**
1. Define una estructura `Fecha` con día, mes y año.
2. Define una estructura `Evento` que incluya un `Fecha` y un `string` descripción.
3. Declara un `Evento`, asigna valores y muestra la información.

---

## Ejercicio 6: Uso de punteros a estructuras

**Objetivo:** Declarar punteros a estructuras y acceder a sus campos.

**Pasos:**
1. Define una estructura `Libro` con título y autor.
2. Declara un puntero a `Libro`.
3. Asigna memoria dinámica con `new` para un `Libro`.
4. Asigna valores y muestra el contenido usando el puntero.
5. Libera la memoria con `delete`.

---

## Ejercicio 7: Pasar estructuras a funciones

**Objetivo:** Crear una función que reciba una estructura y muestre sus datos.

**Pasos:**
1. Define una estructura `Alumno` con nombre y calificación.
2. Crea una función `mostrarAlumno` que reciba un `Alumno` como parámetro.
3. En `main`, crea un `Alumno` y llama a la función para mostrar sus datos.

---

## Ejercicio 8: Pasar estructuras por referencia a funciones

**Objetivo:** Modificar los valores de una estructura desde una función.

**Pasos:**
1. Usa la estructura `Alumno` del ejercicio anterior.
2. Crea una función que reciba un `Alumno&` y modifique sus campos.
3. Muestra los cambios en `main`.

---

## Ejercicio 9: Retornar una estructura desde una función

**Objetivo:** Crear una función que devuelva una estructura.

**Pasos:**
1. Define una estructura `Coordenada` con `x` y `y`.
2. Crea una función que reciba dos `float` y retorne un `Coordenada` inicializado.
3. En `main`, llama a la función, recibe el valor y lo imprime.

---

## Ejercicio 10: Comparar dos estructuras

**Objetivo:** Comparar si dos estructuras son iguales.

**Pasos:**
1. Usa la estructura `Persona`.
2. Crea dos variables `Persona`.
3. Escribe una función que reciba dos `Persona` y devuelva `true` si tienen el mismo nombre y edad, o `false` en caso contrario.
4. Prueba la función e imprime el resultado.

---

## Recomendaciones

- Usa el operador punto `.` para acceder a campos de estructuras.
- Recuerda que las estructuras pueden contener otros tipos complejos.
- Experimenta con punteros para manipular estructuras dinámicamente.


# Ejercicios Guiados - Estructuras en C++ (Nivel Intermedio)

## Introducción
Estos ejercicios te permitirán manipular punteros, arreglos dinámicos y funciones que interactúan con estructuras.

---

## Ejercicio 1: Estructuras con punteros a arreglos dinámicos

**Objetivo:** Crear una estructura que contenga un puntero a un arreglo dinámico.

**Pasos:**
1. Define una estructura `Vector` con dos campos:
   - `int* datos`
   - `int tamaño`
2. Escribe funciones para:
   - Inicializar el vector asignando memoria dinámica.
   - Llenar el vector con valores.
   - Mostrar el vector.
   - Liberar la memoria asignada.

---

## Ejercicio 2: Estructura con arreglo de estructuras

**Objetivo:** Definir una estructura que contenga un arreglo de otra estructura.

**Pasos:**
1. Define una estructura `Libro` con título y autor.
2. Define una estructura `Biblioteca` que contenga un arreglo estático de 5 `Libro`.
3. Llena la biblioteca con datos.
4. Muestra todos los libros.

---

## Ejercicio 3: Punteros a estructuras y funciones que modifican sus valores

**Objetivo:** Modificar una estructura a través de un puntero pasado a función.

**Pasos:**
1. Define una estructura `Empleado` con `nombre` y `salario`.
2. Crea una función que reciba un puntero a `Empleado` y aumente su salario.
3. En `main`, declara un `Empleado`, llama a la función y muestra el resultado.

---

## Ejercicio 4: Copiar estructuras dinámicamente

**Objetivo:** Crear una función que reciba una estructura por referencia y devuelva una copia dinámica.

**Pasos:**
1. Usa la estructura `Empleado`.
2. Crea una función que reciba un `Empleado&` y retorne un puntero `Empleado*` con copia dinámica.
3. En `main`, usa la función, muestra la copia y libera la memoria.

---

## Ejercicio 5: Matriz dinámica dentro de una estructura

**Objetivo:** Usar memoria dinámica para crear una matriz dentro de una estructura.

**Pasos:**
1. Define una estructura `Matriz` con:
   - `int filas`
   - `int columnas`
   - `int** datos`
2. Crea funciones para:
   - Inicializar la matriz (memoria dinámica).
   - Llenar con valores.
   - Mostrar.
   - Liberar memoria.

---

## Ejercicio 6: Lista enlazada usando estructuras

**Objetivo:** Implementar una lista enlazada simple con estructuras.

**Pasos:**
1. Define una estructura `Nodo` con:
   - `int dato`
   - `Nodo* siguiente`
2. Implementa funciones para insertar al inicio y mostrar la lista.
3. Libera toda la memoria al terminar.

---

## Ejercicio 7: Estructura con puntero a otra estructura

**Objetivo:** Crear una estructura que apunte a otra.

**Pasos:**
1. Define estructura `Direccion` con calle y ciudad.
2. Define estructura `Persona` que contenga un puntero a `Direccion`.
3. Asigna memoria dinámica para `Direccion`.
4. Llena y muestra los datos.
5. Libera memoria.

---

## Ejercicio 8: Estructura con constructor y destructor manual

**Objetivo:** Simular constructor y destructor en estructuras (usando funciones).

**Pasos:**
1. Define una estructura `Archivo` con:
   - `char* nombre`
   - `int tamaño`
2. Crea una función que simule constructor, asignando memoria dinámica para nombre.
3. Crea función que simule destructor liberando la memoria.
4. En `main`, crea, usa y destruye el objeto.

---

## Ejercicio 9: Comparación de dos estructuras complejas

**Objetivo:** Crear función que compare estructuras con arreglos dinámicos.

**Pasos:**
1. Define estructura `Vector` del ejercicio 1.
2. Crea función que compare dos vectores (tamaño y contenido).
3. Devuelve `true` si son iguales, `false` si no.
4. Prueba la función.

---

## Ejercicio 10: Conversión de estructuras a punteros y viceversa

**Objetivo:** Practicar el uso combinado de estructuras y punteros.

**Pasos:**
1. Define estructura `Coordenada` con `x` y `y`.
2. Declara un objeto y un puntero apuntando a él.
3. Modifica los valores usando el puntero.
4. Imprime los valores desde el objeto.

---

## Recomendaciones

- Controla siempre la memoria dinámica para evitar fugas.
- Usa punteros y referencias con estructuras para mejorar eficiencia.
- Practica la liberación de memoria en el orden correcto.

# Ejercicios Guiados - Estructuras en C++ (Nivel Avanzado)

## Introducción
Estos ejercicios abordan temas avanzados de estructuras en C++, incluyendo gestión dinámica compleja, integración con programación orientada a objetos y manipulación de datos complejos.

---

## Ejercicio 1: Lista enlazada con estructuras y funciones avanzadas

**Objetivo:** Implementar lista enlazada con inserción, eliminación y búsqueda.

**Pasos:**
1. Define `Nodo` con `int dato` y `Nodo* siguiente`.
2. Implementa funciones para:
   - Insertar al final.
   - Eliminar un nodo con valor específico.
   - Buscar un nodo.
   - Mostrar la lista.
3. Libera toda la memoria correctamente.

---

## Ejercicio 2: Árbol binario de búsqueda usando estructuras

**Objetivo:** Implementar árbol binario con inserción y recorrido inorden.

**Pasos:**
1. Define estructura `Nodo` con `int dato`, `Nodo* izq` y `Nodo* der`.
2. Implementa función para insertar.
3. Implementa recorrido inorden.
4. Libera memoria.

---

## Ejercicio 3: Estructura con punteros a funciones

**Objetivo:** Asociar funciones a estructuras para operaciones específicas.

**Pasos:**
1. Define estructura `Calculadora` con punteros a funciones para sumar y restar.
2. Implementa funciones externas de suma y resta.
3. Asigna las funciones a la estructura.
4. Llámales a través de la estructura y muestra resultados.

---

## Ejercicio 4: Simulación de polimorfismo con estructuras

**Objetivo:** Usar punteros a funciones dentro de estructuras para simular métodos virtuales.

**Pasos:**
1. Define estructura `Figura` con puntero a función `area`.
2. Define estructuras derivadas `Rectangulo` y `Circulo` que incluyan `Figura`.
3. Implementa funciones de área específicas.
4. Llama a la función área a través del puntero y muestra resultados.

---

## Ejercicio 5: Gestión de memoria con estructuras anidadas dinámicas

**Objetivo:** Crear estructuras anidadas donde cada nivel requiere asignación dinámica.

**Pasos:**
1. Define estructura `Estudiante` con `char* nombre` y `int* calificaciones` (arreglo dinámico).
2. Asigna memoria para nombre y calificaciones.
3. Llena datos.
4. Imprime resultados.
5. Libera toda la memoria.

---

## Ejercicio 6: Estructuras y archivos binarios

**Objetivo:** Guardar y leer estructuras desde un archivo binario.

**Pasos:**
1. Define estructura `Producto` con nombre y precio.
2. Escribe funciones para:
   - Guardar arreglo de `Producto` en archivo binario.
   - Leer archivo y mostrar productos.
3. Prueba en `main`.

---

## Ejercicio 7: Conversión entre estructuras y clases

**Objetivo:** Transformar una estructura en clase con métodos.

**Pasos:**
1. Toma una estructura `Vector` con puntero dinámico.
2. Convierte en clase `Vector` con constructor, destructor y métodos.
3. Agrega sobrecarga de operador para acceso.
4. Prueba el objeto.

---

## Ejercicio 8: Implementar un hash map simple con estructuras

**Objetivo:** Usar estructuras para implementar una tabla hash básica.

**Pasos:**
1. Define estructura `EntradaHash` con clave y valor.
2. Implementa tabla hash con arreglo dinámico y manejo de colisiones por listas enlazadas.
3. Funciones para insertar, buscar y eliminar.
4. Prueba memoria dinámica y liberación.

---

## Ejercicio 9: Árbol AVL básico con estructuras

**Objetivo:** Implementar rotaciones simples en árbol AVL.

**Pasos:**
1. Define estructura `NodoAVL` con dato, altura, y punteros.
2. Implementa inserción con balanceo.
3. Implementa rotaciones (izquierda, derecha).
4. Prueba inserción y balanceo.

---

## Ejercicio 10: Estructuras con memoria compartida y conteo de referencias

**Objetivo:** Simular gestión manual de referencias en estructuras.

**Pasos:**
1. Crea estructura `Recurso` con puntero a datos y contador de referencias.
2. Implementa funciones para incrementar y decrementar referencias.
3. Libera memoria solo cuando contador llegue a cero.
4. Prueba asignaciones y liberaciones.

---

## Recomendaciones Avanzadas

- Valida siempre las asignaciones dinámicas para evitar punteros nulos.
- Practica depuración con herramientas para detectar fugas.
- Considera la integración con C++ moderno (smart pointers) para estructuras similares.

