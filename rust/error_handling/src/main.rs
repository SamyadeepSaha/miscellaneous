use std::fs::File;
use std::io::{self, ErrorKind, Read};
use std::net::IpAddr;

fn read_username_from_file() -> Result<String, io::Error> {
    // ? operator replaces the match expression
    // let mut username_file = File::open("hello.txt")?;
    let username_file_result = File::open("hello.txt");
    let mut username_file = match username_file_result {
        Ok(file) => file,
        Err(e) => return Err(e),
    };
    let mut username = String::new();
    // username_file.read_to_string(&mut username)?;
    // Ok(username)
    match username_file.read_to_string(&mut username) {
        Ok(_) => Ok(username),
        Err(e) => Err(e),
    }
    /* More sorter code for doing above work
    let mut username = String::new();
    File::open("hello.txt")?.read_to_string(&mut username)?;
    Ok(username)
    */
}

fn main() {
    //panic!("crash and burn");

    /* Invalid index
    let v = vec![1, 2, 3];
    v[99];
    */

    /*
    let greeting_file_result = File::open("hello.txt");
    let greeting_file = match greeting_file_result {
        Ok(file) => file,
        Err(error) => match error.kind() {
            ErrorKind::NotFound => {
                match File::create("hello.txt") {
                    Ok(fc) => fc,
                    Err(e) => panic!("Problem creating the file: {:?}", e),
                }
            }
            other_error => {
                panic!("Problem opening the file: {:?}", error);
            }
        },
    };
    */

    //let greeting_file = File::open("hello.txt").unwrap();
    //let greeting_file = File::open("hello.txt").expect("hello.txt should be included in this project");

    let read_username_result = read_username_from_file();

    let home: IpAddr = "127.0.0.1"
        .parse()
        .expect("Hardcoded IP address should be valid");
}
