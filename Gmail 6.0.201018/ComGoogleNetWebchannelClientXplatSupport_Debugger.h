//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ComGoogleNetWebchannelClientXplatSupport_Debugger : NSObject
{
    _Bool redactEnabled_;
}

- (void)httpChannelResponseTextWithNSString:(id)arg1 withJavaLangStringBuilder:(id)arg2 withNSString:(id)arg3;
- (void)httpChannelResponseMetaDataWithNSString:(id)arg1 withComGoogleNetWebchannelClientXplatSupport_UriBuilder:(id)arg2 withNSString:(id)arg3 withLong:(long long)arg4 withComGoogleNetWebchannelClientXplatSupport_RequestReadyState:(id)arg5 withInt:(int)arg6;
- (void)httpRequestWithNSString:(id)arg1 withComGoogleNetWebchannelClientXplatSupport_UriBuilder:(id)arg2 withNSString:(id)arg3 withLong:(long long)arg4 withNSString:(id)arg5;
- (void)debugWithNSString:(id)arg1;
- (_Bool)isEnabled;
- (void)disableRedact;

@end

