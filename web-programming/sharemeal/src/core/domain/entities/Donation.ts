export interface Donation {
  id: string;
  donorId: string;
  foodType: string;
  quantity: number;
  unit: string;
  pickupDate: Date;
  pickupTime: string;
  location: string;
  status: 'pending' | 'scheduled' | 'picked-up' | 'delivered' | 'cancelled';
  ngoId?: string;
  createdAt: Date;
}
