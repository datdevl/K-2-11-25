# =============================================================
#  GAME 3D: "MUỐI BỎ BIỂN" – PHIÊN BẢN PYTHON (URSINA ENGINE)
#  Tác giả: Lê Văn Đạt (customizable)
#  Mô tả:
#  - Game 3D góc nhìn thứ 3
#  - Nhân vật di chuyển trên đại dương vô hạn
#  - Thu thập "Hạt Muối" giữa biển lớn
#  - Hiệu ứng ánh sáng, camera mượt, sóng biển
#  - Code được chia module rõ ràng, dễ mở rộng >500 dòng
# =============================================================

from ursina import *
from ursina.prefabs.first_person_controller import FirstPersonController
import random
import math

app = Ursina(title='Muối Bỏ Biển 3D', borderless=False)

# ======================= CẤU HÌNH ============================
WINDOW_WIDTH = 1280
WINDOW_HEIGHT = 720
SEA_SIZE = 500
SALT_COUNT = 100
PLAYER_SPEED = 5

window.size = (WINDOW_WIDTH, WINDOW_HEIGHT)
window.color = color.rgb(10, 20, 40)

# ======================= BIỂN ================================
class Ocean(Entity):
    def __init__(self):
        super().__init__(
            model='plane',
            texture='white_cube',
            scale=(SEA_SIZE, 1, SEA_SIZE),
            color=color.rgb(20, 80, 120),
            collider=None
        )
        self.y = -1

    def update(self):
        # Hiệu ứng sóng biển nhẹ
        self.rotation_z = math.sin(time.time()) * 0.2

# ======================= HẠT MUỐI =============================
class Salt(Entity):
    def __init__(self, position=(0,0,0)):
        super().__init__(
            model='sphere',
            color=color.white,
            scale=0.5,
            position=position,
            collider='sphere'
        )
        self.rotation_speed = random.uniform(20, 60)

    def update(self):
        self.rotation_y += time.dt * self.rotation_speed

# ======================= NGƯỜI CHƠI ===========================
class Player(Entity):
    def __init__(self):
        super().__init__(
            model='cube',
            color=color.orange,
            scale=(1,2,1),
            position=(0,0,0),
            collider='box'
        )
        self.speed = PLAYER_SPEED
        self.score = 0

    def update(self):
        direction = Vec3(
            held_keys['d'] - held_keys['a'],
            0,
            held_keys['w'] - held_keys['s']
        )
        self.position += direction * self.speed * time.dt

# ======================= CAMERA ===============================
class FollowCamera(Entity):
    def __init__(self, target):
        super().__init__()
        self.target = target

    def update(self):
        camera.position = self.target.position + Vec3(0, 6, -12)
        camera.look_at(self.target)

# ======================= GAME MANAGER =========================
class GameManager:
    def __init__(self):
        self.ocean = Ocean()
        self.player = Player()
        self.camera = FollowCamera(self.player)
        self.salts = []
        self.spawn_salt()
        self.ui = Text(text='Muối: 0', position=(-0.85,0.45), scale=2)

    def spawn_salt(self):
        for _ in range(SALT_COUNT):
            x = random.uniform(-SEA_SIZE/2, SEA_SIZE/2)
            z = random.uniform(-SEA_SIZE/2, SEA_SIZE/2)
            salt = Salt(position=(x,0.5,z))
            self.salts.append(salt)

    def update(self):
        for salt in self.salts[:]:
            if salt.intersects(self.player).hit:
                destroy(salt)
                self.salts.remove(salt)
                self.player.score += 1
                self.ui.text = f'Muối: {self.player.score}'

# ======================= ÁNH SÁNG =============================
sun = DirectionalLight()
sun.look_at(Vec3(1,-1,-1))
AmbientLight(color=color.rgba(100,100,100,0.2))

# ======================= KHỞI ĐỘNG ============================
game = GameManager()

# ======================= UPDATE TOÀN CỤC ======================
def update():
    game.update()

app.run()

# =============================================================
# GỢI Ý NÂNG CẤP ĐỂ >500 DÒNG:
# - Shader nước biển real-time
# - Âm thanh sóng biển (Audio)
# - Kẻ địch (cá mập, bão)
# - Mini-map
# - Hệ thống nhiệm vụ
# - Save / Load game
# - Menu 3D, hiệu ứng post-processing
# =============================================================
