//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTEStreamzService;

@interface GTEStreamzLogger : NSObject
{
    GTEStreamzService *_streamzService;
}

- (void).cxx_destruct;
- (id)nameForMigrationResult:(long long)arg1;
- (id)nameForEngineType:(long long)arg1;
- (void)logSyncEngineType:(long long)arg1;
- (void)logTaskAddedFromGmailWithSuccess:(_Bool)arg1;
- (void)logSyncDuration:(double)arg1 engineType:(long long)arg2 isSuccess:(_Bool)arg3;
- (void)logMigrationAttemptWithMigrationState:(id)arg1 forced:(_Bool)arg2;
- (id)initWithObfuscatedGAIAID:(id)arg1 uploadLogs:(_Bool)arg2;

@end
