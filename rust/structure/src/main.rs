// Example of struct
struct User {
    active: bool,
    username: String,
    email: String,
    sign_in_count: u64,
}

/*
// Following struct of User will generate an error.
struct User {
    active: bool,
    username: &str,
    email: &str,
    sign_in_count: u64,
}
// The compiler will complain that it needs lifetime
// specifiers.
*/

fn build_user(email: String, username: String) -> User {
    User {
        active: true,
        username: username,
        email: email,
        sign_in_count: 1,
    }
}

#[derive(Debug)]
struct Rectangle {
    width: u32,
    height: u32,
}

fn area(rectangle: &Rectangle) -> u32 {
    rectangle.width * rectangle.height
}

impl Rectangle {
    fn area(&self) -> u32 {
        self.width * self.height
    }

    // Note that we can choose to give a method the
    // same name as one of the struct's fields.
    fn width(&self) -> bool {
        self.width > 0
    }
}

impl Rectangle {
    fn can_hold(&self, other: &Rectangle) -> bool {
        self.width > other.width &&
            self.height > other.height
    }

    // Constructor
    fn square(size: u32) -> Self {
        Self { width: size, height: size, }
    }
}

fn main() {
    let user1 = User {
        active: true,
        username: String::from("someusername123"),
        email: String::from("someone@example.com"),
        sign_in_count: 1,
    };
    let user2 = User {
        email: String::from("another@example.com"),
        ..user1
    };

    let rect1 = Rectangle {
        width: 30,
        height: 50,
    };
    println!("rect1 is {:?}", rect1);
    println!("rect1 is {:#?}", rect1);
    println!("The area of the rectangle is {} squar pixels.",
        area(&rect1));

    let scale = 2;
    let rect2 = Rectangle {
        width: dbg!(30 * scale),
        height: 50,
    };
    dbg!(&rect2);
    println!("The area of the rectangle is {} squar pixels.",
        rect2.area());

    // Rust compiler knows we mean the method width with
    // parentheses.
    // When we don't use parentheses, we mean the field
    // width.
    if rect2.width() {
        println!(
            "The rectangle has a nonzero width; it is{}",
            rect1.width
        );
    }
    
    let rect3 = Rectangle {
        width: 30,
        height: 50,
    };
    let rect4 = Rectangle {
        width: 10,
        height: 40,
    };
    let rect5 = Rectangle {
        width: 60,
        height: 45,
    };
    println!(
        "Can rect3 hold rect4? {}",
        rect3.can_hold(&rect4));
    println!(
        "Can rect3 hold rect5? {}",
        rect3.can_hold(&rect5));

    // Namespaced function
    let sq = Rectangle::square(3);
    println!("sq: {:?}", sq);
}
