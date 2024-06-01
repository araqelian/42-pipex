<h1 align="center"> 🗣 Subject &nbsp;&nbsp;&nbsp;&nbsp;pipex </h1>

<br>
<table>
  <tr>
    <td>Program &nbsp;name</td>
    <td>pipex</td>
  </tr>
  <tr>
    <td>Turn&nbsp;&nbsp; in &nbsp;files</td>
    <td>Makefile, &nbsp;*.h, &nbsp;*.c</td>
  </tr>
  <tr>
    <td>Makefile</td>
    <td>NAME,&nbsp; all, &nbsp;clean, &nbsp;fclean,&nbsp; re</td>
  </tr>
  <tr>
    <td>Arguments</td>
    <td>file1&nbsp; cmd1 &nbsp;cmd2 &nbsp;file2</td>
  </tr>
  <tr>
    <td>External &nbsp;functs.</td>
    <td>
      <ul>
        <li>open, &nbsp;close, &nbsp;read, &nbsp;write,&nbsp; malloc, &nbsp;free,&nbsp; perror, &nbsp;strerror,&nbsp; access, &nbsp;dup,<br>&nbsp; dup2,&nbsp; execve,&nbsp; exit, &nbsp;fork, &nbsp;pipe, &nbsp;unlink, &nbsp;wait, &nbsp;waitpid
        <li>ft_printf&nbsp; and &nbsp;any&nbsp; equivalent &nbsp;YOU &nbsp;coded
      </ul>
    </td>
  </tr>
  <tr>
    <td>Libft &nbsp;authorized</td>
    <td>No</td>
  </tr>
  <tr>
    <td>Description</td>
    <td>This&nbsp; project&nbsp; is &nbsp;about&nbsp; handling &nbsp;pipes.</td>
  </tr>
</table>

<br>
Your&nbsp; program&nbsp; will&nbsp; be &nbsp;executed&nbsp; as &nbsp;follows:<br>
./pipex &nbsp;file1 &nbsp;cmd1 &nbsp;cmd2 &nbsp;file2<br><br>
It &nbsp;must &nbsp;take &nbsp;4 &nbsp;arguments:<br>
<ul>
<li>file1 &nbsp;and &nbsp;file2 &nbsp;are &nbsp;file&nbsp; names.
<li>cmd1 &nbsp;and&nbsp; cmd2 &nbsp;are&nbsp; shell&nbsp; commands&nbsp; with&nbsp; their&nbsp; parameters
</ul>

<br>
<h3>Requirements</h3>
Your&nbsp; project&nbsp; must&nbsp; comply&nbsp; with&nbsp; the&nbsp; following &nbsp;rules:<br>
<ul>
<li>You&nbsp; have&nbsp; to&nbsp; turn&nbsp; in&nbsp; a &nbsp;Makefile&nbsp; which&nbsp; will &nbsp;compile &nbsp;your &nbsp;source &nbsp;files. &nbsp;It&nbsp; must &nbsp;not&nbsp;
relink.<br>
<li>You&nbsp; have&nbsp; to&nbsp; handle &nbsp;errors&nbsp; thoroughly. &nbsp;In &nbsp;no &nbsp;way &nbsp;your &nbsp;program &nbsp;should &nbsp;quit unexpectedly &nbsp;(segmentation &nbsp;fault, &nbsp;bus&nbsp; error, &nbsp;double &nbsp;free, &nbsp;and &nbsp;so &nbsp;forth).<br>
<li>Your &nbsp;program &nbsp;mustn’t&nbsp; have &nbsp;memory &nbsp;leaks.<br>
<li>If &nbsp;you &nbsp;have &nbsp;any &nbsp;doubt, &nbsp;handle &nbsp;the &nbsp;errors&nbsp; like &nbsp;the&nbsp; shell &nbsp;command:<br>
< file1 &nbsp;cmd1&nbsp; | &nbsp;cmd2&nbsp; > &nbsp;file2
</ul>

<br><br>

> [!NOTE]  
> Because of 42 School norm requirements:
> * Each function can't have more than 25 lines of code.
> * All variables are declared and aligned at the top of each function.
> * Project should be created just with allowed functions otherwise it's cheating.
