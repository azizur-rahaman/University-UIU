'use client';

import { useState } from 'react';
import { useRouter } from 'next/navigation';
import { FileUploadCard } from './FileUploadCard';
import { Button } from '@/components/ui/button';
import { CreditCard, FileText } from 'lucide-react';

export function KYCVerificationForm() {
  const router = useRouter();
  const [files, setFiles] = useState<{
    tradeLicense?: File;
    etin?: File;
  }>({});
  const [uploadProgress, setUploadProgress] = useState<{
    tradeLicense: number;
    etin: number;
  }>({
    tradeLicense: 0,
    etin: 0,
  });
  const [isSubmitting, setIsSubmitting] = useState(false);

  const handleFileSelect = (type: 'tradeLicense' | 'etin', file: File) => {
    setFiles((prev) => ({
      ...prev,
      [type]: file,
    }));
  };

  const simulateUpload = async (type: 'tradeLicense' | 'etin') => {
    return new Promise<void>((resolve) => {
      let progress = 0;
      const interval = setInterval(() => {
        progress += 10;
        setUploadProgress((prev) => ({
          ...prev,
          [type]: progress,
        }));
        if (progress >= 100) {
          clearInterval(interval);
          resolve();
        }
      }, 100);
    });
  };

  const handleSubmit = async (e: React.FormEvent) => {
    e.preventDefault();

    if (!files.tradeLicense || !files.etin) {
      alert('Please upload both documents');
      return;
    }

    setIsSubmitting(true);

    try {
      // Simulate upload for both files
      await Promise.all([
        simulateUpload('tradeLicense'),
        simulateUpload('etin'),
      ]);

      // TODO: Implement actual file upload to backend
      console.log('Submitting KYC documents:', files);

      // Wait a bit to show completion
      await new Promise((resolve) => setTimeout(resolve, 500));

      // Navigate to pending approval page
      router.push('/kyc/pending');
    } catch (error) {
      console.error('Error uploading documents:', error);
      alert('Failed to upload documents. Please try again.');
    } finally {
      setIsSubmitting(false);
    }
  };

  const canSubmit = files.tradeLicense && files.etin && !isSubmitting;

  return (
    <div className="w-full max-w-3xl mx-auto bg-white rounded-2xl shadow-lg p-8">
      {/* Header */}
      <div className="text-center mb-8">
        <h1 className="text-3xl font-bold text-gray-900 mb-2">KYC Verification</h1>
        <p className="text-gray-600">Complete your verification</p>
      </div>

      {/* Info Text */}
      <p className="text-center text-gray-700 mb-8">
        Upload your University ID and NID/Birth Certificate to unlock Paiir features.
      </p>

      <form onSubmit={handleSubmit} className="space-y-6">
        {/* Progress Bar */}
        <div className="relative">
          <div className="absolute top-0 left-0 h-1 bg-gray-200 rounded-full w-full">
            <div
              className="h-1 bg-green-600 rounded-full transition-all duration-500"
              style={{
                width: `${
                  (Object.values(files).filter(Boolean).length / 2) * 100
                }%`,
              }}
            />
          </div>
        </div>

        {/* Upload Cards */}
        <div className="space-y-4 mt-8">
          <FileUploadCard
            title="Trade License"
            subtitle="Upload Front / Back"
            icon={<CreditCard className="w-6 h-6 text-green-600" />}
            onFileSelect={(file) => handleFileSelect('tradeLicense', file)}
            file={files.tradeLicense}
            progress={uploadProgress.tradeLicense}
            isUploading={isSubmitting && uploadProgress.tradeLicense < 100}
          />

          <FileUploadCard
            title="eTIN"
            subtitle="Upload Document"
            icon={<FileText className="w-6 h-6 text-green-600" />}
            onFileSelect={(file) => handleFileSelect('etin', file)}
            file={files.etin}
            progress={uploadProgress.etin}
            isUploading={isSubmitting && uploadProgress.etin < 100}
          />
        </div>

        {/* Submit Button */}
        <Button
          type="submit"
          className="w-full bg-green-600 hover:bg-green-700 text-white py-3 rounded-lg font-medium text-base"
          disabled={!canSubmit}
        >
          {isSubmitting ? 'Submitting...' : 'Submit for Verification'}
        </Button>
      </form>
    </div>
  );
}
