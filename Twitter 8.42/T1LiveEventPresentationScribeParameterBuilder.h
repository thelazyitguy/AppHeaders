//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFNTwitterLiveEvent, TFSTwitterBroadcast;

@interface T1LiveEventPresentationScribeParameterBuilder : NSObject
{
    TFSTwitterBroadcast *_hostBroadcast;
    TFSTwitterBroadcast *_targetBroadcast;
    TFNTwitterLiveEvent *_hostLiveEvent;
    TFNTwitterLiveEvent *_targetLiveEvent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNTwitterLiveEvent *targetLiveEvent; // @synthesize targetLiveEvent=_targetLiveEvent;
@property(retain, nonatomic) TFNTwitterLiveEvent *hostLiveEvent; // @synthesize hostLiveEvent=_hostLiveEvent;
@property(retain, nonatomic) TFSTwitterBroadcast *targetBroadcast; // @synthesize targetBroadcast=_targetBroadcast;
@property(retain, nonatomic) TFSTwitterBroadcast *hostBroadcast; // @synthesize hostBroadcast=_hostBroadcast;
- (id)presentationScribeParameters;

@end

