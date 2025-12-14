# STM32

这是一个STM32项目仓库，包含标准的项目文件夹结构。

## 文件夹结构 / Folder Structure

```
STM32/
├── Core/
│   ├── Inc/          # 应用程序头文件 / Application header files
│   └── Src/          # 应用程序源文件 / Application source files
├── Drivers/
│   ├── STM32F4xx_HAL_Driver/
│   │   ├── Inc/      # HAL驱动头文件 / HAL driver header files
│   │   └── Src/      # HAL驱动源文件 / HAL driver source files
│   └── CMSIS/
│       ├── Device/ST/STM32F4xx/Include/  # 设备特定头文件 / Device-specific headers
│       └── Include/  # CMSIS核心头文件 / CMSIS core headers
├── Middlewares/
│   └── Third_Party/  # 第三方中间件 / Third-party middleware
└── Projects/
    └── Examples/     # 示例项目 / Example projects
```

## 如何添加文件夹？/ How to Add Folders?

### 方法 1：使用命令行 / Method 1: Using Command Line

1. 在本地克隆仓库：
   ```bash
   git clone https://github.com/AdybirdZ/STM32.git
   cd STM32
   ```

2. 创建新文件夹：
   ```bash
   mkdir -p 新文件夹名称
   ```

3. 在文件夹中添加文件（Git不会跟踪空文件夹）：
   ```bash
   touch 新文件夹名称/.gitkeep
   # 或者添加其他文件
   ```

4. 提交更改：
   ```bash
   git add .
   git commit -m "添加新文件夹"
   git push
   ```

### 方法 2：使用GitHub网页界面 / Method 2: Using GitHub Web Interface

1. 在GitHub仓库页面，点击 "Add file" -> "Create new file"
2. 在文件名输入框中输入：`文件夹名称/文件名.txt`
3. GitHub会自动创建文件夹
4. 点击 "Commit new file" 保存

### 方法 3：上传文件夹 / Method 3: Upload Folder

1. 在GitHub仓库页面，点击 "Add file" -> "Upload files"
2. 拖拽整个文件夹到上传区域
3. 点击 "Commit changes" 提交

## 文件夹用途说明 / Folder Purpose

- **Core/**: 存放应用程序的核心代码
  - `Inc/`: 头文件（.h）
  - `Src/`: 源文件（.c）

- **Drivers/**: 存放STM32的驱动程序
  - `STM32F4xx_HAL_Driver/`: HAL库驱动
  - `CMSIS/`: ARM Cortex微控制器软件接口标准

- **Middlewares/**: 存放中间件库（如FreeRTOS、USB库等）

- **Projects/**: 存放具体的项目和示例

## 注意事项 / Notes

- Git默认不跟踪空文件夹，需要在文件夹中添加至少一个文件（如`.gitkeep`）
- 建议按照STM32CubeMX生成的项目结构来组织文件
- 可以根据实际需求修改和扩展文件夹结构

## 常见文件夹扩展 / Common Folder Extensions

您可以根据项目需要添加以下文件夹：

- `Docs/`: 项目文档
- `Tests/`: 测试代码
- `Tools/`: 开发工具和脚本
- `Build/`: 编译输出文件
- `Lib/`: 第三方库
- `Config/`: 配置文件

## 开始使用 / Getting Started

1. 克隆此仓库
2. 使用STM32CubeMX生成项目代码
3. 将生成的文件复制到相应的文件夹中
4. 开始开发您的STM32项目！