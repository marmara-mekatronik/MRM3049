
### 1. **Getter ve Setter Metodları**:

* `SinifA` sınıfındaki `x`, `y` ve `z` gibi üyelere doğrudan erişim yerine, kontrollü erişim sağlayan getter ve setter metodları ekledim.
* **`getX()`, `setX()`, `getY()`, `setY()`** gibi metodlar sınıf dışından güvenli bir şekilde verilere erişim sağlar.

### 2. **Kalıtım ve Erişim Belirleyicileri**:

* **`public` kalıtım**: `SinifB` sınıfı, `SinifA` sınıfının public üyelerini miras alır, böylece `x` değişkenine dışarıdan erişilebilir.
* **`protected` kalıtım**: `SinifC` sınıfı, `SinifA` sınıfının public üyelerini protected olarak miras alır, böylece sadece `SinifC` ve türetilmiş sınıflar `x` değişkenine erişebilir.
* **`private` kalıtım**: `SinifD` sınıfı, `SinifA` sınıfının tüm üyelerini private olarak miras alır, böylece dışarıdan erişim engellenir.

### 3. **Modüler Yapı**:

* Getter ve setter metodları sayesinde, dışarıdan sınıfın iç yapısına müdahale edilmeden veri yönetimi sağlanır.
* Her sınıfın farklı kalıtım türlerine göre, sınıflar arasındaki veri erişim düzeyleri ve kapsülleme güvenli bir şekilde sağlanır.

### 4. **Kapsülleme**:

* Sınıfların üyeleri `private` ve `protected` olarak tanımlandı, böylece doğrudan erişim kısıtlandı. Bu, kapsülleme ilkesine uygun bir yapıdır ve veri güvenliğini artırır.
