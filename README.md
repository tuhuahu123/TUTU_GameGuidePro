# GGP 游戏指南插件

GGP 游戏指南插件为 Unreal Engine 项目提供了一个简单且高效的方式来显示游戏内教程，包括文本消息、图片和视频教程。通过富文本装饰器和小部件，您可以灵活地展示多种类型的教程内容，并支持按钮交互和视频播放。

## 核心功能

- **富文本装饰器**：支持动态加载图片并将其嵌入到文本中。
- **多种教程类型**：包括文本消息教程和视频教程。
- **互动功能**：支持按钮交互，允许用户按住按钮来控制视频播放进度。
- **自定义内容**：可以根据需要动态更新教程文本和视频。

## 如何使用插件

### 1. 添加图片资源

进入 `DT_PC_Input` 文件夹，并将您想要显示的图片添加到该文件夹中。

### 2. 配置 GGP 装饰器

在 `GGP_UI` 部分配置 `GGP_Decorator`，您可以在其中添加和自定义图片资源。这样您就可以在富文本块中显示这些图片。

### 3. 设置教程小部件

主小部件 `UGGP_Widget` 管理教程的显示。您可以在其中使用以下功能：

- **显示文本教程**：通过 `ShowMessageTutorial` 函数显示文本教程。
- **显示视频教程**：通过 `ShowModalTutorial` 函数显示视频教程。
- **按钮交互**：使用按钮控件按住按钮时，可以展示视频教程的进度。

### 4. 调用相关函数

- **显示文本教程**：调用 `ShowMessageTutorial(FText InContent)`，传入要显示的文本内容。
- **显示视频教程**：调用 `ShowModalTutorial(FName InTitle, FText InContent, UObject* InMedia)`，传入标题、内容和视频媒体。

### 5. 调整图片大小

`UGGP_Decorator` 中的 `RelativeImageScale` 属性允许您调整图片相对于文本的缩放比例，以使其显示更加美观。

### 6. 控制进度条

如果使用视频教程，进度条将自动显示。您可以通过设置小部件中的 `ModalApprovalHoldTime` 来控制进度条的行为。

## 函数说明

- **ShowMessageTutorial(FText InContent)**：显示一条文本教程。
- **HideTurorial()**：隐藏当前教程。
- **UpdateMessageTutorialText(FText NewContent)**：更新文本教程内容。
- **ShowModalTutorial(FName InTitle, FText InContent, UObject* InMedia)**：显示一个视频教程，包含标题、内容和视频媒体。
- **UpdateModalTutorialText(FText NewContent)**：更新视频教程的文本内容。
- **SetUpModal(float InHoldTime)**：设置按钮按住时的进度条控制时间。

## 类概述

- **UGGP_Decorator**：该类装饰富文本块，并嵌入图片。
  - `FindImageBrush`：根据给定的ID查找并返回对应的图片。
  - `CreateDecorator`：为富文本块创建图片装饰器。

- **UGGP_Widget**：该类管理消息和视频教程的显示。
  - 支持显示和隐藏教程消息，管理视频播放和进度条。

## 系统要求

- Unreal Engine 4.XX 或更高版本。
- 项目中需要有相关的媒体文件（图片和视频），并放置在相应的目录中。

## 安装方法

1. 下载或克隆该仓库。
2. 将 `GGP_GameGuidePro` 文件夹复制到您的 Unreal Engine 项目的 `Plugins` 目录中。
3. 构建项目并在项目设置中启用插件。

## 插件界面预览

以下是插件界面的一些截图，展示了插件的使用效果和界面样式：

- **局内显示**  
  ![局内显示](F:/TUTU_GameGuidePro/images/局内显示.png)

- **插件样式**  
  ![插件样式](F:/TUTU_GameGuidePro/images/插件样式.png)

- **蓝图介绍**  
  ![蓝图介绍](F:/TUTU_GameGuidePro/images/蓝图介绍.png)

---

感谢您使用 GGP 游戏指南插件！如有任何问题，请查看文档或提交 issue。
