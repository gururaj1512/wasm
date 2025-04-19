# WebAssembly Development Setup Guide

## Prerequisites

1. Install Emscripten SDK (emsdk)
```bash
git clone https://github.com/emscripten-core/emsdk.git
cd emsdk
emsdk install latest
emsdk activate latest
emsdk_env.bat
```

2. Install Visual Studio Code extensions:
   - WebAssembly
   - Live Server

## Building WebAssembly Files

1. Compile C to WebAssembly:
```bash
emcc source.c -o output.wasm
```

2. For JavaScript bindings:
```bash
emcc source.c -o output.js
```

3. Common compilation flags:
```bash
emcc source.c -o output.wasm ^
    -s WASM=1 ^
    -s EXPORTED_RUNTIME_METHODS=['ccall','cwrap'] ^
    -s EXPORTED_FUNCTIONS=['_main'] ^
    -s ENVIRONMENT='web'
```

## Running Examples

1. Start Live Server in VS Code
2. Open `http://127.0.0.1:5500/your-example/index.html`
3. Check browser console for output

## Common Issues

1. **404 Not Found**: Ensure WASM file is in the correct directory
2. **MIME Type Error**: Always serve through a web server (use Live Server)
3. **Import Errors**: Check environment imports in JavaScript
4. **Memory Access**: Use proper memory management with malloc/free

## Testing WebAssembly

1. Create HTML file with WebAssembly instantiation
2. Include necessary imports and memory configuration
3. Use browser dev tools to debug

## Resources

- [Emscripten Documentation](https://emscripten.org/docs/getting_started/Tutorial.html)
- [WebAssembly MDN Docs](https://developer.mozilla.org/en-US/docs/WebAssembly)