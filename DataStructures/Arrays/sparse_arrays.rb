=begin
Author: Onel Harrison

HackerRank: Data Structures > Arrays > Sparse Arrays
=end

strings = []

number_of_strings = gets.strip.to_i
number_of_strings.times do 
  string = gets.strip
  strings.push(string)
end

number_of_queries = gets.strip.to_i
number_of_queries.times do 
  query = gets.strip
  puts strings.count(query)
end