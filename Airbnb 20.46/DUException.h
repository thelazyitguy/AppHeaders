//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DUException : NSObject
{
}

+ (long long)sendExceptionInfo:(id)arg1:(id)arg2:(id)arg3;
+ (void)sendLastExceptionInfo;
+ (void)deleteErrorLogFile:(id)arg1;
+ (id)getErrorLogFile:(id)arg1;
- (id)getCurrentTimeMillis;

@end
