# 🗺️ Quick Navigation Guide

## Test the Application

Your ShareMeal app is running at: **http://localhost:3000**

---

## 📍 Available Pages to Test

### 🏠 Home Page
**URL:** `http://localhost:3000/`

What you'll see:
- Hero section with "Together We Save Food & Feed Lives"
- Statistics bar (Meals Served, Active Donors, Partner NGOs, Food Saved)
- How It Works section (3 steps)
- Making a Real Impact section
- Ready to Make a Difference CTA

**Try clicking:**
- "Join as Donor" button → Goes to `/auth/signup/donor`
- "Register NGO" button → Goes to `/auth/signup/ngo`
- "Get Started" (header or footer) → Goes to `/auth/login`

---

### 🔐 Authentication Pages

#### 1. Login Page
**URL:** `http://localhost:3000/auth/login`

Features:
- Email and password inputs
- GitHub and Google social login buttons
- "Forgot Password?" link
- "Sign up" link

**Try clicking:**
- "Sign up" → Goes to `/auth/signup`

---

#### 2. Signup Selection
**URL:** `http://localhost:3000/auth/signup`

Features:
- 3 cards for different user roles:
  - 👤 Sign Up as Donor
  - 🏢 Register as NGO
  - 👥 Register as Volunteer

**Try clicking:**
- Any card → Goes to respective signup form

---

#### 3. Donor Signup
**URL:** `http://localhost:3000/auth/signup/donor`

Form fields:
- Full Name
- Email
- Password
- Confirm Password

**Try filling and submitting:**
- Redirects to `/auth/verify-otp`

---

#### 4. NGO Registration
**URL:** `http://localhost:3000/auth/signup/ngo`

Form fields:
- Organization Name
- Type
- License Number
- Email
- Address
- Password
- Confirm Password

**Try filling and submitting:**
- Redirects to `/auth/verify-otp`

---

#### 5. Volunteer Registration
**URL:** `http://localhost:3000/auth/signup/volunteer`

Form fields:
- Full Name
- Email
- Password
- Confirm Password
- Time Slots

**Try filling and submitting:**
- Redirects to `/auth/verify-otp`

---

#### 6. OTP Verification
**URL:** `http://localhost:3000/auth/verify-otp`

Features:
- 6 input boxes for OTP
- Auto-focus on next box
- Paste support (try pasting "123456")
- 45-second countdown timer
- "Resend Code" button (enabled after timer expires)

**Try:**
1. Type digits one by one (auto-focuses next)
2. Press backspace (goes to previous box)
3. Paste a 6-digit code
4. Click "Verify" → Goes to `/kyc/verify`

---

#### 7. KYC Verification
**URL:** `http://localhost:3000/kyc/verify`

Features:
- Upload Trade License (drag & drop or click)
- Upload eTIN document
- File validation (JPG, PNG, PDF, max 5MB)
- Progress bar showing completion
- Upload progress animation

**Try:**
1. Drag and drop a file onto upload area
2. Click to browse and select file
3. See file preview with name
4. Click X to remove file
5. Upload both documents
6. Click "Submit for Verification" → Goes to `/kyc/pending`

---

#### 8. Pending Approval
**URL:** `http://localhost:3000/kyc/pending`

Features:
- Illustration of person with laptop
- Status message
- "Back to Home" button

**Try:**
- Click "Back to Home" → Goes to `/`

---

#### 9. Dashboard (Success Page)
**URL:** `http://localhost:3000/dashboard`

Features:
- Success message
- "Go to Home" button
- "View Profile" button (placeholder)

---

## 🎯 Full Test Flow

### Complete Donor Journey
1. Go to `http://localhost:3000/`
2. Click "Get Started" in header
3. Click "Sign up"
4. Click "Sign Up as Donor" card
5. Fill in the form:
   - Full Name: John Doe
   - Email: john@example.com
   - Password: password123
   - Confirm Password: password123
6. Click "Sign Up"
7. Enter OTP: 123456 (or any 6 digits)
8. Click "Verify"
9. Upload Trade License (JPG/PNG/PDF)
10. Upload eTIN document (JPG/PNG/PDF)
11. Click "Submit for Verification"
12. See pending approval page

### Complete NGO Journey
1. Go to `http://localhost:3000/`
2. Click "Register NGO" in hero section
3. Fill in the NGO form
4. Submit and verify OTP
5. Upload KYC documents
6. See pending approval page

---

## 🎨 What to Look For

### Design Elements
- ✅ Green theme (#16a34a)
- ✅ Smooth transitions and hover effects
- ✅ Responsive layouts (try resizing browser)
- ✅ Clean, modern UI
- ✅ Consistent spacing and typography

### Interactive Elements
- ✅ All buttons have hover states
- ✅ Forms validate on submit
- ✅ Links navigate correctly
- ✅ OTP inputs auto-focus
- ✅ Timer counts down
- ✅ Resend button enables after timer

### Responsive Behavior
- ✅ Mobile menu (on small screens)
- ✅ Cards stack on mobile
- ✅ Forms adjust to screen size
- ✅ Images scale properly

---

## 🔍 Quick Testing Checklist

- [ ] Home page loads correctly
- [ ] Header and footer visible
- [ ] Statistics display properly
- [ ] Login page accessible
- [ ] All 3 signup forms work
- [ ] OTP verification functions
- [ ] Timer countdown works
- [ ] Paste OTP works
- [ ] KYC upload page loads
- [ ] Drag and drop upload works
- [ ] Click to upload works
- [ ] File validation works
- [ ] Upload progress shows
- [ ] Pending approval page displays
- [ ] All navigation links work
- [ ] Responsive on mobile view
- [ ] No console errors

---

## 🐛 Troubleshooting

If something doesn't work:

1. **Check the server is running:**
   ```bash
   npm run dev
   ```

2. **Clear browser cache:**
   - Hard refresh: Cmd+Shift+R (Mac) or Ctrl+F5 (Windows)

3. **Check console for errors:**
   - Open DevTools: F12 or Cmd+Option+I

4. **Restart the dev server:**
   - Stop: Ctrl+C
   - Start: `npm run dev`

---

## 📱 Mobile Testing

Test on different screen sizes:
- Desktop: 1920x1080
- Tablet: 768x1024
- Mobile: 375x667

Use Chrome DevTools:
1. Press F12
2. Click device toolbar icon
3. Select device

---

**Happy Testing! 🎉**
