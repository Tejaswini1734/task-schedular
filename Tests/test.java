public class SolutionTest {
    public static void main(String[] args) {
        Solution sol = new Solution();

        Object[][] tests = {
            {new char[]{'A','A','A','B','B','B'}, 2, 8},
            {new char[]{'A','A','A','B','B','B'}, 0, 6},
            {new char[]{'A','A','A','A','A','A','B','C','D','E','F','G'}, 2, 16},
            {new char[]{'A','B','A'}, 3, 3},
            {new char[]{'A','B','A','B'}, 2, 4},
            {new char[]{'A'}, 0, 1},
            {new char[]{'A','A','A','A'}, 1, 10},
            {new char[]{'A','A','A','B','B','B','C','C','D','D'}, 2, 10},
            {new char[]{'A','B','C','D','E','F'}, 2, 6},
            {new char[]{'A','A','A','B','B','B','C','C','C'}, 1, 9}
        };

        for (int i = 0; i < tests.length; i++) {
            char[] tasks = (char[]) tests[i][0];
            int n = (int) tests[i][1];
            int expected = (int) tests[i][2];
            int result = sol.leastInterval(tasks, n);
            assert result == expected : "Test " + (i+1) + " Failed: Expected " + expected + ", Got " + result;
        }

        System.out.println("All Tests Passed!");
    }
}
