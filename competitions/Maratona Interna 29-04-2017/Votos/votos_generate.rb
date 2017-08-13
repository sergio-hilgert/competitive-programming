def generate_city(n_min, n_max, i_min, i_max)
  n = rand(n_min..n_max)
  cities = []
  (0...n).each do |q|
    cities << rand(i_min..i_max)
  end

  "#{n}\n#{cities.join(' ')}\n"
end

def generate_test_file_heredoc(t, n_min, n_max, i_min, i_max)
  tests = ""
  (0...t).each do |test|
    tests += generate_city(n_min, n_max, i_min, i_max)
  end
  <<-HEREDOC
#{t}
#{tests}
  HEREDOC
end

File.open('votos1.in', 'w') do |file|
  file.write(generate_test_file_heredoc(2, 3, 10, 0, 100))
end

File.open('votos2.in', 'w') do |file|
  file.write(generate_test_file_heredoc(4, 3, 100, 0, 1000))
end

File.open('votos3.in', 'w') do |file|
  file.write(generate_test_file_heredoc(8, 300, 1000, 100, 10000))
end

File.open('votos4.in', 'w') do |file|
  file.write(generate_test_file_heredoc(16, 3000, 10000, 1000, 100000))
end

File.open('votos5.in', 'w') do |file|
  file.write(generate_test_file_heredoc(32, 5000, 10000, 5000, 1000000))
end

File.open('votos6.in', 'w') do |file|
  file.write(generate_test_file_heredoc(128, 8000, 10000, 100000, 1000000))
end
