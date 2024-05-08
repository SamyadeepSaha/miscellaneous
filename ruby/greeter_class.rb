class Greeter
  def initialize(name="World")
    @name = name
  end
  def welcome
    puts "Hi #{@name}..."
  end
  def farewell
    puts "Bye #{@name}!"
  end
end

gr = Greeter.new("Tintin")
gr.welcome
gr.farewell
