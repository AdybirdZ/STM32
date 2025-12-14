# 快速开始指南

欢迎使用STM32学习仓库！这个指南将帮助你快速了解如何使用这个仓库。

## 🎯 第一步：克隆仓库

```bash
git clone https://github.com/AdybirdZ/STM32.git
cd STM32
```

## 📂 了解仓库结构

```
STM32/
├── Projects/         # 完整的STM32项目
├── Examples/         # 简单的示例代码
├── Libraries/        # 库文件和驱动
├── Docs/            # 文档和学习笔记
└── README.md        # 主说明文档
```

## 🚀 三种添加文件的方式

### 方式1：添加完整项目（推荐用于实战项目）

适合：完整的应用程序、课程设计、毕业设计等

```bash
# 1. 创建项目文件夹
cd Projects
mkdir 01-LED-Blink

# 2. 添加项目文件
cd 01-LED-Blink
# 复制你的项目文件到这里

# 3. 创建项目说明
cp ../PROJECT_TEMPLATE.md README.md
# 编辑 README.md，填写项目信息

# 4. 提交到Git
git add .
git commit -m "添加：LED闪烁项目"
git push
```

### 方式2：添加示例代码（推荐用于学习单个功能）

适合：单一功能演示、快速参考代码

```bash
# 1. 选择合适的分类
cd Examples/Basic  # 或 Examples/Advanced

# 2. 创建示例文件
mkdir GPIO
cd GPIO
touch blink.c
# 编写示例代码

# 3. 提交到Git
git add .
git commit -m "添加：GPIO LED闪烁示例"
git push
```

### 方式3：添加学习笔记（推荐用于知识总结）

适合：学习心得、知识点总结、问题记录

```bash
# 1. 进入笔记目录
cd Docs/Notes

# 2. 创建笔记文件
touch GPIO学习笔记.md
# 可以参考 NOTE_TEMPLATE.md 的格式

# 3. 编写笔记内容

# 4. 提交到Git
git add .
git commit -m "添加：GPIO学习笔记"
git push
```

## 📝 实战演练：创建你的第一个项目

让我们一起创建一个简单的LED闪烁项目！

### 步骤1：创建项目结构
```bash
cd Projects
mkdir 01-LED-Blink
cd 01-LED-Blink
mkdir Src Inc
```

### 步骤2：创建main.c
在 `Src/main.c` 中添加代码：
```c
#include "main.h"

int main(void)
{
    HAL_Init();
    SystemClock_Config();
    MX_GPIO_Init();
    
    while (1)
    {
        HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
        HAL_Delay(1000);
    }
}
```

### 步骤3：创建README.md
```bash
cp ../PROJECT_TEMPLATE.md README.md
```
然后编辑 README.md，填写项目信息。

### 步骤4：提交到Git
```bash
git add .
git commit -m "添加：我的第一个STM32项目 - LED闪烁"
git push
```

## 💡 使用技巧

### 技巧1：使用模板
仓库提供了多个模板文件：
- `Projects/PROJECT_TEMPLATE.md` - 项目README模板
- `Docs/Notes/NOTE_TEMPLATE.md` - 学习笔记模板

### 技巧2：参考README
每个主文件夹都有详细的README：
- `Projects/README.md` - 项目组织指南
- `Examples/README.md` - 示例代码指南
- `Libraries/README.md` - 库文件指南
- `Docs/README.md` - 文档组织指南

### 技巧3：善用Git
```bash
# 查看状态
git status

# 查看修改
git diff

# 添加所有文件
git add .

# 提交并推送
git commit -m "你的提交信息"
git push
```

### 技巧4：组织你的文件
- 项目使用编号命名：`01-XXX`, `02-XXX`
- 代码文件使用英文命名
- 文档可以使用中文命名
- 保持结构清晰

## 📋 常见使用场景

### 场景1：完成了一个实验
```bash
cd Projects
mkdir 03-UART-Debug
# 添加实验代码
git add .
git commit -m "添加：UART调试实验"
git push
```

### 场景2：学习了新知识点
```bash
cd Docs/Notes
touch 定时器学习笔记.md
# 编写笔记
git add .
git commit -m "添加：定时器学习笔记"
git push
```

### 场景3：编写了可复用的驱动
```bash
cd Libraries/Custom
mkdir DHT11
cd DHT11
# 添加驱动文件和README
git add .
git commit -m "添加：DHT11温湿度传感器驱动"
git push
```

### 场景4：找到了有用的代码片段
```bash
cd Examples/Basic
mkdir UART
touch UART/printf_redirect.c
# 添加代码
git add .
git commit -m "添加：printf重定向示例"
git push
```

## ⚠️ 注意事项

1. **不要提交二进制文件**：`.gitignore` 已配置排除编译生成的文件
2. **保持提交信息清晰**：使用"添加"、"更新"、"修复"等前缀
3. **定期提交**：每完成一个功能就提交一次
4. **添加README**：重要的项目都应该有README说明

## 🆘 遇到问题？

### Git相关问题
```bash
# 忘记提交信息的格式？
# 推荐格式：
# - 添加：XXX
# - 更新：XXX
# - 修复：XXX
# - 优化：XXX

# 不知道改了什么？
git status
git diff

# 想撤销修改？
git checkout -- filename

# 提交错了？
git reset --soft HEAD^
```

### 文件组织问题
- 不确定放在哪里？查看对应文件夹的README.md
- 不知道怎么写说明？参考模板文件
- 项目结构不对？参考 `PROJECT_TEMPLATE.md`

## 📚 下一步

1. ✅ 创建你的第一个项目
2. ✅ 编写你的第一篇学习笔记
3. ✅ 添加一个示例代码
4. ✅ 养成定期提交的习惯
5. ✅ 逐步构建你的STM32知识库

## 🎉 开始你的学习之旅

现在你已经准备好了！选择一个方式开始添加你的STM32学习文件吧！

```bash
# 方式1：添加项目
cd Projects && mkdir YourProject

# 方式2：添加示例
cd Examples/Basic && touch your_example.c

# 方式3：添加笔记
cd Docs/Notes && touch 你的笔记.md
```

**Happy Coding! 🚀**
