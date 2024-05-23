In this question, the coordinators want to know the minimum number of applicants that could be called for secretary interviews. The input given is $n k$ $a_1 a_2 a_3 a_4$ $b_1 b_2 .. b_n$, where $n$ is the number of applicants, $k$ is the minimum final score to qualify, $a$ is an array which consists of grading strictness of the four coordinators, and $b$ is an array of raw scores of the applicants.

Each coordinator has to check an equal number of applicants (thus $n$ is guaranteed to be a multiple of 4). When a coordinator with grading strictness $a_i$ grades an applicant with raw score $b_j$, then their final score is $\frac{b_j}{a_i}$.

So, the coordinators have to be assigned to applicants in such a way that the applicants whose final score $\geq k$ is minimum.

My logic for the solution is that I have sorted both $a$ and $b$ arrays. Then I created 4 new arrays of size $n$ and stored in them the final score if a particular coordinator grades all the applicants.

Then I did brute force, iterating from the last index to the first index of all the arrays. At each step, I checked if the coordinator with the least grading strictness could be assigned to the applicant with the higher score. If not, then check for the second least strict and so on (check if the final score $\geq k$).

The time complexity of my algorithm mostly involves the sorting part, so it will be $O(N \log N)$.
