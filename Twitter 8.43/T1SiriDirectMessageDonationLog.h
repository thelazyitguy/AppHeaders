//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSSecureCoding-Protocol.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface T1SiriDirectMessageDonationLog : NSObject <NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_mutableEntries;
}

+ (id)logPath;
+ (id)sharedLog;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableEntries; // @synthesize mutableEntries=_mutableEntries;
- (void)_t1_clearSynchronously;
- (id)_t1_synchronousEntries;
- (void)_t1_addEntry:(id)arg1;
- (void)addEntry:(id)arg1;
- (void)_t1_deleteDonationsWithEntries:(id)arg1;
- (void)deleteDonationsPassingBlock:(CDUnknownBlockType)arg1;
- (void)deleteEntriesWithGroupIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)saveLog;
- (id)init;

@end

