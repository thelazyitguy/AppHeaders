//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleCommonUtilConcurrentAsyncFunction-Protocol.h"

@class ComGoogleAppsBigtopDataMimeMimeProto_MimeMessage, ComGoogleAppsBigtopDataSmtpSmtpSenderImpl, NSString;
@protocol ComGoogleAppsBigtopDataSmtpConnectionApiPersonalizedSmtpConnection;

@interface ComGoogleAppsBigtopDataSmtpSmtpSenderImpl_$Lambda$3 : NSObject <ComGoogleCommonUtilConcurrentAsyncFunction>
{
    ComGoogleAppsBigtopDataSmtpSmtpSenderImpl *this$0_;
    ComGoogleAppsBigtopDataMimeMimeProto_MimeMessage *val$message_;
    id <ComGoogleAppsBigtopDataSmtpConnectionApiPersonalizedSmtpConnection> val$connection_;
}

- (void)dealloc;
- (id)applyWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
