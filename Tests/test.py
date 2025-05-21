from solution import leastInterval

tests = [
    (['A','A','A','B','B','B'], 2, 8),
    (['A','A','A','B','B','B'], 0, 6),
    (['A','A','A','A','A','A','B','C','D','E','F','G'], 2, 16),
    (['A','B','A'], 3, 5),
    (['A','B','A','B'], 2, 5),  
    (['A'], 0, 1),
    (['A','A','A','B','B','B','C','C','D','D'], 2, 10),
    (['A','B','C','D','E','F'], 2, 6),
    (['A','A','A','B','B','B','C','C','C'], 1, 9)
]

for i, (tasks, n, expected) in enumerate(tests):
    result = leastInterval(tasks, n)
    assert result == expected, f"Test {i+1} Failed: Expected {expected}, Got {result}"

print("✅ All Tests Passed!")
