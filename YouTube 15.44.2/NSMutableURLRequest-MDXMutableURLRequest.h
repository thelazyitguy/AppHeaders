//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableURLRequest.h>

@interface NSMutableURLRequest (MDXMutableURLRequest)
+ (id)methodFromType:(int)arg1;
+ (id)requestWithType:(int)arg1 baseURL:(id)arg2 path:(id)arg3 params:(id)arg4 headers:(id)arg5 payload:(id)arg6;
+ (id)tbxmlPostRequestWithURL:(id)arg1 parameters:(id)arg2;
+ (id)tbxmlGetRequestWithURL:(id)arg1;
+ (id)yt_defaultRequestWithURL:(id)arg1;
- (void)setDIALClientIdentifier:(id)arg1;
- (void)innertube_setService:(long long)arg1;
- (void)innertube_setIsRetry:(_Bool)arg1;
- (void)yt_setRequestAnnotation:(id)arg1;
- (void)yt_setRequestNonce:(id)arg1;
@end
