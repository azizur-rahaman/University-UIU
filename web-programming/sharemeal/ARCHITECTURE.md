# ShareMeal - Clean Architecture

This project follows Clean Architecture principles to maintain separation of concerns and improve maintainability.

## Project Structure

```
sharemeal/
├── app/                          # Next.js App Router
│   ├── layout.tsx               # Root layout with Header/Footer
│   ├── page.tsx                 # Home page
│   └── globals.css              # Global styles
│
├── src/
│   ├── core/                    # Core Business Logic (Domain Layer)
│   │   ├── domain/
│   │   │   ├── entities/        # Domain entities
│   │   │   │   ├── Donor.ts
│   │   │   │   ├── NGO.ts
│   │   │   │   ├── Donation.ts
│   │   │   │   └── Stats.ts
│   │   │   └── repositories/    # Repository interfaces
│   │   │       └── IDonationRepository.ts
│   │   ├── usecases/           # Business use cases
│   │   └── utils/              # Core utilities
│   │
│   ├── features/               # Feature Modules (Presentation Layer)
│   │   ├── home/
│   │   │   ├── components/
│   │   │   │   ├── HeroSection.tsx
│   │   │   │   ├── HowItWorksSection.tsx
│   │   │   │   ├── ImpactSection.tsx
│   │   │   │   └── CTASection.tsx
│   │   │   └── HomePage.tsx
│   │   ├── donations/
│   │   │   └── components/
│   │   └── ngos/
│   │       └── components/
│   │
│   ├── shared/                 # Shared Components & Utilities
│   │   ├── components/
│   │   │   ├── Header.tsx
│   │   │   └── Footer.tsx
│   │   └── hooks/
│   │
│   └── infrastructure/         # External Services & Data (Infrastructure Layer)
│       └── data/
│
├── components/                 # shadcn/ui components
│   └── ui/
│
└── lib/                       # Library utilities
    └── utils.ts

```

## Architecture Layers

### 1. **Core Layer** (`src/core/`)
The innermost layer containing business logic and domain models.

- **Domain Entities**: Pure TypeScript interfaces/classes representing business concepts
  - `Donor`, `NGO`, `Donation`, `Stats`
- **Repository Interfaces**: Contracts for data access (no implementation)
- **Use Cases**: Business logic operations (to be implemented)
- **Utils**: Core utility functions

**Dependencies**: None (no dependencies on outer layers)

### 2. **Features Layer** (`src/features/`)
Feature-specific components and logic organized by domain.

Each feature module contains:
- **Components**: UI components specific to that feature
- **Pages**: Feature page compositions
- **Hooks**: Feature-specific React hooks (optional)
- **Types**: Feature-specific TypeScript types (optional)

**Dependencies**: Can depend on Core and Shared layers

### 3. **Shared Layer** (`src/shared/`)
Reusable components and utilities used across features.

- **Components**: Common UI components (Header, Footer, etc.)
- **Hooks**: Shared custom React hooks
- **Types**: Shared TypeScript types
- **Utils**: Shared utility functions

**Dependencies**: Can depend on Core layer only

### 4. **Infrastructure Layer** (`src/infrastructure/`)
External concerns like API calls, database access, third-party services.

- **Data**: Repository implementations
- **API**: API client configurations
- **Services**: External service integrations

**Dependencies**: Implements interfaces from Core layer

## Key Principles

1. **Dependency Rule**: Dependencies only point inward
   - Core doesn't know about Features or Infrastructure
   - Features can use Core and Shared
   - Infrastructure implements Core interfaces

2. **Feature Isolation**: Each feature is self-contained
   - Easy to add/remove features
   - Clear boundaries between domains

3. **Testability**: Business logic separated from UI
   - Core logic can be tested without React
   - Features can be tested independently

4. **Scalability**: Clear structure for growing codebase
   - Add new features without affecting existing ones
   - Refactor with confidence

## Adding New Features

1. Create feature directory: `src/features/[feature-name]/`
2. Add components: `src/features/[feature-name]/components/`
3. Create domain entities in `src/core/domain/entities/` if needed
4. Create use cases in `src/core/usecases/` for business logic
5. Implement data access in `src/infrastructure/data/`

## Tech Stack

- **Framework**: Next.js 16 (App Router)
- **Language**: TypeScript
- **Styling**: Tailwind CSS
- **UI Components**: shadcn/ui
- **Icons**: Lucide React
