# Coding Enviroment Setup

sublime is the best text editor for `Competitive Programming`.  Also it is a lite weight text edito and You can use file input output so easily handel big input output.

1 . First Do partition your sublime screen in to 3 part. one is for your code and other two is for input and output section.

![Image of Sublime partition](https://raw.githubusercontent.com/anikakash/Sports-Programming/9e5cf4aee0fe33c4ef09d9b924baff67d1b7bc9d/Lib/pic/sbset.gif)

2 . Then click `Tools > Build System > New Build System` Now a file will be open. In that file you need to past bellow code.
```
{
	"shell_cmd": "g++ \"${file}\" -o \"${file_path}/${file_base_name}\"",
	"file_regex": "^(..[^:]*):([0-9]+):?([0-9]+)?:? (.*)$",
	"working_dir": "${file_path}",
	"selector": "source.c, source.c++",
	"variants":
	[
		{
			"name": "Run",
			"shell_cmd": "g++ -O2 -static -Wno-unused-result -std=c++17 -Danikakash \"${file}\" -o \"${file_path}/${file_base_name}\" && \"${file_path}/${file_base_name}\""
		}
	]
}


``` 
