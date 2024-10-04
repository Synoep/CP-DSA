# CP-DSA: Competitive Programming & Data Structures & Algorithms

Welcome to the **Git For Geeks 3.0 CP-DSA** repository! 🚀  
This repository is a curated collection of coding questions sourced from top competitive programming platforms such as **LeetCode**, **HackerRank**, **CodeChef**, and **NeetCode**. It's designed to help students and coding enthusiasts enhance their problem-solving skills in Competitive Programming and Data Structures & Algorithms by providing a centralized platform to practice and share solutions.

## 📚 Table of Contents

- [About](#about)
- [Repository Structure](#repository-structure)
- [How to Contribute](#how-to-contribute)
- [Guidelines](#guidelines)
- [Hacktoberfest Participation](#hacktoberfest-participation)
- [Maintainers](#maintainers)
- [Contact](#contact)

## 📝 About

**CP-DSA** aims to provide a diverse set of coding problems from various platforms to help learners practice and master algorithms and data structures. By solving these problems and contributing your solutions, you can:

- **Enhance Problem-Solving Skills:** Tackle a wide range of challenges that sharpen your logical and analytical abilities.
- **Build a Portfolio:** Showcase your solutions to potential employers or use them as study references.
- **Collaborate with Peers:** Engage with a community of learners to discuss approaches and optimize solutions.

## 📂 Repository Structure

The repository is organized based on the source platform and problem difficulty. Here's an overview of how the repository is structured:

```
CP-DSA/
├── LeetCode/
│   ├── Two_Sum.md
│   ├── Reverse_Integer.md
│   ├── Add_Two_Numbers.md
│   ├── Longest_Substring_Without_Repeating_Characters.md
│   └── ...
├── HackerRank/
      ├── ...
├── CodeChef/
      ├── ...
├── NeetCode/
      ├── ...
├── README.md
└── CONTRIBUTING.md
```

- **Platform Folders:** Each platform (LeetCode, HackerRank, CodeChef, NeetCode) has its own folder.
- **Difficulty/Subcategory Folders:** Within each platform, problems are categorized by difficulty levels (Easy, Medium, Hard) or specific topics/patterns.
- **Problem Files:** Each problem is documented in a Markdown file (`.md`) with a detailed description and any necessary instructions.

## 🛠️ How to Contribute

We welcome contributions from everyone! Whether you're a beginner or an experienced coder, you can contribute by solving problems and adding your solutions to this repository.

### 📋 Steps to Contribute:

1. **Fork the Repository**  
   Click the **Fork** button at the top right of this page to create your own copy of the repository.

2. **Clone Your Forked Repository**  
   Clone your forked repository to your local machine using:
   ```bash
   git clone https://github.com/your-username/CP-DSA.git
   ```

3. **Navigate to the Project Directory**  
   ```bash
   cd CP-DSA
   ```

4. **Choose a Problem**  
   Browse through the List of Questions below and select a problem you'd like to solve.

5. **Create a New Branch**  
   Create a new branch for your solution:
   ```bash
   git checkout -b solution/LeetCode/Easy/Two_Sum
   ```

6. **Add Your Solution**  
   - Navigate to the appropriate platform and difficulty folder.
   - Open the corresponding problem file (e.g., `Two_Sum.md`).
   - Add your solution code under a new section titled **Solution**. You can use code blocks to format your code.
   
   **Example:**
   ```markdown
   ## Solution

   ```javascript
   function twoSum(nums, target) {
       const map = {};
       for (let i = 0; i < nums.length; i++) {
           const complement = target - nums[i];
           if (map[complement] !== undefined) {
               return [map[complement], i];
           }
           map[nums[i]] = i;
       }
       return [];
   }
   ```
   ```

7. **Commit Your Changes**  
   ```bash
   git add .
   git commit -m "Add: Solution for Two Sum problem in JavaScript"
   ```

8. **Push to GitHub**  
   ```bash
   git push origin solution/LeetCode/Easy/Two_Sum
   ```

9. **Submit a Pull Request (PR)**  
   - Navigate to your forked repository on GitHub.
   - Click on **Compare & pull request**.
   - Provide a clear title and description for your PR, referencing the problem you solved.
   - Submit the PR for review.

### 📝 Notes:
- **Multiple Languages:** Feel free to contribute solutions in different programming languages. You can create separate folders for each language within the problem directory if desired.
- **Optimized Solutions:** Aim to write efficient and optimized code. Include time and space complexity analysis in your solution section.
- **Comments and Documentation:** Add comments to your code to explain your logic and approach. This helps others understand your solution better.

## 📏 Guidelines

To maintain consistency and quality across the repository, please adhere to the following guidelines:

### **Coding Standards**

- **Readability:** Write clean and readable code with proper indentation and naming conventions.
- **Efficiency:** Strive for optimal solutions in terms of time and space complexity.
- **Language-Specific Practices:** Follow best practices specific to the programming language you are using.

### **Documentation**

- **Problem Description:** Each problem file should contain a clear and concise description of the problem, including input and output formats, constraints, and example cases.
- **Solution Section:** Clearly separate your solution from the problem description. Use appropriate headings and code blocks for better readability.
- **Comments:** Add comments within your code to explain complex logic or important steps.

### **File Naming Conventions**

- **Problem Files:** Use descriptive names for problem files, replacing spaces with underscores and capitalizing appropriately.  
  **Example:** `Two_Sum.md`, `Reverse_Integer.md`
- **Solution Branches:** Name your branches in a way that reflects the problem and platform.  
  **Example:** `solution/LeetCode/Easy/Two_Sum`

### **Commit Messages**

- Use clear and descriptive commit messages following the format:  
  `Add: Solution for [Problem Name] in [Language]`

### **Pull Requests**

- **Title:** Use a clear and descriptive title for your PR.  
  **Example:** `Add: Solution for Two Sum problem in JavaScript`
- **Description:** Provide a brief description of your solution, including the approach and any optimizations made.
- **Reference Issues:** If applicable, reference any issues your PR addresses by using `Closes #issue_number`.


## 🎃 Hacktoberfest Participation

This repository is part of **Hacktoberfest**! To participate:

1. **Sign Up for Hacktoberfest**  
   Register on the [Hacktoberfest website](https://hacktoberfest.com) to be eligible for rewards.

2. **Contribute to CP-DSA**  
   Submit at least **4 Pull Requests (PRs)** during the month of October.

3. **Ensure Your PRs are Valid**  
   - Follow the [Contributing Guidelines](#contributing).
   - Make sure your PRs are meaningful and add value to the repository.

4. **Check Your PRs**  
   Ensure your PRs are not spam and adhere to the Hacktoberfest rules to be counted towards your participation.

Happy Hacktoberfest! 🎉

---

## 🎯 Maintainers

- **Saket Rathi* - _Technical Lead_
- **Vaishvik Jaiswal** - _Technical Co-Lead_
- **Adesh Bode** - _Technical Elite Member_
- **Ikshit Talera** - _Technical Elite Member_
- **Shamika Aney** - _Technical Elite Member_

## 📧 Contact

For any queries or suggestions, please feel free to:

- **Open an Issue:** [Issues Page](https://github.com/your-username/CP-DSA/issues)
- **Join Discussions:** [Discussions Page](https://github.com/your-username/CP-DSA/discussions)
- **Email:** your-email@example.com

We’re excited to see your contributions! Let's build a strong community of problem solvers together. 🧑‍💻

---

### Additional Tips:

1. **Problem Documentation:**  
   Each problem file (`.md`) should include:
   - **Problem Title**
   - **Platform and Problem Link**
   - **Problem Statement**
   - **Input Format**
   - **Output Format**
   - **Constraints**
   - **Sample Input and Output**
   - **Explanation**
   - **Solution** (to be filled by contributors)

2. **Solution Structure:**  
   Encourage contributors to structure their solutions with clear explanations and code snippets. For example:

   ```markdown
   ## Solution

   ### Approach
   *Describe your approach here.*

   ### Code
   ```python
   # Your Python solution here
   ```
   ```

3. **Branch Naming Convention:**  
   Suggest a consistent branch naming convention to keep the repository organized. For example:  
   `solution/LeetCode/Easy/Two_Sum`

4. **Language Folders (Optional):**  
   If you wish to support multiple programming languages, consider organizing solutions within language-specific folders.

   ```
   LeetCode/
   │   ├── Two_Sum.md
   │   └── Solutions/
   │       ├── JavaScript/
   │       │   └── Two_Sum.js
   │       ├── Python/
   │       │   └── Two_Sum.py
   │       └── ...
   ```

5. **Automated Testing (Advanced):**  
   For more advanced setups, you can integrate automated testing to validate the correctness of solutions. However, this may require additional configurations and is optional for beginners.

6. **Community Engagement:**  
   Encourage contributors to engage with each other through discussions, code reviews, and collaborative problem-solving to foster a supportive community.

By following this structured approach, your **CP-DSA** repository will serve as an excellent resource for students and coding enthusiasts to practice and excel in Competitive Programming and Data Structures & Algorithms. Good luck with your Hacktoberfest participation!
