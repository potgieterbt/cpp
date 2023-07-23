// Simple journal entry cli
#include <fstream>
#include <iostream>
#include <string>

void add_entry(std::string file);
std::string read_entry(std::string file);

int main(int argc, char *argv[]) {
  int choice;
  std::string filein = "journal.txt";
  std::cout << "Input 1 to add a new entry or 0 to read an entry for a line in "
               "the file: ";
  std::cin >> choice;
  if (choice == 1) {
    add_entry(filein);
  } else {
    std::string entry = read_entry(filein);
    std::cout << entry << "\n";
  }
  return 0;
}

void add_entry(std::string file) {
  std::string textin;
  std::cout << "Input the text for the journal entry: ";
  std::cin >> textin;
  std::ofstream ofile(file, std::ios_base::app);
  ofile << textin << "\n";
  ofile.close();
}

std::string read_entry(std::string file) {
  int line;
  std::cout << "Input the entry number: ";
  std::cin >> line;
  std::ifstream ifile(file);
  std::string entry;
  int i = 0;
  while (std::getline(ifile, entry)) {
    if (i == line - 1) {
      return entry;
    }
    ++i;
  }
  return "Entry not found!";
}
