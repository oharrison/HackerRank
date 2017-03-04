=begin
Author: Onel Harrison

HackerRank: Data Structures > Queues > Queue using Two Stacks
=end

class Queue
  def initialize
    @right_stack = []
    @left_stack = []
  end
    
  def enqueue(item)
    @left_stack.push(item)
  end
    
  def dequeue
    transfer_to_right if @right_stack.empty?
    @right_stack.pop unless @right_stack.empty?
  end
    
  def peek_front
    return @right_stack[-1] unless @right_stack.empty?
    transfer_to_right and @right_stack[-1]
  end
        
  private
    
  def transfer_to_right
    until @left_stack.empty? do
      @right_stack.push(@left_stack.pop)
    end
    return true
  end     
end

trials = gets.strip.to_i
queue = Queue.new

trials.times do
  query = gets.strip.split(' ')
  command = query.first
  if command == '1'
    item = query.last
    queue.enqueue(item)
  elsif command == '2'
    queue.dequeue
  elsif command == '3'
    puts queue.peek_front
  end
end