# 🍽️ ShareMeal - Project Overview

**A Next.js application for connecting food donors with NGOs and volunteers to reduce food waste and serve communities in need.**

---

## 🎯 Project Status

✅ **Phase 1: Clean Architecture Setup** - Complete  
✅ **Phase 2: Home Page Design** - Complete  
✅ **Phase 3: Authentication System** - Complete  
✅ **Phase 4: KYC Verification** - Complete  
⏳ **Phase 5: Dashboard & Features** - To be implemented

---

## 📁 Project Structure

```
sharemeal/
├── app/                           # Next.js App Router
│   ├── auth/                     # Authentication routes
│   │   ├── login/               # Login page
│   │   ├── signup/              # Signup pages
│   │   │   ├── donor/
│   │   │   ├── ngo/
│   │   │   └── volunteer/
│   │   └── verify-otp/          # OTP verification
│   ├── kyc/                     # KYC Verification routes
│   │   ├── verify/              # Document upload page
│   │   └── pending/             # Pending approval page
│   ├── dashboard/               # Dashboard (placeholder)
│   ├── layout.tsx               # Root layout
│   ├── page.tsx                 # Home page
│   └── globals.css              # Global styles
│
├── src/                          # Clean Architecture Source
│   ├── core/                    # Domain Layer
│   │   ├── domain/
│   │   │   ├── entities/       # Domain entities
│   │   │   │   ├── Donor.ts
│   │   │   │   ├── NGO.ts
│   │   │   │   ├── Donation.ts
│   │   │   │   ├── User.ts
│   │   │   │   ├── Auth.ts
│   │   │   │   ├── KYC.ts
│   │   │   │   └── Stats.ts
│   │   │   └── repositories/   # Repository interfaces
│   │   ├── usecases/           # Business logic
│   │   └── utils/              # Core utilities
│   │
│   ├── features/               # Feature Modules
│   │   ├── home/              # Home page feature
│   │   │   ├── components/
│   │   │   │   ├── HeroSection.tsx
│   │   │   │   ├── HowItWorksSection.tsx
│   │   │   │   ├── ImpactSection.tsx
│   │   │   │   └── CTASection.tsx
│   │   │   └── HomePage.tsx
│   │   │
│   │   ├── auth/              # Authentication feature
│   │   │   └── components/
│   │   │       ├── LoginForm.tsx
│   │   │       ├── SignupSelection.tsx
│   │   │       ├── SignupDonorForm.tsx
│   │   │       ├── SignupNGOForm.tsx
│   │   │       ├── SignupVolunteerForm.tsx
│   │   │       └── OTPVerification.tsx
│   │   │
│   │   ├── kyc/               # KYC Verification feature
│   │   │   └── components/
│   │   │       ├── FileUploadCard.tsx
│   │   │       ├── KYCVerificationForm.tsx
│   │   │       └── PendingApproval.tsx
│   │   │
│   │   ├── donations/         # Donations feature (TBD)
│   │   └── ngos/             # NGOs feature (TBD)
│   │
│   ├── shared/               # Shared Resources
│   │   ├── components/
│   │   │   ├── Header.tsx
│   │   │   └── Footer.tsx
│   │   └── hooks/
│   │
│   └── infrastructure/       # External Services
│       └── data/
│
├── components/               # shadcn/ui components
│   └── ui/
│       ├── button.tsx
│       ├── card.tsx
│       └── input.tsx
│
├── lib/                     # Library utilities
│   └── utils.ts
│
└── public/                  # Static assets
```

---

## 🚀 Features Implemented

### ✅ Home Page
- **Hero Section** with CTAs and statistics
- **How It Works** section explaining the platform
- **Impact Section** showcasing real-world benefits
- **Call-to-Action** section for conversions
- Responsive design with mobile-first approach
- Professional green-themed UI

### ✅ Authentication System
- **Multiple User Roles**: Donor, NGO, Volunteer
- **Login Page** with social auth options
- **Signup Flow** with role selection
- **Role-Specific Forms** with validation
- **OTP Verification** with auto-focus and paste support
- **Timer & Resend** functionality
- Clean navigation flow

### ✅ KYC Verification
- **Document Upload** with drag & drop
- **File Validation** (JPG, PNG, PDF, max 5MB)
- **Progress Tracking** with visual indicators
- **Multi-document Support** (Trade License, eTIN)
- **Pending Approval** status page
- Seamless post-signup flow

### ✅ Architecture
- **Clean Architecture** principles
- **Feature-based** organization
- **Domain-Driven Design**
- **Separation of Concerns**
- **Scalable Structure**

---

## 🛠️ Tech Stack

| Category | Technology |
|----------|-----------|
| Framework | Next.js 16 (App Router) |
| Language | TypeScript |
| Styling | Tailwind CSS |
| UI Components | shadcn/ui |
| Icons | Lucide React |
| State Management | React Hooks (Client Components) |
| Forms | Native HTML5 + React State |

---

## 📄 Available Routes

### Public Routes
| Route | Description |
|-------|-------------|
| `/` | Home page with hero, features, and CTA |
| `/auth/login` | User login |
| `/auth/signup` | Role selection for signup |
| `/auth/signup/donor` | Donor registration |
| `/auth/signup/ngo` | NGO registration |
| `/auth/signup/volunteer` | Volunteer registration |
| `/auth/verify-otp` | OTP verification |
| `/kyc/verify` | KYC document upload |
| `/kyc/pending` | Pending approval status |

### Protected Routes (Placeholder)
| Route | Description |
|-------|-------------|
| `/dashboard` | User dashboard (post-auth) |

---

## 🎨 Design System

### Colors
- **Primary**: Green (`#16a34a` - green-600)
- **Secondary**: Gray shades
- **Success**: Green
- **Background**: White, Gray-50

### Typography
- **Font**: Geist Sans (Next.js default)
- **Headings**: Bold, large sizes
- **Body**: Regular weight, readable sizes

### Components
- **Buttons**: Rounded, green primary, white on green
- **Cards**: White background, subtle shadow
- **Forms**: Clean inputs with focus states
- **Icons**: Lucide React for consistency

---

## 🧪 Getting Started

### Prerequisites
- Node.js 18+ 
- npm or yarn

### Installation & Running

```bash
# Navigate to project
cd sharemeal

# Install dependencies
npm install

# Run development server
npm run dev

# Build for production
npm run build

# Start production server
npm start
```

### Access the App
- Local: `http://localhost:3000`
- Network: `http://192.168.0.194:3000`

---

## 🎯 User Flows

### Donor Flow
```
Home → Get Started → Login → Sign Up → 
Select "Donor" → Fill Form → Verify OTP → Upload KYC Documents → Pending Approval
```

### NGO Flow
```
Home → Get Started → Login → Sign Up → 
Select "NGO" → Fill Form → Verify OTP → Upload KYC Documents → Pending Approval
```

### Volunteer Flow
```
Home → Get Started → Login → Sign Up → 
Select "Volunteer" → Fill Form → Verify OTP → Upload KYC Documents → Pending Approval
```

---

## 📚 Documentation

- **[ARCHITECTURE.md](./ARCHITECTURE.md)** - Clean architecture details
- **[AUTH_FEATURE.md](./AUTH_FEATURE.md)** - Authentication feature docs
- **[KYC_FEATURE.md](./KYC_FEATURE.md)** - KYC verification feature docs
- **[src/README.md](./src/README.md)** - Quick architecture reference

---

## ✨ Key Highlights

1. **Clean Architecture**
   - Organized by features and layers
   - Easy to maintain and scale
   - Clear separation of concerns

2. **Type Safety**
   - Full TypeScript coverage
   - Type-safe domain entities
   - IntelliSense support

3. **Modern UI/UX**
   - Responsive design
   - Smooth transitions
   - Accessible components
   - Professional aesthetics

4. **Developer Experience**
   - Hot reload with Turbopack
   - ESLint for code quality
   - Organized file structure
   - Comprehensive documentation

---

## 🔜 Next Steps

### Phase 4: Dashboard & Core Features
1. **User Dashboard**
   - Profile management
   - Activity overview
   - Statistics

2. **Donor Features**
   - Create food donation listings
   - Schedule pickups
   - Track donations
   - View donation history

3. **NGO Features**
   - Browse available donations
   - Request food items
   - Manage distribution
   - Generate reports

4. **Volunteer Features**
   - View pickup/delivery tasks
   - Accept assignments
   - Track deliveries
   - Log hours

### Phase 5: Advanced Features
1. **Real-time Notifications**
2. **Chat/Messaging System**
3. **Analytics Dashboard**
4. **Admin Panel**
5. **Mobile App (React Native)**

### Phase 6: Backend Integration
1. **API Development**
   - RESTful API or GraphQL
   - Authentication & Authorization
   - Database integration (PostgreSQL/MongoDB)

2. **Security**
   - JWT token management
   - Rate limiting
   - Data validation
   - HTTPS/SSL

3. **Third-party Services**
   - Email service (SendGrid/Mailgun)
   - SMS service (Twilio)
   - Maps integration (Google Maps)
   - Payment gateway (if needed)

---

## 🤝 Contributing

This project follows clean architecture principles. When adding new features:

1. Define domain entities in `src/core/domain/entities/`
2. Create feature components in `src/features/[feature]/components/`
3. Add shared components to `src/shared/components/`
4. Implement data layer in `src/infrastructure/data/`

---

## 📝 License

This project is part of a university web programming course.

---

## 👨‍💻 Development Notes

- Server running on port 3000 (Turbopack)
- No compilation errors
- All TypeScript checks passing
- Responsive design tested
- Clean git history recommended

---

## 🎓 Learning Outcomes

This project demonstrates:
- ✅ Clean Architecture implementation
- ✅ Next.js 16 App Router
- ✅ TypeScript best practices
- ✅ Component-driven development
- ✅ Responsive web design
- ✅ Form handling and validation
- ✅ Routing and navigation
- ✅ State management with hooks
- ✅ Modern React patterns

---

**Built with ❤️ using Next.js, TypeScript, and Tailwind CSS**
