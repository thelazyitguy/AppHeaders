//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKSharingDelegate-Protocol.h"

@class NSString;

@interface SPTShareFBSDKShareDialogWrapper : NSObject <FBSDKSharingDelegate>
{
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)sharerDidCancel:(id)arg1;
- (void)sharer:(id)arg1 didFailWithError:(id)arg2;
- (void)sharer:(id)arg1 didCompleteWithResults:(id)arg2;
- (void)shareFromViewController:(id)arg1 withContent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
