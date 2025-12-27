export type UserRole = 'donor' | 'ngo' | 'volunteer' | 'admin';

export interface User {
  id: string;
  email: string;
  role: UserRole;
  verified: boolean;
  createdAt: Date;
  updatedAt: Date;
}

export interface DonorProfile extends User {
  role: 'donor';
  fullName: string;
  phone?: string;
  address?: string;
}

export interface NGOProfile extends User {
  role: 'ngo';
  organizationName: string;
  type: string;
  licenseNumber: string;
  email: string;
  address: string;
  verified: boolean;
}

export interface VolunteerProfile extends User {
  role: 'volunteer';
  fullName: string;
  email: string;
  phone?: string;
  availabilitySlots: string[];
}
