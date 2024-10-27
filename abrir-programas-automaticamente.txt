# Programas para abrir
$programas = @(
    "C:\Caminho\Para\Seu\Programa1.exe",
    "C:\Caminho\Para\Seu\Programa2.exe",
    "C:\Caminho\Para\Seu\Programa3.exe"
)

# Delay em segundos
$delay = 5

foreach ($programa in $programas) {
    Start-Process $programa
    Start-Sleep -Seconds $delay
}
