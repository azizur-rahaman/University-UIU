export interface LoginCredentials {
  email: string;
  password: string;
}

export interface SignupDonorData {
  fullName: string;
  email: string;
  password: string;
  confirmPassword: string;
}

export interface SignupNGOData {
  organizationName: string;
  type: string;
  licenseNumber: string;
  email: string;
  address: string;
  password: string;
  confirmPassword: string;
}

export interface SignupVolunteerData {
  fullName: string;
  email: string;
  password: string;
  confirmPassword: string;
  timeSlots: string[];
}

export interface OTPVerification {
  email: string;
  code: string;
}

export interface AuthResponse {
  user: {
    id: string;
    email: string;
    role: string;
  };
  token: string;
}
