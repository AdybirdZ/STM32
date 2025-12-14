# Docs - 文档文件夹

这个文件夹用于存放学习笔记、数据手册和教程。

## 📂 子文件夹说明

### 📝 Notes - 学习笔记
存放你的STM32学习笔记，包括：
- 外设使用笔记（GPIO、UART、SPI、I2C等）
- 调试技巧
- 问题解决记录
- 知识点总结

**示例**：
- `GPIO学习笔记.md`
- `UART通信配置.md`
- `中断系统总结.md`
- `DMA使用指南.md`

### 📄 Datasheets - 数据手册
存放STM32相关的数据手册和参考手册：
- 芯片数据手册（Datasheet）
- 参考手册（Reference Manual）
- 外设应用笔记（Application Notes）
- 勘误表（Errata Sheet）

**建议**：可以创建子文件夹按芯片系列分类：
```
Datasheets/
├── STM32F1/
├── STM32F4/
├── STM32H7/
└── ...
```

### 📚 Tutorials - 教程
存放教程和学习路线：
- 入门教程
- 进阶教程
- 项目实战教程
- 视频教程笔记

## 📝 笔记编写建议

### Markdown 格式示例

```markdown
# GPIO 外设学习笔记

## 基本概念
GPIO（General Purpose Input/Output）通用输入输出端口

## 配置步骤
1. 使能GPIO时钟
2. 配置GPIO模式
3. 设置输出速度
4. 配置上下拉

## 代码示例
\`\`\`c
// 初始化LED引脚
GPIO_InitTypeDef GPIO_InitStruct = {0};
__HAL_RCC_GPIOC_CLK_ENABLE();
GPIO_InitStruct.Pin = GPIO_PIN_13;
GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
GPIO_InitStruct.Pull = GPIO_NOPULL;
GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);
\`\`\`

## 常见问题
1. 问题描述
2. 解决方案

## 参考资料
- [STM32 GPIO参考手册](链接)
```

## 💡 使用技巧

1. **统一格式**：使用Markdown格式，便于阅读和版本控制
2. **代码高亮**：使用代码块并指定语言（c、bash等）
3. **添加图片**：可以创建 `images/` 文件夹存放图片
4. **定期更新**：学到新知识及时补充笔记
5. **交叉引用**：在笔记中链接到相关项目代码

## 🎯 学习路线建议

可以按以下顺序学习和记录笔记：

1. **基础入门**
   - STM32最小系统
   - 时钟系统
   - GPIO基础

2. **外设学习**
   - UART串口通信
   - 定时器（Timer）
   - 外部中断（EXTI）
   - ADC/DAC
   - SPI/I2C通信

3. **进阶应用**
   - DMA数据传输
   - RTOS实时系统
   - USB通信
   - CAN总线
   - 低功耗模式

4. **项目实战**
   - 综合应用项目
   - 常见问题解决

开始记录你的学习历程吧！📖
