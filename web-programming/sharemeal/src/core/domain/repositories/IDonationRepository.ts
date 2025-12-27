import { Donation } from '../entities/Donation';

export interface IDonationRepository {
  create(donation: Omit<Donation, 'id' | 'createdAt'>): Promise<Donation>;
  findById(id: string): Promise<Donation | null>;
  findByDonor(donorId: string): Promise<Donation[]>;
  findByNGO(ngoId: string): Promise<Donation[]>;
  update(id: string, donation: Partial<Donation>): Promise<Donation>;
  delete(id: string): Promise<void>;
}
