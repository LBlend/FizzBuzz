fn main() {
    for i in 1..101 {
        let mut output = String::from("");

        if i % 3 == 0 {
            output.push_str("Fizz");
        }

        if i % 5 == 0 {
            output.push_str("Buzz");
        }

        if output == "" {
            output = i.to_string();
        }
        
        println!("{}", output);
    }
}
