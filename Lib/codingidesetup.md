# Coding Enviroment Setup

sublime is the best text editor for `Competitive Programming`.  Also it is a lite weight text edito and You can use file input output so easily handel big input output.

So, for setup sublime before you need to prepar your computer for compile C/C++ code.
 ## Install C/C++ compiler :
     -[windows](https://www.youtube.com/watch?v=hCLIDph7-mU&t=342s&ab_channel=SavvyNik)

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
			"shell_cmd": "g++ -O2 -static -Wno-unused-result -std=c++17 -DONLINEJUDGE \"${file}\" -o \"${file_path}/${file_base_name}\" && \"${file_path}/${file_base_name}\""
		}
	]
}

```
`Al most done!`

3 . Now Save this file and remember the name of file it will need in step 7 . and the file extension will be `.sublime-build`

4 . Now Creat a Folder. And Make `.cpp` file and two `.txt` file. Make sure that those three file in a directory.

5 . Now add your Folder in sublime. Click `File > Open Folder` and select your folder.

![Folder adding](https://raw.githubusercontent.com/anikakash/Sports-Programming/main/Lib/pic/fileadd.gif)
##### When your adding a file in a stection then instantly save this file in that section by clicking `ctr+s`

 6 .  Now Past this is in your `.cpp` file

 ```cpp
 #include<bits/stdc++.h>
using namespace    std;

int main(){

   #ifdef ONLINEJUDGE
       clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

       //Your Code

  #ifdef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif

   return 0;
}
 ```

7 . now click `Tools > Build System > select file which is create in step 3`. Now write a input and output code and save input in input file.

8 . press `ctrl + shift + B` and a pop up will bring your sublime click one which has `-Run` part. `WOW` See you can successfully Generate your output.

9 . Now whenever you need to compile your code just click `ctrl + B` and your will complie and generate output corresponding your input.
