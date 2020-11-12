//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class IMWKWebViewController, IMWebToNativeCall, NSError, NSURLRequest;

@protocol IMWKWebViewDelegate <NSObject>

@optional
- (_Bool)webViewController:(IMWKWebViewController *)arg1 shouldOpenExternallyWithRequest:(NSURLRequest *)arg2;
- (void)webViewController:(IMWKWebViewController *)arg1 didRecieveNativeCall:(IMWebToNativeCall *)arg2;
- (void)webViewController:(IMWKWebViewController *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)webViewControllerDidFinishLoad:(IMWKWebViewController *)arg1;
- (void)webViewControllerDidStartLoad:(IMWKWebViewController *)arg1;
- (_Bool)webViewController:(IMWKWebViewController *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;
@end
