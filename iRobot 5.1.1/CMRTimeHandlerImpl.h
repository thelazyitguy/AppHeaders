//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CorePlatform/CMRTimeHandler-Protocol.h>

@class NSString, _TtC8TrueTime14TrueTimeClient;

@interface CMRTimeHandlerImpl : NSObject <CMRTimeHandler>
{
    _TtC8TrueTime14TrueTimeClient *_ntpClient;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC8TrueTime14TrueTimeClient *ntpClient; // @synthesize ntpClient=_ntpClient;
- (void)requestNtpTime:(id)arg1 port:(int)arg2 timeout:(int)arg3 callback:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
