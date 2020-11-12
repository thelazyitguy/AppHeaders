//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CDVPlugin.h"

#import "LXBottomSheetDelegate-Protocol.h"

@class NSObject, NSString;
@protocol SMASHWebProviderProtocol;

@interface BottomSheetPlugin : CDVPlugin <LXBottomSheetDelegate>
{
    NSObject<SMASHWebProviderProtocol> *_webViewController;
}

@property(retain, nonatomic) NSObject<SMASHWebProviderProtocol> *webViewController; // @synthesize webViewController=_webViewController;
- (void).cxx_destruct;
- (void)bottomSheet:(id)arg1 didCloseWithData:(id)arg2;
- (void)showBottomSheet:(id)arg1;
- (void)updateGlowIngress:(id)arg1;
- (void)showGlowIngress:(id)arg1;
- (void)hideGlowIngress:(id)arg1;
- (void)showGlowToaster:(id)arg1;
- (void)hideGlowToaster:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
