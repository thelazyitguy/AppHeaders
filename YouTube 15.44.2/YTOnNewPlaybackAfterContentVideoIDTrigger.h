//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTAdTrigger-Protocol.h>

@class NSString;

@interface YTOnNewPlaybackAfterContentVideoIDTrigger : NSObject <YTAdTrigger>
{
    NSString *_triggerID;
    NSString *_contentVideoID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *contentVideoID; // @synthesize contentVideoID=_contentVideoID;
- (unsigned long long)triggerType;
- (id)triggerID;
- (_Bool)collideWithTrigger:(id)arg1;
- (id)initWithTriggerID:(id)arg1 contentVideoID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

