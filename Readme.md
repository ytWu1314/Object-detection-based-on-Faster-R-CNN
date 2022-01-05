# 实验运行说明

* 本实验代码的IDE使用的是VsCode，右键通过VsCode打开 `Code` 文件夹即可
* 为了方便老师运行检查，本项目已经跑完`train.py` 生成了50个权值文件，选出了其中一个作为`frcnn.py`  的`model_path` 的参数(使用的是ResNet，训练的损失函数值如下图所示)，运行结果具体可见`code\logs\loss_2021_12_02_13_46_18`文件夹中的文件
  ![epoch_loss_2021_12_02_13_46_18](https://github.com/ytWu1314/Object-detection-based-on-Faster-R-CNN/blob/6a4edc829a6606b6b6e5e573d1faea9980c5738f/Code/logs/loss_2021_12_02_13_46_18/epoch_loss_2021_12_02_13_46_18.png)
* 如果要完整运行整个项目，需要先运行`voc_annotation.py` ，再运行`train.py` ，修改`frcnn.py`  的`model_path` 的参数为`log`文件夹中的权值文件，运行`predict.py`，输入图片进行预测，最后运行`get_map.py`计算mAP值 



# v3版本优化说明

1. 文档不再使用Word编写，而使用 $Latex$  编写，而且使用了论文期刊的格式，优化了整体文章美观程度
2. 改进论文的书写，不再贴长篇的代码，而且更加注重自己的思考、分析、探讨，并且对两种模型都进行了实验
3. 在完成`Faster R-CNN` 模型的代码编写的基础上，运行了不同的模型，借助`华为云ModelArts`运行代码，利用了课程的资源，并且完成对于`get_map.py`的编写![HuaweiModeArts2](https://github.com/ytWu1314/Object-detection-based-on-Faster-R-CNN/blob/6a4edc829a6606b6b6e5e573d1faea9980c5738f/Huawei_ModelArts/HuaweiModeArts2.png)
   1. 使用`VGG`作为主干特征网络权重训练模型，并且求出了`mAP`![mAP_VGG](https://github.com/ytWu1314/Object-detection-based-on-Faster-R-CNN/blob/6a4edc829a6606b6b6e5e573d1faea9980c5738f/Huawei_ModelArts/mAP_VGG.png)
   2. 使用`ResNet` 作为主干特征网络权重训练模型，并且求出了`mAP`![mAP_ResNet](https://github.com/ytWu1314/Object-detection-based-on-Faster-R-CNN/blob/6a4edc829a6606b6b6e5e573d1faea9980c5738f/Huawei_ModelArts/mAP_ResNet.png)
   3. 运行结果和截图可见`Huawei_ModelArts` 文件夹
4. 制作了`gun,sword`数据集以及对`gun,sword`数据集进行了处理,训练并且求出了`VOC12+07` 数据集的`mAP`
5. 对训练结果进行了预测
6. 本项目参考了以下链接
   1. https://github.com/bubbliiiing/faster-rcnn-pytorch
   2. https://zhuanlan.zhihu.com/p/369520436
   3. [csdn链接](https://blog.csdn.net/weixin_44791964/article/details/105739918?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522163843230816780264068682%2522%252C%2522scm%2522%253A%252220140713.130102334.pc%255Fblog.%2522%257D&request_id=163843230816780264068682&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~blog~first_rank_v2~rank_v29-3-105739918.pc_v2_rank_blog_default&utm_term=Pytorch&spm=1018.2226.3001.4450)


