/*
* a simple 16-bit microprocessor simulates basic reg operations,memory access
* input file instructions.txt file handle
* memory 64 kb,byte addressable memory(consider 1 byte =1int)
* registers: AX,BX,CX,DX
* instructions: MOV,ADD,SUB,MUL,DIV,LOAD,HALT
*/
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <map>

using namespace std;

class EmulatorMP {
	map<string, int> registers;
	vector<int> memory;
	vector<string> instructions;
	int PC;

public:
	EmulatorMP() {
		PC = 0;
		memory.resize(65536, 0);
		registers["AX"] = 0;
		registers["BX"] = 0;
		registers["CX"] = 0;
		registers["DX"] = 0;
	}

	void fileInstructions(const string& filename) {
		ifstream fileIn(filename);
		string line;
		while (getline(fileIn, line)) {
			if (!line.empty())
			{
				instructions.push_back(line);
			}
		}
		fileIn.close();
	}

	int getValue(const string& operand) {
		if (operand[0] == '[') {
			int addr = stoi(operand.substr(1,operand.length()-2));
			return memory[addr];
		}
		if (registers.find(operand) != registers.end())
			return registers[operand];
		return stoi(operand);
	}
	
	void setRegister(const string& reg, int value) {
		if (registers.find(reg) != registers.end())
			registers[reg] = value;
	}

	void add(const string& reg1, const string& reg2) {
		registers["AX"] = getValue(reg1) + getValue(reg2);
	}

	void sub(const string& reg1, const string& reg2) {
		registers["AX"] = getValue(reg1) - getValue(reg2);
	}

	void mul(const string& reg1, const string& reg2) {
		registers["AX"] = getValue(reg1) * getValue(reg2);
	}

	void divide(const string& reg1, const string& reg2) {
		int divisor = getValue(reg2);
		if (divisor != 0)
			registers["AX"] = getValue(reg1) / divisor;
	}

	void display() {
		for (auto& reg : registers)
			cout << reg.first << " = " << reg.second << endl;
		for (int i = 0; i < 16; ++i)
			cout << "[" << i << "] = " << memory[i] << endl;
	}
	void mov(const string& dest, const string& src) {
		if (dest[0] == '[') 
		{
			int addr = stoi(dest.substr(1, dest.length()-2));
			memory[addr] = getValue(src);
		}
		else {
			setRegister(dest, getValue(src));
		}
	}

	void execute() {
		
		while (PC < instructions.size()) 
		{
			string inst = instructions[PC];
			if (inst == "HLT") break;

			size_t space = inst.find(' ');
			string cmd = inst.substr(0, space);
			string  args= inst.substr(space + 1);

			size_t commaPos = args.find(',');
			string op1 = args.substr(0, commaPos);
			string op2 = args.substr(commaPos + 1);

			if (cmd == "MOV")
			{
				mov(op1, op2);
			}
			else if (cmd == "ADD")
			{
				add(op1, op2);
			}
			else if (cmd == "SUB")
			{
				sub(op1, op2);
			}
			else if (cmd == "MUL")
			{
				mul(op1, op2);
			}
			else if (cmd == "DIV")
			{
				divide(op1, op2);
			}

			PC++;
		}

		display();
	}
};

int main() {
	EmulatorMP emulator;
	emulator.fileInstructions("instructions.txt");
	emulator.execute();
	return 0;
}

