//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/BladeRunnerFTLStateProvider-Protocol.h>

@class NSDictionary, NSString;
@protocol OS_dispatch_queue, PlatformLogblobSink;

@interface BladeRunnerFtlStateReporter : NSObject <BladeRunnerFTLStateProvider>
{
    id <PlatformLogblobSink> _logging;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSDictionary *_ftlstatus;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *ftlstatus; // @synthesize ftlstatus=_ftlstatus;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) id <PlatformLogblobSink> logging; // @synthesize logging=_logging;
- (id)targetName;
- (id)currentFtlState;
- (void)ftlStateDidChange:(id)arg1;
- (void)registerForFtlNotifications;
- (id)initWithLogging:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

