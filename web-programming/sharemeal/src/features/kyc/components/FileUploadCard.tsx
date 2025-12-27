'use client';

import { useState, useRef } from 'react';
import { Upload, FileText, CheckCircle2, X } from 'lucide-react';

interface FileUploadCardProps {
  title: string;
  subtitle: string;
  icon: React.ReactNode;
  onFileSelect: (file: File) => void;
  file?: File;
  progress?: number;
  isUploading?: boolean;
}

export function FileUploadCard({
  title,
  subtitle,
  icon,
  onFileSelect,
  file,
  progress = 0,
  isUploading = false,
}: FileUploadCardProps) {
  const [dragActive, setDragActive] = useState(false);
  const inputRef = useRef<HTMLInputElement>(null);

  const handleDrag = (e: React.DragEvent) => {
    e.preventDefault();
    e.stopPropagation();
    if (e.type === 'dragenter' || e.type === 'dragover') {
      setDragActive(true);
    } else if (e.type === 'dragleave') {
      setDragActive(false);
    }
  };

  const handleDrop = (e: React.DragEvent) => {
    e.preventDefault();
    e.stopPropagation();
    setDragActive(false);

    if (e.dataTransfer.files && e.dataTransfer.files[0]) {
      handleFile(e.dataTransfer.files[0]);
    }
  };

  const handleChange = (e: React.ChangeEvent<HTMLInputElement>) => {
    e.preventDefault();
    if (e.target.files && e.target.files[0]) {
      handleFile(e.target.files[0]);
    }
  };

  const handleFile = (file: File) => {
    // Validate file type
    const validTypes = ['image/jpeg', 'image/jpg', 'image/png', 'application/pdf'];
    if (!validTypes.includes(file.type)) {
      alert('Please upload a valid file (JPG, PNG, or PDF)');
      return;
    }

    // Validate file size (max 5MB)
    if (file.size > 5 * 1024 * 1024) {
      alert('File size must be less than 5MB');
      return;
    }

    onFileSelect(file);
  };

  const handleRemove = () => {
    onFileSelect(null as any);
    if (inputRef.current) {
      inputRef.current.value = '';
    }
  };

  return (
    <div className="border-2 border-gray-200 rounded-xl p-6 hover:border-green-300 transition-colors">
      <div className="flex items-start gap-4">
        <div className="p-3 bg-green-50 rounded-lg border-2 border-green-100 flex-shrink-0">
          {icon}
        </div>

        <div className="flex-1">
          <h3 className="font-semibold text-gray-900 mb-1">{title}</h3>
          <p className="text-sm text-gray-600 mb-3">{subtitle}</p>

          {!file ? (
            <div
              className={`border-2 border-dashed rounded-lg p-6 text-center cursor-pointer transition-colors ${
                dragActive
                  ? 'border-green-500 bg-green-50'
                  : 'border-gray-300 hover:border-green-400 hover:bg-gray-50'
              }`}
              onDragEnter={handleDrag}
              onDragLeave={handleDrag}
              onDragOver={handleDrag}
              onDrop={handleDrop}
              onClick={() => inputRef.current?.click()}
            >
              <Upload className="w-8 h-8 text-gray-400 mx-auto mb-2" />
              <p className="text-sm text-gray-600 mb-1">
                <span className="text-green-600 font-medium">Click to upload</span> or drag and drop
              </p>
              <p className="text-xs text-gray-500">PNG, JPG or PDF (max. 5MB)</p>
              <input
                ref={inputRef}
                type="file"
                className="hidden"
                accept=".jpg,.jpeg,.png,.pdf"
                onChange={handleChange}
              />
            </div>
          ) : (
            <div className="border-2 border-green-200 rounded-lg p-4 bg-green-50">
              <div className="flex items-center justify-between mb-2">
                <div className="flex items-center gap-2 flex-1 min-w-0">
                  <FileText className="w-5 h-5 text-green-600 flex-shrink-0" />
                  <span className="text-sm font-medium text-gray-900 truncate">{file.name}</span>
                </div>
                <button
                  onClick={handleRemove}
                  className="p-1 hover:bg-green-100 rounded-full transition-colors flex-shrink-0"
                  disabled={isUploading}
                >
                  <X className="w-4 h-4 text-gray-500" />
                </button>
              </div>

              {isUploading ? (
                <div>
                  <div className="w-full bg-green-200 rounded-full h-2 mb-1">
                    <div
                      className="bg-green-600 h-2 rounded-full transition-all duration-300"
                      style={{ width: `${progress}%` }}
                    />
                  </div>
                  <p className="text-xs text-gray-600">Uploading... {progress}%</p>
                </div>
              ) : (
                <div className="flex items-center gap-1 text-green-600">
                  <CheckCircle2 className="w-4 h-4" />
                  <span className="text-xs font-medium">Ready to submit</span>
                </div>
              )}
            </div>
          )}
        </div>
      </div>
    </div>
  );
}
