//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTEventSender;

@interface SPTWatchPlatformPairedWatchInfoLogger : NSObject
{
    id <SPTEventSender> _eventSender;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
- (void)sendPairedWatchInfoWithPaired:(_Bool)arg1 watchAppInstalled:(_Bool)arg2;
- (id)initWithEventSender:(id)arg1;

@end

