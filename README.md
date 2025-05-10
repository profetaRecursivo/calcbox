# 📦 Nombre del proyecto: `calcbox`

## 👥 Nombre del Equipo
🐧 Testigos de Tux

## 🚀 GitFlow Utilizado
Utilizamos el enfoque **Ship 🚢 / Show 👀 / Ask ❓ (SSA)**. 

## 📘 Bitácora del Mini-Proyecto

### ✅ ¿Nos sirvió el modelo SSA?

La verdad es que sí, encontramos SSA muy útil porque:

- **📑 Estructuró bien los pasos del proyecto**: nos permitió dividir la aplicación en partes manejables y saber exactamente qué hacer en el desarrollo.
- **🤝 Facilitó la toma de decisiones**: al visualizar el flujo y las tareas, pudimos decidir mejor qué funcionalidades implementar primero.
- **⏳ Optimización del tiempo**: al definir claramente los módulos, evitamos redundancias y optimizamos el desarrollo.

### ⚠️ Problemas encontrados:
- En ocasiones no es tan claro saber si un cambio debía ser `ship` 🚢, `show` 👀 o `ask` ❓.

### 🧨 Conflictos y su origen:

- **Conflicto 1**: Al actualizar el `README.md`, Brenda y Shamir hicieron cambios simultáneos. 
  - **Origen**: Ambos siguieron el issue relacionado a la decoración del `README.md`, pero no se comunicaron sobre los cambios que estaban realizando.
  - **Solución**: Shamir propuso un merge y ambos revisaron los cambios. Se llegó a un acuerdo sobre el contenido final.
- **Conflicto 2**: Sebastian no se dio cuenta que subio el gitignore de una rama con el contenido de una carpeta con una slash al final, pero en otro branch no estaba.
  - **Origen**: Sebastian no se dio cuenta que el gitignore estaba en una rama diferente y no lo subio a la rama principal.
  - **Solución**: Tuvo que hacer un merge de la rama con el gitignore y luego hacer un pull request para que se suba a la rama principal.

## Buenas 👍 y 👎 Malas Prácticas
 - 🔍 Shamir es observador, se dio cuenta de un posible desborde por el tamaño en bits de un entero con signo en c++ y modifico mi pull request para que no exista dicho desborde. *Documentado por Sebastian*
 - 🛠️ Sebastián está haciendo un buen trabajo. Sus implementaciones son claras y bien estructuradas, y los issues que plantea están bien explicados, lo que facilita bastante entender el rumbo del proyecto. *Documentado por Brenda* 
 - 🧾 Brenda hace buen uso de los issues, con descripciones claras y propósitos valiosos que puedan aportar al proyecto. Sus pull requests son muy claros, indicando claramente qué acción está realizando (ship, show o ask), permitiendo que el flujo de trabajo sea más entendible y fluido. *Documentado por Shamir*
 - 🧾 Brenda no siguio los estandares de codigo en los que habiamos quedado, subiendo un PR con macros y definiciones poco claras. *Documentado por Sebastian*
## 🛠️ Git Hooks o Git Alias Utilizados

### 🪝 Git Hooks

- `pre-commit`: Verifica que cada archivo `.cpp` tenga su correspondiente `.h`, excluyendo `main.cpp`.

### 🔧 Git Alias
```bash
# Para ver un grafo 📊 y observar bien las ramas
git config --global alias.graph "log --graph --oneline --decorate --all"

# Para ver el log resumido 📜 sin escribir la bandera --oneline
git config --global alias.lg "log --oneline"