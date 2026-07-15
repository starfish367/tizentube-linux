#!/bin/bash
echo "⚙️ Bắt đầu vô hiệu hóa tính năng Auto-Update..."

# Tìm và comment bỏ hoặc thay đổi các hàm checkUpdate trong file JS
find ~/cobalt-build/src -name "*.js" -exec sed -i 's/checkForUpdates/function(){return false;}/g' {} +
find ~/cobalt-build/src -name "*.js" -exec sed -i 's/checkUpdate/function(){return false;}/g' {} +

# Vô hiệu hóa đường dẫn API check release của TizenTube gốc
find ~/cobalt-build/src -name "*.js" -exec sed -i 's|api.github.com/repos/reisxd/TizenTubeCobalt/releases|api.github.com/repos/starfish367/tizentube-linux/releases|g' {} +

echo "✅ Đã tắt Auto-Update thành công!"
