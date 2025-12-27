export interface NGO {
  id: string;
  name: string;
  description: string;
  location: string;
  contactEmail: string;
  contactPhone: string;
  verified: boolean;
  mealsReceived: number;
  createdAt: Date;
}
