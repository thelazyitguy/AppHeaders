//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ElectrodeContainer/ElectrodeLogger-Protocol.h>

@class NSString;

@interface ElectrodeConsoleLogger : NSObject <ElectrodeLogger>
{
    long long _logLevel;
}

+ (id)sharedInstance;
@property(nonatomic) long long logLevel; // @synthesize logLevel=_logLevel;
- (void)debug:(id)arg1;
- (void)log:(long long)arg1 message:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

