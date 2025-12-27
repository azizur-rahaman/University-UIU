'use client';

import Link from 'next/link';
import { UserCircle, Building2, Users } from 'lucide-react';
import Image from 'next/image';

export function SignupSelection() {
  const options = [
    {
      title: 'Sign Up as Donor',
      description: 'Join as an individual or business to donate surplus food',
      icon: UserCircle,
      href: '/auth/signup/donor',
      color: 'bg-blue-50 text-blue-600 border-blue-200',
    },
    {
      title: 'Register as NGO',
      description: 'Register your organization to receive food donations',
      icon: Building2,
      href: '/auth/signup/ngo',
      color: 'bg-green-50 text-green-600 border-green-200',
    },
    {
      title: 'Register as Volunteer',
      description: 'Help distribute food and make a difference',
      icon: Users,
      href: '/auth/signup/volunteer',
      color: 'bg-purple-50 text-purple-600 border-purple-200',
    },
  ];

  return (
    <div className="w-full max-w-2xl mx-auto bg-white rounded-2xl shadow-lg p-8">
      {/* Logo and Title */}
      <div className="text-center mb-8">
        <div className="flex items-center justify-center gap-2 mb-2">
                            <Image src={"/logo.png"} alt="ShareMeal Logo" width={40} height={40} />
         
          <h1 className="text-2xl font-bold text-gray-900">ShareMeal</h1>
        </div>
        <p className="text-gray-600 text-sm">Choose how you want to join</p>
      </div>

      {/* Options */}
      <div className="space-y-4">
        {options.map((option) => (
          <Link
            key={option.href}
            href={option.href}
            className="block p-6 border-2 border-gray-200 rounded-xl hover:border-green-500 hover:shadow-md transition-all group"
          >
            <div className="flex items-start gap-4">
              <div className={`p-3 rounded-lg ${option.color} border-2 group-hover:scale-110 transition-transform`}>
                <option.icon className="w-6 h-6" />
              </div>
              <div className="flex-1">
                <h3 className="text-lg font-semibold text-gray-900 mb-1">
                  {option.title}
                </h3>
                <p className="text-sm text-gray-600">
                  {option.description}
                </p>
              </div>
              <svg
                className="w-5 h-5 text-gray-400 group-hover:text-green-600 group-hover:translate-x-1 transition-all"
                fill="none"
                viewBox="0 0 24 24"
                stroke="currentColor"
              >
                <path strokeLinecap="round" strokeLinejoin="round" strokeWidth={2} d="M9 5l7 7-7 7" />
              </svg>
            </div>
          </Link>
        ))}
      </div>

      {/* Sign In Link */}
      <p className="text-center text-sm text-gray-600 mt-8">
        Already have an account?{' '}
        <Link href="/auth/login" className="text-green-600 hover:text-green-700 font-medium">
          Sign In
        </Link>
      </p>
    </div>
  );
}
