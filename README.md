# Libft

This project is the very first project as a student at 42. You will need to recode a few functions of the C standard library as well as some other utility functions that you will use during your whole cursus.
Your functions will have the same prototypes and implement the same behaviors as the originals. They must comply with the way they are defined in their man. The only difference will be their names. They will begin with the ’ft_’ prefix. For instance, strlen becomes ft_strlen.


# Better To Check Before Push
- If a function doesn't need include header file, then DOES NOT include. (eg, ft_bzero.c, ft_isascii.c)
- Always check if your shcool header is correct or not in each .c file before push it to Git. Sometimes we will edit a new function in the copy of another function, in this case you need to remember to update the school header file to make sure the funciton name is matching correctly.
- For the 'void * str' type of argements, pay attention to cast it into which type, 'char', 'unsigned char', or others.
- Check the libft.h file, only include the necessary libraries. And make sure you know why you include the library, what it is for.
- Add "_bonus" to each bonus .c files. For example, ft_lstmap_bonus


# Makefile
- Check the name of the file is using uppcase 'M', not lowercase 'm'. It should be "Makefile".
- Double check if you Makefile will relink. Relink  means you already have an existent and uptodate library, you try to make it again without changeing anything, the command will still execute. The correct response should be showing "make: Nothing to be done for 'all'", "make: nothing to be done for 'bonus'."


# Suggestions
- Do the bonus part, it is not too difficult.
- Test your functions by yourself before using other testing tools.


# Link To libft Tester
https://github.com/xicodomingues/francinette

Note: remember using command 'paco --strict' to test your functions too.


# My Libft Results
<img width="837" alt="Screen Shot 2024-05-28 at 7 52 54 AM" src="https://github.com/Sherry5Wu/libft/assets/132613292/c66d9acc-eed6-40a0-8eb2-7ba68e38c427">
