# Circuit-RC-TinkerCad-Arduino-UNO
### **Descripció del circuit RC amb Arduino UNO R3**

Vegeu el png. La placa Arduino UNO R3 s'utilitza per a monitoritzar la caiguda de tensió a la resistència del circuit. A més, proporciona l'alimentació necessària al circuit. La tensió a la qual arriba el condensador en carregar-se és de **5 V**, que és el valor de la tensió d'alimentació.

Per tal que el procés de càrrega/descàrrega del condensador duri un temps adequat, hem hagut d'ajustar el valor de la resistència i capacitat de condensador.

* **Valors dels components:**
    * Condensador: **C = 22 µF**
    * Resistència: **R = 100 kΩ**

El condensador es carrega i es descarrega a través de la mateixa resistència.

El temps de càrrega o descàrrega total d'un circuit RC es calcula com cinc vegades la constant de temps ($\tau = R \cdot C$).

**Càlcul de la constant de temps (5 $\tau$)**:

$$\text{Temps} = 5 \cdot R \cdot C = 5 \cdot (100 \cdot 10^3 \ \Omega) \cdot (22 \cdot 10^{-6} \ \text{F}) = 11 \text{ segons}$$

Aquest és el temps necessari perquè el condensador es carregui o es descarregui gairebé per complet.


### Funcionament de la lectura amb Arduino

El senyal de tensió sobre la resistència es llegeix per l’entrada analògica **A0**, es converteix a un valor digital (0–1023), s’escala a volts i s’envia pel port sèrie per a la seva monitorització en temps real.
