# Minishell

<img src="https://cameronnokes.com/images/bash.png" width="450" />

## 🐚 About the Project

**Minishell** is one of the most challenging and mind-bending projects of the 42 curriculum.  
Its goal: build a fully functional **mini Bash shell**, capable of parsing and executing commands just like a real terminal.

This was by far my **largest and most complex project** so far at 42.  
I developed it in partnership with **[João Muñoz](https://github.com/jomunoz42)** 👥  
If you want to check all commits or explore the full development history, the complete project is available here: **[link](https://github.com/jomunoz42/minishell)**.

---

## 🧠 What I Learned

- Building a **real interactive shell**: prompt, input reading, processing, and execution.  
- Working deeply with **process management**:  
  - `fork`, `execve`, `wait`, `waitpid`, exit statuses  
- Writing a **robust parser** supporting:
  - single `'` and double `"` quotes  
  - environment variable expansion  
  - command splitting  
  - token classification  
- Implementing:
  - **Pipes** (`|`)  
  - **Redirections** (`>`, `>>`, `<`, `<<`)  
  - **Heredoc** handling  
  - **Built-ins** (`cd`, `echo`, `pwd`, `env`, `export`, `unset`, `exit`)  
- Managing **signals** (`CTRL+C`, `CTRL+D`, `CTRL+\`) like a real shell.  
- Ensuring **memory safety**, avoiding leaks while juggling complex data structures.  
- Structuring a large codebase cleanly, modularly, and efficiently.

---

## ⚙️ Features Implemented

### ✅ Core Features
- Interactive prompt with real shell behavior  
- Custom lexer + parser for command processing  
- Execution engine with:
  - pipes  
  - redirections  
  - heredoc  
  - path resolution  
- Full set of required built-ins  
- Environment variable support  
- Clean and consistent error handling  
- Precise signal behavior  
- No memory leaks (even with heredocs 👀)

---

## 🖥️ How to Use

Clone the repository and compile:

```bash
git clone git@github.com:PedroLouzada/42-MiniShell.git
cd minishell
make
```

### ▶️ Run the shell

```bash
./minishell
```

Once inside, you can use it like a simplified Bash:

```
minishell$ echo "hello world"
minishell$ ls -l | grep txt > output.txt
minishell$ export USERNAME=Pedro
minishell$ cat << EOF
```

---

## 🔍 Shell Rules & Behavior

- Commands support pipes and chaining.  
- Redirections modify stdin/stdout as expected.  
- Variable expansion follows Bash-like behavior.  
- Each command runs in its own process (except built-ins executed in the parent).  
- Heredoc handles delimiter parsing and signal interruptions.  
- Proper management of exit codes for command chaining.

---

## 🚀 Future Improvements

- Add support for more advanced Bash features (&&, ||, wildcard expansion…).  
- Improve heredoc efficiency and edge-case handling.  
- Implement a more powerful tokenizer with grammar rules.  
- Add unit tests or integration testing for the parser.

---

## 💡 Final Thoughts

Minishell was by far the most **intensive, complex, and rewarding** project I've tackled at 42 so far.  
It taught me how a shell really works under the hood — from parsing to process management — and pushed my understanding of **systems programming** to a whole new level.

If you're starting Minishell soon… brace yourself  
It’s a wild mix of logic, debugging, and low-level magic ⚙️✨  
But it's also one of the most satisfying projects you’ll ever complete.

---

## 📬 Contact

Feel free to reach out:

[GitHub](https://github.com/PedroLouzada)
