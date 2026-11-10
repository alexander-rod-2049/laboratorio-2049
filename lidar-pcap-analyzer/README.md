# lidar-pcap-analyzer

Analizador en C de capturas de LiDAR de 16 canales para detectar
degradación del sensor (obstrucción, suciedad, pérdida de retornos).

Proyecto de aprendizaje: parseo binario, endianness, structs/padding,
aritmética de punteros y procesamiento de nubes de puntos.

## Compilar
    make          # build normal
    make asan     # con sanitizers
    make run ARGS="ruta/al/archivo"

## Estado
- [ ] Identificar formato del archivo de captura
- [ ] Leer cabecera de paquete
- [ ] Iterar todos los paquetes
- [ ] Decodificar puntos (distancia, azimut, canal)
- [ ] Convertir a x, y, z
- [ ] Métricas de calidad
- [ ] Generador de datos sintéticos para tests

> Los datos reales no se versionan.
