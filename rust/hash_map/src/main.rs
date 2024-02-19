use std::collections::HashMap;
use rand::prelude::*;

fn main() {
    let mut scores = HashMap::new();

    scores.insert(String::from("Blue"), 10);
    scores.insert(String::from("Yellow"), 50);

    let team_name = String::from("Blue");
    let score = scores.get(&team_name).copied().unwrap_or(0);
    println!("{score}");

    for(key, value) in &scores {
        println!("{key}: {value}");
    }

    /* Hash maps and Ownership */
    let field_name = String::from("Favorite color");
    let field_value = String::from("Blue");

    let mut map = HashMap::new();
    map.insert(field_name, field_value);
    /* field_name and field_value are invalid at this point */

    /* Overwriting a Value */
    scores.insert(String::from("Blue"), 20);
    scores.insert(String::from("Blue"), 25);
    println!("{:?}", scores);

    /* Adding a Key and Value only if a Key isn't present */
    scores.entry(String::from("Yellow")).or_insert(40);
    scores.entry(String::from("Red")).or_insert(30);
    println!("{:?}", scores);

    /* Updating a Value based on the old Value */
    let text = "hello world wonderful world";
    let mut map = HashMap::new();
    for word in text.split_whitespace() {
        let count = map.entry(word).or_insert(0);
        *count += 1;
    }
    println!("{:?}", map);


    /*************/
    /* Esercises */
    /*************/

    /*
     * Given a list of integers, use a vector and return the
     * median (when sorted, the value in the middle position)
     * and mode (the value that occurs most often; a hash
     * map will be helpful here) of the list.
     */
    let mut rng = rand::thread_rng();
    let mut nums: Vec<i32> = (1..10).collect();
    nums.shuffle(&mut rng);
    println!("{:?}", nums);
    nums.sort();
    let mid = nums.len() / 2;
    println!("Median: {}", nums[mid]);
    let mut mode_map = HashMap::new();
    for num in nums {
        let count = mode_map.entry(num).or_insert(0);
        *count += 1;
    }
    let mode = mode_map.max_by_key();
    println!("{:?}", mode);

    /*
     * Convert string to pig latin. The first consonant of
     * each word is moved to the end of the word and ay is
     * added, so first becomes irst-fay. Words that start
     * with a vowel have hay added to the end instead (apple
     * becomes apple-hay). Keep in mind the details about
     * UTF-8 encoding!
     */
    let mut st = String::from("The quick brown fox jumped over the lazy dog");
    println!("{st}");

    /*
     * Using a hash map and vectors, create a text interface
     * to allow a user to add employee names to a department
     * in a company; for example, "Add Sally to Engineering"
     * or "Add Amir to Sales." Then let the user retrieve
     * a list of all people in a department or all people in
     * the company by department, sorted alphabetically.
     */
}
