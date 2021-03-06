//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GIPClearcutLogger.h"

#import "CCTClearcutUploaderListener-Protocol.h"

@class CCTClearcutLogger, NSHashTable, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CCTLegacyClearcutLoggerProxy : GIPClearcutLogger <CCTClearcutUploaderListener>
{
    CCTClearcutLogger *_logger;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_decorators;
    NSHashTable *_delegates;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(readonly, nonatomic) NSMutableSet *decorators; // @synthesize decorators=_decorators;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CCTClearcutLogger *logger; // @synthesize logger=_logger;
- (void)clearcutUploaderWillSendLogs:(id)arg1;
- (void)removeLogEventDecorator:(id)arg1;
- (void)addLogEventDecorator:(id)arg1;
- (void)addAdditionalDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)logEvent:(id)arg1 logSource:(int)arg2 account:(id)arg3;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setLogDirectory:(id)arg1;
- (void)setAccountToAuthorizerBlock:(CDUnknownBlockType)arg1;
- (void)setServerURL:(id)arg1;
- (void)setInstallIdentifier:(id)arg1;
- (void)setMaxRequestNumBytes:(unsigned long long)arg1;
- (void)setApplicationBuild:(id)arg1;
- (id)initWithLogger:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

