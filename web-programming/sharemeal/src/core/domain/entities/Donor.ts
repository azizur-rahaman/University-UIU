export interface Donor {
  id: string;
  name: string;
  email: string;
  phone?: string;
  totalDonations: number;
  createdAt: Date;
}
