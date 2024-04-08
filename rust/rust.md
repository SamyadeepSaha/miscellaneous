# Rust Programming

## Data Types

- Scalar Types
    - Integer
    - Floating Point
    - Boolean
    - Character
- Compound Types
    - Tuples
    - Array

### Integer Types

| Length | Signed | Unsigned |
|--------|--------|----------|
| 8bit   | i8     | u8       |
| 16bit  | i16    | u16      |
| 32bit  | i32    | u32      |
| 64bit  | i64    | u64      |
| 128bit | i128   | u128     |
| arch   | isize  | usize    |

### Character Types

Character types is four bytes in size and represents unicode scalar
value, which means it can represents a lot than just ASCII. Accented
letters, Chinese, Japanese and Korean, character emojis and zero-width
spaces are all valid char values in Rust.

## Functions

Rust function definitions are also statements. And statements do not
returns values. Which is different from language like C and Ruby.

## Module System

Rust has a number of features that allow you to manage your code's
organization, including which details are exposed, which details are
private, and what names are in each scope in your programs. These
features, sometimes collectively referred to as the module system,
include:

- **Packages** A Cargo feature that lets you build, test, and shares
crates.
- **Crates** A tree of modules that produces a library or executable.
- **Modules and use** Let you control the organization, scope, and
privacy of paths.
- **Paths** A way of naming an item, such as a struct, function, or
module.

## Crates and Modules

Rust lets you split a package into multiple crates and a crate into
modules so you can refer to items defined in one module from another
module. You can do this by specifying absolute or relative paths. These
paths can be brought into scope with a use statement so you can use a
shorter path for multiple uses of the item in that scope. Module code is
private by default, but you can make definitions public by adding the
pub keyword.

## Strings

Rust has only one string type in the core language, whice is the string
slice str that is usually seen in its borrowed form &str. String slices
are references to some UTF-8 encoded string data stored elsewhere. The
string type, which is provided nbyd Rust's standard library rather than
coded into the core language, is a growable, mutable, owned, UTF-8
encoded string type.

## Error Handling

### Propagating Errors

When a function's implemantation calls something that fail, instead of
handling the error within the function itself, you can return the error
to the calling code so that it can decide what to do. This is known as
*propagating* the error and gives more control to the calling code,
where there might be more information or logic that dictates how the
error should be handled than what what you have available in the context
of your code.

## Generic Data Types

We use generics to create definitions for items like function signatures
or structs, which we can then use with many different concrete data
types. Let's first look at how to define functions, structs, enums, and
methods using generics. Then we'll discuss how generics affect code
performance.

### Enum Definitions

``` rust
enum Option<T> {
    Some(T),
    None,
}

enum Result<T, E> {
    Ok(T),
    Err(E),
}
```

### Monomorphization

Rust perform monomorphization of the code using generics at compile
time. Monomorphization is the process of turning generic code into
specific code by filling in the concrete types that are used when
compiled. In this process, the compiler looks at all the places where
generic code is called and generates code for the concrete types the
generic code is called with. When the code runs, it performs just as it
would if we had duplicated each definition by hand. The process of
monomorphization makes Rust's generics extremely efficient at runtime.

## Traits

A trait defines the functionality a particular type has and share with
other types. We can use traits to define shared behavior in an abstract
way. We can use *trait bounds* to specify ttat a generic type can be any
type that has certain behaviou. Traits are similar to a feature often
called interfaces in other languages, although with some differences.

## Lifetimes

Lifetimes are another kind of generic. Lifetimes ensure that references
are valid as long as we need them to be. Every reference in Rust has a
lifetime, which is the scope for which that reference is valid. Most of
the time, lifetimes are implicit and inferred, just like most of the
time, types are inferred. We must annotate types only when multiple
types are possible. In a similar way, we must annotate lifetimes when
the lifetimes of references could be related in a few different ways.
Rust requires us to annotate the relationships using generic lifetime
parameters to ensure the actual references used at runtime will
definitely be valid.

### Lifetime Annotation Syntax

Lifetime annotations don't change how long any of the references live.
Rather, they descive the relationships of the lifetimes of multiple
references to each other without affecting the lifetimes. Just as
functions can accept any type when the signature specifies a generic
type parameter, functions can accept references with any lifetime by
speicifying a generic lifetime parameter.

### Generic Type Parameters, Trait Bounds, and Lifetimes Together

``` rust
use std::fmt::Display;

fn longest_with_an_announcement<'s, T>(
    x: &'a str,
    y: &'a str,
    ann: T,
) -> &'a str
where
    T: Display,
{
    println!("Announcement! {ann}");
    if x.len() > y.len() {
        x
    } else {
        y
    }
}
```

## Automated test code

Rust's testing features provide a way to specify how code should
function to ensure it continues to work as you expect, even as you make
changes. Unit tests exercise different parts of a library separately and
can test private implementation details. Integration tests check that
many parts of the library work together correctly, and they use the
library's public API to test the code in the same way external code will
use it. Even though Rust's type system and ownership rules help prevent
some kinds of bugs, tests are still important to reduce logic bugs
having to do with how your code is expected to behave.

## Closure

Rust's closures are anonymous funcitons you can save in a variable or
pass as arguments to other functions. You can create the closure in one
place and then call the closure elsewhere to evaluate it in a different
context. Unlike functions, closures can capture values from the scope in
which they're defined. We'll demonstrate how these closure features
allow for code reuse and behavior customization.

There are more differences between functions and closures. Closures
don't usually require you to annotate the types of parameters or the
return value like fn functions do. Type annotations are required on
functions because the types are part of an explicit interface exposed to
your users. Defining this interface rigidly is important fo ensuring
that everyone agrees on what types of values a function uses and
returns. Closures, on the other hand, aren't used in an exposed
interface like this: they're stored in variables and used without naming
them and exposing them to users of our library.
