//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class GSKError, GSKHTTPConnection, NSData;

@protocol GSKHTTPConnectionDelegate <NSObject>
- (void)httpConnectionDidConnect:(GSKHTTPConnection *)arg1;
- (void)httpConnection:(GSKHTTPConnection *)arg1 didFailWithError:(GSKError *)arg2;
- (void)httpConnectionDidFinishLoading:(GSKHTTPConnection *)arg1;
- (void)httpConnection:(GSKHTTPConnection *)arg1 didReceiveData:(NSData *)arg2;
@end

