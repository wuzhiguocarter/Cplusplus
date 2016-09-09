#配置git帐号
git config --global user.name "wuzhiguocarter"
git config --global user.email "1600682324@qq.com"

#生成密钥对：id_rsa和id_rsa.pub
ssh-keygen -t rsa

#将当前文件夹设置为git仓库
git init

git add .
git commit -m "xxx"

#添加远程库，并将本地库与远程库关联起来
git remote add origin git@github.com:wuzhiguocarter/Cplusplus.git
git push -u origin master

#update local repo from remote repo
git pull