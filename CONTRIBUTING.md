# Contributing Guidelines

Welcome! We're excited that you're interested in contributing to our repository. Please take a few minutes to read these guidelines and ensure that your contributions are consistent and valuable.

## Getting Started

### 1. Fork the Repository
- Fork this repository to your GitHub account by clicking on the **Fork** button in the top-right corner of the page.

### 2. Clone the Repository
- Clone the repository from your GitHub account to your local machine:

```bash
git clone https://github.com/your-username/repo-name.git
```

- Navigate to the cloned directory:

```bash
cd repo-name
```

### 3. Set Up Your Branch
- Before making changes, create a new branch to keep your work separate from the main codebase. Make sure to name your branch meaningfully (e.g., `add-solution-leetcode-two-sum`):

```bash
git checkout -b your-branch-name
```

## Solving Coding Questions

### 1. Choose a Question
- Browse the list of provided coding questions from platforms like **LeetCode**, **HackerRank**, **CodeChef**, and **NeetCode** in the `README.md` of the corresponding directory.
- Pick a question you’d like to solve and ensure it’s not already solved by checking for existing solutions.

### 2. Add Your Solution
- Write your solution to the selected problem in the corresponding language folder (e.g., `solutions/javascript`, `solutions/python`).
- Each solution should be in its own file named in the following format:
  ```
  [platform]-[question-name]-[username].extension
  ```
  Example: `leetcode-two-sum-saket.py`

### 3. Comment Your Code
- Ensure your solution is well-commented, explaining the thought process and approach for solving the problem.
- Include the problem description at the top of your file as a comment.
  
### 4. Test Your Solution
- Test your solution on the corresponding platform to ensure it runs correctly and passes all test cases.

## Pushing Your Code

### 1. Add and Commit Your Changes
- After solving the problem and testing your solution, stage your changes:

```bash
git add .
```

- Commit your changes with a descriptive commit message:

```bash
git commit -m "Added solution for [platform] - [question-name]"
```

### 2. Push to Your Forked Repository
- Push your changes to your branch on the forked repository:

```bash
git push origin your-branch-name
```

### 3. Create a Pull Request
- Once your changes are pushed, head over to the original repository and submit a Pull Request (PR) to the main branch. 
- In the Pull Request, mention the problem you solved, the platform, and a brief description of your approach.

## Pull Request Guidelines

1. **Code Format**: Ensure your code follows good practices (indentation, meaningful variable names, etc.).
2. **Commenting**: Include comments that explain your approach.
3. **Tests**: Verify your solution on the respective platform and ensure all test cases pass.
4. **PR Title**: Your Pull Request title should be descriptive (e.g., `Added solution for LeetCode Two Sum`).

## Review Process
- Once you submit your PR, it will be reviewed by the maintainers. You may be asked to make some changes before it can be merged.
- After your PR is approved and merged, congratulations on your contribution!

## Communication
- If you have any questions or need help, feel free to open an issue or ask in the discussions section of the repository.

Thank you for contributing! 🎉
