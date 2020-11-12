//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DXPPasteboardSyncing-Protocol.h"

@protocol GIPClock;

@interface DXPPasteboardSyncer : NSObject <DXPPasteboardSyncing>
{
    id <GIPClock> _clock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <GIPClock> clock; // @synthesize clock=_clock;
- (id)representationsOfPlaceholder:(id)arg1;
- (id)pasteboardItemOptionsWithExpirationDuration:(double)arg1;
- (_Bool)hasPrefix:(id)arg1 inPasteboardItems:(id)arg2;
- (id)typeWithRemovedPrefix:(id)arg1 type:(id)arg2;
- (id)typeWithAppendedPrefix:(id)arg1 type:(id)arg2;
- (void)syncDestinationPasteboard:(id)arg1 withSourcePasteboard:(id)arg2 prefixToRemove:(id)arg3 expirationDuration:(double)arg4;
- (void)syncDestinationPasteboard:(id)arg1 withSourcePasteboard:(id)arg2 prefixToAppend:(id)arg3 placeholder:(id)arg4 expirationDuration:(double)arg5;
- (id)initWithClock:(id)arg1;

@end
