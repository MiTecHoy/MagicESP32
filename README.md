# MagicESP32

ESP32 Magic Trick: Chosen Card as WiFi Signal

Welcome to the fascinating world of tech-infused magic with the ESP32! In this exciting project, we combine the mystery of magic with the power of technology to create an astonishing and one-of-a-kind trick. Imagine a spectator randomly chooses a card from a deck, and, without anyone else knowing, that card magically appears as a WiFi signal on the spectators' phones!

Our magic trick utilizes an ESP32, a versatile and powerful microcontroller, which connects to a WiFi network. After the spectator chooses their card, the ESP32 translates that choice into code and generates a custom WiFi signal corresponding to the chosen card. The phones of the spectators will start displaying this unique WiFi signal, leaving everyone in awe.

But how do we achieve this incredible effect? That's part of the magic! The carefully crafted code on the ESP32 translates the chosen card into a special WiFi signal that phones can detect. All of this happens in real-time and invisibly, creating a truly astonishing and baffling moment for the audience.

This project not only showcases how technology can blend with magic but also highlights the versatility of the ESP32 in creating creative and interactive solutions. Can you imagine the look of surprise on the faces of your friends and family when their own phones reveal the secret card they chose? Get ready to impress and leave everyone wondering how you did it!

Whether you're a magic enthusiast, a tech aficionado, or just someone looking for a unique trick to amaze others, this ESP32 IoT magic trick project is sure to captivate you. Download the code, follow the instructions, and get ready to deliver an unforgettable show that combines the best of two seemingly opposite worlds!


Magic WiFi Signal Generator with ESP32: How it Works and How to Use it

Welcome to the intriguing world of our ESP32-based Magic WiFi Signal Generator! This mesmerizing code creates a magical effect where a spectator selects a card from a deck, and that card mysteriously appears as a WiFi signal on the spectators' phones. Let's dive into how it works and how you can use it to create a jaw-dropping magic trick.

**How It Works:**

1. **Setup**: The code starts by initializing the ESP32 and creating a soft Access Point (AP) with a predefined SSID (in this case, "MagicESP32"). This AP acts as a custom WiFi network that the phones of the spectators will connect to.

2. **Web Interface**: The code sets up a web server that serves a simple HTML page. This page allows you to change the SSID of the soft AP dynamically. The web interface can be accessed by navigating to the ESP32's IP address in a web browser.

3. **Card-to-SSID Conversion**: When a spectator selects a card, the magician (you) uses the web interface to change the SSID of the soft AP to a special value corresponding to the chosen card. This conversion is done through the "/setssid" route, and the new SSID is set using the WiFi.softAP() function.

4. **Phone Connection**: The phones of the spectators automatically detect and display the custom WiFi signal (SSID) set by the magician. The effect is that the chosen card now seems to manifest as a WiFi signal.

**How to Use It:**

1. **Setup Hardware**: Load this code onto your ESP32 board using the Arduino IDE or a compatible platform. Ensure that the ESP32 is connected to power and that it can create a WiFi network.

2. **Access Web Interface**: Connect a device (laptop, smartphone, etc.) to the soft AP "MagicESP32" created by the ESP32. Open a web browser and enter the IP address provided by the ESP32 in the Serial Monitor. This will display the web interface.

3. **Perform the Trick**: Have a spectator select a card. Use the web interface to change the SSID to a value associated with the chosen card (you'll need to establish a mapping between cards and SSID values beforehand).

4. **Witness the Magic**: As the SSID is changed, the spectators' phones will detect the new WiFi signal, seemingly revealing the chosen card through the WiFi network.

This magical effect combines technology and illusion, leaving your audience amazed and intrigued. Prepare to dazzle your friends and family with this ESP32-powered magic trick that merges the world of magic with the power of the IoT!

==========================================

# MagicESP32

Truco de Magia IoT con ESP32: Carta Elegida como Señal WiFi

¡Bienvenidos al fascinante mundo de la magia tecnológica con el ESP32! En este emocionante proyecto, combinamos el misterio de la magia con la potencia de la tecnología para crear un truco asombroso y único. Imagina que un espectador elige una carta al azar de una baraja y, sin que nadie más lo sepa, ¡esa carta aparece como una señal WiFi en los teléfonos de los espectadores!

Nuestro truco de magia utiliza un ESP32, un microcontrolador versátil y poderoso, que se conecta a una red WiFi. Después de que el espectador elige su carta, el ESP32 interpreta esa elección en código y genera una señal WiFi personalizada que corresponde a la carta elegida. Los teléfonos de los espectadores comenzarán a mostrar esta señal WiFi única, dejando a todos boquiabiertos.

Pero, ¿cómo logramos este increíble efecto? ¡Eso es parte de la magia! El código cuidadosamente elaborado en el ESP32 se encarga de traducir la carta elegida en una señal WiFi especial que los teléfonos pueden detectar. Todo esto sucede en tiempo real y de manera invisible, creando un momento verdaderamente asombroso y desconcertante para la audiencia.

Este proyecto no solo muestra cómo la tecnología puede fusionarse con la magia, sino que también resalta la versatilidad del ESP32 en la creación de soluciones creativas e interactivas. ¿Te imaginas la expresión de sorpresa en los rostros de tus amigos y familiares cuando sus propios teléfonos revelen la carta secreta que eligieron? ¡Prepárate para impresionar y dejar a todos preguntándose cómo lo lograste!

Ya sea que seas un entusiasta de la magia, un aficionado a la tecnología o simplemente alguien que busca un truco único para sorprender a los demás, este proyecto de truco de magia IoT con ESP32 seguramente te cautivará. ¡Descarga el código, sigue las instrucciones y prepárate para dar un espectáculo inolvidable que combina lo mejor de dos mundos aparentemente opuestos!

Generador de Señal WiFi Mágica con ESP32: Cómo Funciona y Cómo Usarlo

Bienvenidos al fascinante mundo de nuestro Generador de Señal WiFi Mágica basado en ESP32! Este código hipnotizante crea un efecto mágico en el que un espectador elige una carta de una baraja y esa carta aparece misteriosamente como una señal WiFi en los teléfonos de los espectadores. Veamos cómo funciona y cómo puedes usarlo para crear un truco de magia impactante.

**Cómo Funciona:**

1. **Configuración**: El código comienza inicializando el ESP32 y creando un Punto de Acceso (AP) virtual con un SSID predefinido (en este caso, "MagicESP32"). Este AP actúa como una red WiFi personalizada a la que se conectarán los teléfonos de los espectadores.

2. **Interfaz Web**: El código configura un servidor web que sirve una página HTML simple. Esta página te permite cambiar el SSID del AP virtual de manera dinámica. Puedes acceder a la interfaz web al ingresar la dirección IP del ESP32 en un navegador web.

3. **Conversión de Carta a SSID**: Cuando un espectador elige una carta, el mago (tú) usa la interfaz web para cambiar el SSID del AP virtual a un valor especial que corresponde a la carta elegida. Esta conversión se realiza a través de la ruta "/setssid", y el nuevo SSID se establece usando la función WiFi.softAP().

4. **Conexión de los Teléfonos**: Los teléfonos de los espectadores detectarán automáticamente y mostrarán la señal WiFi personalizada (SSID) establecida por el mago. El efecto es que la carta elegida ahora parece manifestarse como una señal WiFi.

**Cómo Usarlo:**

1. **Configurar el Hardware**: Carga este código en tu placa ESP32 utilizando el IDE de Arduino o una plataforma compatible. Asegúrate de que el ESP32 esté conectado a la alimentación y pueda crear una red WiFi.

2. **Acceder a la Interfaz Web**: Conecta un dispositivo (laptop, smartphone, etc.) al AP virtual "MagicESP32" creado por el ESP32. Abre un navegador web e ingresa la dirección IP proporcionada por el ESP32 en el Monitor Serie. Esto mostrará la interfaz web.

3. **Realizar el Truco**: Pide a un espectador que elija una carta. Usa la interfaz web para cambiar el SSID a un valor asociado con la carta elegida (necesitarás establecer un mapa entre cartas y valores de SSID de antemano).

4. **Presencia de la Magia**: A medida que cambias el SSID, los teléfonos de los espectadores detectarán la nueva señal WiFi, aparentemente revelando la carta elegida a través de la red WiFi.

Este efecto mágico combina tecnología e ilusión, dejando a tu audiencia sorprendida e intrigada. ¡Prepárate para deslumbrar a tus amigos y familiares con este truco de magia impulsado por ESP32 que fusiona el mundo de la magia con el poder del IoT!
