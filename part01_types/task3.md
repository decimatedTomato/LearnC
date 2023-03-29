# Task 3 - Colors of the rainbow

My first programming teacher once said, "Programs only exist to visualize data, nothing more." (or something like that). Let's take his word for it and <font color="orange">come up with some very common custom types of our own.</font>
- A color that contains the r, g, b, a components
- A position in 3d space
- A group of vertices in 3d space
- A position in 3d space with an associated color
- A group of vertices, each including an associated color

Hint: A concept known as [type aliasing](resources.md#creating-types) might come in handy here

<font color="orange">Initialize a variable using a single keyword that represents the final type.</font>
You might find it more awkward to set value for a composite type, especially in c where only the declaration statement can set all components at once.

Just so you know, there are actually several valid ways of representing these things. Well maintained documentation and consistency within a codebase are some deciding factors that determine whether an internal representation of a concept makes sense.