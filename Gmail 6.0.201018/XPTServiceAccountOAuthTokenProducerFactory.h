//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XPTNetHttpPurpose_Origin;
@protocol ComGoogleCommonTimeClock, JavaUtilConcurrentExecutor, JavaxInjectProvider;

@interface XPTServiceAccountOAuthTokenProducerFactory : NSObject
{
    id <ComGoogleCommonTimeClock> clock_;
    XPTNetHttpPurpose_Origin *httpRequestOrigin_;
    id <JavaxInjectProvider> httpClientProvider_;
    id <JavaUtilConcurrentExecutor> executor_;
}

- (void)dealloc;
- (id)fromKeyWithNSString:(id)arg1 withNSString:(id)arg2 withJavaUtilList:(id)arg3;

@end
