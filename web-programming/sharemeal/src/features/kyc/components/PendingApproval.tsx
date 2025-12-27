'use client';

import Link from 'next/link';
import { Button } from '@/components/ui/button';

export function PendingApproval() {
  return (
    <div className="w-full max-w-md mx-auto bg-white rounded-2xl shadow-lg p-12">
      <div className="text-center">
        {/* Illustration */}
        <div className="mb-6 flex justify-center">
          <svg
            className="w-48 h-48"
            viewBox="0 0 200 200"
            fill="none"
            xmlns="http://www.w3.org/2000/svg"
          >
            {/* Person sitting with laptop */}
            <circle cx="100" cy="60" r="20" stroke="#16a34a" strokeWidth="2" fill="none" />
            <path
              d="M100 80 L100 120 M100 95 L85 105 M100 95 L115 105"
              stroke="#16a34a"
              strokeWidth="2"
              strokeLinecap="round"
            />
            <path
              d="M85 120 L85 140 M115 120 L115 140"
              stroke="#16a34a"
              strokeWidth="2"
              strokeLinecap="round"
            />
            {/* Laptop */}
            <rect
              x="75"
              y="100"
              width="50"
              height="30"
              rx="2"
              stroke="#16a34a"
              strokeWidth="2"
              fill="#dcfce7"
            />
            <line x1="75" y1="105" x2="125" y2="105" stroke="#16a34a" strokeWidth="1" />
            {/* Base */}
            <ellipse cx="100" cy="145" rx="30" ry="5" fill="#e5e7eb" />
          </svg>
        </div>

        {/* Text */}
        <h1 className="text-2xl font-bold text-gray-900 mb-3">
          Your Account is pending
          <br />
          for admin Approval
        </h1>

        <p className="text-gray-600 mb-8">
          We're reviewing your documents. You'll receive an email once approved.
        </p>

        {/* Button */}
        <Link href="/">
          <Button className="w-full bg-green-600 hover:bg-green-700 text-white py-3 rounded-lg font-medium">
            Back to Home
          </Button>
        </Link>
      </div>
    </div>
  );
}
