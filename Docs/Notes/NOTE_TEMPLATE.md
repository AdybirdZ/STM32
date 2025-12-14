# 学习笔记示例

> 这是一个学习笔记的示例，你可以参考这个格式创建自己的笔记。

## 📝 主题：GPIO外设学习

**日期**：2024-01-01  
**作者**：Your Name

---

## 📚 基本概念

### 什么是GPIO？
GPIO（General Purpose Input/Output）即通用输入输出端口。STM32的GPIO可以配置为：
- **输入模式**：读取外部信号（按键、传感器等）
- **输出模式**：控制外部设备（LED、继电器等）

### GPIO的主要特性
- 每个I/O口都可以独立配置
- 输出模式支持推挽和开漏
- 输入模式支持上拉、下拉和浮空
- 可配置输出速度（低速、中速、高速、超高速）

---

## ⚙️ GPIO配置步骤

### 1. 使能GPIO时钟
STM32的外设默认是关闭的，使用前需要使能时钟：

```c
// HAL库方式
__HAL_RCC_GPIOC_CLK_ENABLE();

// 标准库方式
RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
```

### 2. 配置GPIO参数
```c
GPIO_InitTypeDef GPIO_InitStruct = {0};

GPIO_InitStruct.Pin = GPIO_PIN_13;           // 引脚号
GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;  // 推挽输出模式
GPIO_InitStruct.Pull = GPIO_NOPULL;          // 无上下拉
GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW; // 低速

HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);      // 初始化
```

### 3. 使用GPIO
```c
// 输出高电平
HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET);

// 输出低电平
HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);

// 翻转电平
HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);

// 读取输入电平
uint8_t state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_13);
```

---

## 🎯 实战案例

### 案例1：LED闪烁
```c
int main(void)
{
    HAL_Init();
    SystemClock_Config();
    MX_GPIO_Init();
    
    while (1)
    {
        HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
        HAL_Delay(1000);  // 延时1秒
    }
}
```

### 案例2：按键检测
```c
// 检测按键按下（低电平有效）
if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == GPIO_PIN_RESET)
{
    HAL_Delay(20);  // 消抖
    if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == GPIO_PIN_RESET)
    {
        // 按键按下，执行操作
        HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
        
        // 等待按键释放
        while (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == GPIO_PIN_RESET);
    }
}
```

---

## 📊 GPIO模式对比

| 模式 | 说明 | 应用场景 |
|------|------|----------|
| 输入浮空 | 高阻态，不确定电平 | 外部提供明确电平的场合 |
| 输入上拉 | 内部上拉电阻，默认高电平 | 检测按键（低电平触发） |
| 输入下拉 | 内部下拉电阻，默认低电平 | 检测按键（高电平触发） |
| 输出推挽 | 可输出高低电平，驱动能力强 | 驱动LED、蜂鸣器 |
| 输出开漏 | 只能输出低电平或高阻态 | I2C通信、线或输出 |
| 复用推挽 | 由外设控制，推挽输出 | UART TX、SPI MOSI |
| 复用开漏 | 由外设控制，开漏输出 | I2C SCL/SDA |

---

## ⚠️ 常见问题

### 问题1：GPIO配置后无反应
**原因**：
- 忘记使能时钟
- 引脚配置错误
- 硬件连接问题

**解决**：
1. 检查时钟使能代码
2. 确认引脚配置参数
3. 用万用表测试引脚电平

### 问题2：LED一直很暗
**原因**：
- 引脚驱动能力不足
- 限流电阻过大

**解决**：
- 调整GPIO输出速度为高速
- 检查电路设计

### 问题3：按键检测不稳定
**原因**：
- 没有消抖处理
- 上下拉配置错误

**解决**：
- 添加软件消抖（延时20ms）
- 添加硬件消抖电路
- 正确配置上下拉电阻

---

## 💡 学习心得

1. **GPIO是STM32最基础的外设**，掌握好GPIO是学习其他外设的基础
2. **时钟使能是第一步**，很多初学者容易忘记这一步
3. **推挽输出最常用**，可以驱动大多数外设
4. **上下拉要根据实际需求配置**，不能随意设置
5. **消抖很重要**，无论是硬件消抖还是软件消抖

---

## 📚 参考资料

- [STM32F1xx中文参考手册](https://www.st.com/) - GPIO章节
- [HAL库用户手册](https://www.st.com/) - GPIO API说明
- [《STM32库开发实战指南》](书籍)
- [野火STM32教程](在线教程)

---

## 🔖 相关笔记

- [中断系统学习笔记](链接到其他笔记)
- [时钟系统学习笔记](链接到其他笔记)

---

## ✅ 学习检查清单

- [x] 理解GPIO的基本概念
- [x] 掌握GPIO的配置方法
- [x] 完成LED闪烁实验
- [x] 完成按键检测实验
- [ ] 完成外部中断实验
- [ ] 深入理解GPIO寄存器

---

**下一步学习**：外部中断（EXTI）

**总结**：GPIO是STM32的基础，需要多实践才能熟练掌握。
