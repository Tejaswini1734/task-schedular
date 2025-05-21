from collections import Counter

def leastInterval(tasks, n):
    freq = list(Counter(tasks).values())
    max_freq = max(freq)
    max_count = freq.count(max_freq)
    
    part_count = max_freq - 1
    part_length = n - (max_count - 1)
    empty_slots = part_count * part_length
    available_tasks = len(tasks) - max_freq * max_count
    idles = max(0, empty_slots - available_tasks)
    
    return len(tasks) + idles