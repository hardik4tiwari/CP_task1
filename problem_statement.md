# Coordinators Conundrum

The Programming Club (P'Club) at IIT Kanpur had recently concluded with its Secretary Recruitment Tasks. A total of `n` applicants submitted the tasks. The Performance of the Applicants has been auto-graded by a suitable Testing Software, but the Coordinators (Divyansh, Burhanuddin, Hardik, Yash) are unhappy with the Raw Scores and decide to regrade the performance. But the Problem is there are too many tasks to grade, so the Coordinators come up with an idea to ease the process.

The 4 Coordinators decide to grade an equal number of applicants. Each Coordinator has a Grading Strictness `a_i`. If a coordinator with Grading Strictness `a_i` grades a particular Applicant (raw score `b_j`), then his final score is `b_j / a_i`. An applicant can qualify for the Secretary interview if his/her final score is greater than or equal to `k`.

The Coordinators want to know the minimum number of Applicants that could be called for Secretary Interviews.

It is Guaranteed that `n` is a multiple of 4.

## Input

Each test consists of multiple test cases. The description of each test case follows:

- The first line of each test case contains two integers `n` (`1 ≤ n ≤ 2 × 10^5`) — the length of the array `b` (the number of Applicants) and `k` (`1 ≤ k ≤ 10^5`) — the final qualifying score.
  
- The second line of each test case contains 4 integers `a_1, a_2, a_3, a_4` (`1 ≤ a_i < 10^9`) — the grading strictness of the Coordinators (Divyansh, Hardik, Burhanuddin, Yash).
  
- The third line of each test case contains `n` integers `b_1, b_2, ..., b_n` (`0 ≤ b_i < 10^18`) — the raw scores of the Applicants.

It is guaranteed that the sum of `n` over all test cases doesn't exceed `2 × 10^5`.

## Output

For each test case, print one integer — the minimum number of applicants called for Interview.

## Example

### Input
1 12
3 4
1 2 3 4 5 6 7 8 9 10 11 12

### Output
1

### Explanation
In this example:

- `a_1` can take applicants with scores {1, 2, 12}.
- `a_2` can take applicants with scores {3, 4, 5}.
- `a_3` can take applicants with scores {6, 7, 8}.
- `a_4` can take applicants with scores {9, 10, 11}.

The final scores will be:

- `a_1`: {1, 2, 12}
- `a_2`: {1.5, 2, 2.5}
- `a_3`: {2, 2.33, 2.67}
- `a_4`: {2.25, 2.5, 2.75}

Only one applicant has a final score greater than or equal to 3. Therefore, the minimum number of applicants called for the interview is 1.

## Constraints

- `1 ≤ t ≤ 10^4`
- `1 ≤ n ≤ 2 × 10^5`
- `1 ≤ k ≤ 10^5`
- `1 ≤ a_i < 10^9`
- `0 ≤ b_i < 10^18`
