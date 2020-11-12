//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKPrimesEventTracker-Protocol.h"

@class GDKPrimesSpan, NSString;

@interface GDKPrimesLatencyTrace : NSObject <GDKPrimesEventTracker>
{
    GDKPrimesSpan *_rootSpan;
}

+ (id)startLongTermPrivateWithName:(id)arg1;
+ (id)startPrivateWithName:(id)arg1;
+ (id)startLongTermWithName:(id)arg1;
+ (id)startWithName:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) GDKPrimesSpan *rootSpan; // @synthesize rootSpan=_rootSpan;
- (void)stopWithStatus:(long long)arg1;
- (void)end;
- (void)cancel;
- (id)startLongTermChildSpanWithName:(id)arg1;
- (id)startChildSpanWithName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
