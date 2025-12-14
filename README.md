# STM32 学习笔记

这是一个用于存储和管理STM32学习文件的仓库。

## 📁 仓库结构

```
STM32/
├── README.md                 # 本文件
├── Projects/                 # 项目文件夹
│   ├── 01-GPIO/             # GPIO 相关项目
│   ├── 02-UART/             # UART 相关项目
│   ├── 03-Timer/            # 定时器相关项目
│   └── ...                  # 其他项目
├── Libraries/               # 库文件和驱动
│   ├── HAL/                # HAL 库
│   ├── StdPeriph/          # 标准外设库
│   └── Custom/             # 自定义库
├── Docs/                    # 文档和笔记
│   ├── Notes/              # 学习笔记
│   ├── Datasheets/         # 数据手册
│   └── Tutorials/          # 教程
└── Examples/                # 示例代码
    ├── Basic/              # 基础示例
    └── Advanced/           # 进阶示例
```

## 📝 如何添加学习文件

### 方法一：添加新项目

1. 在 `Projects/` 目录下创建一个新文件夹，建议使用编号和描述性名称：
   ```bash
   mkdir Projects/04-PWM-LED
   ```

2. 在项目文件夹中添加你的代码文件：
   ```
   Projects/04-PWM-LED/
   ├── README.md          # 项目说明
   ├── Src/              # 源代码
   ├── Inc/              # 头文件
   ├── Startup/          # 启动文件
   └── Project.ioc       # CubeMX配置文件（如果使用）
   ```

3. 在项目文件夹中创建 README.md 说明项目内容：
   ```markdown
   # 项目名称
   
   ## 功能描述
   简要描述项目实现的功能
   
   ## 硬件要求
   - 开发板型号
   - 外设要求
   
   ## 软件环境
   - 开发工具
   - 库版本
   
   ## 使用说明
   如何编译和运行
   ```

### 方法二：添加库文件

1. 在 `Libraries/` 目录下选择合适的分类：
   ```bash
   # HAL库
   mkdir Libraries/HAL/Your-Library-Name
   
   # 自定义库
   mkdir Libraries/Custom/Your-Library-Name
   ```

2. 添加库文件和相关文档

### 方法三：添加学习笔记

1. 在 `Docs/Notes/` 目录下创建 Markdown 文件：
   ```bash
   touch Docs/Notes/GPIO学习笔记.md
   ```

2. 编写学习笔记，可以包含：
   - 知识点总结
   - 代码片段
   - 遇到的问题和解决方案
   - 参考资料链接

### 方法四：添加示例代码

1. 根据难度选择 `Examples/Basic/` 或 `Examples/Advanced/`
2. 创建示例文件夹并添加代码
3. 添加 README.md 说明示例用途

## 🔧 命名规范

- **项目文件夹**：使用编号+描述，如 `01-GPIO-Blink`、`02-UART-Debug`
- **文件名**：使用有意义的英文名称，避免中文
- **代码注释**：可以使用中文，便于理解
- **文档**：使用 Markdown 格式，文件名可以使用中文

## 📋 提交规范

提交代码时，建议使用清晰的提交信息：

```bash
# 添加新项目
git add .
git commit -m "添加：PWM控制LED亮度项目"

# 更新文档
git commit -m "更新：GPIO学习笔记"

# 修复问题
git commit -m "修复：UART通信波特率配置错误"
```

## 🚀 快速开始

1. **克隆仓库**
   ```bash
   git clone https://github.com/AdybirdZ/STM32.git
   cd STM32
   ```

2. **创建你的第一个项目**
   ```bash
   mkdir -p Projects/01-LED-Blink
   cd Projects/01-LED-Blink
   # 添加你的代码文件
   ```

3. **提交更改**
   ```bash
   git add .
   git commit -m "添加：LED闪烁项目"
   git push
   ```

## 📚 推荐的开发工具

- **IDE**: STM32CubeIDE, Keil MDK, IAR EWARM
- **调试器**: ST-Link V2/V3, J-Link
- **配置工具**: STM32CubeMX
- **版本控制**: Git

## 🔗 相关资源

- [STM32官方网站](https://www.st.com/stm32)
- [STM32CubeMX下载](https://www.st.com/en/development-tools/stm32cubemx.html)
- [STM32中文社区](https://www.stmcu.org.cn/)

## 📧 联系方式

如有问题或建议，欢迎提交 Issue 或 Pull Request。

---

**开始你的STM32学习之旅吧！** 🎉