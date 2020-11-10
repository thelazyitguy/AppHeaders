//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MLCaptionControllerFactory-Protocol.h>

@class NSString;

@interface MLDefaultCaptionControllerFactory : NSObject <MLCaptionControllerFactory>
{
}

- (id)captionControllerForVideo:(id)arg1 playerData:(id)arg2 delegate:(id)arg3 playerCaptionDelegate:(id)arg4 externalPlaybackActive:(_Bool)arg5;
- (id)captionControllerForVideo:(id)arg1 delegate:(id)arg2 playerCaptionDelegate:(id)arg3 externalPlaybackActive:(_Bool)arg4;
- (id)captionControllerForPlayerData:(id)arg1 delegate:(id)arg2 playerCaptionDelegate:(id)arg3 externalPlaybackActive:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

