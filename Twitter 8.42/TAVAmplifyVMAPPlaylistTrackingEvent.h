//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface TAVAmplifyVMAPPlaylistTrackingEvent : NSObject
{
    NSString *_event;
    NSURL *_URL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *event; // @synthesize event=_event;
- (id)description;
- (id)initWithEvent:(id)arg1 URL:(id)arg2;

@end
