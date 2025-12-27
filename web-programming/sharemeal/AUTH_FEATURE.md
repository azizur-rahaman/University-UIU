# 🔐 Authentication Feature

Complete authentication system for ShareMeal with multiple user roles and OTP verification.

## Features Implemented

### ✅ User Roles
- **Donor** - Individuals or businesses donating surplus food
- **NGO** - Organizations receiving food donations
- **Volunteer** - People helping with food distribution

### ✅ Authentication Pages

1. **Login** (`/auth/login`)
   - Email and password authentication
   - Social login options (GitHub, Google)
   - Forgot password link
   - Sign up redirect

2. **Signup Selection** (`/auth/signup`)
   - Choose user role (Donor, NGO, Volunteer)
   - Visual cards for each option
   - Direct navigation to role-specific signup

3. **Donor Signup** (`/auth/signup/donor`)
   - Full name
   - Email
   - Password
   - Password confirmation

4. **NGO Registration** (`/auth/signup/ngo`)
   - Organization name
   - Type
   - License number
   - Email
   - Address
   - Password fields

5. **Volunteer Registration** (`/auth/signup/volunteer`)
   - Full name
   - Email
   - Password
   - Availability time slots

6. **OTP Verification** (`/auth/verify-otp`)
   - 6-digit OTP input
   - Auto-focus next input
   - Paste support
   - Resend code with countdown timer (45 seconds)
   - Auto-navigation on completion

## Architecture

```
src/features/auth/
├── components/
│   ├── LoginForm.tsx              # Login form component
│   ├── SignupSelection.tsx        # Role selection component
│   ├── SignupDonorForm.tsx       # Donor signup form
│   ├── SignupNGOForm.tsx         # NGO registration form
│   ├── SignupVolunteerForm.tsx   # Volunteer signup form
│   ├── OTPVerification.tsx       # OTP verification component
│   └── index.ts                  # Barrel export

src/core/domain/entities/
├── User.ts                        # User type definitions
└── Auth.ts                        # Auth interfaces

app/auth/
├── layout.tsx                     # Auth layout
├── login/page.tsx                # Login page
├── signup/
│   ├── page.tsx                  # Signup selection page
│   ├── donor/page.tsx            # Donor signup page
│   ├── ngo/page.tsx              # NGO signup page
│   └── volunteer/page.tsx        # Volunteer signup page
└── verify-otp/page.tsx           # OTP verification page
```

## Routes

| Route | Description |
|-------|-------------|
| `/auth/login` | User login |
| `/auth/signup` | Role selection |
| `/auth/signup/donor` | Donor registration |
| `/auth/signup/ngo` | NGO registration |
| `/auth/signup/volunteer` | Volunteer registration |
| `/auth/verify-otp` | OTP verification |
| `/dashboard` | Post-auth dashboard |

## Component Features

### LoginForm
- ✅ Email/password inputs
- ✅ Form validation
- ✅ Social login buttons
- ✅ Forgot password link
- ✅ Sign up redirect

### SignupForms (Donor/NGO/Volunteer)
- ✅ Role-specific fields
- ✅ Password confirmation
- ✅ Form validation
- ✅ Auto-navigation to OTP verification
- ✅ Sign in redirect

### OTPVerification
- ✅ 6-digit input boxes
- ✅ Auto-focus on next input
- ✅ Backspace navigation
- ✅ Paste support
- ✅ 45-second countdown timer
- ✅ Resend code functionality
- ✅ Submit validation

## User Flow

```
1. Home Page
   ↓
2. Click "Get Started" → Login Page
   ↓
3. Click "Sign up" → Signup Selection
   ↓
4. Choose Role → Role-specific Signup Form
   ↓
5. Submit Form → OTP Verification
   ↓
6. Verify OTP → Dashboard
```

## Styling

- **Design System**: Tailwind CSS
- **UI Components**: shadcn/ui (Button, Card, Input)
- **Icons**: Lucide React
- **Color Scheme**: Green primary (#16a34a)
- **Responsive**: Mobile-first approach

## Next Steps (To Implement)

1. **Backend Integration**
   - Connect to authentication API
   - Implement JWT token management
   - Add session management

2. **Form Validation**
   - Add Zod schema validation
   - Real-time field validation
   - Password strength indicator

3. **State Management**
   - Add React Context or Zustand
   - Persist auth state
   - Protected routes

4. **Email Service**
   - OTP generation and sending
   - Email verification
   - Password reset emails

5. **Security**
   - CSRF protection
   - Rate limiting
   - Secure password hashing

6. **Features**
   - Remember me functionality
   - Two-factor authentication
   - Social OAuth implementation

## Usage Example

```tsx
// In your page
import { LoginForm } from '@/src/features/auth/components';

export default function LoginPage() {
  return (
    <div className="min-h-screen bg-gray-50 flex items-center justify-center p-4">
      <LoginForm />
    </div>
  );
}
```

## Testing the Feature

1. Start the development server:
   ```bash
   npm run dev
   ```

2. Navigate to `http://localhost:3000`

3. Click "Get Started" in header

4. Test login flow: `/auth/login`

5. Test signup flows:
   - Click "Sign up" → Select role → Fill form → Verify OTP

6. Test OTP verification:
   - Enter 6-digit code
   - Test paste functionality
   - Test resend code

## API Integration Points (Ready for Implementation)

```typescript
// Login
POST /api/auth/login
Body: { email, password }
Response: { user, token }

// Signup
POST /api/auth/signup/donor
POST /api/auth/signup/ngo
POST /api/auth/signup/volunteer
Body: { ...formData }
Response: { user, requiresOTP: true }

// OTP
POST /api/auth/verify-otp
Body: { email, code }
Response: { user, token }

POST /api/auth/resend-otp
Body: { email }
Response: { success: true }
```

## Environment Variables (To Add)

```env
NEXT_PUBLIC_API_URL=your_api_url
NEXTAUTH_SECRET=your_secret
NEXTAUTH_URL=http://localhost:3000

# Social Auth
GITHUB_ID=your_github_id
GITHUB_SECRET=your_github_secret
GOOGLE_ID=your_google_id
GOOGLE_SECRET=your_google_secret
```
