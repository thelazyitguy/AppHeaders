//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FIRCLSCrashReport-Protocol.h"

@class FIRCLSInternalReport, NSDate, NSDictionary, NSNumber, NSString;

@interface FIRCLSReport : NSObject <FIRCLSCrashReport>
{
    FIRCLSInternalReport *_internalReport;
    unsigned int _internalKVCounter;
    unsigned int _userKVCounter;
    NSString *_internalCompactedKVFile;
    NSString *_internalIncrementalKVFile;
    NSString *_userCompactedKVFile;
    NSString *_userIncrementalKVFile;
    _Bool _readOnly;
    NSString *_identifer;
    NSString *_bundleVersion;
    NSString *_bundleShortVersionString;
    NSDate *_dateCreated;
    NSDate *_crashedOnDate;
    NSString *_OSVersion;
    NSString *_OSBuildVersion;
    NSNumber *_isCrash;
    NSDictionary *_customKeys;
    NSString *_userName;
    NSString *_userEmail;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FIRCLSInternalReport *internalReport; // @synthesize internalReport=_internalReport;
@property(copy, nonatomic) NSString *userEmail; // @synthesize userEmail=_userEmail;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *userIdentifier;
- (void)setObjectValue:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) _Bool isCrash;
@property(readonly, copy, nonatomic) NSString *OSBuildVersion;
@property(readonly, copy, nonatomic) NSString *OSVersion;
@property(readonly, nonatomic) NSDate *crashedOnDate;
@property(readonly, copy, nonatomic) NSDate *dateCreated;
@property(readonly, copy, nonatomic) NSString *bundleShortVersionString;
@property(readonly, copy, nonatomic) NSString *bundleVersion;
@property(readonly, copy, nonatomic) NSDictionary *customKeys;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)readCustomKeys;
- (void)recordValue:(id)arg1 forUserKey:(id)arg2;
- (void)recordValue:(id)arg1 forInternalKey:(id)arg2;
- (_Bool)canRecordNewValues;
- (CDStruct_4355734a)userKVStorage;
- (CDStruct_4355734a)internalKVStorage;
- (id)initWithInternalReport:(id)arg1;
- (id)initWithInternalReport:(id)arg1 prefetchData:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
