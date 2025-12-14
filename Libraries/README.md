# Libraries - 库文件夹

这个文件夹用于存放STM32库文件和自定义驱动。

## 📂 子文件夹说明

### HAL - HAL库相关
存放STM32 HAL（Hardware Abstraction Layer）库相关文件：
- HAL库的扩展功能
- 基于HAL库的外设驱动
- HAL库使用示例

### StdPeriph - 标准外设库
存放STM32标准外设库（Standard Peripheral Library）相关文件：
- 标准外设库的扩展
- 基于标准库的驱动
- 标准库使用示例

**注意**：新项目建议使用HAL库，标准库主要用于维护老项目

### Custom - 自定义库
存放你自己编写的库文件和驱动：
- 传感器驱动（DHT11、DS18B20、OLED等）
- 通信协议（Modbus、JSON解析等）
- 算法库（滤波、PID等）
- 工具函数（延时、数学运算等）

## 📋 库文件组织方式

每个库建议使用以下结构：

```
LibraryName/
├── README.md          # 库说明文档
├── Inc/              # 头文件
│   └── library.h
├── Src/              # 源文件
│   └── library.c
├── Examples/         # 使用示例
│   └── example.c
└── Docs/             # 相关文档
    └── usage.md
```

## 📝 库README模板

```markdown
# 库名称

## 📖 简介
简要说明库的功能和用途

## ✨ 特性
- 功能1
- 功能2
- 功能3

## 🔧 硬件支持
- 支持的STM32系列
- 需要的外设资源

## 💻 软件依赖
- HAL库版本 / 标准库版本
- 其他依赖库

## 📦 安装方法
1. 复制文件到项目
2. 添加头文件路径
3. 添加源文件到编译

## 🚀 使用方法
\`\`\`c
// 代码示例
#include "library.h"

int main(void) {
    // 初始化
    Library_Init();
    
    // 使用
    Library_Function();
}
\`\`\`

## 📌 API说明
- `Function1()` - 功能说明
- `Function2()` - 功能说明

## ⚠️ 注意事项
- 使用注意事项
- 已知限制

## 📚 参考资料
- 相关链接
```

## 🎯 常用库示例

### 传感器驱动
```
Custom/
├── DHT11/          # 温湿度传感器
├── DS18B20/        # 温度传感器
├── OLED/           # OLED显示屏
├── MPU6050/        # 六轴传感器
└── HC-SR04/        # 超声波测距
```

### 通信协议
```
Custom/
├── ModbusRTU/      # Modbus协议
├── JSON/           # JSON解析
├── AT_Command/     # AT指令处理
└── Protocol/       # 自定义协议
```

### 工具库
```
Custom/
├── Delay/          # 延时函数
├── Filter/         # 滤波算法
├── PID/            # PID控制
├── RingBuffer/     # 环形缓冲区
└── Debug/          # 调试工具
```

## 💡 开发建议

1. **模块化设计**：每个库独立，减少耦合
2. **统一接口**：使用清晰的API接口
3. **完善注释**：添加详细的函数注释
4. **示例代码**：提供使用示例
5. **版本管理**：记录版本更新信息
6. **测试验证**：确保库功能正确

## 🔄 库更新记录

建议在每个库的README中添加更新日志：

```markdown
## 更新日志

### v1.1.0 - 2024-01-15
- 新增：添加XX功能
- 优化：改进YY性能
- 修复：修复ZZ问题

### v1.0.0 - 2024-01-01
- 初始版本发布
```

开始构建你的STM32库集合吧！📚
