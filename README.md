[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

##  **El archivo .gitignore**

El archivo .gitignore es un archivo de texto que le dice a Git qué otros archivos y carpetas de un proyecto debe ignorar.

- ¿Por qué es conveniente incluirlo?

Es conveniente incluirlo para mantener el repositorio limpio y organizado , es esencial para tener una colaboracion fluida y un control de versiones eficientes. 
Sin  el archivo _.gitignore_ , el repositorio puede llenarse rápidamente de archivos temporales, registros y otras cosas que no pertenecen al 
control de versiones, evitando compartir accidentalmente información sensible.

- ¿Cuándo se debe hacer?

Cuando los archivos son autogenerados por alguna herramienta 
cunado los archivos tienen información sensible
Cuando los archivos son temporales
Cuando los archivos son generados por el sistema operativo o por los editores de código
Cuando los archivos son binarios, builds, compilaciones, imágenes, archivos comprimidos, etc.

- ¿Cómo configuraría el archivo .gitignore?

Crear un archivo .gitignore
Paso 1: Navega hasta la raíz de tu repositorio. 

El archivo .gitignore suele colocarse en el directorio raíz de un proyecto Git. 
Abre tu terminal o línea de comandos y navega hasta el directorio raíz de tu repositorio Git:

Paso 2: Crea el archivo .gitignore. 
Una vez en el directorio raíz.
Crea un archivo de texto y asígnale el nombre ".gitignore" (recuerda incluir el . al principio)
Luego, edita este archivo según sea necesario.

Paso 3: Añade patrones al archivo. 
Abre el archivo .gitignore en un editor de texto y añade los patrones necesarios para ignorar archivos o directorios. 
Cada línea representa un patrón diferente.

  -  * se utiliza como una coincidencia comodín.
  -  / se usa para ignorar las rutas relativas al archivo .gitignore.
  -  (#) es usado para agregar comentarios

Cuando hayas añadido los patrones necesarios, guarda el archivo. 
Ahora Git ignorará automáticamente estos archivos al preparar o confirmar cambios.

Paso 4: Consigna el archivo en el repositorio. 
Es importante enviar el archivo .gitignore al repositorio para que todos los colaboradores utilicen las mismas reglas de ignorar. 
Esto garantiza la coherencia en todo el proyecto para todos los implicados.
git add .gitignore
git commit -m "Add .gitignore file"
git push

Una vez confirmado el archivo .gitignore, establece reglas de ignorar compartidas para todo el equipo.




## 3-g

* El resultado es el mismo porque la direccion de memoria almacenada del puntero es la misma de la variable declarada
porque los punteros guardan como valor direcciones de memoria y en la de la variable porque fue declarada previamente mediante la 
asignacion (pVar= &var)

* En el punto 4 se obtiene la direccion del puntero que no es la misma a la que el puntero apunta 






