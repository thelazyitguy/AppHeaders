//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataSocketApiSocket-Protocol.h"
#import "JBTDSocketNSStreamDelegate_StreamEventHandler-Protocol.h"

@class ComGoogleCommonBaseOptional, JBTDSocketNSStreamDelegate, JBTDSocketNsInputStream, JBTDSocketNsOutputStream, NSString;
@protocol JavaUtilConcurrentExecutor;

@interface JBTDSocketNsStreamSslSocket : NSObject <ComGoogleAppsBigtopDataSocketApiSocket, JBTDSocketNSStreamDelegate_StreamEventHandler>
{
    JBTDSocketNsInputStream *inputStream_;
    JBTDSocketNsOutputStream *outputStream_;
    ComGoogleCommonBaseOptional *connectedFuture_;
    _Bool closed_;
    _Bool isSecureSocket_;
    _Bool startWithSsl_;
    JBTDSocketNSStreamDelegate *streamDelegate_;
    id <JavaUtilConcurrentExecutor> socketExecutor_;
}

+ (void)initialize;
- (void)dealloc;
- (void)hasSpaceAvailable;
- (void)hasBytesAvailable;
- (void)errorOcurredWithNSString:(id)arg1 withInt:(int)arg2 withNSString:(id)arg3;
- (void)openCompleted;
- (void)setReadTimeoutWithInt:(int)arg1;
- (id)getLocalAddress;
- (_Bool)isSecure;
- (_Bool)isConnected;
- (void)close;
- (id)getOutputStream;
- (id)getInputStream;
- (void)startTls;
- (void)connectWithNSString:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
