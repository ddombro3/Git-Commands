#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, string> gitCommands = {
        {"init", "Creates a new local Git repository in the current folder."},
        {"clone", "Copies (downloads) a remote repository to your local machine."},
        {"status", "Shows the current state of your working directory and staging area."},
        {"add", "Stages changed files, preparing them for the next commit."},
        {"commit", "Saves staged changes in your local repository with a message."},
        {"push", "Uploads your local commits to a remote repository (e.g., GitHub)."},
        {"pull", "Downloads and merges changes from the remote repository into your local one."},
        {"fetch", "Downloads changes from the remote repo but does not merge them yet."},
        {"merge", "Combines changes from different branches into the current branch."},
        {"branch", "Lists, creates, or deletes branches."},
        {"checkout", "Switches branches or restores files in the working directory."},
        {"log", "Displays the commit history for the repository."},
        {"diff", "Shows the differences between commits, branches, or working states."},
        {"remote", "Manages remote repositories (add, remove, list)."},
        {"reset", "Unstages changes or resets commits to a previous state."},
        {"rm", "Removes files from the working directory and staging area."},
        {"help", "Displays help information about Git commands."},
        {"exit", "Closes the program."}
    };

    cout << "=== Git Command Definitions ===" << endl;
    cout << "Type a Git command (like 'push', 'commit', etc.) or 'exit' to quit.\n" << endl;

    string input;
    while (true) {
        cout << "git> ";
        cin >> input;

        if (input == "exit") {
            cout << "Exiting..." << endl;
            break;
        }

        if (gitCommands.find(input) != gitCommands.end()) {
            cout << input << ": " << gitCommands[input] << endl << endl;
        } else {
            cout << "Unknown command. Try again." << endl << endl;
        }
    }

    return 0;
}
