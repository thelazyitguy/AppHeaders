//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMSdk : NSObject
{
}

+ (void)setPostalCode:(id)arg1;
+ (void)setLocation:(id)arg1;
+ (void)setLocationWithCity:(id)arg1 state:(id)arg2 country:(id)arg3;
+ (void)setLanguage:(id)arg1;
+ (void)setInterests:(id)arg1;
+ (void)setGender:(long long)arg1;
+ (void)setEducation:(long long)arg1;
+ (void)setYearOfBirth:(long long)arg1;
+ (void)setAgeGroup:(long long)arg1;
+ (void)setAreaCode:(id)arg1;
+ (void)setAge:(unsigned short)arg1;
+ (void)setMute:(_Bool)arg1;
+ (void)setLogLevel:(long long)arg1;
+ (id)getVersion;
+ (void)updateGDPRConsent:(id)arg1;
+ (void)initWithAccountID:(id)arg1 consentDictionary:(id)arg2;
+ (void)initWithAccountID:(id)arg1 consentDictionary:(id)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)initWithAccountID:(id)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)initWithAccountID:(id)arg1;
+ (void)if_setUpUserProfileForGdpr:(_Bool)arg1;

@end

