//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SMAGDPRLocationDetector : NSObject
{
}

+ (void)forceApplyGDPR;
+ (void)getDNSRecordWithQuery:(id)arg1 andCompletion:(CDUnknownBlockType)arg2 andFailure:(CDUnknownBlockType)arg3;
+ (id)getTimeZone;
+ (id)getSIMCountryCode;
+ (_Bool)hasDeviceHaveSIM;
+ (void)isDNSRecordGDPRWithQuery:(id)arg1 andCompletion:(CDUnknownBlockType)arg2 andFailure:(CDUnknownBlockType)arg3;
+ (_Bool)checkFromDNSRecordWithQuery:(id)arg1;
+ (_Bool)isTimeZoneGDPR:(id)arg1;
+ (_Bool)isSIMNetworkGDPR:(id)arg1;
+ (_Bool)checkFromDNSRecord;
+ (_Bool)checkFromTimeZone;
+ (_Bool)checkFromSIMNetwork;
+ (id)affectedBundleIDs;
+ (_Bool)isSubjectToLocationAware;
+ (void)updateLocationAware;

@end
