//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPRMOCMagnesKeychainServiceAPI : NSObject
{
}

+ (id)loadMagnesGuidTimestamp;
+ (void)saveMagnesGuidTimestamp:(id)arg1;
+ (id)loadMagnesGuid;
+ (void)saveMagnesGuid:(id)arg1;
+ (id)loadCloudIdentifier;
+ (void)saveCloudIdentifier:(id)arg1;
+ (void)removeAppGuid;
+ (id)loadAppGuid;
+ (void)saveAppGuid:(id)arg1;

@end

