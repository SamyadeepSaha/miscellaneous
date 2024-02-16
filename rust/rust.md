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
value, which means it can represents a lot than just ASCII.
Accented letters, Chinese, Japanese and Korean, character
emojis and zero-width spaces are all valid char values in
Rust.

## Functions

Rust function definitions are also statements. And statements
do not returns values. Which is different from language like
C and Ruby.

## Module System

Rust has a number of features that allow you to manage your
code's organization, including which details are exposed,
which details are private, and what names are in each scope
in your programs. These features, sometimes collectively
referred to as the module system, include:

- **Packages** A Cargo feature that lets you build, test,
and shares crates.
- **Crates** A tree of modules that produces a library or
executable.
- **Modules and use** Let you control the organization,
scope, and privacy of paths.
- **Paths** A way of naming an item, such as a struct,
function, or module.

## Crates and Modules

Rust lets you split a package into multiple crates and a
crate into modules so you can refer to items defined in one
module from another module. You can do this by specifying
absolute or relative paths. These paths can be brought into
scope with a use statement so you can use a shorter path for
multiple uses of the item in that scope. Module code is
private by default, but you can make definitions public by
adding the pub keyword.

## Strings

Rust has only one string type in the core language, whice is
the string slice str that is usually seen in its borrowed
form &str. String slices are references to some UTF-8
encoded string data stored elsewhere. The string type, which
is provided nbyd Rust's standard library rather than coded
into the core language, is a growable, mutable, owned, UTF-8
encoded string type.
