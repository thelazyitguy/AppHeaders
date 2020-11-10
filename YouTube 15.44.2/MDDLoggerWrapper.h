//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MDILogger-Protocol.h>

@class NSString;
@protocol MDILogger;

@interface MDDLoggerWrapper : NSObject <MDILogger>
{
    id <MDILogger> _logger;
    NSString *_instanceID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <MDILogger> logger; // @synthesize logger=_logger;
- (void)logLockError:(id)arg1;
- (void)log:(id)arg1 eventCode:(int)arg2 delay:(double)arg3;
- (void)log:(id)arg1 eventCode:(int)arg2;
- (id)initWithLogger:(id)arg1 instanceID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

