import random

def generate_test_case():
    # Generate n, k, a1, a2, a3, a4
    n = 99999
    k = random.randint(1, 10**5)
    a1 = random.randint(1, 10**9)
    a2 = random.randint(1, 10**9)
    a3 = random.randint(1, 10**9)
    a4 = random.randint(1, 10**9)

    # Generate raw scores of the applicants
    raw_scores = [random.randint(0, 10**18) for _ in range(n)]

    # Construct the test case string
    test_case = f"{n} {k}\n{a1} {a2} {a3} {a4}\n"
    test_case += " ".join(str(score) for score in raw_scores) + "\n"

    return test_case, n

def generate_test_cases(num_cases):
    test_cases = []
    total_n = 0
    max_total_n = 2 * 10**5

    for _ in range(num_cases):
        remaining_n = max_total_n - total_n
        if remaining_n == 0:
            break
        # max_n = min(remaining_n, 2 * 10**5)
        test_case, n = generate_test_case()
        test_cases.append(test_case)
        total_n += n
    
    return test_cases

def write_test_cases(test_cases, output_file):
    with open(output_file, 'w') as f:
        f.write(f"{len(test_cases)}\n")
        for test_case in test_cases:
            f.write(test_case)

if __name__ == "__main__":
    x=int(input())
    for i in range(x):  
        t=int(input())# Desired number of test cases to generate
        output_file = f"test{i}.txt"  # Output file name
    
        test_cases = generate_test_cases(t)
        write_test_cases(test_cases, output_file)
        print(f"Generated {len(test_cases)} test cases in {output_file}")
