Linux 命令:

pwd : 查看当前所在目录
cd  :　不带参数则进入用户主目录
ls  :　列出当前目录下所有内容
ls -la : 列出当前目录下所有内容,包括隐藏文件
mv source target

mv /c/Desktop/.../Python /c/Desktop/.../learn/


git　相关命令:

$git pull (拉取远程更新)
$git add C++/G 
$git status 列出当前的本地变更
$git commit -a -m 'comment' ( -a 所有的, -m 跟注释)
$git push origin master 
$git checkout -- filename 恢复针对此文件的所有更改.
$git log 查看所有的commit的历史记录
$git diff 查看变更

NOTE: don't run 'git init' in the sub folder.

tips: update .gitignore to ignore files you don't want to commit.

$git remote add origin https://github.com/Varian1127/Python.git
