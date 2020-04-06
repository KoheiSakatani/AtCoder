input_line = gets().to_i

input_str = gets()

sum = 0
#charsメソッドで文字列を1文字ずつ取得
#nilも入るので注意
input_str.chars do |is|
  case is
  when "A"
    grade = 4
  when "B"
    grade = 3
  when "C"
    grade = 2
  when "D"
    grade = 1
  when "F"
    grade = 0
  when "\n"
    break;
  end
  sum += grade;
end
puts sum.to_f / input_line.to_f
