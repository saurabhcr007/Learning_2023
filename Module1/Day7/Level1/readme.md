# Level1


** Question 1 **

*File Copy:* <br/>
Write a C program to copy a file using file operations<br/>

[Solution1.c](https://github.com/saurabhcr007/Learning_2023/blob/main/Module1/Day7/Level1/Question1.c)


** Question 2 **

*Case Handler:*<br/>
Write a C program to copy a file by considering the user option to handle the text case<br/>
> -u, to change file content to Upper Case<br/>
> -l, to change file content to Lower Case<br/>
> -s, to change file content to Sentence Case<br/>
if no options are passed then it should be a normal copy<br/>

Example, say we have a file f1 with the following content<br/>
> f1:<br/>
> -----------------------<br/>
> This is the file data<br/>
> testing Case copy<br/>
> application<br/>
> -----------------------<br/>

> ./cp -s f1 f2<br/>
> f2:<br/>
> -----------------------<br/>
> This Is The Tile Data<br/>
> Testing Case Copy<br/>
> Application<br/>
> -----------------------<br/>

> ./cp -l f1 f3<br/>
> f3:<br/>
> -----------------------<br/>
> this is the tile data<br/>
> testing case copy<br/>
> application<br/>
> -----------------------<br/>

> ./cp -u f1 f4<br/>
> f4:<br/>
> -----------------------<br/>
> THIS IS THE FILE DATA<br/>
> TESTING CASE COPY<br/>
> APPLICATION<br/>
> -----------------------<br/>

> ./cp f1 f5<br/>
Should perform a normal copy<br/>

[Solution2.c](https://github.com/saurabhcr007/Learning_2023/blob/main/Module1/Day7/Level1/Question2.c)


** Question 3 **

Write a function to swap 2 members in different indexes (based on user input) in the above array of structures<br/>

[Solution3.c](https://github.com/saurabhcr007/Learning_2023/blob/main/Module1/Day7/Level1/Question3.c)
