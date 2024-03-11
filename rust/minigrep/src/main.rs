use std::env;
use std::process;

use minigrep::Config;

fn main() {
    // Collects command line argument and store it in a vector
    let args: Vec<String> = env::args().collect();
    //dbg!(args);
    
    //let (query, file_path) = parse_config(&args);
    //let config = parse_config(&args);
    //let config = Config::new(&args);
    let config = Config::build(&args).unwrap_or_else(|err| {
        println!("Problem parsing arguments: {err}");
        process::exit(1);
    });
    //println!("Searching for {}", config.query);
    //println!("In file {}", config.file_path);

    /*
    let contents = fs::read_to_string(config.file_path)
        .expect("Should have been able to read the file");
    println!("With text:\n{contents}");
    */
    if let Err(e) = minigrep::run(config) {
        println!("Application error: {e}");
        process::exit(1);
    }
}

/*
 * This function has been moved to Config constructor
fn parse_config(args: &[String]) -> Config {
    let query = args[1].clone();
    let file_path = args[2].clone();
    //println!("Searching for {}", query);
    //println!("In file {}", file_path);
    Config { query, file_path }
}
*/
