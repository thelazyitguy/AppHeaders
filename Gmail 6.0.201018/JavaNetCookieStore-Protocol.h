//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class JavaNetHttpCookie, JavaNetURI;
@protocol JavaUtilList;

@protocol JavaNetCookieStore <JavaObject>
- (_Bool)removeAll;
- (_Bool)removeWithJavaNetURI:(JavaNetURI *)arg1 withJavaNetHttpCookie:(JavaNetHttpCookie *)arg2;
- (id <JavaUtilList>)getURIs;
- (id <JavaUtilList>)getCookies;
- (id <JavaUtilList>)getWithJavaNetURI:(JavaNetURI *)arg1;
- (void)addWithJavaNetURI:(JavaNetURI *)arg1 withJavaNetHttpCookie:(JavaNetHttpCookie *)arg2;
@end
