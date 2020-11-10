//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SSOProfileSourceUtils : NSObject
{
}

+ (id)errorWithCode:(long long)arg1;
+ (_Bool)profileImageHasFlag:(id)arg1 forProfile:(id)arg2 error:(id *)arg3;
+ (_Bool)profileImageIsDefault:(id)arg1 error:(id *)arg2;
+ (_Bool)profileImageIsMonogram:(id)arg1 error:(id *)arg2;
+ (_Bool)isInNewPeopleAPIFormat:(id)arg1;
+ (id)obfuscatedCustomerIDForProfile:(id)arg1;
+ (id)ownerUserTypesForProfile:(id)arg1;
+ (id)hostedDomainForProfile:(id)arg1;
+ (id)coverImageForProfile:(id)arg1;
+ (id)imageForProfile:(id)arg1;
+ (id)coverImageURLStringForProfile:(id)arg1;
+ (id)primaryProfileImageURLStringForProfile:(id)arg1;
+ (id)primaryEmailForProfile:(id)arg1;
+ (id)primaryFamilyNameForProfile:(id)arg1;
+ (id)primaryGivenNameForProfile:(id)arg1;
+ (id)primaryDisplayNameForProfile:(id)arg1;
+ (id)profileSSONameDictionaryForProfile:(id)arg1;
+ (id)primarySSODictionaryForKey:(id)arg1 profile:(id)arg2;
+ (id)SSOProfileDictionaryFromNewPeopleAPIWithProfile:(id)arg1;
+ (id)resizedCoverPhotoURLStringForDefaultURLString:(id)arg1;

@end

