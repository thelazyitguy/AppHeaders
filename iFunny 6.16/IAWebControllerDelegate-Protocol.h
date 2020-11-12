//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class IAWebController, IAWebView, NSError, NSString, NSURL;

@protocol IAWebControllerDelegate <NSObject>
- (void)webController:(IAWebController *)arg1 MRAIDVideoNotStartedAfterTimeout:(double)arg2;
- (void)webControllerDetectedMRAIDVideo:(IAWebController *)arg1;
- (void)webController:(IAWebController *)arg1 detectedFraudPopupWithType:(NSString *)arg2 message:(NSString *)arg3 fromHost:(NSString *)arg4;
- (void)webController:(IAWebController *)arg1 detectedFraudClickWithURL:(NSURL *)arg2 fraudActionTypeString:(NSString *)arg3;
- (void)webController:(IAWebController *)arg1 receivedMRAIDCommandForURL:(NSURL *)arg2;
- (void)webController:(IAWebController *)arg1 openURL:(NSURL *)arg2 completion:(void (^)(_Bool))arg3;
- (_Bool)webController:(IAWebController *)arg1 isExternalLink:(NSURL *)arg2;
- (void)webController:(IAWebController *)arg1 webViewDidReceiveClick:(IAWebView *)arg2;
- (void)webController:(IAWebController *)arg1 webView:(IAWebView *)arg2 didFailWithError:(NSError *)arg3;
- (void)webController:(IAWebController *)arg1 webViewDidLoad:(IAWebView *)arg2;
- (void)webController:(IAWebController *)arg1 webViewDidFinishNavigation:(IAWebView *)arg2;
- (void)webController:(IAWebController *)arg1 webViewDidStartNavigation:(IAWebView *)arg2;
@end
