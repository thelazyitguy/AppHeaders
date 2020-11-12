//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaNetCookieHandler.h"

@protocol JavaNetCookiePolicy, JavaNetCookieStore;

@interface JavaNetCookieManager : JavaNetCookieHandler
{
    id <JavaNetCookiePolicy> policyCallback_;
    id <JavaNetCookieStore> cookieJar_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)normalizePathWithNSString:(id)arg1;
+ (_Bool)pathMatchesWithJavaNetURI:(id)arg1 withJavaNetHttpCookie:(id)arg2;
+ (_Bool)isInPortListWithNSString:(id)arg1 withInt:(int)arg2;
- (void)dealloc;
- (id)sortByPathWithJavaUtilList:(id)arg1;
- (_Bool)shouldAcceptInternalWithJavaNetURI:(id)arg1 withJavaNetHttpCookie:(id)arg2;
- (void)putWithJavaNetURI:(id)arg1 withJavaUtilMap:(id)arg2;
- (id)getWithJavaNetURI:(id)arg1 withJavaUtilMap:(id)arg2;
- (id)getCookieStore;
- (void)setCookiePolicyWithJavaNetCookiePolicy:(id)arg1;
- (id)initWithJavaNetCookieStore:(id)arg1 withJavaNetCookiePolicy:(id)arg2;
- (id)init;

@end
