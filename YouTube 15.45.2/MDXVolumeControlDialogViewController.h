//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/MDXDialogViewController.h>

#import <Module_Framework/MDXSessionManagerObserver-Protocol.h>
#import <Module_Framework/MDXSessionObserver-Protocol.h>
#import <Module_Framework/YTGraftingViewController-Protocol.h>

@class MDXSession, MDXSmartRemoteViewController, NSMutableDictionary, NSString, UIView, YTICommand, YTInteractionLoggingProxyButton;
@protocol MDXVolumeControlDialogViewProtocol, YTResponder;

@interface MDXVolumeControlDialogViewController : MDXDialogViewController <MDXSessionObserver, YTGraftingViewController, MDXSessionManagerObserver>
{
    UIView<MDXVolumeControlDialogViewProtocol> *_dialogView;
    MDXSession *_session;
    YTInteractionLoggingProxyButton *_castDialogLoggingProxyButton;
    NSMutableDictionary *_childProxyButtons;
    MDXSmartRemoteViewController *_smartRemoteViewController;
    YTICommand *_navigationEndpoint;
    id <YTResponder> _parentResponder;
}

- (void).cxx_destruct;
- (id)parentResponder;
- (void)dismiss;
- (void)sendClickForVEType:(int)arg1;
- (void)addChildProxyButtonWithVEType:(int)arg1;
- (id)createProxyButtonWithVEType:(int)arg1 attachedTo:(id)arg2;
- (void)presentSmartRemoteWithLayout:(long long)arg1;
- (void)didTapSignInButton:(id)arg1;
- (void)didTapRemote:(id)arg1;
- (void)didTapVoiceSearch:(id)arg1;
- (void)didTapClose:(id)arg1;
- (void)didTapDisconnect:(id)arg1;
- (void)sliderDidChangeValue:(id)arg1;
- (void)MDXSession:(id)arg1 volumeLevelDidChange:(long long)arg2;
- (void)MDXSessionManager:(id)arg1 willStartSession:(id)arg2;
- (id)navEndpoint;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
