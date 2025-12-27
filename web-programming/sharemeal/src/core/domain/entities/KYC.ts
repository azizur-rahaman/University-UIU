export interface KYCDocument {
  id: string;
  userId: string;
  documentType: 'trade_license' | 'etin' | 'nid' | 'birth_certificate';
  fileName: string;
  fileUrl: string;
  fileSize: number;
  uploadedAt: Date;
  status: 'pending' | 'approved' | 'rejected';
}

export interface KYCVerification {
  id: string;
  userId: string;
  userRole: 'donor' | 'ngo' | 'volunteer';
  documents: KYCDocument[];
  status: 'pending' | 'in_review' | 'approved' | 'rejected';
  submittedAt?: Date;
  reviewedAt?: Date;
  reviewedBy?: string;
  rejectionReason?: string;
}

export interface KYCSubmission {
  tradeLicense?: File;
  etin?: File;
  nid?: File;
  birthCertificate?: File;
}

export interface UploadProgress {
  documentType: string;
  progress: number;
  status: 'idle' | 'uploading' | 'success' | 'error';
  error?: string;
}
