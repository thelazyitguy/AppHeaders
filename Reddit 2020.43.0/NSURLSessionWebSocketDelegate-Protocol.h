//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/NSURLSessionTaskDelegate-Protocol.h>

@class NSData, NSString, NSURLSession, NSURLSessionWebSocketTask;

@protocol NSURLSessionWebSocketDelegate <NSURLSessionTaskDelegate>

@optional
- (void)URLSession:(NSURLSession *)arg1 webSocketTask:(NSURLSessionWebSocketTask *)arg2 didCloseWithCode:(long long)arg3 reason:(NSData *)arg4;
- (void)URLSession:(NSURLSession *)arg1 webSocketTask:(NSURLSessionWebSocketTask *)arg2 didOpenWithProtocol:(NSString *)arg3;
@end

