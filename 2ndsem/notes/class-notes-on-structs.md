# Structures

**Entities** - any object, person, place, event, or an abstract. Also called tag name if used in a template

Each entities has an **attribute** 

**Attributes** are characteristics of an entity

When performing structures, an entity must have a minimum of three attributes

When creating an entity, you need to create a table for example:

Each entity needs to be singular, plural is not allowed
```
    Student

    attribute
    ⬇
    name,  age, gender
    ------------------
    Enorme,  19,  M   ⬅  record/instance/tuple
    Corpuz, 18, M
    Lumbay, 18, F

```
- row = record/tuple/instance
- column = attribute/members

In computer science, **structures are used to store a collection of data items of different data types**, unlike an array which only allows data types of the same kind

```c
// Syntax:

    // DECLARING A STRUCTURE TEMPLATE
    struct STUDENT {
        char[80] Sname;
        int Age;
        char Gender;
    };

    // DECLARING A STRUCTURE VARIABLE:
    struct student st;

    // Multiple variables:
    struct student st1, st2, st3;
```

variable is accessed using the `dot(.) operator`
for example:
```c
    printf("%s", s1.name);
```

When initializing a structure, the order of the members needs to be in sequence based on the template:

