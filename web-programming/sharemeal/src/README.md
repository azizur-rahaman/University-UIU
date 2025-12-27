# 📁 Clean Architecture Overview

## Directory Structure

```
src/
├── 🏛️ core/                    # Business Logic & Domain
│   ├── domain/
│   │   ├── entities/           # Domain models
│   │   └── repositories/       # Data contracts
│   ├── usecases/              # Business operations
│   └── utils/                 # Core utilities
│
├── 🎨 features/                # Feature Modules
│   ├── home/                  # Home page feature
│   ├── donations/             # Donations feature
│   └── ngos/                  # NGOs feature
│
├── 🔗 shared/                  # Shared Resources
│   ├── components/            # Common UI components
│   └── hooks/                 # Shared React hooks
│
└── 🔌 infrastructure/          # External Services
    └── data/                  # Data implementations
```

## Quick Commands

```bash
# Install dependencies
npm install

# Run development server
npm run dev

# Build for production
npm run build

# Start production server
npm start

# Lint code
npm run lint
```

## Development Workflow

1. **Business Logic**: Add entities to `src/core/domain/entities/`
2. **UI Components**: Create in `src/features/[feature]/components/`
3. **Shared Components**: Add to `src/shared/components/`
4. **Data Access**: Implement in `src/infrastructure/data/`

## Architecture Benefits

✅ **Maintainable**: Clear separation of concerns  
✅ **Testable**: Business logic independent of UI  
✅ **Scalable**: Easy to add new features  
✅ **Flexible**: Swap implementations without changing core logic
