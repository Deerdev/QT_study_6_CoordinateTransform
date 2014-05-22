QT_study_6_CoordinateTransform-
===============================

坐标变换-世界坐标系

    使用了QFont改变了字体。QPainter的drawText()函数提供了绘制文本的功能。它有几种重载形式，使用其中的一种，即制定文本的坐标然后绘制。需要注意的是，这里的坐标是文字左下角的坐标(特别提醒这一点，因为很多绘图系统，比如Java2D都是把左上角作为坐标点的)！下面是运行结果：

    使用QTransform做了一个rotate变换。这个变换就是旋转，而且是顺时针旋转45度。然后使用这个变换设置了QPainter的世界坐标系，注意到QPainter是一个状态机，所以这种变换并不会改变之前的状态，因此只有第二个Hello,world!被旋转了。确切的说，**被旋转的是坐标系而不是这个文字**！请注意体会这两种说法的不同。

<img heigh="500" width="500" src="http://ww2.sinaimg.cn/mw690/6c9594a0jw1egnaijctl6j20be0c1t8s.jpg">
